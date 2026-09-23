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

// Function: floorf
// Address: 0x2d72b0 - 0x2d7394
void floorf_0x2d72b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("floorf_0x2d72b0");
#endif

    switch (ctx->pc) {
        case 0x2d7330u: goto label_2d7330;
        default: break;
    }

    ctx->pc = 0x2d72b0u;

    // 0x2d72b0: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x2d72b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d72b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d72b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d72b8: 0x415c3  sra         $v0, $a0, 23
    ctx->pc = 0x2d72b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 23));
    // 0x2d72bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d72bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d72c0: 0x2445ff81  addiu       $a1, $v0, -0x7F
    ctx->pc = 0x2d72c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x2d72c4: 0x28a30017  slti        $v1, $a1, 0x17
    ctx->pc = 0x2d72c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x2d72c8: 0x5060002b  beql        $v1, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x2D72C8u;
    {
        const bool branch_taken_0x2d72c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d72c8) {
            ctx->pc = 0x2D72CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D72C8u;
            // 0x2d72cc: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7378u;
            goto label_2d7378;
        }
    }
    ctx->pc = 0x2D72D0u;
    // 0x2d72d0: 0x4a30012  bgezl       $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D72D0u;
    {
        const bool branch_taken_0x2d72d0 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x2d72d0) {
            ctx->pc = 0x2D72D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D72D0u;
            // 0x2d72d4: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D731Cu;
            goto label_2d731c;
        }
    }
    ctx->pc = 0x2D72D8u;
    // 0x2d72d8: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x2d72d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x2d72dc: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x2d72dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x2d72e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d72e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d72e4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2d72e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d72e8: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x2d72e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2d72ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d72ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d72f0: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x2D72F0u;
    {
        const bool branch_taken_0x2d72f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d72f0) {
            ctx->pc = 0x2D7388u;
            goto label_2d7388;
        }
    }
    ctx->pc = 0x2D72F8u;
    // 0x2d72f8: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D72F8u;
    {
        const bool branch_taken_0x2d72f8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2D72FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D72F8u;
        // 0x2d72fc: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d72f8) {
            ctx->pc = 0x2D7308u;
            goto label_2d7308;
        }
    }
    ctx->pc = 0x2D7300u;
    // 0x2d7300: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2D7300u;
    {
        const bool branch_taken_0x2d7300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7300u;
        // 0x2d7304: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7300) {
            ctx->pc = 0x2D7388u;
            goto label_2d7388;
        }
    }
    ctx->pc = 0x2D7308u;
label_2d7308:
    // 0x2d7308: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2d7308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x2d730c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d730cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d7310: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2d7310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2d7314: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2D7314u;
    {
        const bool branch_taken_0x2d7314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7314u;
        // 0x2d7318: 0x62200b  movn        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7314) {
            ctx->pc = 0x2D7388u;
            goto label_2d7388;
        }
    }
    ctx->pc = 0x2D731Cu;
label_2d731c:
    // 0x2d731c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d731cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d7320: 0xa23007  srav        $a2, $v0, $a1
    ctx->pc = 0x2d7320u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x2d7324: 0x861824  and         $v1, $a0, $a2
    ctx->pc = 0x2d7324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x2d7328: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7328u;
    {
        const bool branch_taken_0x2d7328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7328) {
            ctx->pc = 0x2D7338u;
            goto label_2d7338;
        }
    }
    ctx->pc = 0x2D7330u;
label_2d7330:
    // 0x2d7330: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7330u;
        // 0x2d7334: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7338u;
label_2d7338:
    // 0x2d7338: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x2d7338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x2d733c: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x2d733cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x2d7340: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d7340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7344: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2d7344u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d7348: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x2d7348u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2d734c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d734cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d7350: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2D7350u;
    {
        const bool branch_taken_0x2d7350 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d7350) {
            ctx->pc = 0x2D7388u;
            goto label_2d7388;
        }
    }
    ctx->pc = 0x2D7358u;
    // 0x2d7358: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D7358u;
    {
        const bool branch_taken_0x2d7358 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2D735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7358u;
        // 0x2d735c: 0x61027  nor         $v0, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7358) {
            ctx->pc = 0x2D7370u;
            goto label_2d7370;
        }
    }
    ctx->pc = 0x2D7360u;
    // 0x2d7360: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x2d7360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x2d7364: 0xa21007  srav        $v0, $v0, $a1
    ctx->pc = 0x2d7364u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x2d7368: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2d7368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d736c: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x2d736cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
label_2d7370:
    // 0x2d7370: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D7370u;
    {
        const bool branch_taken_0x2d7370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7370u;
        // 0x2d7374: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7370) {
            ctx->pc = 0x2D7388u;
            goto label_2d7388;
        }
    }
    ctx->pc = 0x2D7378u;
label_2d7378:
    // 0x2d7378: 0x14a2ffed  bne         $a1, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2D7378u;
    {
        const bool branch_taken_0x2d7378 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d7378) {
            ctx->pc = 0x2D7330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7330;
        }
    }
    ctx->pc = 0x2D7380u;
    // 0x2d7380: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7380u;
        // 0x2d7384: 0x460c6000  add.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7388u;
label_2d7388:
    // 0x2d7388: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2d7388u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d738c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D738Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D738Cu;
        // 0x2d7390: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D738Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7394u;
}
