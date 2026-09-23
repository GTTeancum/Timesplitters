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

// Function: specialfxPlanetSpawnGlowTick
// Address: 0x2acac0 - 0x2acb78
void specialfxPlanetSpawnGlowTick_0x2acac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialfxPlanetSpawnGlowTick_0x2acac0");
#endif

    switch (ctx->pc) {
        case 0x2acb1cu: goto label_2acb1c;
        default: break;
    }

    ctx->pc = 0x2acac0u;

    // 0x2acac0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2acac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2acac4: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2acac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2acac8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2acac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2acacc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2acaccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acad0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2acad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2acad4: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x2acad4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2acad8: 0x3c120037  lui         $s2, 0x37
    ctx->pc = 0x2acad8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)55 << 16));
    // 0x2acadc: 0x2645c268  addiu       $a1, $s2, -0x3D98
    ctx->pc = 0x2acadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294951528));
    // 0x2acae0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2acae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2acae4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2acae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2acae8: 0x24a20038  addiu       $v0, $a1, 0x38
    ctx->pc = 0x2acae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 56));
    // 0x2acaec: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x2acaecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2acaf0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2acaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2acaf4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2ACAF4u;
    {
        const bool branch_taken_0x2acaf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACAF4u;
        // 0x2acaf8: 0xa31021  addu        $v0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acaf4) {
            ctx->pc = 0x2ACB20u;
            goto label_2acb20;
        }
    }
    ctx->pc = 0x2ACAFCu;
    // 0x2acafc: 0xc7818f10  lwc1        $f1, -0x70F0($gp)
    ctx->pc = 0x2acafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2acb00: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2acb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acb04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2acb04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2acb08: 0x0  nop
    ctx->pc = 0x2acb08u;
    // NOP
    // 0x2acb0c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2ACB0Cu;
    {
        const bool branch_taken_0x2acb0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ACB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACB0Cu;
        // 0x2acb10: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acb0c) {
            ctx->pc = 0x2ACB24u;
            goto label_2acb24;
        }
    }
    ctx->pc = 0x2ACB14u;
    // 0x2acb14: 0xc09e0f0  jal         func_2783C0
    ctx->pc = 0x2ACB14u;
    SET_GPR_U32(ctx, 31, 0x2ACB1Cu);
    ctx->pc = 0x2783C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2783C0u, 0x2ACB14u, 0x2ACB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACB1Cu;
label_2acb1c:
    // 0x2acb1c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2acb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2acb20:
    // 0x2acb20: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2acb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_2acb24:
    // 0x2acb24: 0x2643c268  addiu       $v1, $s2, -0x3D98
    ctx->pc = 0x2acb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294951528));
    // 0x2acb28: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x2acb28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2acb2c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2acb2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2acb30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2acb30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2acb34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2acb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2acb38: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x2acb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acb3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2acb3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2acb40: 0x0  nop
    ctx->pc = 0x2acb40u;
    // NOP
    // 0x2acb44: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2ACB44u;
    {
        const bool branch_taken_0x2acb44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ACB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACB44u;
        // 0x2acb48: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acb44) {
            ctx->pc = 0x2ACB64u;
            goto label_2acb64;
        }
    }
    ctx->pc = 0x2ACB4Cu;
    // 0x2acb4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2acb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acb50: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2acb50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2acb54: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2acb54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2acb58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2acb58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2acb5c: 0x80aabb6  j           func_2AAED8
    ctx->pc = 0x2ACB5Cu;
    ctx->pc = 0x2ACB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACB5Cu;
    // 0x2acb60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAED8u;
    specialfxFree_0x2aaed8(rdram, ctx, runtime); return;
    ctx->pc = 0x2ACB64u;
label_2acb64:
    // 0x2acb64: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2acb64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2acb68: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2acb68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2acb6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2acb6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2acb70: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACB70u;
        // 0x2acb74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACB70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACB78u;
}
