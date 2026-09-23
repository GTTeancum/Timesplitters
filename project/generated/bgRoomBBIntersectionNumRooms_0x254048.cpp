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

// Function: bgRoomBBIntersectionNumRooms
// Address: 0x254048 - 0x254118
void bgRoomBBIntersectionNumRooms_0x254048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgRoomBBIntersectionNumRooms_0x254048");
#endif

    switch (ctx->pc) {
        case 0x254068u: goto label_254068;
        default: break;
    }

    ctx->pc = 0x254048u;

    // 0x254048: 0x8f87a264  lw          $a3, -0x5D9C($gp)
    ctx->pc = 0x254048u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x25404c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x25404cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254050: 0x18e0002f  blez        $a3, . + 4 + (0x2F << 2)
    ctx->pc = 0x254050u;
    {
        const bool branch_taken_0x254050 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x254054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254050u;
        // 0x254054: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254050) {
            ctx->pc = 0x254110u;
            goto label_254110;
        }
    }
    ctx->pc = 0x254058u;
    // 0x254058: 0x8f86a240  lw          $a2, -0x5DC0($gp)
    ctx->pc = 0x254058u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943296)));
    // 0x25405c: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x25405cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x254060: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x254060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x254064: 0x0  nop
    ctx->pc = 0x254064u;
    // NOP
label_254068:
    // 0x254068: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x254068u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25406c: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x25406cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x254070: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x254070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x254074: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x254074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254078: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x254078u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25407c: 0x0  nop
    ctx->pc = 0x25407cu;
    // NOP
    // 0x254080: 0x45030020  bc1tl       . + 4 + (0x20 << 2)
    ctx->pc = 0x254080u;
    {
        const bool branch_taken_0x254080 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x254080) {
            ctx->pc = 0x254084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254080u;
            // 0x254084: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254104u;
            goto label_254104;
        }
    }
    ctx->pc = 0x254088u;
    // 0x254088: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x254088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25408c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x25408cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254090: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x254090u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x254094: 0x0  nop
    ctx->pc = 0x254094u;
    // NOP
    // 0x254098: 0x4503001a  bc1tl       . + 4 + (0x1A << 2)
    ctx->pc = 0x254098u;
    {
        const bool branch_taken_0x254098 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x254098) {
            ctx->pc = 0x25409Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254098u;
            // 0x25409c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254104u;
            goto label_254104;
        }
    }
    ctx->pc = 0x2540A0u;
    // 0x2540a0: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2540a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2540a4: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x2540a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2540a8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2540a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2540ac: 0x0  nop
    ctx->pc = 0x2540acu;
    // NOP
    // 0x2540b0: 0x45030014  bc1tl       . + 4 + (0x14 << 2)
    ctx->pc = 0x2540B0u;
    {
        const bool branch_taken_0x2540b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2540b0) {
            ctx->pc = 0x2540B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2540B0u;
            // 0x2540b4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254104u;
            goto label_254104;
        }
    }
    ctx->pc = 0x2540B8u;
    // 0x2540b8: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x2540b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2540bc: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2540bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2540c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2540c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2540c4: 0x0  nop
    ctx->pc = 0x2540c4u;
    // NOP
    // 0x2540c8: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
    ctx->pc = 0x2540C8u;
    {
        const bool branch_taken_0x2540c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2540c8) {
            ctx->pc = 0x2540CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2540C8u;
            // 0x2540cc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254104u;
            goto label_254104;
        }
    }
    ctx->pc = 0x2540D0u;
    // 0x2540d0: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x2540d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2540d4: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x2540d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2540d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2540d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2540dc: 0x0  nop
    ctx->pc = 0x2540dcu;
    // NOP
    // 0x2540e0: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2540E0u;
    {
        const bool branch_taken_0x2540e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2540e0) {
            ctx->pc = 0x2540E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2540E0u;
            // 0x2540e4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254104u;
            goto label_254104;
        }
    }
    ctx->pc = 0x2540E8u;
    // 0x2540e8: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x2540e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2540ec: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2540ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2540f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2540f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2540f4: 0x0  nop
    ctx->pc = 0x2540f4u;
    // NOP
    // 0x2540f8: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2540F8u;
    {
        const bool branch_taken_0x2540f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2540f8) {
            ctx->pc = 0x2540FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2540F8u;
            // 0x2540fc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254100u;
            goto label_254100;
        }
    }
    ctx->pc = 0x254100u;
label_254100:
    // 0x254100: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x254100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_254104:
    // 0x254104: 0x67102a  slt         $v0, $v1, $a3
    ctx->pc = 0x254104u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x254108: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x254108u;
    {
        const bool branch_taken_0x254108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254108u;
        // 0x25410c: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254108) {
            ctx->pc = 0x254068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254068;
        }
    }
    ctx->pc = 0x254110u;
label_254110:
    // 0x254110: 0x3e00008  jr          $ra
    ctx->pc = 0x254110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254110u;
        // 0x254114: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254118u;
}
