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

// Function: gongPropTick
// Address: 0x279da0 - 0x279e48
void gongPropTick_0x279da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gongPropTick_0x279da0");
#endif

    switch (ctx->pc) {
        case 0x279dc4u: goto label_279dc4;
        case 0x279dd0u: goto label_279dd0;
        case 0x279df4u: goto label_279df4;
        default: break;
    }

    ctx->pc = 0x279da0u;

    // 0x279da0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x279da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x279da4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x279da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x279da8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x279da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x279dac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x279dacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279db0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x279db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x279db4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x279db4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279db8: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x279db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x279dbc: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x279DBCu;
    SET_GPR_U32(ctx, 31, 0x279DC4u);
    ctx->pc = 0x279DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279DBCu;
    // 0x279dc0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x279DBCu, 0x279DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279DC4u;
label_279dc4:
    // 0x279dc4: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x279dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x279dc8: 0x5840000f  blezl       $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x279DC8u;
    {
        const bool branch_taken_0x279dc8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x279dc8) {
            ctx->pc = 0x279DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279DC8u;
            // 0x279dcc: 0x8e220160  lw          $v0, 0x160($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279E08u;
            goto label_279e08;
        }
    }
    ctx->pc = 0x279DD0u;
label_279dd0:
    // 0x279dd0: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x279dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x279dd4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x279dd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x279dd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x279dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279ddc: 0xc78d86d8  lwc1        $f13, -0x7928($gp)
    ctx->pc = 0x279ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x279de0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x279de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279de4: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x279de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x279de8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x279de8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x279dec: 0xc09e88a  jal         func_27A228
    ctx->pc = 0x279DECu;
    SET_GPR_U32(ctx, 31, 0x279DF4u);
    ctx->pc = 0x279DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279DECu;
    // 0x279df0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A228u, 0x279DECu, 0x279DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279DF4u;
label_279df4:
    // 0x279df4: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x279df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x279df8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x279df8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x279dfc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x279DFCu;
    {
        const bool branch_taken_0x279dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x279dfc) {
            ctx->pc = 0x279DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279dd0;
        }
    }
    ctx->pc = 0x279E04u;
    // 0x279e04: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x279e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
label_279e08:
    // 0x279e08: 0xc78086dc  lwc1        $f0, -0x7924($gp)
    ctx->pc = 0x279e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279e0c: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x279e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x279e10: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x279e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x279e14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x279e14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x279e18: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x279e18u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x279e1c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x279e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x279e20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x279e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279e24: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x279e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x279e28: 0x0  nop
    ctx->pc = 0x279e28u;
    // NOP
    // 0x279e2c: 0x0  nop
    ctx->pc = 0x279e2cu;
    // NOP
    // 0x279e30: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x279e30u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x279e34: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x279e34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279e38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x279e38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279e3c: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x279e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x279e40: 0x80ad27e  j           func_2B49F8
    ctx->pc = 0x279E40u;
    ctx->pc = 0x279E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279E40u;
    // 0x279e44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B49F8u;
    matrixRotX_0x2b49f8(rdram, ctx, runtime); return;
    ctx->pc = 0x279E48u;
}
