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

// Function: rotatespawnPropTick
// Address: 0x27bc08 - 0x27bcb4
void rotatespawnPropTick_0x27bc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("rotatespawnPropTick_0x27bc08");
#endif

    switch (ctx->pc) {
        case 0x27bc40u: goto label_27bc40;
        case 0x27bc5cu: goto label_27bc5c;
        default: break;
    }

    ctx->pc = 0x27bc08u;

    // 0x27bc08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27bc08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27bc0c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27bc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27bc10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27bc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27bc14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27bc14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bc18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27bc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27bc1c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27bc1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bc20: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27bc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27bc24: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x27bc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x27bc28: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x27bc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27bc2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27bc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27bc30: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x27BC30u;
    {
        const bool branch_taken_0x27bc30 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x27BC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BC30u;
        // 0x27bc34: 0x8e320160  lw          $s2, 0x160($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bc30) {
            ctx->pc = 0x27BC74u;
            goto label_27bc74;
        }
    }
    ctx->pc = 0x27BC38u;
    // 0x27bc38: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x27bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x27bc3c: 0x0  nop
    ctx->pc = 0x27bc3cu;
    // NOP
label_27bc40:
    // 0x27bc40: 0xc64c002c  lwc1        $f12, 0x2C($s2)
    ctx->pc = 0x27bc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27bc44: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x27bc44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x27bc48: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x27bc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27bc4c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27bc4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27bc50: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x27bc50u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x27bc54: 0xc0ad3c8  jal         func_2B4F20
    ctx->pc = 0x27BC54u;
    SET_GPR_U32(ctx, 31, 0x27BC5Cu);
    ctx->pc = 0x27BC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BC54u;
    // 0x27bc58: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4F20u, 0x27BC54u, 0x27BC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BC5Cu;
label_27bc5c:
    // 0x27bc5c: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x27bc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x27bc60: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x27bc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27bc64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27bc68: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x27bc68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27bc6c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x27BC6Cu;
    {
        const bool branch_taken_0x27bc6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27bc6c) {
            ctx->pc = 0x27BC70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BC6Cu;
            // 0x27bc70: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27BC40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27bc40;
        }
    }
    ctx->pc = 0x27BC74u;
label_27bc74:
    // 0x27bc74: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x27bc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27bc78: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x27bc78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x27bc7c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x27bc7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x27bc80: 0xc6220048  lwc1        $f2, 0x48($s1)
    ctx->pc = 0x27bc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27bc84: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x27bc84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x27bc88: 0xc620004c  lwc1        $f0, 0x4C($s1)
    ctx->pc = 0x27bc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bc8c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27bc8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27bc90: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27bc90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27bc94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27bc94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27bc98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27bc98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27bc9c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x27bc9cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x27bca0: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x27bca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x27bca4: 0xe6220048  swc1        $f2, 0x48($s1)
    ctx->pc = 0x27bca4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x27bca8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27bca8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27bcac: 0x3e00008  jr          $ra
    ctx->pc = 0x27BCACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BCACu;
        // 0x27bcb0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BCACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27BCB4u;
}
