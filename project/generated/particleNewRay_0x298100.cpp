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

// Function: particleNewRay
// Address: 0x298100 - 0x2981b0
void particleNewRay_0x298100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleNewRay_0x298100");
#endif

    switch (ctx->pc) {
        case 0x298130u: goto label_298130;
        default: break;
    }

    ctx->pc = 0x298100u;

    // 0x298100: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x298100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x298104: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x298104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x298108: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x298108u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29810c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x29810cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x298110: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x298110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x298114: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x298114u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298118: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x298118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29811c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x29811cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298120: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x298120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298124: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x298124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x298128: 0xc0a5b24  jal         func_296C90
    ctx->pc = 0x298128u;
    SET_GPR_U32(ctx, 31, 0x298130u);
    ctx->pc = 0x29812Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298128u;
    // 0x29812c: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C90u, 0x298128u, 0x298130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298130u;
label_298130:
    // 0x298130: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x298130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x298134: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x298134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298138: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x298138u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29813c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x29813cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x298140: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x298140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x298144: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x298144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x298148: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x298148u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x29814c: 0xac720014  sw          $s2, 0x14($v1)
    ctx->pc = 0x29814cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 18));
    // 0x298150: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x298150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298154: 0xac730030  sw          $s3, 0x30($v1)
    ctx->pc = 0x298154u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 19));
    // 0x298158: 0xe46003a0  swc1        $f0, 0x3A0($v1)
    ctx->pc = 0x298158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 928), bits); }
    // 0x29815c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29815cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x298160: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x298160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298164: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x298164u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298168: 0xe46003a4  swc1        $f0, 0x3A4($v1)
    ctx->pc = 0x298168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 932), bits); }
    // 0x29816c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29816cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298170: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x298170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x298174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298178: 0xe46103a8  swc1        $f1, 0x3A8($v1)
    ctx->pc = 0x298178u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 936), bits); }
    // 0x29817c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x29817cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x298180: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x298180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298184: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x298184u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x298188: 0xe46003ac  swc1        $f0, 0x3AC($v1)
    ctx->pc = 0x298188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 940), bits); }
    // 0x29818c: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x29818cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x298190: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x298190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298194: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x298194u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x298198: 0xe46103b0  swc1        $f1, 0x3B0($v1)
    ctx->pc = 0x298198u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 944), bits); }
    // 0x29819c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x29819cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2981a0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2981a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2981a4: 0xe46003b4  swc1        $f0, 0x3B4($v1)
    ctx->pc = 0x2981a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 948), bits); }
    // 0x2981a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2981A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2981ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2981A8u;
        // 0x2981ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2981A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2981B0u;
}
