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

// Function: fxSelectCharGfx
// Address: 0x238c60 - 0x238e00
void fxSelectCharGfx_0x238c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fxSelectCharGfx_0x238c60");
#endif

    switch (ctx->pc) {
        case 0x238c9cu: goto label_238c9c;
        case 0x238d44u: goto label_238d44;
        case 0x238d64u: goto label_238d64;
        case 0x238d6cu: goto label_238d6c;
        case 0x238d94u: goto label_238d94;
        case 0x238dbcu: goto label_238dbc;
        default: break;
    }

    ctx->pc = 0x238c60u;

    // 0x238c60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x238c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x238c64: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x238c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x238c68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x238c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x238c6c: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x238c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x238c70: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x238c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x238c74: 0x24631238  addiu       $v1, $v1, 0x1238
    ctx->pc = 0x238c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4664));
    // 0x238c78: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x238c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x238c7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238c80: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x238c80u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x238c84: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x238c84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x238c88: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x238c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x238c8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x238c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x238c90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x238c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x238c94: 0xc08da68  jal         func_2369A0
    ctx->pc = 0x238C94u;
    SET_GPR_U32(ctx, 31, 0x238C9Cu);
    ctx->pc = 0x238C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238C94u;
    // 0x238c98: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2369A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2369A0u, 0x238C94u, 0x238C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238C9Cu;
label_238c9c:
    // 0x238c9c: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x238c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x238ca0: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x238ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x238ca4: 0x244212b8  addiu       $v0, $v0, 0x12B8
    ctx->pc = 0x238ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4792));
    // 0x238ca8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x238ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x238cac: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x238cacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x238cb0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x238cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x238cb4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x238cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x238cb8: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x238CB8u;
    {
        const bool branch_taken_0x238cb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x238CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CB8u;
        // 0x238cbc: 0x8f839dac  lw          $v1, -0x6254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238cb8) {
            ctx->pc = 0x238DE0u;
            goto label_238de0;
        }
    }
    ctx->pc = 0x238CC0u;
    // 0x238cc0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x238cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x238cc4: 0x10620046  beq         $v1, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x238CC4u;
    {
        const bool branch_taken_0x238cc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x238CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CC4u;
        // 0x238cc8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238cc4) {
            ctx->pc = 0x238DE0u;
            goto label_238de0;
        }
    }
    ctx->pc = 0x238CCCu;
    // 0x238ccc: 0x10620044  beq         $v1, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x238CCCu;
    {
        const bool branch_taken_0x238ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x238CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CCCu;
        // 0x238cd0: 0x3c0201fc  lui         $v0, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238ccc) {
            ctx->pc = 0x238DE0u;
            goto label_238de0;
        }
    }
    ctx->pc = 0x238CD4u;
    // 0x238cd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x238cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x238cd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x238cd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x238cdc: 0x244212c8  addiu       $v0, $v0, 0x12C8
    ctx->pc = 0x238cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4808));
    // 0x238ce0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x238ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x238ce4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x238ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238ce8: 0x46000080  add.s       $f2, $f0, $f0
    ctx->pc = 0x238ce8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x238cec: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x238cecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238cf0: 0x0  nop
    ctx->pc = 0x238cf0u;
    // NOP
    // 0x238cf4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x238CF4u;
    {
        const bool branch_taken_0x238cf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x238CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CF4u;
        // 0x238cf8: 0x3c110033  lui         $s1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238cf4) {
            ctx->pc = 0x238D08u;
            goto label_238d08;
        }
    }
    ctx->pc = 0x238CFCu;
    // 0x238cfc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x238cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x238d00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x238d00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238d04: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x238d04u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_238d08:
    // 0x238d08: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x238d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x238d0c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x238d0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x238d10: 0x263099f0  addiu       $s0, $s1, -0x6610
    ctx->pc = 0x238d10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941168));
    // 0x238d14: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x238d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x238d18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x238d18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238d1c: 0xc6150020  lwc1        $f21, 0x20($s0)
    ctx->pc = 0x238d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x238d20: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x238d20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x238d24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x238d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238d28: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x238d28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x238d2c: 0x4614ad02  mul.s       $f20, $f21, $f20
    ctx->pc = 0x238d2cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x238d30: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x238d30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x238d34: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x238d34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x238d38: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x238d38u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x238d3c: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x238D3Cu;
    SET_GPR_U32(ctx, 31, 0x238D44u);
    ctx->pc = 0x238D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238D3Cu;
    // 0x238d40: 0x4614ad41  sub.s       $f21, $f21, $f20 (Delay Slot)
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x238D3Cu, 0x238D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238D44u;
label_238d44:
    // 0x238d44: 0x3c087f7f  lui         $t0, 0x7F7F
    ctx->pc = 0x238d44u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32639 << 16));
    // 0x238d48: 0x8e2499f0  lw          $a0, -0x6610($s1)
    ctx->pc = 0x238d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941168)));
    // 0x238d4c: 0x35087f00  ori         $t0, $t0, 0x7F00
    ctx->pc = 0x238d4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32512);
    // 0x238d50: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x238d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x238d54: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x238d54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x238d58: 0x2484025  or          $t0, $s2, $t0
    ctx->pc = 0x238d58u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) | GPR_U64(ctx, 8));
    // 0x238d5c: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x238D5Cu;
    SET_GPR_U32(ctx, 31, 0x238D64u);
    ctx->pc = 0x238D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238D5Cu;
    // 0x238d60: 0x8e070018  lw          $a3, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x238D5Cu, 0x238D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238D64u;
label_238d64:
    // 0x238d64: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x238D64u;
    SET_GPR_U32(ctx, 31, 0x238D6Cu);
    ctx->pc = 0x238D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238D64u;
    // 0x238d68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x238D64u, 0x238D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238D6Cu;
label_238d6c:
    // 0x238d6c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x238d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x238d70: 0x3c087f00  lui         $t0, 0x7F00
    ctx->pc = 0x238d70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32512 << 16));
    // 0x238d74: 0x8e2499f0  lw          $a0, -0x6610($s1)
    ctx->pc = 0x238d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941168)));
    // 0x238d78: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x238d78u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238d7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x238d7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x238d80: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x238d80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x238d84: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x238d84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x238d88: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x238d88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x238d8c: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x238D8Cu;
    SET_GPR_U32(ctx, 31, 0x238D94u);
    ctx->pc = 0x238D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238D8Cu;
    // 0x238d90: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x238D8Cu, 0x238D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238D94u;
label_238d94:
    // 0x238d94: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x238d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238d98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x238d98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x238d9c: 0x8e2499f0  lw          $a0, -0x6610($s1)
    ctx->pc = 0x238d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941168)));
    // 0x238da0: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x238da0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x238da4: 0x3c087f00  lui         $t0, 0x7F00
    ctx->pc = 0x238da4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32512 << 16));
    // 0x238da8: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x238da8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x238dac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x238dacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x238db0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x238db0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x238db4: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x238DB4u;
    SET_GPR_U32(ctx, 31, 0x238DBCu);
    ctx->pc = 0x238DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238DB4u;
    // 0x238db8: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x238DB4u, 0x238DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238DBCu;
label_238dbc:
    // 0x238dbc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x238dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x238dc0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x238dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238dc4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x238dc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238dc8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x238dc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238dcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238dccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238dd0: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x238dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x238dd4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x238dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x238dd8: 0x80adfaa  j           func_2B7EA8
    ctx->pc = 0x238DD8u;
    ctx->pc = 0x238DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238DD8u;
    // 0x238ddc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    dlSetBlend_0x2b7ea8(rdram, ctx, runtime); return;
    ctx->pc = 0x238DE0u;
label_238de0:
    // 0x238de0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x238de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x238de4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x238de4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238de8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x238de8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238dec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238decu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238df0: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x238df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x238df4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x238df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x238df8: 0x3e00008  jr          $ra
    ctx->pc = 0x238DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238DF8u;
        // 0x238dfc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238E00u;
}
