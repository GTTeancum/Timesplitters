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

// Function: testanims
// Address: 0x283e90 - 0x283f5c
void testanims_0x283e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("testanims_0x283e90");
#endif

    switch (ctx->pc) {
        case 0x283eacu: goto label_283eac;
        case 0x283ee0u: goto label_283ee0;
        case 0x283f18u: goto label_283f18;
        case 0x283f38u: goto label_283f38;
        default: break;
    }

    ctx->pc = 0x283e90u;

    // 0x283e90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x283e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x283e94: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x283e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x283e98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x283e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x283e9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x283e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x283ea0: 0x8c500180  lw          $s0, 0x180($v0)
    ctx->pc = 0x283ea0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
    // 0x283ea4: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x283EA4u;
    SET_GPR_U32(ctx, 31, 0x283EACu);
    ctx->pc = 0x283EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283EA4u;
    // 0x283ea8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x283EA4u, 0x283EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283EACu;
label_283eac:
    // 0x283eac: 0x8f84b234  lw          $a0, -0x4DCC($gp)
    ctx->pc = 0x283eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x283eb0: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x283eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x283eb4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x283eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x283eb8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x283EB8u;
    {
        const bool branch_taken_0x283eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283EB8u;
        // 0x283ebc: 0x8f82b22c  lw          $v0, -0x4DD4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283eb8) {
            ctx->pc = 0x283ED8u;
            goto label_283ed8;
        }
    }
    ctx->pc = 0x283EC0u;
    // 0x283ec0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x283ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x283ec4: 0x284301bb  slti        $v1, $v0, 0x1BB
    ctx->pc = 0x283ec4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)443) ? 1 : 0);
    // 0x283ec8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x283EC8u;
    {
        const bool branch_taken_0x283ec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x283ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283EC8u;
        // 0x283ecc: 0xaf82b22c  sw          $v0, -0x4DD4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294947372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ec8) {
            ctx->pc = 0x283ED8u;
            goto label_283ed8;
        }
    }
    ctx->pc = 0x283ED0u;
    // 0x283ed0: 0x240200df  addiu       $v0, $zero, 0xDF
    ctx->pc = 0x283ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    // 0x283ed4: 0xaf82b22c  sw          $v0, -0x4DD4($gp)
    ctx->pc = 0x283ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947372), GPR_U32(ctx, 2));
label_283ed8:
    // 0x283ed8: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x283ED8u;
    SET_GPR_U32(ctx, 31, 0x283EE0u);
    ctx->pc = 0x283EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283ED8u;
    // 0x283edc: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x283ED8u, 0x283EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283EE0u;
label_283ee0:
    // 0x283ee0: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x283ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x283ee4: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x283ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x283ee8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x283ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x283eec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x283EECu;
    {
        const bool branch_taken_0x283eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283EECu;
        // 0x283ef0: 0x8f85b22c  lw          $a1, -0x4DD4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283eec) {
            ctx->pc = 0x283F10u;
            goto label_283f10;
        }
    }
    ctx->pc = 0x283EF4u;
    // 0x283ef4: 0x8e020158  lw          $v0, 0x158($s0)
    ctx->pc = 0x283ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x283ef8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x283ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x283efc: 0x2843000a  slti        $v1, $v0, 0xA
    ctx->pc = 0x283efcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x283f00: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x283F00u;
    {
        const bool branch_taken_0x283f00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x283F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F00u;
        // 0x283f04: 0xae020158  sw          $v0, 0x158($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f00) {
            ctx->pc = 0x283F0Cu;
            goto label_283f0c;
        }
    }
    ctx->pc = 0x283F08u;
    // 0x283f08: 0xae000158  sw          $zero, 0x158($s0)
    ctx->pc = 0x283f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 0));
label_283f0c:
    // 0x283f0c: 0x8f85b22c  lw          $a1, -0x4DD4($gp)
    ctx->pc = 0x283f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947372)));
label_283f10:
    // 0x283f10: 0xc085608  jal         func_215820
    ctx->pc = 0x283F10u;
    SET_GPR_U32(ctx, 31, 0x283F18u);
    ctx->pc = 0x283F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283F10u;
    // 0x283f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x283F10u, 0x283F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283F18u;
label_283f18:
    // 0x283f18: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x283F18u;
    {
        const bool branch_taken_0x283f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F18u;
        // 0x283f1c: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f18) {
            ctx->pc = 0x283F3Cu;
            goto label_283f3c;
        }
    }
    ctx->pc = 0x283F20u;
    // 0x283f20: 0x8f85b22c  lw          $a1, -0x4DD4($gp)
    ctx->pc = 0x283f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947372)));
    // 0x283f24: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x283f24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x283f28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x283f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x283f2c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x283f2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x283f30: 0xc08535a  jal         func_214D68
    ctx->pc = 0x283F30u;
    SET_GPR_U32(ctx, 31, 0x283F38u);
    ctx->pc = 0x283F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283F30u;
    // 0x283f34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x283F30u, 0x283F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283F38u;
label_283f38:
    // 0x283f38: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x283f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_283f3c:
    // 0x283f3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x283f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283f40: 0xc4400114  lwc1        $f0, 0x114($v0)
    ctx->pc = 0x283f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283f44: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x283f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x283f48: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x283f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283f4c: 0xe6010054  swc1        $f1, 0x54($s0)
    ctx->pc = 0x283f4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x283f50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x283f50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283f54: 0x3e00008  jr          $ra
    ctx->pc = 0x283F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F54u;
        // 0x283f58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283F5Cu;
}
