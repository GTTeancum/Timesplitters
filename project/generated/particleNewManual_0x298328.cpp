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

// Function: particleNewManual
// Address: 0x298328 - 0x2983e0
void particleNewManual_0x298328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleNewManual_0x298328");
#endif

    switch (ctx->pc) {
        case 0x298354u: goto label_298354;
        case 0x2983a0u: goto label_2983a0;
        default: break;
    }

    ctx->pc = 0x298328u;

    // 0x298328: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x298328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29832c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x29832cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x298330: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x298330u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298334: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x298334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x298338: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x298338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29833c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x29833cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298340: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x298340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298344: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x298344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x298348: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x298348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29834c: 0xc0a5b24  jal         func_296C90
    ctx->pc = 0x29834Cu;
    SET_GPR_U32(ctx, 31, 0x298354u);
    ctx->pc = 0x298350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29834Cu;
    // 0x298350: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C90u, 0x29834Cu, 0x298354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298354u;
label_298354:
    // 0x298354: 0x24030068  addiu       $v1, $zero, 0x68
    ctx->pc = 0x298354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x298358: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x298358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29835c: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x29835cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x298360: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x298360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x298364: 0x244298c0  addiu       $v0, $v0, -0x6740
    ctx->pc = 0x298364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940864));
    // 0x298368: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x298368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x29836c: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x29836cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x298370: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x298370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x298374: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x298374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x298378: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x298378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x29837c: 0xc4800064  lwc1        $f0, 0x64($a0)
    ctx->pc = 0x29837cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298380: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x298380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298384: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x298384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298388: 0xae130014  sw          $s3, 0x14($s0)
    ctx->pc = 0x298388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 19));
    // 0x29838c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x29838cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x298390: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x298390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x298394: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x298394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298398: 0xc0a5a28  jal         func_2968A0
    ctx->pc = 0x298398u;
    SET_GPR_U32(ctx, 31, 0x2983A0u);
    ctx->pc = 0x29839Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298398u;
    // 0x29839c: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2968A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2968A0u, 0x298398u, 0x2983A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2983A0u;
label_2983a0:
    // 0x2983a0: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2983a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2983a4: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2983a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2983a8: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x2983a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2983ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2983acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2983b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2983b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2983b4: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2983b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2983b8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2983b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2983bc: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x2983bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2983c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2983c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2983c4: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x2983c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2983c8: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x2983c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x2983cc: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x2983ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x2983d0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2983d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2983d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2983d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2983d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2983D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2983DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2983D8u;
        // 0x2983dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2983D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2983E0u;
}
