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

// Function: pubsignPropTick
// Address: 0x279bf0 - 0x279cf4
void pubsignPropTick_0x279bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pubsignPropTick_0x279bf0");
#endif

    switch (ctx->pc) {
        case 0x279c3cu: goto label_279c3c;
        case 0x279c4cu: goto label_279c4c;
        case 0x279c78u: goto label_279c78;
        case 0x279c98u: goto label_279c98;
        case 0x279cdcu: goto label_279cdc;
        default: break;
    }

    ctx->pc = 0x279bf0u;

    // 0x279bf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x279bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x279bf4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x279bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x279bf8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x279bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x279bfc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x279bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x279c00: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x279c00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279c04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x279c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x279c08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x279c08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279c0c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x279c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x279c10: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x279c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x279c14: 0x244785b8  addiu       $a3, $v0, -0x7A48
    ctx->pc = 0x279c14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935992));
    // 0x279c18: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x279c18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x279c1c: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x279c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x279c20: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x279c20u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A85C0u));
    // 0x279c24: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x279c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x279c28: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x279c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x279c2c: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x279c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x279c30: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x279c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x279c34: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x279C34u;
    SET_GPR_U32(ctx, 31, 0x279C3Cu);
    ctx->pc = 0x279C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279C34u;
    // 0x279c38: 0x8e300160  lw          $s0, 0x160($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x279C34u, 0x279C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279C3Cu;
label_279c3c:
    // 0x279c3c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x279c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x279c40: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x279c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x279c44: 0xc0aa122  jal         func_2A8488
    ctx->pc = 0x279C44u;
    SET_GPR_U32(ctx, 31, 0x279C4Cu);
    ctx->pc = 0x279C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279C44u;
    // 0x279c48: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8488u, 0x279C44u, 0x279C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279C4Cu;
label_279c4c:
    // 0x279c4c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x279c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x279c50: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x279c50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x279c54: 0xc783b468  lwc1        $f3, -0x4B98($gp)
    ctx->pc = 0x279c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x279c58: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x279c58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x279c5c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x279c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x279c60: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x279c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x279c64: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x279c64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x279c68: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x279c68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x279c6c: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x279C6Cu;
    {
        const bool branch_taken_0x279c6c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x279C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C6Cu;
        // 0x279c70: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x279c6c) {
            ctx->pc = 0x279CA8u;
            goto label_279ca8;
        }
    }
    ctx->pc = 0x279C74u;
    // 0x279c74: 0x0  nop
    ctx->pc = 0x279c74u;
    // NOP
label_279c78:
    // 0x279c78: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x279c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x279c7c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x279c7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x279c80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x279c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279c84: 0xc78d86c8  lwc1        $f13, -0x7938($gp)
    ctx->pc = 0x279c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x279c88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x279c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279c8c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x279c8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x279c90: 0xc09e88a  jal         func_27A228
    ctx->pc = 0x279C90u;
    SET_GPR_U32(ctx, 31, 0x279C98u);
    ctx->pc = 0x279C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279C90u;
    // 0x279c94: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A228u, 0x279C90u, 0x279C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279C98u;
label_279c98:
    // 0x279c98: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x279c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x279c9c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x279c9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x279ca0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x279CA0u;
    {
        const bool branch_taken_0x279ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x279ca0) {
            ctx->pc = 0x279C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279c78;
        }
    }
    ctx->pc = 0x279CA8u;
label_279ca8:
    // 0x279ca8: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x279ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x279cac: 0xc78086cc  lwc1        $f0, -0x7934($gp)
    ctx->pc = 0x279cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279cb0: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x279cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x279cb4: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x279cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x279cb8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x279cb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x279cbc: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x279cbcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x279cc0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x279cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x279cc4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x279cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x279cc8: 0x0  nop
    ctx->pc = 0x279cc8u;
    // NOP
    // 0x279ccc: 0x0  nop
    ctx->pc = 0x279cccu;
    // NOP
    // 0x279cd0: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x279cd0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x279cd4: 0xc0ad27e  jal         func_2B49F8
    ctx->pc = 0x279CD4u;
    SET_GPR_U32(ctx, 31, 0x279CDCu);
    ctx->pc = 0x279CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279CD4u;
    // 0x279cd8: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B49F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B49F8u, 0x279CD4u, 0x279CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279CDCu;
label_279cdc:
    // 0x279cdc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x279cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x279ce0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x279ce0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x279ce4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x279ce4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279ce8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x279ce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279cec: 0x3e00008  jr          $ra
    ctx->pc = 0x279CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279CECu;
        // 0x279cf0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279CF4u;
}
