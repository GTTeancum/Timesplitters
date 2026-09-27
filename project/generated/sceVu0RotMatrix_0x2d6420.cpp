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

// Function: sceVu0RotMatrix
// Address: 0x2d6420 - 0x2d6470
void sceVu0RotMatrix_0x2d6420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceVu0RotMatrix_0x2d6420");
#endif

    switch (ctx->pc) {
        case 0x2d6440u: goto label_2d6440;
        case 0x2d6450u: goto label_2d6450;
        default: break;
    }

    ctx->pc = 0x2d6420u;

    // 0x2d6420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d6420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d6424: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2d6424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d6428: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d6428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d642c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2d642cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6430: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d6430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d6434: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d6434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6438: 0xc0b588a  jal         func_2D6228
    ctx->pc = 0x2D6438u;
    SET_GPR_U32(ctx, 31, 0x2D6440u);
    ctx->pc = 0x2D643Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6438u;
    // 0x2d643c: 0xc62c0008  lwc1        $f12, 0x8($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6228u, 0x2D6438u, 0x2D6440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6440u;
label_2d6440:
    // 0x2d6440: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x2d6440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d6444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6448: 0xc0b58de  jal         func_2D6378
    ctx->pc = 0x2D6448u;
    SET_GPR_U32(ctx, 31, 0x2D6450u);
    ctx->pc = 0x2D644Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6448u;
    // 0x2d644c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6378u, 0x2D6448u, 0x2D6450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6450u;
label_2d6450:
    // 0x2d6450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6454: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x2d6454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d6458: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d6458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d645c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2d645cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6460: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2d6460u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6464: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d6464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6468: 0x80b58b4  j           func_2D62D0
    ctx->pc = 0x2D6468u;
    ctx->pc = 0x2D646Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6468u;
    // 0x2d646c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D62D0u;
    sceVu0RotMatrixX_0x2d62d0(rdram, ctx, runtime); return;
    ctx->pc = 0x2D6470u;
}
