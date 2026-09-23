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

// Function: greenthingPropTick
// Address: 0x27af68 - 0x27b0d0
void greenthingPropTick_0x27af68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("greenthingPropTick_0x27af68");
#endif

    switch (ctx->pc) {
        case 0x27afb4u: goto label_27afb4;
        case 0x27afccu: goto label_27afcc;
        case 0x27afe8u: goto label_27afe8;
        case 0x27b01cu: goto label_27b01c;
        default: break;
    }

    ctx->pc = 0x27af68u;

    // 0x27af68: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x27af68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x27af6c: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x27af6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x27af70: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x27af70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x27af74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27af74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27af78: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27af78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27af7c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27af7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27af80: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x27af80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x27af84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27af84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27af88: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x27af88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x27af8c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x27af8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x27af90: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x27af90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27af94: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x27af94u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x27af98: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x27af98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x27af9c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x27af9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x27afa0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27afa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27afa4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27afa8: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x27afa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27afac: 0xc09d194  jal         func_274650
    ctx->pc = 0x27AFACu;
    SET_GPR_U32(ctx, 31, 0x27AFB4u);
    ctx->pc = 0x27AFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AFACu;
    // 0x27afb0: 0x629023  subu        $s2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274650u, 0x27AFACu, 0x27AFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AFB4u;
label_27afb4:
    // 0x27afb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27afb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27afb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27afb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27afbc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27afbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27afc0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x27afc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27afc4: 0xc09d11a  jal         func_274468
    ctx->pc = 0x27AFC4u;
    SET_GPR_U32(ctx, 31, 0x27AFCCu);
    ctx->pc = 0x27AFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AFC4u;
    // 0x27afc8: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274468u, 0x27AFC4u, 0x27AFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AFCCu;
label_27afcc:
    // 0x27afcc: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x27AFCCu;
    {
        const bool branch_taken_0x27afcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFCCu;
        // 0x27afd0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27afcc) {
            ctx->pc = 0x27B0ACu;
            goto label_27b0ac;
        }
    }
    ctx->pc = 0x27AFD4u;
    // 0x27afd4: 0x8e500030  lw          $s0, 0x30($s2)
    ctx->pc = 0x27afd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x27afd8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x27afd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27afdc: 0x18a00033  blez        $a1, . + 4 + (0x33 << 2)
    ctx->pc = 0x27AFDCu;
    {
        const bool branch_taken_0x27afdc = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x27AFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFDCu;
        // 0x27afe0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27afdc) {
            ctx->pc = 0x27B0ACu;
            goto label_27b0ac;
        }
    }
    ctx->pc = 0x27AFE4u;
    // 0x27afe4: 0x3c130037  lui         $s3, 0x37
    ctx->pc = 0x27afe4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
label_27afe8:
    // 0x27afe8: 0xc6140000  lwc1        $f20, 0x0($s0)
    ctx->pc = 0x27afe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27afec: 0xc6150008  lwc1        $f21, 0x8($s0)
    ctx->pc = 0x27afecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27aff0: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x27aff0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x27aff4: 0x4615a802  mul.s       $f0, $f21, $f21
    ctx->pc = 0x27aff4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x27aff8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x27aff8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27affc: 0x0  nop
    ctx->pc = 0x27affcu;
    // NOP
    // 0x27b000: 0x0  nop
    ctx->pc = 0x27b000u;
    // NOP
    // 0x27b004: 0x460c01c4  c1          0xC01C4
    ctx->pc = 0x27b004u;
    ctx->f[7] = FPU_SQRT_S(ctx->f[12]);
    // 0x27b008: 0x46073832  c.eq.s      $f7, $f7
    ctx->pc = 0x27b008u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[7], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b00c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x27B00Cu;
    {
        const bool branch_taken_0x27b00c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b00c) {
            ctx->pc = 0x27B024u;
            goto label_27b024;
        }
    }
    ctx->pc = 0x27B014u;
    // 0x27b014: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x27B014u;
    SET_GPR_U32(ctx, 31, 0x27B01Cu);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x27B014u, 0x27B01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B01Cu;
label_27b01c:
    // 0x27b01c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x27b01cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b020: 0x460001c6  mov.s       $f7, $f0
    ctx->pc = 0x27b020u;
    ctx->f[7] = FPU_MOV_S(ctx->f[0]);
label_27b024:
    // 0x27b024: 0xc7819da8  lwc1        $f1, -0x6258($gp)
    ctx->pc = 0x27b024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b028: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x27b028u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27b02c: 0xc7828778  lwc1        $f2, -0x7888($gp)
    ctx->pc = 0x27b02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27b030: 0x46073800  add.s       $f0, $f7, $f7
    ctx->pc = 0x27b030u;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
    // 0x27b034: 0xc784877c  lwc1        $f4, -0x7884($gp)
    ctx->pc = 0x27b034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27b038: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27b038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x27b03c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x27b03cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x27b040: 0x26635c60  addiu       $v1, $s3, 0x5C60
    ctx->pc = 0x27b040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 23648));
    // 0x27b044: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x27b044u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x27b048: 0xe6340000  swc1        $f20, 0x0($s1)
    ctx->pc = 0x27b048u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x27b04c: 0xc7828780  lwc1        $f2, -0x7880($gp)
    ctx->pc = 0x27b04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27b050: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x27b050u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x27b054: 0xc7868784  lwc1        $f6, -0x787C($gp)
    ctx->pc = 0x27b054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x27b058: 0x245202a  slt         $a0, $s2, $a1
    ctx->pc = 0x27b058u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x27b05c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27b05cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27b060: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x27b060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27b064: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x27b064u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
    // 0x27b068: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x27b068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x27b06c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x27b06cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x27b070: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x27b070u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x27b074: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27b074u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27b078: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x27b078u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27b07c: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x27b07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x27b080: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27b080u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27b084: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27b084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27b088: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27b088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b08c: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x27b08cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x27b090: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x27b090u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x27b094: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x27b094u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x27b098: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x27b098u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x27b09c: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x27b09cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x27b0a0: 0xe6230004  swc1        $f3, 0x4($s1)
    ctx->pc = 0x27b0a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x27b0a4: 0x1480ffd0  bnez        $a0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x27B0A4u;
    {
        const bool branch_taken_0x27b0a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B0A4u;
        // 0x27b0a8: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b0a4) {
            ctx->pc = 0x27AFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27afe8;
        }
    }
    ctx->pc = 0x27B0ACu;
label_27b0ac:
    // 0x27b0ac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x27b0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27b0b0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x27b0b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27b0b4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x27b0b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27b0b8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x27b0b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27b0bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27b0bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b0c0: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x27b0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27b0c4: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x27b0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27b0c8: 0x3e00008  jr          $ra
    ctx->pc = 0x27B0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B0C8u;
        // 0x27b0cc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B0C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B0D0u;
}
