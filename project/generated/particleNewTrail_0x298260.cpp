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

// Function: particleNewTrail
// Address: 0x298260 - 0x298328
void particleNewTrail_0x298260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleNewTrail_0x298260");
#endif

    switch (ctx->pc) {
        case 0x298294u: goto label_298294;
        case 0x2982e4u: goto label_2982e4;
        default: break;
    }

    ctx->pc = 0x298260u;

    // 0x298260: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x298260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x298264: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x298264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x298268: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x298268u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29826c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x29826cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x298270: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x298270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x298274: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x298274u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298278: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x298278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29827c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x29827cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298280: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x298280u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298284: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x298284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x298288: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x298288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x29828c: 0xc0a5b24  jal         func_296C90
    ctx->pc = 0x29828Cu;
    SET_GPR_U32(ctx, 31, 0x298294u);
    ctx->pc = 0x298290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29828Cu;
    // 0x298290: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C90u, 0x29828Cu, 0x298294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298294u;
label_298294:
    // 0x298294: 0x24030068  addiu       $v1, $zero, 0x68
    ctx->pc = 0x298294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x298298: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x298298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29829c: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x29829cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2982a0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2982a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2982a4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2982a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2982a8: 0x244298c0  addiu       $v0, $v0, -0x6740
    ctx->pc = 0x2982a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940864));
    // 0x2982ac: 0xae140014  sw          $s4, 0x14($s0)
    ctx->pc = 0x2982acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 20));
    // 0x2982b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2982b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2982b4: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x2982b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x2982b8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2982b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2982bc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2982bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2982c0: 0xc4a10064  lwc1        $f1, 0x64($a1)
    ctx->pc = 0x2982c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2982c4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2982c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2982c8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2982c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2982cc: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x2982ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2982d0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2982d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2982d4: 0xc4c1001c  lwc1        $f1, 0x1C($a2)
    ctx->pc = 0x2982d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2982d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2982d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2982dc: 0xc0a5a28  jal         func_2968A0
    ctx->pc = 0x2982DCu;
    SET_GPR_U32(ctx, 31, 0x2982E4u);
    ctx->pc = 0x2982E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2982DCu;
    // 0x2982e0: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2968A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2968A0u, 0x2982DCu, 0x2982E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2982E4u;
label_2982e4:
    // 0x2982e4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2982e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2982e8: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x2982e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x2982ec: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x2982ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2982f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2982f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2982f4: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2982f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2982f8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2982f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2982fc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2982fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x298300: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x298300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x298304: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x298304u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x298308: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x298308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29830c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x29830cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298310: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x298310u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x298314: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x298314u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298318: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x298318u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29831c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29831cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298320: 0x3e00008  jr          $ra
    ctx->pc = 0x298320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298320u;
        // 0x298324: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298328u;
}
