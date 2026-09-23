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

// Function: bgWallTransform
// Address: 0x254360 - 0x2543d0
void bgWallTransform_0x254360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgWallTransform_0x254360");
#endif

    switch (ctx->pc) {
        case 0x25438cu: goto label_25438c;
        case 0x254398u: goto label_254398;
        default: break;
    }

    ctx->pc = 0x254360u;

    // 0x254360: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x254360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x254364: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x254364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x254368: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x254368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25436c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25436cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254370: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x254370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x254374: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x254374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254378: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x254378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25437c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25437cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x254380: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x254380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x254384: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x254384u;
    SET_GPR_U32(ctx, 31, 0x25438Cu);
    ctx->pc = 0x254388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254384u;
    // 0x254388: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x254384u, 0x25438Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25438Cu;
label_25438c:
    // 0x25438c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25438cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254390: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x254390u;
    SET_GPR_U32(ctx, 31, 0x254398u);
    ctx->pc = 0x254394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254390u;
    // 0x254394: 0x26050014  addiu       $a1, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x254390u, 0x254398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254398u;
label_254398:
    // 0x254398: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x254398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25439c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x25439cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2543a0: 0xc6020020  lwc1        $f2, 0x20($s0)
    ctx->pc = 0x2543a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2543a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2543a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2543a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2543a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2543ac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2543acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2543b0: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2543b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2543b4: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x2543b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2543b8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2543b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2543bc: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2543bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2543c0: 0xe6020020  swc1        $f2, 0x20($s0)
    ctx->pc = 0x2543c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2543c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2543c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2543c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2543C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2543CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2543C8u;
        // 0x2543cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2543C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2543D0u;
}
