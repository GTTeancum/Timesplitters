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

// Function: tanf
// Address: 0x2d7488 - 0x2d7510
void tanf_0x2d7488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("tanf_0x2d7488");
#endif

    switch (ctx->pc) {
        case 0x2d74e4u: goto label_2d74e4;
        case 0x2d7504u: goto label_2d7504;
        default: break;
    }

    ctx->pc = 0x2d7488u;

    // 0x2d7488: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x2d7488u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d748c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d748cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d7490: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d7490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7494: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x2d7494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x2d7498: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2d7498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2d749c: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x2d749cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x2d74a0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2d74a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d74a4: 0x34420fda  ori         $v0, $v0, 0xFDA
    ctx->pc = 0x2d74a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4058);
    // 0x2d74a8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2d74a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2d74ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D74ACu;
    {
        const bool branch_taken_0x2d74ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D74B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D74ACu;
        // 0x2d74b0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d74ac) {
            ctx->pc = 0x2D74C0u;
            goto label_2d74c0;
        }
    }
    ctx->pc = 0x2D74B4u;
    // 0x2d74b4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2d74b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d74b8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2D74B8u;
    {
        const bool branch_taken_0x2d74b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D74BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D74B8u;
        // 0x2d74bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d74b8) {
            ctx->pc = 0x2D74FCu;
            goto label_2d74fc;
        }
    }
    ctx->pc = 0x2D74C0u;
label_2d74c0:
    // 0x2d74c0: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x2d74c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x2d74c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d74c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d74c8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2d74c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2d74cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D74CCu;
    {
        const bool branch_taken_0x2d74cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d74cc) {
            ctx->pc = 0x2D74DCu;
            goto label_2d74dc;
        }
    }
    ctx->pc = 0x2D74D4u;
    // 0x2d74d4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D74D4u;
    {
        const bool branch_taken_0x2d74d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D74D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D74D4u;
        // 0x2d74d8: 0x460c6001  sub.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d74d4) {
            ctx->pc = 0x2D7504u;
            goto label_2d7504;
        }
    }
    ctx->pc = 0x2D74DCu;
label_2d74dc:
    // 0x2d74dc: 0xc0b6ad8  jal         func_2DAB60
    ctx->pc = 0x2D74DCu;
    SET_GPR_U32(ctx, 31, 0x2D74E4u);
    ctx->pc = 0x2D74E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D74DCu;
    // 0x2d74e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAB60u, 0x2D74DCu, 0x2D74E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D74E4u;
label_2d74e4:
    // 0x2d74e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d74e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d74e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d74e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d74ec: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2d74ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d74f0: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x2d74f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d74f4: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x2d74f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2d74f8: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2d74f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2d74fc:
    // 0x2d74fc: 0xc0b6f0a  jal         func_2DBC28
    ctx->pc = 0x2D74FCu;
    SET_GPR_U32(ctx, 31, 0x2D7504u);
    ctx->pc = 0x2DBC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBC28u, 0x2D74FCu, 0x2D7504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7504u;
label_2d7504:
    // 0x2d7504: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d7504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d7508: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7508u;
        // 0x2d750c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7510u;
}
