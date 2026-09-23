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

// Function: calcPitches
// Address: 0x205e88 - 0x205f94
void calcPitches_0x205e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("calcPitches_0x205e88");
#endif

    switch (ctx->pc) {
        case 0x205ed8u: goto label_205ed8;
        case 0x205ee8u: goto label_205ee8;
        case 0x205ef8u: goto label_205ef8;
        case 0x205f10u: goto label_205f10;
        case 0x205f20u: goto label_205f20;
        case 0x205f30u: goto label_205f30;
        case 0x205f38u: goto label_205f38;
        default: break;
    }

    ctx->pc = 0x205e88u;

    // 0x205e88: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x205e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x205e8c: 0x3c0201fb  lui         $v0, 0x1FB
    ctx->pc = 0x205e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)507 << 16));
    // 0x205e90: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x205e90u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x205e94: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x205e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x205e98: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x205e98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x205e9c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x205e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x205ea0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x205ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x205ea4: 0x2415000c  addiu       $s5, $zero, 0xC
    ctx->pc = 0x205ea4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x205ea8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x205ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x205eac: 0x245220a8  addiu       $s2, $v0, 0x20A8
    ctx->pc = 0x205eacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 8360));
    // 0x205eb0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x205eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x205eb4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x205eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x205eb8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x205eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x205ebc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x205ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x205ec0: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x205ec0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x205ec4: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x205ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x205ec8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x205ec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x205ecc: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x205eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x205ed0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x205ed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x205ed4: 0x959818  mult        $s3, $a0, $s5
    ctx->pc = 0x205ed4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_205ed8:
    // 0x205ed8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x205ed8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205edc: 0x24940001  addiu       $s4, $a0, 0x1
    ctx->pc = 0x205edcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x205ee0: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x205ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x205ee4: 0x0  nop
    ctx->pc = 0x205ee4u;
    // NOP
label_205ee8:
    // 0x205ee8: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x205ee8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x205eec: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x205eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x205ef0: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x205ef0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x205ef4: 0x24100007  addiu       $s0, $zero, 0x7
    ctx->pc = 0x205ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_205ef8:
    // 0x205ef8: 0x0  nop
    ctx->pc = 0x205ef8u;
    // NOP
    // 0x205efc: 0x0  nop
    ctx->pc = 0x205efcu;
    // NOP
    // 0x205f00: 0x4616a303  div.s       $f12, $f20, $f22
    ctx->pc = 0x205f00u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[22];
    // 0x205f04: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x205f04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x205f08: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x205F08u;
    SET_GPR_U32(ctx, 31, 0x205F10u);
    ctx->pc = 0x205F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205F08u;
    // 0x205f0c: 0x4615a500  add.s       $f20, $f20, $f21 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x205F08u, 0x205F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205F10u;
label_205f10:
    // 0x205f10: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x205f10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x205f14: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x205f14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x205f18: 0xc0b5d8a  jal         func_2D7628
    ctx->pc = 0x205F18u;
    SET_GPR_U32(ctx, 31, 0x205F20u);
    ctx->pc = 0x205F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205F18u;
    // 0x205f1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7628u, 0x205F18u, 0x205F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205F20u;
label_205f20:
    // 0x205f20: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x205f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x205f24: 0xdc2598a8  ld          $a1, -0x6758($at)
    ctx->pc = 0x205f24u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3998A8u));
    // 0x205f28: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x205F28u;
    SET_GPR_U32(ctx, 31, 0x205F30u);
    ctx->pc = 0x205F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205F28u;
    // 0x205f2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x205F28u, 0x205F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205F30u;
label_205f30:
    // 0x205f30: 0xc0b8e42  jal         func_2E3908
    ctx->pc = 0x205F30u;
    SET_GPR_U32(ctx, 31, 0x205F38u);
    ctx->pc = 0x205F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205F30u;
    // 0x205f34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3908u, 0x205F30u, 0x205F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205F38u;
label_205f38:
    // 0x205f38: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x205f38u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x205f3c: 0x601ffee  bgez        $s0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x205F3Cu;
    {
        const bool branch_taken_0x205f3c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x205F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F3Cu;
        // 0x205f40: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205f3c) {
            ctx->pc = 0x205EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205ef8;
        }
    }
    ctx->pc = 0x205F44u;
    // 0x205f44: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x205f44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205f48: 0x2862000c  slti        $v0, $v1, 0xC
    ctx->pc = 0x205f48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x205f4c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x205F4Cu;
    {
        const bool branch_taken_0x205f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F4Cu;
        // 0x205f50: 0x2631021  addu        $v0, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205f4c) {
            ctx->pc = 0x205EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205ee8;
        }
    }
    ctx->pc = 0x205F54u;
    // 0x205f54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x205f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205f58: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x205f58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x205f5c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x205F5Cu;
    {
        const bool branch_taken_0x205f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F5Cu;
        // 0x205f60: 0x959818  mult        $s3, $a0, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x205f5c) {
            ctx->pc = 0x205ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205ed8;
        }
    }
    ctx->pc = 0x205F64u;
    // 0x205f64: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x205f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x205f68: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x205f68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x205f6c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x205f6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x205f70: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x205f70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x205f74: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x205f74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x205f78: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x205f78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205f7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x205f7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205f80: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x205f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x205f84: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x205f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x205f88: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x205f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x205f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x205F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F8Cu;
        // 0x205f90: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205F94u;
}
