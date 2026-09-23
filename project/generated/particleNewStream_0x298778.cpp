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

// Function: particleNewStream
// Address: 0x298778 - 0x298870
void particleNewStream_0x298778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleNewStream_0x298778");
#endif

    switch (ctx->pc) {
        case 0x2987c8u: goto label_2987c8;
        case 0x298800u: goto label_298800;
        default: break;
    }

    ctx->pc = 0x298778u;

    // 0x298778: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x298778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x29877c: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x29877cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x298780: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x298780u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298784: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x298784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x298788: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x298788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29878c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x29878cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298790: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x298790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x298794: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x298794u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298798: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x298798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29879c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x29879cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2987a0: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2987a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2987a4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2987a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2987a8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2987a8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2987ac: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2987acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2987b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2987b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2987b4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2987b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2987b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2987b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2987bc: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2987bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2987c0: 0xc0a5b24  jal         func_296C90
    ctx->pc = 0x2987C0u;
    SET_GPR_U32(ctx, 31, 0x2987C8u);
    ctx->pc = 0x2987C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2987C0u;
    // 0x2987c4: 0x24160068  addiu       $s6, $zero, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C90u, 0x2987C0u, 0x2987C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2987C8u;
label_2987c8:
    // 0x2987c8: 0x2961818  mult        $v1, $s4, $s6
    ctx->pc = 0x2987c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2987cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2987ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2987d0: 0x3c110037  lui         $s1, 0x37
    ctx->pc = 0x2987d0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
    // 0x2987d4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2987d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2987d8: 0x263198c0  addiu       $s1, $s1, -0x6740
    ctx->pc = 0x2987d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294940864));
    // 0x2987dc: 0xae170014  sw          $s7, 0x14($s0)
    ctx->pc = 0x2987dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 23));
    // 0x2987e0: 0xae140004  sw          $s4, 0x4($s0)
    ctx->pc = 0x2987e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
    // 0x2987e4: 0x12902b  sltu        $s2, $zero, $s2
    ctx->pc = 0x2987e4u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2987e8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2987e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2987ec: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x2987ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x2987f0: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2987f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2987f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2987f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2987f8: 0xc0a5a28  jal         func_2968A0
    ctx->pc = 0x2987F8u;
    SET_GPR_U32(ctx, 31, 0x298800u);
    ctx->pc = 0x2987FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2987F8u;
    // 0x2987fc: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2968A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2968A0u, 0x2987F8u, 0x298800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298800u;
label_298800:
    // 0x298800: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x298800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x298804: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x298804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x298808: 0x761018  mult        $v0, $v1, $s6
    ctx->pc = 0x298808u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29880c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x29880cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x298810: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x298810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x298814: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x298814u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x298818: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x298818u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29881c: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x29881cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x298820: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x298820u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x298824: 0xc4600064  lwc1        $f0, 0x64($v1)
    ctx->pc = 0x298824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298828: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x298828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29882c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x29882cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x298830: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x298830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x298834: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x298834u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298838: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x298838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29883c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29883cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298840: 0xe601001c  swc1        $f1, 0x1C($s0)
    ctx->pc = 0x298840u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x298844: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x298844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298848: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x298848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x29884c: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x29884cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298850: 0xe6140028  swc1        $f20, 0x28($s0)
    ctx->pc = 0x298850u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x298854: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x298854u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x298858: 0xae0003a0  sw          $zero, 0x3A0($s0)
    ctx->pc = 0x298858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 928), GPR_U32(ctx, 0));
    // 0x29885c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x29885cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298860: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x298860u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298864: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x298864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x298868: 0x3e00008  jr          $ra
    ctx->pc = 0x298868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298868u;
        // 0x29886c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298870u;
}
