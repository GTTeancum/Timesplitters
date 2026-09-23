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

// Function: boatsignPropTick
// Address: 0x279cf8 - 0x279da0
void boatsignPropTick_0x279cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("boatsignPropTick_0x279cf8");
#endif

    switch (ctx->pc) {
        case 0x279d1cu: goto label_279d1c;
        case 0x279d28u: goto label_279d28;
        case 0x279d4cu: goto label_279d4c;
        default: break;
    }

    ctx->pc = 0x279cf8u;

    // 0x279cf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x279cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x279cfc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x279cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x279d00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x279d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x279d04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x279d04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279d08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x279d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x279d0c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x279d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279d10: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x279d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x279d14: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x279D14u;
    SET_GPR_U32(ctx, 31, 0x279D1Cu);
    ctx->pc = 0x279D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279D14u;
    // 0x279d18: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x279D14u, 0x279D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279D1Cu;
label_279d1c:
    // 0x279d1c: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x279d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x279d20: 0x5840000f  blezl       $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x279D20u;
    {
        const bool branch_taken_0x279d20 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x279d20) {
            ctx->pc = 0x279D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279D20u;
            // 0x279d24: 0x8e220160  lw          $v0, 0x160($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279D60u;
            goto label_279d60;
        }
    }
    ctx->pc = 0x279D28u;
label_279d28:
    // 0x279d28: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x279d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x279d2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x279d2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x279d30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x279d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279d34: 0xc78d86d0  lwc1        $f13, -0x7930($gp)
    ctx->pc = 0x279d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x279d38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x279d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279d3c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x279d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x279d40: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x279d40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x279d44: 0xc09e88a  jal         func_27A228
    ctx->pc = 0x279D44u;
    SET_GPR_U32(ctx, 31, 0x279D4Cu);
    ctx->pc = 0x279D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279D44u;
    // 0x279d48: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A228u, 0x279D44u, 0x279D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279D4Cu;
label_279d4c:
    // 0x279d4c: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x279d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x279d50: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x279d50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x279d54: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x279D54u;
    {
        const bool branch_taken_0x279d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x279d54) {
            ctx->pc = 0x279D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279d28;
        }
    }
    ctx->pc = 0x279D5Cu;
    // 0x279d5c: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x279d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
label_279d60:
    // 0x279d60: 0xc78086d4  lwc1        $f0, -0x792C($gp)
    ctx->pc = 0x279d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279d64: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x279d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x279d68: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x279d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x279d6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x279d6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x279d70: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x279d70u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x279d74: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x279d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x279d78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x279d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279d7c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x279d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x279d80: 0x0  nop
    ctx->pc = 0x279d80u;
    // NOP
    // 0x279d84: 0x0  nop
    ctx->pc = 0x279d84u;
    // NOP
    // 0x279d88: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x279d88u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x279d8c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x279d8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279d90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x279d90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279d94: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x279d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x279d98: 0x80ad27e  j           func_2B49F8
    ctx->pc = 0x279D98u;
    ctx->pc = 0x279D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279D98u;
    // 0x279d9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B49F8u;
    matrixRotX_0x2b49f8(rdram, ctx, runtime); return;
    ctx->pc = 0x279DA0u;
}
