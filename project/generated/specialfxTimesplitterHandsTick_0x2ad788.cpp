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

// Function: specialfxTimesplitterHandsTick
// Address: 0x2ad788 - 0x2ad9ec
void specialfxTimesplitterHandsTick_0x2ad788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialfxTimesplitterHandsTick_0x2ad788");
#endif

    switch (ctx->pc) {
        case 0x2ad840u: goto label_2ad840;
        case 0x2ad864u: goto label_2ad864;
        case 0x2ad8b8u: goto label_2ad8b8;
        case 0x2ad8e4u: goto label_2ad8e4;
        case 0x2ad934u: goto label_2ad934;
        case 0x2ad960u: goto label_2ad960;
        case 0x2ad974u: goto label_2ad974;
        default: break;
    }

    ctx->pc = 0x2ad788u;

    // 0x2ad788: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2ad788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2ad78c: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2ad78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2ad790: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2ad790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2ad794: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2ad794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2ad798: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2ad798u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad79c: 0x2828818  mult        $s1, $s4, $v0
    ctx->pc = 0x2ad79cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x2ad7a0: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x2ad7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x2ad7a4: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2ad7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2ad7a8: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x2ad7a8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
    // 0x2ad7ac: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2ad7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2ad7b0: 0x26b3c268  addiu       $s3, $s5, -0x3D98
    ctx->pc = 0x2ad7b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951528));
    // 0x2ad7b4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2ad7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2ad7b8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2ad7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2ad7bc: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x2ad7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x2ad7c0: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2ad7c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2ad7c4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2ad7c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2ad7c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ad7c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad7cc: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x2ad7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ad7d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2ad7d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ad7d4: 0x0  nop
    ctx->pc = 0x2ad7d4u;
    // NOP
    // 0x2ad7d8: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x2AD7D8u;
    {
        const bool branch_taken_0x2ad7d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AD7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD7D8u;
        // 0x2ad7dc: 0x2403005c  addiu       $v1, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad7d8) {
            ctx->pc = 0x2AD86Cu;
            goto label_2ad86c;
        }
    }
    ctx->pc = 0x2AD7E0u;
    // 0x2ad7e0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2ad7e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2ad7e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ad7e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad7e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ad7e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ad7ec: 0x0  nop
    ctx->pc = 0x2ad7ecu;
    // NOP
    // 0x2ad7f0: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x2AD7F0u;
    {
        const bool branch_taken_0x2ad7f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AD7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD7F0u;
        // 0x2ad7f4: 0x26620048  addiu       $v0, $s3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad7f0) {
            ctx->pc = 0x2AD86Cu;
            goto label_2ad86c;
        }
    }
    ctx->pc = 0x2AD7F8u;
    // 0x2ad7f8: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x2ad7f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2ad7fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ad7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ad800: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2AD800u;
    {
        const bool branch_taken_0x2ad800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD800u;
        // 0x2ad804: 0x2403005c  addiu       $v1, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad800) {
            ctx->pc = 0x2AD86Cu;
            goto label_2ad86c;
        }
    }
    ctx->pc = 0x2AD808u;
    // 0x2ad808: 0x2662004c  addiu       $v0, $s3, 0x4C
    ctx->pc = 0x2ad808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 76));
    // 0x2ad80c: 0x2229021  addu        $s2, $s1, $v0
    ctx->pc = 0x2ad80cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2ad810: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2ad810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ad814: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2AD814u;
    {
        const bool branch_taken_0x2ad814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD814u;
        // 0x2ad818: 0x2403005c  addiu       $v1, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad814) {
            ctx->pc = 0x2AD86Cu;
            goto label_2ad86c;
        }
    }
    ctx->pc = 0x2AD81Cu;
    // 0x2ad81c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2ad81cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2ad820: 0x26660018  addiu       $a2, $s3, 0x18
    ctx->pc = 0x2ad820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x2ad824: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x2ad824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2ad828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ad828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad82c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2ad82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ad830: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ad830u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad834: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ad834u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2ad838: 0xc0a61de  jal         func_298778
    ctx->pc = 0x2AD838u;
    SET_GPR_U32(ctx, 31, 0x2AD840u);
    ctx->pc = 0x2AD83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD838u;
    // 0x2ad83c: 0x24080028  addiu       $t0, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298778u, 0x2AD838u, 0x2AD840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD840u;
label_2ad840:
    // 0x2ad840: 0x26660024  addiu       $a2, $s3, 0x24
    ctx->pc = 0x2ad840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
    // 0x2ad844: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2ad844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2ad848: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x2ad848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2ad84c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ad84cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2ad850: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ad850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad854: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2ad854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ad858: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ad858u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad85c: 0xc0a61de  jal         func_298778
    ctx->pc = 0x2AD85Cu;
    SET_GPR_U32(ctx, 31, 0x2AD864u);
    ctx->pc = 0x2AD860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD85Cu;
    // 0x2ad860: 0x24080028  addiu       $t0, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298778u, 0x2AD85Cu, 0x2AD864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD864u;
label_2ad864:
    // 0x2ad864: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2ad864u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2ad868: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x2ad868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_2ad86c:
    // 0x2ad86c: 0x26b1c268  addiu       $s1, $s5, -0x3D98
    ctx->pc = 0x2ad86cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951528));
    // 0x2ad870: 0x2838018  mult        $s0, $s4, $v1
    ctx->pc = 0x2ad870u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2ad874: 0x26220048  addiu       $v0, $s1, 0x48
    ctx->pc = 0x2ad874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x2ad878: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x2ad878u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2ad87c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2ad87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ad880: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2AD880u;
    {
        const bool branch_taken_0x2ad880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD880u;
        // 0x2ad884: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad880) {
            ctx->pc = 0x2AD8E4u;
            goto label_2ad8e4;
        }
    }
    ctx->pc = 0x2AD888u;
    // 0x2ad888: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2ad888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2ad88c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2ad88cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ad890: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x2ad890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad894: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ad894u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad898: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x2ad898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ad89c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ad89cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad8a0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2ad8a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2ad8a4: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x2ad8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ad8a8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2ad8a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ad8ac: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2ad8acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2ad8b0: 0xc0a5ba2  jal         func_296E88
    ctx->pc = 0x2AD8B0u;
    SET_GPR_U32(ctx, 31, 0x2AD8B8u);
    ctx->pc = 0x2AD8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD8B0u;
    // 0x2ad8b4: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E88u, 0x2AD8B0u, 0x2AD8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD8B8u;
label_2ad8b8:
    // 0x2ad8b8: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2ad8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2ad8bc: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x2ad8bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x2ad8c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ad8c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ad8c4: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2ad8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad8c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ad8c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ad8cc: 0x0  nop
    ctx->pc = 0x2ad8ccu;
    // NOP
    // 0x2ad8d0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2AD8D0u;
    {
        const bool branch_taken_0x2ad8d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AD8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD8D0u;
        // 0x2ad8d4: 0x2403005c  addiu       $v1, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad8d0) {
            ctx->pc = 0x2AD8E8u;
            goto label_2ad8e8;
        }
    }
    ctx->pc = 0x2AD8D8u;
    // 0x2ad8d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ad8d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ad8dc: 0xc0a5b94  jal         func_296E50
    ctx->pc = 0x2AD8DCu;
    SET_GPR_U32(ctx, 31, 0x2AD8E4u);
    ctx->pc = 0x2AD8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD8DCu;
    // 0x2ad8e0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E50u, 0x2AD8DCu, 0x2AD8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD8E4u;
label_2ad8e4:
    // 0x2ad8e4: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x2ad8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_2ad8e8:
    // 0x2ad8e8: 0x26b1c268  addiu       $s1, $s5, -0x3D98
    ctx->pc = 0x2ad8e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951528));
    // 0x2ad8ec: 0x2838018  mult        $s0, $s4, $v1
    ctx->pc = 0x2ad8ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2ad8f0: 0x2622004c  addiu       $v0, $s1, 0x4C
    ctx->pc = 0x2ad8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x2ad8f4: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x2ad8f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2ad8f8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2ad8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ad8fc: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2AD8FCu;
    {
        const bool branch_taken_0x2ad8fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD8FCu;
        // 0x2ad900: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad8fc) {
            ctx->pc = 0x2AD960u;
            goto label_2ad960;
        }
    }
    ctx->pc = 0x2AD904u;
    // 0x2ad904: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2ad904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2ad908: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2ad908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ad90c: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x2ad90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad910: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ad910u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad914: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x2ad914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ad918: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2ad918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ad91c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2ad91cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2ad920: 0xc442002c  lwc1        $f2, 0x2C($v0)
    ctx->pc = 0x2ad920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ad924: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2ad924u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2ad928: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2ad928u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2ad92c: 0xc0a5ba2  jal         func_296E88
    ctx->pc = 0x2AD92Cu;
    SET_GPR_U32(ctx, 31, 0x2AD934u);
    ctx->pc = 0x2AD930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD92Cu;
    // 0x2ad930: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E88u, 0x2AD92Cu, 0x2AD934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD934u;
label_2ad934:
    // 0x2ad934: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2ad934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2ad938: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x2ad938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x2ad93c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ad93cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ad940: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2ad940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad944: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ad944u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ad948: 0x0  nop
    ctx->pc = 0x2ad948u;
    // NOP
    // 0x2ad94c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2AD94Cu;
    {
        const bool branch_taken_0x2ad94c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AD950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD94Cu;
        // 0x2ad950: 0x8f82b460  lw          $v0, -0x4BA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad94c) {
            ctx->pc = 0x2AD964u;
            goto label_2ad964;
        }
    }
    ctx->pc = 0x2AD954u;
    // 0x2ad954: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ad954u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ad958: 0xc0a5b94  jal         func_296E50
    ctx->pc = 0x2AD958u;
    SET_GPR_U32(ctx, 31, 0x2AD960u);
    ctx->pc = 0x2AD95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD958u;
    // 0x2ad95c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E50u, 0x2AD958u, 0x2AD960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD960u;
label_2ad960:
    // 0x2ad960: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x2ad960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
label_2ad964:
    // 0x2ad964: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2AD964u;
    {
        const bool branch_taken_0x2ad964 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2AD968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD964u;
        // 0x2ad968: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad964) {
            ctx->pc = 0x2AD9C8u;
            goto label_2ad9c8;
        }
    }
    ctx->pc = 0x2AD96Cu;
    // 0x2ad96c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2AD96Cu;
    SET_GPR_U32(ctx, 31, 0x2AD974u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2AD96Cu, 0x2AD974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD974u;
label_2ad974:
    // 0x2ad974: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x2ad974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2ad978: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ad978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad97c: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x2ad97cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ad980: 0x26a2c268  addiu       $v0, $s5, -0x3D98
    ctx->pc = 0x2ad980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951528));
    // 0x2ad984: 0x24420034  addiu       $v0, $v0, 0x34
    ctx->pc = 0x2ad984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2ad988: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AD988u;
    {
        const bool branch_taken_0x2ad988 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2AD98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD988u;
        // 0x2ad98c: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad988) {
            ctx->pc = 0x2AD99Cu;
            goto label_2ad99c;
        }
    }
    ctx->pc = 0x2AD990u;
    // 0x2ad990: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2ad990u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ad994: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2AD994u;
    {
        const bool branch_taken_0x2ad994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD994u;
        // 0x2ad998: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad994) {
            ctx->pc = 0x2AD9B4u;
            goto label_2ad9b4;
        }
    }
    ctx->pc = 0x2AD99Cu;
label_2ad99c:
    // 0x2ad99c: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x2ad99cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x2ad9a0: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2ad9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2ad9a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ad9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ad9a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ad9a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ad9ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ad9acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ad9b0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2ad9b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2ad9b4:
    // 0x2ad9b4: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2ad9b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2ad9b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ad9b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad9bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ad9bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ad9c0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2ad9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2ad9c4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2ad9c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2ad9c8:
    // 0x2ad9c8: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x2ad9c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ad9cc: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2ad9ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ad9d0: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2ad9d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ad9d4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2ad9d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ad9d8: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2ad9d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ad9dc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2ad9dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad9e0: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2ad9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ad9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD9E4u;
        // 0x2ad9e8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD9ECu;
}
