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

// Function: r_addroute
// Address: 0x2665c8 - 0x266680
void r_addroute_0x2665c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("r_addroute_0x2665c8");
#endif

    switch (ctx->pc) {
        case 0x266630u: goto label_266630;
        default: break;
    }

    ctx->pc = 0x2665c8u;

    // 0x2665c8: 0x8f89b8f0  lw          $t1, -0x4710($gp)
    ctx->pc = 0x2665c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949104)));
    // 0x2665cc: 0x3c0201fd  lui         $v0, 0x1FD
    ctx->pc = 0x2665ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)509 << 16));
    // 0x2665d0: 0x2443a310  addiu       $v1, $v0, -0x5CF0
    ctx->pc = 0x2665d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943504));
    // 0x2665d4: 0x8f87b8e0  lw          $a3, -0x4720($gp)
    ctx->pc = 0x2665d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949088)));
    // 0x2665d8: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x2665d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x2665dc: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x2665dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2665e0: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x2665e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2665e4: 0x4e10005  bgez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2665E4u;
    {
        const bool branch_taken_0x2665e4 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x2665E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2665E4u;
        // 0x2665e8: 0xaf82b8f0  sw          $v0, -0x4710($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2665e4) {
            ctx->pc = 0x2665FCu;
            goto label_2665fc;
        }
    }
    ctx->pc = 0x2665ECu;
    // 0x2665ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2665ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2665f0: 0xaf89b8e0  sw          $t1, -0x4720($gp)
    ctx->pc = 0x2665f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949088), GPR_U32(ctx, 9));
    // 0x2665f4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2665F4u;
    {
        const bool branch_taken_0x2665f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2665F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2665F4u;
        // 0x2665f8: 0xa5020000  sh          $v0, 0x0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2665f4) {
            ctx->pc = 0x266668u;
            goto label_266668;
        }
    }
    ctx->pc = 0x2665FCu;
label_2665fc:
    // 0x2665fc: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x2665fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x266600: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x266600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266604: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x266604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266608: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x266608u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26660c: 0x0  nop
    ctx->pc = 0x26660cu;
    // NOP
    // 0x266610: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x266610u;
    {
        const bool branch_taken_0x266610 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x266614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266610u;
        // 0x266614: 0x60582d  daddu       $t3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266610) {
            ctx->pc = 0x266624u;
            goto label_266624;
        }
    }
    ctx->pc = 0x266618u;
    // 0x266618: 0xaf89b8e0  sw          $t1, -0x4720($gp)
    ctx->pc = 0x266618u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949088), GPR_U32(ctx, 9));
    // 0x26661c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x26661Cu;
    {
        const bool branch_taken_0x26661c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26661Cu;
        // 0x266620: 0xa5070000  sh          $a3, 0x0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26661c) {
            ctx->pc = 0x266668u;
            goto label_266668;
        }
    }
    ctx->pc = 0x266624u;
label_266624:
    // 0x266624: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x266624u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266628: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x266628u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26662c: 0x0  nop
    ctx->pc = 0x26662cu;
    // NOP
label_266630:
    // 0x266630: 0x84670000  lh          $a3, 0x0($v1)
    ctx->pc = 0x266630u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x266634: 0x4e20008  bltzl       $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x266634u;
    {
        const bool branch_taken_0x266634 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x266634) {
            ctx->pc = 0x266638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266634u;
            // 0x266638: 0xa4690000  sh          $t1, 0x0($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266658u;
            goto label_266658;
        }
    }
    ctx->pc = 0x26663Cu;
    // 0x26663c: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x26663cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x266640: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x266640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x266644: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x266644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266648: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x266648u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26664c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x26664Cu;
    {
        const bool branch_taken_0x26664c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26664c) {
            ctx->pc = 0x266660u;
            goto label_266660;
        }
    }
    ctx->pc = 0x266654u;
    // 0x266654: 0xa4690000  sh          $t1, 0x0($v1)
    ctx->pc = 0x266654u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 9));
label_266658:
    // 0x266658: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x266658u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26665c: 0xa5070000  sh          $a3, 0x0($t0)
    ctx->pc = 0x26665cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 7));
label_266660:
    // 0x266660: 0x1140fff3  beqz        $t2, . + 4 + (-0xD << 2)
    ctx->pc = 0x266660u;
    {
        const bool branch_taken_0x266660 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x266664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266660u;
        // 0x266664: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266660) {
            ctx->pc = 0x266630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266630;
        }
    }
    ctx->pc = 0x266668u;
label_266668:
    // 0x266668: 0xe50d000c  swc1        $f13, 0xC($t0)
    ctx->pc = 0x266668u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x26666c: 0xa5040002  sh          $a0, 0x2($t0)
    ctx->pc = 0x26666cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x266670: 0xa5050004  sh          $a1, 0x4($t0)
    ctx->pc = 0x266670u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x266674: 0xa5060006  sh          $a2, 0x6($t0)
    ctx->pc = 0x266674u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 6), (uint16_t)GPR_U32(ctx, 6));
    // 0x266678: 0x3e00008  jr          $ra
    ctx->pc = 0x266678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26667Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266678u;
        // 0x26667c: 0xe50c0008  swc1        $f12, 0x8($t0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266680u;
}
