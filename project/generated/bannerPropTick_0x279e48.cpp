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

// Function: bannerPropTick
// Address: 0x279e48 - 0x279f6c
void bannerPropTick_0x279e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bannerPropTick_0x279e48");
#endif

    switch (ctx->pc) {
        case 0x279e94u: goto label_279e94;
        case 0x279ef0u: goto label_279ef0;
        case 0x279f14u: goto label_279f14;
        case 0x279f54u: goto label_279f54;
        default: break;
    }

    ctx->pc = 0x279e48u;

    // 0x279e48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x279e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x279e4c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x279e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x279e50: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x279e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x279e54: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x279e54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279e58: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x279e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x279e5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x279e5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279e60: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x279e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x279e64: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x279e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x279e68: 0x8e320160  lw          $s2, 0x160($s1)
    ctx->pc = 0x279e68u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x279e6c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x279e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x279e70: 0x244985b8  addiu       $t1, $v0, -0x7A48
    ctx->pc = 0x279e70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935992));
    // 0x279e74: 0x69230007  ldl         $v1, 0x7($t1)
    ctx->pc = 0x279e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x279e78: 0x6d230000  ldr         $v1, 0x0($t1)
    ctx->pc = 0x279e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x279e7c: 0x8d270008  lw          $a3, 0x8($t1)
    ctx->pc = 0x279e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3A85C0u));
    // 0x279e80: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x279e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x279e84: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x279e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x279e88: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x279e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x279e8c: 0xc0aa122  jal         func_2A8488
    ctx->pc = 0x279E8Cu;
    SET_GPR_U32(ctx, 31, 0x279E94u);
    ctx->pc = 0x279E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279E8Cu;
    // 0x279e90: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8488u, 0x279E8Cu, 0x279E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279E94u;
label_279e94:
    // 0x279e94: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x279e94u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x279e98: 0xc621004c  lwc1        $f1, 0x4C($s1)
    ctx->pc = 0x279e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x279e9c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x279e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x279ea0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x279ea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x279ea4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x279ea4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x279ea8: 0x0  nop
    ctx->pc = 0x279ea8u;
    // NOP
    // 0x279eac: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x279EACu;
    {
        const bool branch_taken_0x279eac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x279EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279EACu;
        // 0x279eb0: 0xc6430014  lwc1        $f3, 0x14($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x279eac) {
            ctx->pc = 0x279ECCu;
            goto label_279ecc;
        }
    }
    ctx->pc = 0x279EB4u;
    // 0x279eb4: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x279eb4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x279eb8: 0xc78186e0  lwc1        $f1, -0x7920($gp)
    ctx->pc = 0x279eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x279ebc: 0xc782b468  lwc1        $f2, -0x4B98($gp)
    ctx->pc = 0x279ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x279ec0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x279ec0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x279ec4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x279EC4u;
    {
        const bool branch_taken_0x279ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279EC4u;
        // 0x279ec8: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x279ec4) {
            ctx->pc = 0x279EDCu;
            goto label_279edc;
        }
    }
    ctx->pc = 0x279ECCu;
label_279ecc:
    // 0x279ecc: 0xc78086e4  lwc1        $f0, -0x791C($gp)
    ctx->pc = 0x279eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279ed0: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x279ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x279ed4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x279ed4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x279ed8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x279ed8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_279edc:
    // 0x279edc: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x279edcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x279ee0: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x279ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x279ee4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x279ee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279ee8: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x279EE8u;
    {
        const bool branch_taken_0x279ee8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x279EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279EE8u;
        // 0x279eec: 0xe6400014  swc1        $f0, 0x14($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x279ee8) {
            ctx->pc = 0x279F24u;
            goto label_279f24;
        }
    }
    ctx->pc = 0x279EF0u;
label_279ef0:
    // 0x279ef0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x279ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x279ef4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x279ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x279ef8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x279ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279efc: 0xc78d86e8  lwc1        $f13, -0x7918($gp)
    ctx->pc = 0x279efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x279f00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x279f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279f04: 0x3c01428c  lui         $at, 0x428C
    ctx->pc = 0x279f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17036 << 16));
    // 0x279f08: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x279f08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x279f0c: 0xc09e88a  jal         func_27A228
    ctx->pc = 0x279F0Cu;
    SET_GPR_U32(ctx, 31, 0x279F14u);
    ctx->pc = 0x279F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279F0Cu;
    // 0x279f10: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A228u, 0x279F0Cu, 0x279F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279F14u;
label_279f14:
    // 0x279f14: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x279f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x279f18: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x279f18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x279f1c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x279F1Cu;
    {
        const bool branch_taken_0x279f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x279f1c) {
            ctx->pc = 0x279EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279ef0;
        }
    }
    ctx->pc = 0x279F24u;
label_279f24:
    // 0x279f24: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x279f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x279f28: 0xc78086ec  lwc1        $f0, -0x7914($gp)
    ctx->pc = 0x279f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279f2c: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x279f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x279f30: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x279f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x279f34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x279f34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x279f38: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x279f38u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x279f3c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x279f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x279f40: 0x0  nop
    ctx->pc = 0x279f40u;
    // NOP
    // 0x279f44: 0x0  nop
    ctx->pc = 0x279f44u;
    // NOP
    // 0x279f48: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x279f48u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x279f4c: 0xc0ad27e  jal         func_2B49F8
    ctx->pc = 0x279F4Cu;
    SET_GPR_U32(ctx, 31, 0x279F54u);
    ctx->pc = 0x279F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279F4Cu;
    // 0x279f50: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B49F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B49F8u, 0x279F4Cu, 0x279F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279F54u;
label_279f54:
    // 0x279f54: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x279f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x279f58: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x279f58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x279f5c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x279f5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279f60: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x279f60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279f64: 0x3e00008  jr          $ra
    ctx->pc = 0x279F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279F64u;
        // 0x279f68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279F6Cu;
}
