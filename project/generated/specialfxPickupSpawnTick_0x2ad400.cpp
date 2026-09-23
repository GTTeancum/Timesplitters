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

// Function: specialfxPickupSpawnTick
// Address: 0x2ad400 - 0x2ad51c
void specialfxPickupSpawnTick_0x2ad400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialfxPickupSpawnTick_0x2ad400");
#endif

    switch (ctx->pc) {
        case 0x2ad480u: goto label_2ad480;
        case 0x2ad4a8u: goto label_2ad4a8;
        case 0x2ad4bcu: goto label_2ad4bc;
        case 0x2ad4d0u: goto label_2ad4d0;
        case 0x2ad4f8u: goto label_2ad4f8;
        default: break;
    }

    ctx->pc = 0x2ad400u;

    // 0x2ad400: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2ad400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2ad404: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2ad404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2ad408: 0xffb300b0  sd          $s3, 0xB0($sp)
    ctx->pc = 0x2ad408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 19));
    // 0x2ad40c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2ad40cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2ad410: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x2ad410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x2ad414: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ad414u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad418: 0x2629018  mult        $s2, $s3, $v0
    ctx->pc = 0x2ad418u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x2ad41c: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x2ad41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x2ad420: 0x2474c268  addiu       $s4, $v1, -0x3D98
    ctx->pc = 0x2ad420u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951528));
    // 0x2ad424: 0xffb10090  sd          $s1, 0x90($sp)
    ctx->pc = 0x2ad424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
    // 0x2ad428: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x2ad428u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2ad42c: 0x26820048  addiu       $v0, $s4, 0x48
    ctx->pc = 0x2ad42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
    // 0x2ad430: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x2ad430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x2ad434: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x2ad434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x2ad438: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x2ad438u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2ad43c: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x2ad43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ad440: 0xc7808f34  lwc1        $f0, -0x70CC($gp)
    ctx->pc = 0x2ad440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad444: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ad444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ad448: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2AD448u;
    {
        const bool branch_taken_0x2ad448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD448u;
        // 0x2ad44c: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad448) {
            ctx->pc = 0x2AD4D0u;
            goto label_2ad4d0;
        }
    }
    ctx->pc = 0x2AD450u;
    // 0x2ad450: 0x3c014416  lui         $at, 0x4416
    ctx->pc = 0x2ad450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17430 << 16));
    // 0x2ad454: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ad454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ad458: 0xc7818f38  lwc1        $f1, -0x70C8($gp)
    ctx->pc = 0x2ad458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ad45c: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x2ad45cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x2ad460: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2ad460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2ad464: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ad464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad468: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x2ad468u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2ad46c: 0x0  nop
    ctx->pc = 0x2ad46cu;
    // NOP
    // 0x2ad470: 0x0  nop
    ctx->pc = 0x2ad470u;
    // NOP
    // 0x2ad474: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x2ad474u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x2ad478: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x2AD478u;
    SET_GPR_U32(ctx, 31, 0x2AD480u);
    ctx->pc = 0x2AD47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD478u;
    // 0x2ad47c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x2AD478u, 0x2AD480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD480u;
label_2ad480:
    // 0x2ad480: 0xc78c8f3c  lwc1        $f12, -0x70C4($gp)
    ctx->pc = 0x2ad480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ad484: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x2ad484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ad488: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ad488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ad48c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ad48cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ad490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad494: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x2ad494u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x2ad498: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2ad498u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x2ad49c: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x2ad49cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2ad4a0: 0xc0ad3c8  jal         func_2B4F20
    ctx->pc = 0x2AD4A0u;
    SET_GPR_U32(ctx, 31, 0x2AD4A8u);
    ctx->pc = 0x2AD4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD4A0u;
    // 0x2ad4a4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4F20u, 0x2AD4A0u, 0x2AD4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD4A8u;
label_2ad4a8:
    // 0x2ad4a8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ad4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ad4ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ad4acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad4b0: 0x248403a0  addiu       $a0, $a0, 0x3A0
    ctx->pc = 0x2ad4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 928));
    // 0x2ad4b4: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2AD4B4u;
    SET_GPR_U32(ctx, 31, 0x2AD4BCu);
    ctx->pc = 0x2AD4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD4B4u;
    // 0x2ad4b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2AD4B4u, 0x2AD4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD4BCu;
label_2ad4bc:
    // 0x2ad4bc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ad4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ad4c0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2ad4c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad4c4: 0x248403a0  addiu       $a0, $a0, 0x3A0
    ctx->pc = 0x2ad4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 928));
    // 0x2ad4c8: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2AD4C8u;
    SET_GPR_U32(ctx, 31, 0x2AD4D0u);
    ctx->pc = 0x2AD4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD4C8u;
    // 0x2ad4cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2AD4C8u, 0x2AD4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD4D0u;
label_2ad4d0:
    // 0x2ad4d0: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x2ad4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x2ad4d4: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x2ad4d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x2ad4d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ad4d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ad4dc: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2ad4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad4e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ad4e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ad4e4: 0x0  nop
    ctx->pc = 0x2ad4e4u;
    // NOP
    // 0x2ad4e8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2AD4E8u;
    {
        const bool branch_taken_0x2ad4e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AD4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD4E8u;
        // 0x2ad4ec: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad4e8) {
            ctx->pc = 0x2AD4FCu;
            goto label_2ad4fc;
        }
    }
    ctx->pc = 0x2AD4F0u;
    // 0x2ad4f0: 0xc0aabb6  jal         func_2AAED8
    ctx->pc = 0x2AD4F0u;
    SET_GPR_U32(ctx, 31, 0x2AD4F8u);
    ctx->pc = 0x2AD4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD4F0u;
    // 0x2ad4f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAED8u, 0x2AD4F0u, 0x2AD4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD4F8u;
label_2ad4f8:
    // 0x2ad4f8: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x2ad4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_2ad4fc:
    // 0x2ad4fc: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x2ad4fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ad500: 0xdfb300b0  ld          $s3, 0xB0($sp)
    ctx->pc = 0x2ad500u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ad504: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x2ad504u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ad508: 0xdfb10090  ld          $s1, 0x90($sp)
    ctx->pc = 0x2ad508u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ad50c: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x2ad50cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ad510: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x2ad510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ad514: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD514u;
        // 0x2ad518: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD51Cu;
}
