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

// Function: specialfxCalcDistSqFromWall
// Address: 0x2ae240 - 0x2ae2e4
void specialfxCalcDistSqFromWall_0x2ae240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialfxCalcDistSqFromWall_0x2ae240");
#endif

    switch (ctx->pc) {
        case 0x2ae268u: goto label_2ae268;
        case 0x2ae280u: goto label_2ae280;
        case 0x2ae298u: goto label_2ae298;
        default: break;
    }

    ctx->pc = 0x2ae240u;

    // 0x2ae240: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ae240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ae244: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ae244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ae248: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ae248u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae24c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2ae24cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2ae250: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2ae250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2ae254: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2ae254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2ae258: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ae258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae25c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ae25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ae260: 0xc095d82  jal         func_257608
    ctx->pc = 0x2AE260u;
    SET_GPR_U32(ctx, 31, 0x2AE268u);
    ctx->pc = 0x2AE264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE260u;
    // 0x2ae264: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257608u, 0x2AE260u, 0x2AE268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE268u;
label_2ae268:
    // 0x2ae268: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2AE268u;
    {
        const bool branch_taken_0x2ae268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae268) {
            ctx->pc = 0x2AE2BCu;
            goto label_2ae2bc;
        }
    }
    ctx->pc = 0x2AE270u;
    // 0x2ae270: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2ae270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ae274: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2AE274u;
    {
        const bool branch_taken_0x2ae274 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE274u;
        // 0x2ae278: 0x24500004  addiu       $s0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae274) {
            ctx->pc = 0x2AE2C8u;
            goto label_2ae2c8;
        }
    }
    ctx->pc = 0x2AE27Cu;
    // 0x2ae27c: 0x0  nop
    ctx->pc = 0x2ae27cu;
    // NOP
label_2ae280:
    // 0x2ae280: 0xc78c8f5c  lwc1        $f12, -0x70A4($gp)
    ctx->pc = 0x2ae280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ae284: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ae284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae288: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2ae288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2ae28c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2ae28cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ae290: 0xc09f2da  jal         func_27CB68
    ctx->pc = 0x2AE290u;
    SET_GPR_U32(ctx, 31, 0x2AE298u);
    ctx->pc = 0x2AE294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE290u;
    // 0x2ae294: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27CB68u, 0x2AE290u, 0x2AE298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE298u;
label_2ae298:
    // 0x2ae298: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2ae298u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ae29c: 0x0  nop
    ctx->pc = 0x2ae29cu;
    // NOP
    // 0x2ae2a0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2AE2A0u;
    {
        const bool branch_taken_0x2ae2a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ae2a0) {
            ctx->pc = 0x2AE2A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE2A0u;
            // 0x2ae2a4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE2A8u;
            goto label_2ae2a8;
        }
    }
    ctx->pc = 0x2AE2A8u;
label_2ae2a8:
    // 0x2ae2a8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2ae2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae2ac: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2AE2ACu;
    {
        const bool branch_taken_0x2ae2ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AE2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE2ACu;
        // 0x2ae2b0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae2ac) {
            ctx->pc = 0x2AE280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ae280;
        }
    }
    ctx->pc = 0x2AE2B4u;
    // 0x2ae2b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2AE2B4u;
    {
        const bool branch_taken_0x2ae2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE2B4u;
        // 0x2ae2b8: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae2b4) {
            ctx->pc = 0x2AE2CCu;
            goto label_2ae2cc;
        }
    }
    ctx->pc = 0x2AE2BCu;
label_2ae2bc:
    // 0x2ae2bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ae2bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae2c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE2C0u;
    {
        const bool branch_taken_0x2ae2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE2C0u;
        // 0x2ae2c4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae2c0) {
            ctx->pc = 0x2AE2D0u;
            goto label_2ae2d0;
        }
    }
    ctx->pc = 0x2AE2C8u;
label_2ae2c8:
    // 0x2ae2c8: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x2ae2c8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_2ae2cc:
    // 0x2ae2cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ae2ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ae2d0:
    // 0x2ae2d0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ae2d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ae2d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ae2d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae2d8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2ae2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ae2dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE2DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE2DCu;
        // 0x2ae2e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE2DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE2E4u;
}
