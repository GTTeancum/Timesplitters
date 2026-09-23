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

// Function: chandelierPropTick
// Address: 0x27a0d0 - 0x27a224
void chandelierPropTick_0x27a0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chandelierPropTick_0x27a0d0");
#endif

    switch (ctx->pc) {
        case 0x27a10cu: goto label_27a10c;
        case 0x27a178u: goto label_27a178;
        case 0x27a190u: goto label_27a190;
        case 0x27a1a8u: goto label_27a1a8;
        case 0x27a200u: goto label_27a200;
        default: break;
    }

    ctx->pc = 0x27a0d0u;

    // 0x27a0d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x27a0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x27a0d4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x27a0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x27a0d8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x27a0d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a0dc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x27a0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x27a0e0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x27a0e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a0e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27a0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27a0e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27a0e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a0ec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27a0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27a0f0: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x27a0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x27a0f4: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x27a0f4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x27a0f8: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x27a0f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x27a0fc: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x27a0fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x27a100: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x27a100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x27a104: 0xc0aa114  jal         func_2A8450
    ctx->pc = 0x27A104u;
    SET_GPR_U32(ctx, 31, 0x27A10Cu);
    ctx->pc = 0x27A108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A104u;
    // 0x27a108: 0x8e300160  lw          $s0, 0x160($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8450u, 0x27A104u, 0x27A10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A10Cu;
label_27a10c:
    // 0x27a10c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x27a10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a110: 0xc78486f8  lwc1        $f4, -0x7908($gp)
    ctx->pc = 0x27a110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27a114: 0xc785b468  lwc1        $f5, -0x4B98($gp)
    ctx->pc = 0x27a114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27a118: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x27a118u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x27a11c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x27a11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a120: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x27a120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27a124: 0xc603001c  lwc1        $f3, 0x1C($s0)
    ctx->pc = 0x27a124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27a128: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x27a128u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x27a12c: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x27a12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x27a130: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27a130u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27a134: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x27a134u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x27a138: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x27a138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a13c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x27a13cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x27a140: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x27a140u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x27a144: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x27a144u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x27a148: 0xe6020018  swc1        $f2, 0x18($s0)
    ctx->pc = 0x27a148u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x27a14c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x27a14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a150: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x27a150u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x27a154: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x27a154u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x27a158: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x27a158u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x27a15c: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x27A15Cu;
    {
        const bool branch_taken_0x27a15c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A15Cu;
        // 0x27a160: 0xe603001c  swc1        $f3, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a15c) {
            ctx->pc = 0x27A1B8u;
            goto label_27a1b8;
        }
    }
    ctx->pc = 0x27A164u;
    // 0x27a164: 0xc79686fc  lwc1        $f22, -0x7904($gp)
    ctx->pc = 0x27a164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27a168: 0xc7958700  lwc1        $f21, -0x7900($gp)
    ctx->pc = 0x27a168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27a16c: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x27a16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x27a170: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27a170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x27a174: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27a174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27a178:
    // 0x27a178: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27a178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a17c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x27a17cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x27a180: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x27a180u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x27a184: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x27a184u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x27a188: 0xc09e88a  jal         func_27A228
    ctx->pc = 0x27A188u;
    SET_GPR_U32(ctx, 31, 0x27A190u);
    ctx->pc = 0x27A18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A188u;
    // 0x27a18c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A228u, 0x27A188u, 0x27A190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A190u;
label_27a190:
    // 0x27a190: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27a190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a194: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27a194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27a198: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x27a198u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x27a19c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x27a19cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x27a1a0: 0xc09e88a  jal         func_27A228
    ctx->pc = 0x27A1A0u;
    SET_GPR_U32(ctx, 31, 0x27A1A8u);
    ctx->pc = 0x27A1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A1A0u;
    // 0x27a1a4: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A228u, 0x27A1A0u, 0x27A1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A1A8u;
label_27a1a8:
    // 0x27a1a8: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x27a1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x27a1ac: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x27a1acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27a1b0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x27A1B0u;
    {
        const bool branch_taken_0x27a1b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A1B0u;
        // 0x27a1b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a1b0) {
            ctx->pc = 0x27A178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a178;
        }
    }
    ctx->pc = 0x27A1B8u;
label_27a1b8:
    // 0x27a1b8: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x27a1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x27a1bc: 0xc7808704  lwc1        $f0, -0x78FC($gp)
    ctx->pc = 0x27a1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a1c0: 0xc44e0010  lwc1        $f14, 0x10($v0)
    ctx->pc = 0x27a1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x27a1c4: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x27a1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27a1c8: 0x46007382  mul.s       $f14, $f14, $f0
    ctx->pc = 0x27a1c8u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x27a1cc: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x27a1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x27a1d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27a1d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27a1d4: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x27a1d4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x27a1d8: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x27a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x27a1dc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x27a1dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x27a1e0: 0x0  nop
    ctx->pc = 0x27a1e0u;
    // NOP
    // 0x27a1e4: 0x0  nop
    ctx->pc = 0x27a1e4u;
    // NOP
    // 0x27a1e8: 0x46017383  div.s       $f14, $f14, $f1
    ctx->pc = 0x27a1e8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[14] * 0.0f); } else ctx->f[14] = ctx->f[14] / ctx->f[1];
    // 0x27a1ec: 0x0  nop
    ctx->pc = 0x27a1ecu;
    // NOP
    // 0x27a1f0: 0x0  nop
    ctx->pc = 0x27a1f0u;
    // NOP
    // 0x27a1f4: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x27a1f4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x27a1f8: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x27A1F8u;
    SET_GPR_U32(ctx, 31, 0x27A200u);
    ctx->pc = 0x27A1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A1F8u;
    // 0x27a1fc: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x27A1F8u, 0x27A200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A200u;
label_27a200:
    // 0x27a200: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27a200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27a204: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x27a204u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27a208: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x27a208u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a20c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27a20cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a210: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x27a210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27a214: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x27a214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27a218: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x27a218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27a21c: 0x3e00008  jr          $ra
    ctx->pc = 0x27A21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A21Cu;
        // 0x27a220: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A224u;
}
