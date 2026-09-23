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

// Function: suggestTarget
// Address: 0x2c5e68 - 0x2c6014
void suggestTarget_0x2c5e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("suggestTarget_0x2c5e68");
#endif

    switch (ctx->pc) {
        case 0x2c5ed0u: goto label_2c5ed0;
        case 0x2c5f90u: goto label_2c5f90;
        default: break;
    }

    ctx->pc = 0x2c5e68u;

    // 0x2c5e68: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2c5e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2c5e6c: 0x8c43c4f0  lw          $v1, -0x3B10($v0)
    ctx->pc = 0x2c5e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x2c5e70: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2c5e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c5e74: 0x14620065  bne         $v1, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x2C5E74u;
    {
        const bool branch_taken_0x2c5e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C5E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5E74u;
        // 0x2c5e78: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5e74) {
            ctx->pc = 0x2C600Cu;
            goto label_2c600c;
        }
    }
    ctx->pc = 0x2C5E7Cu;
    // 0x2c5e7c: 0x24c2fffd  addiu       $v0, $a2, -0x3
    ctx->pc = 0x2c5e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
    // 0x2c5e80: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2c5e80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c5e84: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5E84u;
    {
        const bool branch_taken_0x2c5e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5E84u;
        // 0x2c5e88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5e84) {
            ctx->pc = 0x2C5E94u;
            goto label_2c5e94;
        }
    }
    ctx->pc = 0x2C5E8Cu;
    // 0x2c5e8c: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5E8Cu;
    {
        const bool branch_taken_0x2c5e8c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C5E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5E8Cu;
        // 0x2c5e90: 0x8f89b230  lw          $t1, -0x4DD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5e8c) {
            ctx->pc = 0x2C5E9Cu;
            goto label_2c5e9c;
        }
    }
    ctx->pc = 0x2C5E94u;
label_2c5e94:
    // 0x2c5e94: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5E94u;
        // 0x2c5e98: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5E9Cu;
label_2c5e9c:
    // 0x2c5e9c: 0x8d220180  lw          $v0, 0x180($t1)
    ctx->pc = 0x2c5e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 384)));
    // 0x2c5ea0: 0x14a2005a  bne         $a1, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x2C5EA0u;
    {
        const bool branch_taken_0x2c5ea0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C5EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5EA0u;
        // 0x2c5ea4: 0x8f869f74  lw          $a2, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5ea0) {
            ctx->pc = 0x2C600Cu;
            goto label_2c600c;
        }
    }
    ctx->pc = 0x2C5EA8u;
    // 0x2c5ea8: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x2c5ea8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c5eac: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x2C5EACu;
    {
        const bool branch_taken_0x2c5eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5EACu;
        // 0x2c5eb0: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5eac) {
            ctx->pc = 0x2C600Cu;
            goto label_2c600c;
        }
    }
    ctx->pc = 0x2C5EB4u;
    // 0x2c5eb4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2c5eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c5eb8: 0xc447fd7c  lwc1        $f7, -0x284($v0)
    ctx->pc = 0x2c5eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c5ebc: 0x18c0002a  blez        $a2, . + 4 + (0x2A << 2)
    ctx->pc = 0x2C5EBCu;
    {
        const bool branch_taken_0x2c5ebc = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2C5EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5EBCu;
        // 0x2c5ec0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5ebc) {
            ctx->pc = 0x2C5F68u;
            goto label_2c5f68;
        }
    }
    ctx->pc = 0x2C5EC4u;
    // 0x2c5ec4: 0x8f8ab238  lw          $t2, -0x4DC8($gp)
    ctx->pc = 0x2c5ec4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2c5ec8: 0x2402071c  addiu       $v0, $zero, 0x71C
    ctx->pc = 0x2c5ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
    // 0x2c5ecc: 0x0  nop
    ctx->pc = 0x2c5eccu;
    // NOP
label_2c5ed0:
    // 0x2c5ed0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2c5ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c5ed4: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x2c5ed4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c5ed8: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x2c5ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2c5edc: 0x8c430128  lw          $v1, 0x128($v0)
    ctx->pc = 0x2c5edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
    // 0x2c5ee0: 0x1064001b  beq         $v1, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C5EE0u;
    {
        const bool branch_taken_0x2c5ee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2C5EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5EE0u;
        // 0x2c5ee4: 0x24021210  addiu       $v0, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5ee0) {
            ctx->pc = 0x2C5F50u;
            goto label_2c5f50;
        }
    }
    ctx->pc = 0x2C5EE8u;
    // 0x2c5ee8: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x2c5ee8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c5eec: 0x6a1021  addu        $v0, $v1, $t2
    ctx->pc = 0x2c5eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2c5ef0: 0x8c4301e4  lw          $v1, 0x1E4($v0)
    ctx->pc = 0x2c5ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 484)));
    // 0x2c5ef4: 0x14600043  bnez        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x2C5EF4u;
    {
        const bool branch_taken_0x2c5ef4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5ef4) {
            ctx->pc = 0x2C6004u;
            goto label_2c6004;
        }
    }
    ctx->pc = 0x2C5EFCu;
    // 0x2c5efc: 0x8c420bcc  lw          $v0, 0xBCC($v0)
    ctx->pc = 0x2c5efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3020)));
    // 0x2c5f00: 0xc4e60030  lwc1        $f6, 0x30($a3)
    ctx->pc = 0x2c5f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c5f04: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x2c5f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5f08: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2c5f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5f0c: 0xc4e40034  lwc1        $f4, 0x34($a3)
    ctx->pc = 0x2c5f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c5f10: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x2c5f10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x2c5f14: 0xc4420038  lwc1        $f2, 0x38($v0)
    ctx->pc = 0x2c5f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c5f18: 0x460408c1  sub.s       $f3, $f1, $f4
    ctx->pc = 0x2c5f18u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2c5f1c: 0xc4e50038  lwc1        $f5, 0x38($a3)
    ctx->pc = 0x2c5f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c5f20: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c5f20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c5f24: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x2c5f24u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2c5f28: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x2c5f28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2c5f2c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c5f2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c5f30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c5f30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c5f34: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c5f34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c5f38: 0x46070034  c.lt.s      $f0, $f7
    ctx->pc = 0x2c5f38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c5f3c: 0x0  nop
    ctx->pc = 0x2c5f3cu;
    // NOP
    // 0x2c5f40: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5F40u;
    {
        const bool branch_taken_0x2c5f40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c5f40) {
            ctx->pc = 0x2C5F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5F40u;
            // 0x2c5f44: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5F54u;
            goto label_2c5f54;
        }
    }
    ctx->pc = 0x2C5F48u;
    // 0x2c5f48: 0x460001c6  mov.s       $f7, $f0
    ctx->pc = 0x2c5f48u;
    ctx->f[7] = FPU_MOV_S(ctx->f[0]);
    // 0x2c5f4c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2c5f4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c5f50:
    // 0x2c5f50: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2c5f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2c5f54:
    // 0x2c5f54: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x2c5f54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2c5f58: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x2C5F58u;
    {
        const bool branch_taken_0x2c5f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5F58u;
        // 0x2c5f5c: 0x2402071c  addiu       $v0, $zero, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5f58) {
            ctx->pc = 0x2C5ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5ed0;
        }
    }
    ctx->pc = 0x2C5F60u;
    // 0x2c5f60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5F60u;
    {
        const bool branch_taken_0x2c5f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5F60u;
        // 0x2c5f64: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5f60) {
            ctx->pc = 0x2C5F70u;
            goto label_2c5f70;
        }
    }
    ctx->pc = 0x2C5F68u;
label_2c5f68:
    // 0x2c5f68: 0x8f8ab238  lw          $t2, -0x4DC8($gp)
    ctx->pc = 0x2c5f68u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2c5f6c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c5f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c5f70:
    // 0x2c5f70: 0x15020020  bne         $t0, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C5F70u;
    {
        const bool branch_taken_0x2c5f70 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C5F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5F70u;
        // 0x2c5f74: 0x24031210  addiu       $v1, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5f70) {
            ctx->pc = 0x2C5FF4u;
            goto label_2c5ff4;
        }
    }
    ctx->pc = 0x2C5F78u;
    // 0x2c5f78: 0x18c0001e  blez        $a2, . + 4 + (0x1E << 2)
    ctx->pc = 0x2C5F78u;
    {
        const bool branch_taken_0x2c5f78 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2C5F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5F78u;
        // 0x2c5f7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5f78) {
            ctx->pc = 0x2C5FF4u;
            goto label_2c5ff4;
        }
    }
    ctx->pc = 0x2C5F80u;
    // 0x2c5f80: 0xc4e50038  lwc1        $f5, 0x38($a3)
    ctx->pc = 0x2c5f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c5f84: 0xc4e60030  lwc1        $f6, 0x30($a3)
    ctx->pc = 0x2c5f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c5f88: 0xc4e40034  lwc1        $f4, 0x34($a3)
    ctx->pc = 0x2c5f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c5f8c: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x2c5f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
label_2c5f90:
    // 0x2c5f90: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x2c5f90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c5f94: 0x6a1021  addu        $v0, $v1, $t2
    ctx->pc = 0x2c5f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2c5f98: 0x8c430bcc  lw          $v1, 0xBCC($v0)
    ctx->pc = 0x2c5f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3020)));
    // 0x2c5f9c: 0xc4620034  lwc1        $f2, 0x34($v1)
    ctx->pc = 0x2c5f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c5fa0: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x2c5fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5fa4: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x2c5fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5fa8: 0x460410c1  sub.s       $f3, $f2, $f4
    ctx->pc = 0x2c5fa8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2c5fac: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x2c5facu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x2c5fb0: 0x46050881  sub.s       $f2, $f1, $f5
    ctx->pc = 0x2c5fb0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x2c5fb4: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x2c5fb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2c5fb8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c5fb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c5fbc: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c5fbcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c5fc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c5fc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c5fc4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c5fc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c5fc8: 0x46070034  c.lt.s      $f0, $f7
    ctx->pc = 0x2c5fc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c5fcc: 0x0  nop
    ctx->pc = 0x2c5fccu;
    // NOP
    // 0x2c5fd0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5FD0u;
    {
        const bool branch_taken_0x2c5fd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c5fd0) {
            ctx->pc = 0x2C5FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5FD0u;
            // 0x2c5fd4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5FE4u;
            goto label_2c5fe4;
        }
    }
    ctx->pc = 0x2C5FD8u;
    // 0x2c5fd8: 0x460001c6  mov.s       $f7, $f0
    ctx->pc = 0x2c5fd8u;
    ctx->f[7] = FPU_MOV_S(ctx->f[0]);
    // 0x2c5fdc: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2c5fdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5fe0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2c5fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2c5fe4:
    // 0x2c5fe4: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x2c5fe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2c5fe8: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2C5FE8u;
    {
        const bool branch_taken_0x2c5fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5fe8) {
            ctx->pc = 0x2C5FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5FE8u;
            // 0x2c5fec: 0x24021210  addiu       $v0, $zero, 0x1210 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5f90;
        }
    }
    ctx->pc = 0x2C5FF0u;
    // 0x2c5ff0: 0x24031210  addiu       $v1, $zero, 0x1210
    ctx->pc = 0x2c5ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
label_2c5ff4:
    // 0x2c5ff4: 0x1031018  mult        $v0, $t0, $v1
    ctx->pc = 0x2c5ff4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c5ff8: 0x4a1821  addu        $v1, $v0, $t2
    ctx->pc = 0x2c5ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2c5ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5FFCu;
        // 0x2c6000: 0x8c620bcc  lw          $v0, 0xBCC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3020)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6004u;
label_2c6004:
    // 0x2c6004: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6004u;
        // 0x2c6008: 0x8c420bcc  lw          $v0, 0xBCC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3020)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C600Cu;
label_2c600c:
    // 0x2c600c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C600Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C600Cu;
        // 0x2c6010: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C600Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6014u;
}
