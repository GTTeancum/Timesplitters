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

// Function: lanternPropTick
// Address: 0x279f70 - 0x27a0cc
void lanternPropTick_0x279f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lanternPropTick_0x279f70");
#endif

    switch (ctx->pc) {
        case 0x279facu: goto label_279fac;
        case 0x27a020u: goto label_27a020;
        case 0x27a038u: goto label_27a038;
        case 0x27a050u: goto label_27a050;
        case 0x27a0a8u: goto label_27a0a8;
        default: break;
    }

    ctx->pc = 0x279f70u;

    // 0x279f70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x279f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x279f74: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x279f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x279f78: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x279f78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279f7c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x279f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x279f80: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x279f80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279f84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x279f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x279f88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x279f88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279f8c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x279f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x279f90: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x279f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x279f94: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x279f94u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x279f98: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x279f98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x279f9c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x279f9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x279fa0: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x279fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x279fa4: 0xc0aa114  jal         func_2A8450
    ctx->pc = 0x279FA4u;
    SET_GPR_U32(ctx, 31, 0x279FACu);
    ctx->pc = 0x279FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279FA4u;
    // 0x279fa8: 0x8e300160  lw          $s0, 0x160($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8450u, 0x279FA4u, 0x279FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279FACu;
label_279fac:
    // 0x279fac: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x279facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279fb0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x279fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x279fb4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x279fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x279fb8: 0xc785b468  lwc1        $f5, -0x4B98($gp)
    ctx->pc = 0x279fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x279fbc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x279fbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x279fc0: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x279fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x279fc4: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x279fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x279fc8: 0xc603001c  lwc1        $f3, 0x1C($s0)
    ctx->pc = 0x279fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x279fcc: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x279fccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x279fd0: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x279fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x279fd4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x279fd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x279fd8: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x279fd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x279fdc: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x279fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279fe0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x279fe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x279fe4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x279fe4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x279fe8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x279fe8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x279fec: 0xe6020018  swc1        $f2, 0x18($s0)
    ctx->pc = 0x279fecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x279ff0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x279ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279ff4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x279ff4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x279ff8: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x279ff8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x279ffc: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x279ffcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x27a000: 0x18400017  blez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x27A000u;
    {
        const bool branch_taken_0x27a000 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A000u;
        // 0x27a004: 0xe603001c  swc1        $f3, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a000) {
            ctx->pc = 0x27A060u;
            goto label_27a060;
        }
    }
    ctx->pc = 0x27A008u;
    // 0x27a008: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x27a008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x27a00c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x27a00cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x27a010: 0xc79586f0  lwc1        $f21, -0x7910($gp)
    ctx->pc = 0x27a010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27a014: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x27a014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x27a018: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27a018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x27a01c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27a01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27a020:
    // 0x27a020: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27a020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a024: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x27a024u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x27a028: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x27a028u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x27a02c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x27a02cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x27a030: 0xc09e88a  jal         func_27A228
    ctx->pc = 0x27A030u;
    SET_GPR_U32(ctx, 31, 0x27A038u);
    ctx->pc = 0x27A034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A030u;
    // 0x27a034: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A228u, 0x27A030u, 0x27A038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A038u;
label_27a038:
    // 0x27a038: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27a038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a03c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27a03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27a040: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x27a040u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x27a044: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x27a044u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x27a048: 0xc09e88a  jal         func_27A228
    ctx->pc = 0x27A048u;
    SET_GPR_U32(ctx, 31, 0x27A050u);
    ctx->pc = 0x27A04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A048u;
    // 0x27a04c: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A228u, 0x27A048u, 0x27A050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A050u;
label_27a050:
    // 0x27a050: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x27a050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x27a054: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x27a054u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27a058: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x27A058u;
    {
        const bool branch_taken_0x27a058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A058u;
        // 0x27a05c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a058) {
            ctx->pc = 0x27A020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a020;
        }
    }
    ctx->pc = 0x27A060u;
label_27a060:
    // 0x27a060: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x27a060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x27a064: 0xc78086f4  lwc1        $f0, -0x790C($gp)
    ctx->pc = 0x27a064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a068: 0xc44e0010  lwc1        $f14, 0x10($v0)
    ctx->pc = 0x27a068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x27a06c: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x27a06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27a070: 0x46007382  mul.s       $f14, $f14, $f0
    ctx->pc = 0x27a070u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x27a074: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x27a074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x27a078: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27a078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27a07c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x27a07cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x27a080: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x27a080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x27a084: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x27a084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x27a088: 0x0  nop
    ctx->pc = 0x27a088u;
    // NOP
    // 0x27a08c: 0x0  nop
    ctx->pc = 0x27a08cu;
    // NOP
    // 0x27a090: 0x46017383  div.s       $f14, $f14, $f1
    ctx->pc = 0x27a090u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[14] * 0.0f); } else ctx->f[14] = ctx->f[14] / ctx->f[1];
    // 0x27a094: 0x0  nop
    ctx->pc = 0x27a094u;
    // NOP
    // 0x27a098: 0x0  nop
    ctx->pc = 0x27a098u;
    // NOP
    // 0x27a09c: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x27a09cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x27a0a0: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x27A0A0u;
    SET_GPR_U32(ctx, 31, 0x27A0A8u);
    ctx->pc = 0x27A0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A0A0u;
    // 0x27a0a4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x27A0A0u, 0x27A0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A0A8u;
label_27a0a8:
    // 0x27a0a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27a0a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27a0ac: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x27a0acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27a0b0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x27a0b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a0b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27a0b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a0b8: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x27a0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27a0bc: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x27a0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27a0c0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x27a0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27a0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x27A0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A0C4u;
        // 0x27a0c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A0CCu;
}
