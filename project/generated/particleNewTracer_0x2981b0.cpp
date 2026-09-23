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

// Function: particleNewTracer
// Address: 0x2981b0 - 0x29825c
void particleNewTracer_0x2981b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleNewTracer_0x2981b0");
#endif

    switch (ctx->pc) {
        case 0x2981e0u: goto label_2981e0;
        default: break;
    }

    ctx->pc = 0x2981b0u;

    // 0x2981b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2981b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2981b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2981b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2981b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2981b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2981bc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2981bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2981c0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2981c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2981c4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2981c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2981c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2981c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2981cc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2981ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2981d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2981d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2981d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2981d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2981d8: 0xc0a5b24  jal         func_296C90
    ctx->pc = 0x2981D8u;
    SET_GPR_U32(ctx, 31, 0x2981E0u);
    ctx->pc = 0x2981DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2981D8u;
    // 0x2981dc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C90u, 0x2981D8u, 0x2981E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2981E0u;
label_2981e0:
    // 0x2981e0: 0xc7808ccc  lwc1        $f0, -0x7334($gp)
    ctx->pc = 0x2981e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2981e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2981e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2981e8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2981e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x2981ec: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2981ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2981f0: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x2981f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x2981f4: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x2981f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x2981f8: 0xac720014  sw          $s2, 0x14($v1)
    ctx->pc = 0x2981f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 18));
    // 0x2981fc: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2981fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298200: 0xac730030  sw          $s3, 0x30($v1)
    ctx->pc = 0x298200u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 19));
    // 0x298204: 0xe46003a0  swc1        $f0, 0x3A0($v1)
    ctx->pc = 0x298204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 928), bits); }
    // 0x298208: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x298208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29820c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x29820cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298210: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x298210u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298214: 0xe46003a4  swc1        $f0, 0x3A4($v1)
    ctx->pc = 0x298214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 932), bits); }
    // 0x298218: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x298218u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29821c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x29821cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298220: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x298220u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298224: 0xe46103a8  swc1        $f1, 0x3A8($v1)
    ctx->pc = 0x298224u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 936), bits); }
    // 0x298228: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x298228u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x29822c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x29822cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298230: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x298230u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x298234: 0xe46003ac  swc1        $f0, 0x3AC($v1)
    ctx->pc = 0x298234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 940), bits); }
    // 0x298238: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x298238u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x29823c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x29823cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298240: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x298240u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x298244: 0xe46103b0  swc1        $f1, 0x3B0($v1)
    ctx->pc = 0x298244u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 944), bits); }
    // 0x298248: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x298248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29824c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29824cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298250: 0xe46003b4  swc1        $f0, 0x3B4($v1)
    ctx->pc = 0x298250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 948), bits); }
    // 0x298254: 0x3e00008  jr          $ra
    ctx->pc = 0x298254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298254u;
        // 0x298258: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29825Cu;
}
