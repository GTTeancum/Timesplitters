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

// Function: fxCreateStage
// Address: 0x238028 - 0x2380f4
void fxCreateStage_0x238028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fxCreateStage_0x238028");
#endif

    switch (ctx->pc) {
        case 0x238074u: goto label_238074;
        default: break;
    }

    ctx->pc = 0x238028u;

    // 0x238028: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x238028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23802c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x23802cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x238030: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x238030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x238034: 0x24423750  addiu       $v0, $v0, 0x3750
    ctx->pc = 0x238034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14160));
    // 0x238038: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x238038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23803c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23803cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238040: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x238040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x238044: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x238044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x238048: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x238048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23804c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x23804cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x238050: 0x14a0000b  bnez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x238050u;
    {
        const bool branch_taken_0x238050 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x238054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238050u;
        // 0x238054: 0x8f83b234  lw          $v1, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238050) {
            ctx->pc = 0x238080u;
            goto label_238080;
        }
    }
    ctx->pc = 0x238058u;
    // 0x238058: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x238058u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23805c: 0x240401f1  addiu       $a0, $zero, 0x1F1
    ctx->pc = 0x23805cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 497));
    // 0x238060: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x238060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x238064: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x238064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x238068: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x238068u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x23806c: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x23806Cu;
    SET_GPR_U32(ctx, 31, 0x238074u);
    ctx->pc = 0x238070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23806Cu;
    // 0x238070: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x23806Cu, 0x238074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238074u;
label_238074:
    // 0x238074: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x238074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x238078: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x238078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23807c: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x23807cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_238080:
    // 0x238080: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x238080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x238084: 0xc78381dc  lwc1        $f3, -0x7E24($gp)
    ctx->pc = 0x238084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x238088: 0xc46000b0  lwc1        $f0, 0xB0($v1)
    ctx->pc = 0x238088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23808c: 0xc4620098  lwc1        $f2, 0x98($v1)
    ctx->pc = 0x23808cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x238090: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x238090u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x238094: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x238094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x238098: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x238098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x23809c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x23809cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2380a0: 0xacb10240  sw          $s1, 0x240($a1)
    ctx->pc = 0x2380a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 576), GPR_U32(ctx, 17));
    // 0x2380a4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2380a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2380a8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2380a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2380ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2380acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2380b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2380b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2380b4: 0xe4a20030  swc1        $f2, 0x30($a1)
    ctx->pc = 0x2380b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x2380b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2380b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2380bc: 0xc46100b4  lwc1        $f1, 0xB4($v1)
    ctx->pc = 0x2380bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2380c0: 0xc460009c  lwc1        $f0, 0x9C($v1)
    ctx->pc = 0x2380c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2380c4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2380c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2380c8: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x2380c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x2380cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2380ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2380d0: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2380d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2380d4: 0xe4a00034  swc1        $f0, 0x34($a1)
    ctx->pc = 0x2380d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x2380d8: 0xc46100b8  lwc1        $f1, 0xB8($v1)
    ctx->pc = 0x2380d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2380dc: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x2380dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2380e0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2380e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2380e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2380e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2380e8: 0xe4a00038  swc1        $f0, 0x38($a1)
    ctx->pc = 0x2380e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
    // 0x2380ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2380ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2380F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2380ECu;
        // 0x2380f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2380ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2380F4u;
}
