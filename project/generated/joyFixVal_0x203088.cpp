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

// Function: joyFixVal
// Address: 0x203088 - 0x203138
void joyFixVal_0x203088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("joyFixVal_0x203088");
#endif

    switch (ctx->pc) {
        case 0x2030f4u: goto label_2030f4;
        default: break;
    }

    ctx->pc = 0x203088u;

    // 0x203088: 0x28820080  slti        $v0, $a0, 0x80
    ctx->pc = 0x203088u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x20308c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20308Cu;
    {
        const bool branch_taken_0x20308c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20308Cu;
        // 0x203090: 0x2482ff80  addiu       $v0, $a0, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20308c) {
            ctx->pc = 0x2030ACu;
            goto label_2030ac;
        }
    }
    ctx->pc = 0x203094u;
    // 0x203094: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x203094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x203098: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x203098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20309c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20309cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2030a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2030a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2030a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2030A4u;
    {
        const bool branch_taken_0x2030a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2030A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2030A4u;
        // 0x2030a8: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2030a4) {
            ctx->pc = 0x2030C8u;
            goto label_2030c8;
        }
    }
    ctx->pc = 0x2030ACu;
label_2030ac:
    // 0x2030ac: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x2030acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x2030b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2030b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2030b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2030b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2030b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2030b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2030bc: 0x0  nop
    ctx->pc = 0x2030bcu;
    // NOP
    // 0x2030c0: 0x0  nop
    ctx->pc = 0x2030c0u;
    // NOP
    // 0x2030c4: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x2030c4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
label_2030c8:
    // 0x2030c8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2030c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2030cc: 0x460c1034  c.lt.s      $f2, $f12
    ctx->pc = 0x2030ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2030d0: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x2030D0u;
    {
        const bool branch_taken_0x2030d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2030d0) {
            ctx->pc = 0x203130u;
            goto label_203130;
        }
    }
    ctx->pc = 0x2030D8u;
    // 0x2030d8: 0x46006007  neg.s       $f0, $f12
    ctx->pc = 0x2030d8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[12]);
    // 0x2030dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2030dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2030e0: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2030E0u;
    {
        const bool branch_taken_0x2030e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2030e0) {
            ctx->pc = 0x20310Cu;
            goto label_20310c;
        }
    }
    ctx->pc = 0x2030E8u;
    // 0x2030e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2030e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2030ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2030ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2030f0: 0x460c0840  add.s       $f1, $f1, $f12
    ctx->pc = 0x2030f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
label_2030f4:
    // 0x2030f4: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x2030f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x2030f8: 0x0  nop
    ctx->pc = 0x2030f8u;
    // NOP
    // 0x2030fc: 0x0  nop
    ctx->pc = 0x2030fcu;
    // NOP
    // 0x203100: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x203100u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x203104: 0x3e00008  jr          $ra
    ctx->pc = 0x203104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20310Cu;
label_20310c:
    // 0x20310c: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x20310cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x203110: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x203110u;
    {
        const bool branch_taken_0x203110 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x203110) {
            ctx->pc = 0x203128u;
            goto label_203128;
        }
    }
    ctx->pc = 0x203118u;
    // 0x203118: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x203118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20311c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20311cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203120: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x203120u;
    {
        const bool branch_taken_0x203120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203120u;
        // 0x203124: 0x460c0841  sub.s       $f1, $f1, $f12 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203120) {
            ctx->pc = 0x2030F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2030f4;
        }
    }
    ctx->pc = 0x203128u;
label_203128:
    // 0x203128: 0x3e00008  jr          $ra
    ctx->pc = 0x203128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203128u;
        // 0x20312c: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203130u;
label_203130:
    // 0x203130: 0x3e00008  jr          $ra
    ctx->pc = 0x203130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203130u;
        // 0x203134: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203138u;
}
