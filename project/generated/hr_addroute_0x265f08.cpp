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

// Function: hr_addroute
// Address: 0x265f08 - 0x265fc0
void hr_addroute_0x265f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hr_addroute_0x265f08");
#endif

    switch (ctx->pc) {
        case 0x265f70u: goto label_265f70;
        default: break;
    }

    ctx->pc = 0x265f08u;

    // 0x265f08: 0x8f89b8d0  lw          $t1, -0x4730($gp)
    ctx->pc = 0x265f08u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949072)));
    // 0x265f0c: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x265f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x265f10: 0x24436490  addiu       $v1, $v0, 0x6490
    ctx->pc = 0x265f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 25744));
    // 0x265f14: 0x8f87b8c0  lw          $a3, -0x4740($gp)
    ctx->pc = 0x265f14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949056)));
    // 0x265f18: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x265f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x265f1c: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x265f1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x265f20: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x265f20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x265f24: 0x4e10005  bgez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x265F24u;
    {
        const bool branch_taken_0x265f24 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x265F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265F24u;
        // 0x265f28: 0xaf82b8d0  sw          $v0, -0x4730($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265f24) {
            ctx->pc = 0x265F3Cu;
            goto label_265f3c;
        }
    }
    ctx->pc = 0x265F2Cu;
    // 0x265f2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x265f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265f30: 0xaf89b8c0  sw          $t1, -0x4740($gp)
    ctx->pc = 0x265f30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949056), GPR_U32(ctx, 9));
    // 0x265f34: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x265F34u;
    {
        const bool branch_taken_0x265f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265F34u;
        // 0x265f38: 0xa5020000  sh          $v0, 0x0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265f34) {
            ctx->pc = 0x265FA8u;
            goto label_265fa8;
        }
    }
    ctx->pc = 0x265F3Cu;
label_265f3c:
    // 0x265f3c: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x265f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x265f40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x265f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x265f44: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x265f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265f48: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x265f48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x265f4c: 0x0  nop
    ctx->pc = 0x265f4cu;
    // NOP
    // 0x265f50: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x265F50u;
    {
        const bool branch_taken_0x265f50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x265F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265F50u;
        // 0x265f54: 0x60582d  daddu       $t3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265f50) {
            ctx->pc = 0x265F64u;
            goto label_265f64;
        }
    }
    ctx->pc = 0x265F58u;
    // 0x265f58: 0xaf89b8c0  sw          $t1, -0x4740($gp)
    ctx->pc = 0x265f58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949056), GPR_U32(ctx, 9));
    // 0x265f5c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x265F5Cu;
    {
        const bool branch_taken_0x265f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265F5Cu;
        // 0x265f60: 0xa5070000  sh          $a3, 0x0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265f5c) {
            ctx->pc = 0x265FA8u;
            goto label_265fa8;
        }
    }
    ctx->pc = 0x265F64u;
label_265f64:
    // 0x265f64: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x265f64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265f68: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x265f68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265f6c: 0x0  nop
    ctx->pc = 0x265f6cu;
    // NOP
label_265f70:
    // 0x265f70: 0x84670000  lh          $a3, 0x0($v1)
    ctx->pc = 0x265f70u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x265f74: 0x4e20008  bltzl       $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x265F74u;
    {
        const bool branch_taken_0x265f74 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x265f74) {
            ctx->pc = 0x265F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265F74u;
            // 0x265f78: 0xa4690000  sh          $t1, 0x0($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265F98u;
            goto label_265f98;
        }
    }
    ctx->pc = 0x265F7Cu;
    // 0x265f7c: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x265f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x265f80: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x265f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x265f84: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x265f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265f88: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x265f88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x265f8c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x265F8Cu;
    {
        const bool branch_taken_0x265f8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x265f8c) {
            ctx->pc = 0x265FA0u;
            goto label_265fa0;
        }
    }
    ctx->pc = 0x265F94u;
    // 0x265f94: 0xa4690000  sh          $t1, 0x0($v1)
    ctx->pc = 0x265f94u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 9));
label_265f98:
    // 0x265f98: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x265f98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265f9c: 0xa5070000  sh          $a3, 0x0($t0)
    ctx->pc = 0x265f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 7));
label_265fa0:
    // 0x265fa0: 0x1140fff3  beqz        $t2, . + 4 + (-0xD << 2)
    ctx->pc = 0x265FA0u;
    {
        const bool branch_taken_0x265fa0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x265FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265FA0u;
        // 0x265fa4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265fa0) {
            ctx->pc = 0x265F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265f70;
        }
    }
    ctx->pc = 0x265FA8u;
label_265fa8:
    // 0x265fa8: 0xe50d000c  swc1        $f13, 0xC($t0)
    ctx->pc = 0x265fa8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x265fac: 0xa5040002  sh          $a0, 0x2($t0)
    ctx->pc = 0x265facu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x265fb0: 0xa5050004  sh          $a1, 0x4($t0)
    ctx->pc = 0x265fb0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x265fb4: 0xa5060006  sh          $a2, 0x6($t0)
    ctx->pc = 0x265fb4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 6), (uint16_t)GPR_U32(ctx, 6));
    // 0x265fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x265FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265FB8u;
        // 0x265fbc: 0xe50c0008  swc1        $f12, 0x8($t0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265FC0u;
}
