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

// Function: __ieee754_rem_pio2f
// Address: 0x2dab60 - 0x2daf40
void ps2___ieee754_rem_pio2f_0x2dab60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ieee754_rem_pio2f_0x2dab60");
#endif

    switch (ctx->pc) {
        case 0x2dacc4u: goto label_2dacc4;
        case 0x2dae78u: goto label_2dae78;
        case 0x2daec0u: goto label_2daec0;
        case 0x2daefcu: goto label_2daefc;
        default: break;
    }

    ctx->pc = 0x2dab60u;

    // 0x2dab60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2dab60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2dab64: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2dab64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2dab68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2dab68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2dab6c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2dab6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2dab70: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2dab70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2dab74: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x2dab74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2dab78: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2dab78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dab7c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x2dab7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x2dab80: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2dab80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2dab84: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x2dab84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x2dab88: 0x2438024  and         $s0, $s2, $v1
    ctx->pc = 0x2dab88u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & GPR_U64(ctx, 3));
    // 0x2dab8c: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x2dab8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x2dab90: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2dab90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2dab94: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DAB94u;
    {
        const bool branch_taken_0x2dab94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DAB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAB94u;
        // 0x2dab98: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dab94) {
            ctx->pc = 0x2DABB0u;
            goto label_2dabb0;
        }
    }
    ctx->pc = 0x2DAB9Cu;
    // 0x2dab9c: 0xe62c0000  swc1        $f12, 0x0($s1)
    ctx->pc = 0x2dab9cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2daba0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2daba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daba4: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x2DABA4u;
    {
        const bool branch_taken_0x2daba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DABA4u;
        // 0x2daba8: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daba4) {
            ctx->pc = 0x2DAF28u;
            goto label_2daf28;
        }
    }
    ctx->pc = 0x2DABACu;
    // 0x2dabac: 0x0  nop
    ctx->pc = 0x2dabacu;
    // NOP
label_2dabb0:
    // 0x2dabb0: 0x3c024016  lui         $v0, 0x4016
    ctx->pc = 0x2dabb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16406 << 16));
    // 0x2dabb4: 0x3442cbe3  ori         $v0, $v0, 0xCBE3
    ctx->pc = 0x2dabb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52195);
    // 0x2dabb8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2dabb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2dabbc: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2DABBCu;
    {
        const bool branch_taken_0x2dabbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DABBCu;
        // 0x2dabc0: 0x3c024349  lui         $v0, 0x4349 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dabbc) {
            ctx->pc = 0x2DACACu;
            goto label_2dacac;
        }
    }
    ctx->pc = 0x2DABC4u;
    // 0x2dabc4: 0x1a40001d  blez        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x2DABC4u;
    {
        const bool branch_taken_0x2dabc4 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x2DABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DABC4u;
        // 0x2dabc8: 0x3c033fc9  lui         $v1, 0x3FC9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dabc4) {
            ctx->pc = 0x2DAC3Cu;
            goto label_2dac3c;
        }
    }
    ctx->pc = 0x2DABCCu;
    // 0x2dabcc: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x2dabccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x2dabd0: 0x34210f80  ori         $at, $at, 0xF80
    ctx->pc = 0x2dabd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3968);
    // 0x2dabd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dabd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dabd8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2dabd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2dabdc: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x2dabdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x2dabe0: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x2dabe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2dabe4: 0x34630fd0  ori         $v1, $v1, 0xFD0
    ctx->pc = 0x2dabe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4048);
    // 0x2dabe8: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DABE8u;
    {
        const bool branch_taken_0x2dabe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2DABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DABE8u;
        // 0x2dabec: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dabe8) {
            ctx->pc = 0x2DAC04u;
            goto label_2dac04;
        }
    }
    ctx->pc = 0x2DABF0u;
    // 0x2dabf0: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x2dabf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x2dabf4: 0x34214443  ori         $at, $at, 0x4443
    ctx->pc = 0x2dabf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17475);
    // 0x2dabf8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2dabf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2dabfc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2DABFCu;
    {
        const bool branch_taken_0x2dabfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DABFCu;
        // 0x2dac00: 0x46026041  sub.s       $f1, $f12, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dabfc) {
            ctx->pc = 0x2DAC24u;
            goto label_2dac24;
        }
    }
    ctx->pc = 0x2DAC04u;
label_2dac04:
    // 0x2dac04: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x2dac04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x2dac08: 0x34214400  ori         $at, $at, 0x4400
    ctx->pc = 0x2dac08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17408);
    // 0x2dac0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dac0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dac10: 0x3c012e85  lui         $at, 0x2E85
    ctx->pc = 0x2dac10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11909 << 16));
    // 0x2dac14: 0x3421a308  ori         $at, $at, 0xA308
    ctx->pc = 0x2dac14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41736);
    // 0x2dac18: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2dac18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2dac1c: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2dac1cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2dac20: 0x46026041  sub.s       $f1, $f12, $f2
    ctx->pc = 0x2dac20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
label_2dac24:
    // 0x2dac24: 0x46016001  sub.s       $f0, $f12, $f1
    ctx->pc = 0x2dac24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x2dac28: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x2dac28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2dac2c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2dac2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2dac30: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2dac30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2dac34: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x2DAC34u;
    {
        const bool branch_taken_0x2dac34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAC34u;
        // 0x2dac38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dac34) {
            ctx->pc = 0x2DAF28u;
            goto label_2daf28;
        }
    }
    ctx->pc = 0x2DAC3Cu;
label_2dac3c:
    // 0x2dac3c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x2dac3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x2dac40: 0x34210f80  ori         $at, $at, 0xF80
    ctx->pc = 0x2dac40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3968);
    // 0x2dac44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dac44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dac48: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2dac48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2dac4c: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x2dac4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x2dac50: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x2dac50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2dac54: 0x34630fd0  ori         $v1, $v1, 0xFD0
    ctx->pc = 0x2dac54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4048);
    // 0x2dac58: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DAC58u;
    {
        const bool branch_taken_0x2dac58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2DAC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAC58u;
        // 0x2dac5c: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dac58) {
            ctx->pc = 0x2DAC74u;
            goto label_2dac74;
        }
    }
    ctx->pc = 0x2DAC60u;
    // 0x2dac60: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x2dac60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x2dac64: 0x34214443  ori         $at, $at, 0x4443
    ctx->pc = 0x2dac64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17475);
    // 0x2dac68: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2dac68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2dac6c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2DAC6Cu;
    {
        const bool branch_taken_0x2dac6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAC6Cu;
        // 0x2dac70: 0x46026040  add.s       $f1, $f12, $f2 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dac6c) {
            ctx->pc = 0x2DAC94u;
            goto label_2dac94;
        }
    }
    ctx->pc = 0x2DAC74u;
label_2dac74:
    // 0x2dac74: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x2dac74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x2dac78: 0x34214400  ori         $at, $at, 0x4400
    ctx->pc = 0x2dac78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17408);
    // 0x2dac7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dac7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dac80: 0x3c012e85  lui         $at, 0x2E85
    ctx->pc = 0x2dac80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11909 << 16));
    // 0x2dac84: 0x3421a308  ori         $at, $at, 0xA308
    ctx->pc = 0x2dac84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41736);
    // 0x2dac88: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2dac88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2dac8c: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x2dac8cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2dac90: 0x46026040  add.s       $f1, $f12, $f2
    ctx->pc = 0x2dac90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
label_2dac94:
    // 0x2dac94: 0x46016001  sub.s       $f0, $f12, $f1
    ctx->pc = 0x2dac94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x2dac98: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x2dac98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2dac9c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2dac9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2daca0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2daca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2daca4: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x2DACA4u;
    {
        const bool branch_taken_0x2daca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DACA4u;
        // 0x2daca8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daca4) {
            ctx->pc = 0x2DAF28u;
            goto label_2daf28;
        }
    }
    ctx->pc = 0x2DACACu;
label_2dacac:
    // 0x2dacac: 0x34420f80  ori         $v0, $v0, 0xF80
    ctx->pc = 0x2dacacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3968);
    // 0x2dacb0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2dacb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2dacb4: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x2DACB4u;
    {
        const bool branch_taken_0x2dacb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DACB4u;
        // 0x2dacb8: 0x3c027f7f  lui         $v0, 0x7F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dacb4) {
            ctx->pc = 0x2DAE30u;
            goto label_2dae30;
        }
    }
    ctx->pc = 0x2DACBCu;
    // 0x2dacbc: 0xc0b7168  jal         func_2DC5A0
    ctx->pc = 0x2DACBCu;
    SET_GPR_U32(ctx, 31, 0x2DACC4u);
    ctx->pc = 0x2DC5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC5A0u, 0x2DACBCu, 0x2DACC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DACC4u;
label_2dacc4:
    // 0x2dacc4: 0x3c013f22  lui         $at, 0x3F22
    ctx->pc = 0x2dacc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16162 << 16));
    // 0x2dacc8: 0x3421f984  ori         $at, $at, 0xF984
    ctx->pc = 0x2dacc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63876);
    // 0x2daccc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2dacccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dacd0: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x2dacd0u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x2dacd4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2dacd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2dacd8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2dacd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2dacdc: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x2dacdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2dace0: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x2dace0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x2dace4: 0x34210f80  ori         $at, $at, 0xF80
    ctx->pc = 0x2dace4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3968);
    // 0x2dace8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dace8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dacec: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x2dacecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x2dacf0: 0x34214443  ori         $at, $at, 0x4443
    ctx->pc = 0x2dacf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17475);
    // 0x2dacf4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2dacf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2dacf8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2dacf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2dacfc: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2dacfcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2dad00: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x2dad00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2dad04: 0x44853000  mtc1        $a1, $f6
    ctx->pc = 0x2dad04u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2dad08: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x2dad08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x2dad0c: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x2dad0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2dad10: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2dad10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2dad14: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x2dad14u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2dad18: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2DAD18u;
    {
        const bool branch_taken_0x2dad18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAD18u;
        // 0x2dad1c: 0x46002901  sub.s       $f4, $f5, $f0 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dad18) {
            ctx->pc = 0x2DAD54u;
            goto label_2dad54;
        }
    }
    ctx->pc = 0x2DAD20u;
    // 0x2dad20: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2dad20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2dad24: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x2dad24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2dad28: 0x2484af90  addiu       $a0, $a0, -0x5070
    ctx->pc = 0x2dad28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946704));
    // 0x2dad2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2dad2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2dad30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2dad30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2dad34: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2dad34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2dad38: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x2dad38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x2dad3c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2dad3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dad40: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x2dad40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2dad44: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DAD44u;
    {
        const bool branch_taken_0x2dad44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2DAD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAD44u;
        // 0x2dad48: 0x46032001  sub.s       $f0, $f4, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dad44) {
            ctx->pc = 0x2DAD58u;
            goto label_2dad58;
        }
    }
    ctx->pc = 0x2DAD4Cu;
    // 0x2dad4c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2DAD4Cu;
    {
        const bool branch_taken_0x2dad4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAD4Cu;
        // 0x2dad50: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dad4c) {
            ctx->pc = 0x2DAE10u;
            goto label_2dae10;
        }
    }
    ctx->pc = 0x2DAD54u;
label_2dad54:
    // 0x2dad54: 0x46032001  sub.s       $f0, $f4, $f3
    ctx->pc = 0x2dad54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_2dad58:
    // 0x2dad58: 0x1025c3  sra         $a0, $s0, 23
    ctx->pc = 0x2dad58u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 23));
    // 0x2dad5c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2dad5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2dad60: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2dad60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2dad64: 0x21dc2  srl         $v1, $v0, 23
    ctx->pc = 0x2dad64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
    // 0x2dad68: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2dad68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2dad6c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2dad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2dad70: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x2dad70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2dad74: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x2DAD74u;
    {
        const bool branch_taken_0x2dad74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dad74) {
            ctx->pc = 0x2DAD78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DAD74u;
            // 0x2dad78: 0xc6210000  lwc1        $f1, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DAE14u;
            goto label_2dae14;
        }
    }
    ctx->pc = 0x2DAD7Cu;
    // 0x2dad7c: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x2dad7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x2dad80: 0x34214400  ori         $at, $at, 0x4400
    ctx->pc = 0x2dad80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17408);
    // 0x2dad84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dad84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dad88: 0x46002146  mov.s       $f5, $f4
    ctx->pc = 0x2dad88u;
    ctx->f[5] = FPU_MOV_S(ctx->f[4]);
    // 0x2dad8c: 0x3c012e85  lui         $at, 0x2E85
    ctx->pc = 0x2dad8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11909 << 16));
    // 0x2dad90: 0x3421a308  ori         $at, $at, 0xA308
    ctx->pc = 0x2dad90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41736);
    // 0x2dad94: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2dad94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dad98: 0x460030c2  mul.s       $f3, $f6, $f0
    ctx->pc = 0x2dad98u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2dad9c: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x2dad9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2dada0: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x2dada0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x2dada4: 0x46042801  sub.s       $f0, $f5, $f4
    ctx->pc = 0x2dada4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x2dada8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2dada8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2dadac: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x2dadacu;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2dadb0: 0x46032081  sub.s       $f2, $f4, $f3
    ctx->pc = 0x2dadb0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x2dadb4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2dadb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2dadb8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2dadb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2dadbc: 0x21dc2  srl         $v1, $v0, 23
    ctx->pc = 0x2dadbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
    // 0x2dadc0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2dadc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2dadc4: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2dadc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2dadc8: 0x2862001a  slti        $v0, $v1, 0x1A
    ctx->pc = 0x2dadc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x2dadcc: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DADCCu;
    {
        const bool branch_taken_0x2dadcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dadcc) {
            ctx->pc = 0x2DADD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DADCCu;
            // 0x2dadd0: 0xc6210000  lwc1        $f1, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DAE14u;
            goto label_2dae14;
        }
    }
    ctx->pc = 0x2DADD4u;
    // 0x2dadd4: 0x3c012e85  lui         $at, 0x2E85
    ctx->pc = 0x2dadd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11909 << 16));
    // 0x2dadd8: 0x3421a300  ori         $at, $at, 0xA300
    ctx->pc = 0x2dadd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41728);
    // 0x2daddc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2daddcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dade0: 0x46002146  mov.s       $f5, $f4
    ctx->pc = 0x2dade0u;
    ctx->f[5] = FPU_MOV_S(ctx->f[4]);
    // 0x2dade4: 0x3c01248d  lui         $at, 0x248D
    ctx->pc = 0x2dade4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9357 << 16));
    // 0x2dade8: 0x34213132  ori         $at, $at, 0x3132
    ctx->pc = 0x2dade8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12594);
    // 0x2dadec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2dadecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2dadf0: 0x460030c2  mul.s       $f3, $f6, $f0
    ctx->pc = 0x2dadf0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2dadf4: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x2dadf4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x2dadf8: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x2dadf8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x2dadfc: 0x46042801  sub.s       $f0, $f5, $f4
    ctx->pc = 0x2dadfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x2dae00: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2dae00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2dae04: 0x460010c1  sub.s       $f3, $f2, $f0
    ctx->pc = 0x2dae04u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2dae08: 0x46032041  sub.s       $f1, $f4, $f3
    ctx->pc = 0x2dae08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x2dae0c: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x2dae0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2dae10:
    // 0x2dae10: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2dae10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dae14:
    // 0x2dae14: 0x46012001  sub.s       $f0, $f4, $f1
    ctx->pc = 0x2dae14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2dae18: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2dae18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2dae1c: 0x6410041  bgez        $s2, . + 4 + (0x41 << 2)
    ctx->pc = 0x2DAE1Cu;
    {
        const bool branch_taken_0x2dae1c = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x2DAE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAE1Cu;
        // 0x2dae20: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dae1c) {
            ctx->pc = 0x2DAF24u;
            goto label_2daf24;
        }
    }
    ctx->pc = 0x2DAE24u;
    // 0x2dae24: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2dae24u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2dae28: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2DAE28u;
    {
        const bool branch_taken_0x2dae28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAE28u;
        // 0x2dae2c: 0x51023  negu        $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dae28) {
            ctx->pc = 0x2DAF14u;
            goto label_2daf14;
        }
    }
    ctx->pc = 0x2DAE30u;
label_2dae30:
    // 0x2dae30: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2dae30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2dae34: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2dae34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2dae38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DAE38u;
    {
        const bool branch_taken_0x2dae38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAE38u;
        // 0x2dae3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dae38) {
            ctx->pc = 0x2DAE50u;
            goto label_2dae50;
        }
    }
    ctx->pc = 0x2DAE40u;
    // 0x2dae40: 0x460c6001  sub.s       $f0, $f12, $f12
    ctx->pc = 0x2dae40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x2dae44: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2dae44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2dae48: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2DAE48u;
    {
        const bool branch_taken_0x2dae48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAE48u;
        // 0x2dae4c: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dae48) {
            ctx->pc = 0x2DAF28u;
            goto label_2daf28;
        }
    }
    ctx->pc = 0x2DAE50u;
label_2dae50:
    // 0x2dae50: 0x101dc3  sra         $v1, $s0, 23
    ctx->pc = 0x2dae50u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 23));
    // 0x2dae54: 0x2466ff7a  addiu       $a2, $v1, -0x86
    ctx->pc = 0x2dae54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967162));
    // 0x2dae58: 0x615c0  sll         $v0, $a2, 23
    ctx->pc = 0x2dae58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 23));
    // 0x2dae5c: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x2dae5cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2dae60: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x2dae60u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dae64: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x2dae64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x2dae68: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2dae68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2dae6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dae6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dae70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2dae70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dae74: 0x0  nop
    ctx->pc = 0x2dae74u;
    // NOP
label_2dae78:
    // 0x2dae78: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2dae78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2dae7c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2dae7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2dae80: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2dae80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2dae84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dae84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dae88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2dae88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2dae8c: 0x46006041  sub.s       $f1, $f12, $f0
    ctx->pc = 0x2dae8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2dae90: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2dae90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2dae94: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2dae94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2dae98: 0x461fff7  bgez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2DAE98u;
    {
        const bool branch_taken_0x2dae98 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2DAE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAE98u;
        // 0x2dae9c: 0x46020b02  mul.s       $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dae98) {
            ctx->pc = 0x2DAE78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dae78;
        }
    }
    ctx->pc = 0x2DAEA0u;
    // 0x2daea0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2daea0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2daea4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2daea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2daea8: 0x46016032  c.eq.s      $f12, $f1
    ctx->pc = 0x2daea8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2daeac: 0x0  nop
    ctx->pc = 0x2daeacu;
    // NOP
    // 0x2daeb0: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2DAEB0u;
    {
        const bool branch_taken_0x2daeb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DAEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAEB0u;
        // 0x2daeb4: 0xe7ac0008  swc1        $f12, 0x8($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daeb0) {
            ctx->pc = 0x2DAEE4u;
            goto label_2daee4;
        }
    }
    ctx->pc = 0x2DAEB8u;
    // 0x2daeb8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2daeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2daebc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2daebcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2daec0:
    // 0x2daec0: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x2daec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2daec4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2daec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daec8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2daec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2daecc: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x2daeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2daed0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2daed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2daed4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2daed4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2daed8: 0x0  nop
    ctx->pc = 0x2daed8u;
    // NOP
    // 0x2daedc: 0x4503fff8  bc1tl       . + 4 + (-0x8 << 2)
    ctx->pc = 0x2DAEDCu;
    {
        const bool branch_taken_0x2daedc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2daedc) {
            ctx->pc = 0x2DAEE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DAEDCu;
            // 0x2daee0: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DAEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2daec0;
        }
    }
    ctx->pc = 0x2DAEE4u;
label_2daee4:
    // 0x2daee4: 0x3c09003b  lui         $t1, 0x3B
    ctx->pc = 0x2daee4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)59 << 16));
    // 0x2daee8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2daee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daeec: 0x2529ac78  addiu       $t1, $t1, -0x5388
    ctx->pc = 0x2daeecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294945912));
    // 0x2daef0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2daef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daef4: 0xc0b6c74  jal         func_2DB1D0
    ctx->pc = 0x2DAEF4u;
    SET_GPR_U32(ctx, 31, 0x2DAEFCu);
    ctx->pc = 0x2DAEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAEF4u;
    // 0x2daef8: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB1D0u, 0x2DAEF4u, 0x2DAEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAEFCu;
label_2daefc:
    // 0x2daefc: 0x6410009  bgez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DAEFCu;
    {
        const bool branch_taken_0x2daefc = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x2DAF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAEFCu;
        // 0x2daf00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daefc) {
            ctx->pc = 0x2DAF24u;
            goto label_2daf24;
        }
    }
    ctx->pc = 0x2DAF04u;
    // 0x2daf04: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2daf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2daf08: 0x51023  negu        $v0, $a1
    ctx->pc = 0x2daf08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x2daf0c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2daf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2daf10: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2daf10u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2daf14:
    // 0x2daf14: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2daf14u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2daf18: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x2daf18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2daf1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DAF1Cu;
    {
        const bool branch_taken_0x2daf1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAF1Cu;
        // 0x2daf20: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daf1c) {
            ctx->pc = 0x2DAF28u;
            goto label_2daf28;
        }
    }
    ctx->pc = 0x2DAF24u;
label_2daf24:
    // 0x2daf24: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2daf24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2daf28:
    // 0x2daf28: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2daf28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2daf2c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2daf2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2daf30: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2daf30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2daf34: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2daf34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2daf38: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAF38u;
        // 0x2daf3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAF40u;
}
