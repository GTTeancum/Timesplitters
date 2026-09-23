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

// Function: closestpad
// Address: 0x266b90 - 0x266c54
void closestpad_0x266b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("closestpad_0x266b90");
#endif

    switch (ctx->pc) {
        case 0x266be0u: goto label_266be0;
        default: break;
    }

    ctx->pc = 0x266b90u;

    // 0x266b90: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x266b90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x266b94: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x266b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x266b98: 0xc446eb30  lwc1        $f6, -0x14D0($v0)
    ctx->pc = 0x266b98u;
    { uint32_t bits = FAST_READ32(0x3AEB30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x266b9c: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x266b9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x266ba0: 0x0  nop
    ctx->pc = 0x266ba0u;
    // NOP
    // 0x266ba4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x266BA4u;
    {
        const bool branch_taken_0x266ba4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x266BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266BA4u;
        // 0x266ba8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266ba4) {
            ctx->pc = 0x266BB4u;
            goto label_266bb4;
        }
    }
    ctx->pc = 0x266BACu;
    // 0x266bac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x266BACu;
    {
        const bool branch_taken_0x266bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266BACu;
        // 0x266bb0: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266bac) {
            ctx->pc = 0x266BC0u;
            goto label_266bc0;
        }
    }
    ctx->pc = 0x266BB4u;
label_266bb4:
    // 0x266bb4: 0x460c6042  mul.s       $f1, $f12, $f12
    ctx->pc = 0x266bb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x266bb8: 0xc78083d0  lwc1        $f0, -0x7C30($gp)
    ctx->pc = 0x266bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266bbc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x266bbcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_266bc0:
    // 0x266bc0: 0x8f86a348  lw          $a2, -0x5CB8($gp)
    ctx->pc = 0x266bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
    // 0x266bc4: 0x18c00021  blez        $a2, . + 4 + (0x21 << 2)
    ctx->pc = 0x266BC4u;
    {
        const bool branch_taken_0x266bc4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x266BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266BC4u;
        // 0x266bc8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266bc4) {
            ctx->pc = 0x266C4Cu;
            goto label_266c4c;
        }
    }
    ctx->pc = 0x266BCCu;
    // 0x266bcc: 0xc4850008  lwc1        $f5, 0x8($a0)
    ctx->pc = 0x266bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x266bd0: 0x8f85a2ec  lw          $a1, -0x5D14($gp)
    ctx->pc = 0x266bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x266bd4: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x266bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x266bd8: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x266bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x266bdc: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x266bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_266be0:
    // 0x266be0: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x266be0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x266be4: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x266be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x266be8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x266be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266bec: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x266becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x266bf0: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x266bf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x266bf4: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x266bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x266bf8: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x266bf8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x266bfc: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x266bfcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x266c00: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x266c00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x266c04: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x266c04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x266c08: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x266c08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x266c0c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x266c0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x266c10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x266c10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x266c14: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x266c14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x266c18: 0x0  nop
    ctx->pc = 0x266c18u;
    // NOP
    // 0x266c1c: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x266C1Cu;
    {
        const bool branch_taken_0x266c1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x266c1c) {
            ctx->pc = 0x266C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266C1Cu;
            // 0x266c20: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266C40u;
            goto label_266c40;
        }
    }
    ctx->pc = 0x266C24u;
    // 0x266c24: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x266c24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x266c28: 0x0  nop
    ctx->pc = 0x266c28u;
    // NOP
    // 0x266c2c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x266C2Cu;
    {
        const bool branch_taken_0x266c2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x266c2c) {
            ctx->pc = 0x266C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266C2Cu;
            // 0x266c30: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266C40u;
            goto label_266c40;
        }
    }
    ctx->pc = 0x266C34u;
    // 0x266c34: 0x46000186  mov.s       $f6, $f0
    ctx->pc = 0x266c34u;
    ctx->f[6] = FPU_MOV_S(ctx->f[0]);
    // 0x266c38: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x266c38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266c3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x266c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_266c40:
    // 0x266c40: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x266c40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x266c44: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x266C44u;
    {
        const bool branch_taken_0x266c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266C44u;
        // 0x266c48: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266c44) {
            ctx->pc = 0x266BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266be0;
        }
    }
    ctx->pc = 0x266C4Cu;
label_266c4c:
    // 0x266c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x266C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266C4Cu;
        // 0x266c50: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266C54u;
}
