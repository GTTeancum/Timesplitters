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

// Function: demoplaybackTick
// Address: 0x240ea0 - 0x240f38
void demoplaybackTick_0x240ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("demoplaybackTick_0x240ea0");
#endif

    switch (ctx->pc) {
        case 0x240eb8u: goto label_240eb8;
        case 0x240ef8u: goto label_240ef8;
        default: break;
    }

    ctx->pc = 0x240ea0u;

    // 0x240ea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x240ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x240ea4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x240ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240ea8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x240ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x240eac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x240eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x240eb0: 0xc080e18  jal         func_203860
    ctx->pc = 0x240EB0u;
    SET_GPR_U32(ctx, 31, 0x240EB8u);
    ctx->pc = 0x240EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240EB0u;
    // 0x240eb4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203860u, 0x240EB0u, 0x240EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240EB8u;
label_240eb8:
    // 0x240eb8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x240EB8u;
    {
        const bool branch_taken_0x240eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240EB8u;
        // 0x240ebc: 0x3c1101fc  lui         $s1, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240eb8) {
            ctx->pc = 0x240ECCu;
            goto label_240ecc;
        }
    }
    ctx->pc = 0x240EC0u;
    // 0x240ec0: 0x24031518  addiu       $v1, $zero, 0x1518
    ctx->pc = 0x240ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5400));
    // 0x240ec4: 0x262211f8  addiu       $v0, $s1, 0x11F8
    ctx->pc = 0x240ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4600));
    // 0x240ec8: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x240ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
label_240ecc:
    // 0x240ecc: 0x263011f8  addiu       $s0, $s1, 0x11F8
    ctx->pc = 0x240eccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4600));
    // 0x240ed0: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x240ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x240ed4: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x240ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x240ed8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x240ED8u;
    {
        const bool branch_taken_0x240ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240ed8) {
            ctx->pc = 0x240EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240ED8u;
            // 0x240edc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x240EE0u;
            goto label_240ee0;
        }
    }
    ctx->pc = 0x240EE0u;
label_240ee0:
    // 0x240ee0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x240ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x240ee4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x240ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x240ee8: 0x1464000e  bne         $v1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x240EE8u;
    {
        const bool branch_taken_0x240ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x240EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240EE8u;
        // 0x240eec: 0xae030034  sw          $v1, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ee8) {
            ctx->pc = 0x240F24u;
            goto label_240f24;
        }
    }
    ctx->pc = 0x240EF0u;
    // 0x240ef0: 0xc0895e4  jal         func_225790
    ctx->pc = 0x240EF0u;
    SET_GPR_U32(ctx, 31, 0x240EF8u);
    ctx->pc = 0x240EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240EF0u;
    // 0x240ef4: 0x9384a0a6  lbu         $a0, -0x5F5A($gp) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942886)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225790u, 0x240EF0u, 0x240EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240EF8u;
label_240ef8:
    // 0x240ef8: 0x9382a0a6  lbu         $v0, -0x5F5A($gp)
    ctx->pc = 0x240ef8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942886)));
    // 0x240efc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x240efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240f00: 0x24041518  addiu       $a0, $zero, 0x1518
    ctx->pc = 0x240f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5400));
    // 0x240f04: 0xae2511f8  sw          $a1, 0x11F8($s1)
    ctx->pc = 0x240f04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4600), GPR_U32(ctx, 5));
    // 0x240f08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x240f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x240f0c: 0xae040034  sw          $a0, 0x34($s0)
    ctx->pc = 0x240f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
    // 0x240f10: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x240f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x240f14: 0x2c630008  sltiu       $v1, $v1, 0x8
    ctx->pc = 0x240f14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x240f18: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x240F18u;
    {
        const bool branch_taken_0x240f18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x240F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F18u;
        // 0x240f1c: 0xa382a0a6  sb          $v0, -0x5F5A($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294942886), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240f18) {
            ctx->pc = 0x240F24u;
            goto label_240f24;
        }
    }
    ctx->pc = 0x240F20u;
    // 0x240f20: 0xa385a0a6  sb          $a1, -0x5F5A($gp)
    ctx->pc = 0x240f20u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294942886), (uint8_t)GPR_U32(ctx, 5));
label_240f24:
    // 0x240f24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x240f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x240f28: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x240f28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240f2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x240f2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240f30: 0x3e00008  jr          $ra
    ctx->pc = 0x240F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F30u;
        // 0x240f34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240F38u;
}
