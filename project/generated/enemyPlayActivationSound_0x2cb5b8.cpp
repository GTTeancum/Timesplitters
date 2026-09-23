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

// Function: enemyPlayActivationSound
// Address: 0x2cb5b8 - 0x2cb644
void enemyPlayActivationSound_0x2cb5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyPlayActivationSound_0x2cb5b8");
#endif

    ctx->pc = 0x2cb5b8u;

    // 0x2cb5b8: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x2cb5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x2cb5bc: 0x1840001f  blez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2CB5BCu;
    {
        const bool branch_taken_0x2cb5bc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2CB5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB5BCu;
        // 0x2cb5c0: 0x8c850160  lw          $a1, 0x160($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb5bc) {
            ctx->pc = 0x2CB63Cu;
            goto label_2cb63c;
        }
    }
    ctx->pc = 0x2CB5C4u;
    // 0x2cb5c4: 0x84a30004  lh          $v1, 0x4($a1)
    ctx->pc = 0x2cb5c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2cb5c8: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x2cb5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2cb5cc: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2CB5CCu;
    {
        const bool branch_taken_0x2cb5cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cb5cc) {
            ctx->pc = 0x2CB5D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB5CCu;
            // 0x2cb5d0: 0x24850030  addiu       $a1, $a0, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB604u;
            goto label_2cb604;
        }
    }
    ctx->pc = 0x2CB5D4u;
    // 0x2cb5d4: 0x2862004f  slti        $v0, $v1, 0x4F
    ctx->pc = 0x2cb5d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)79) ? 1 : 0);
    // 0x2cb5d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CB5D8u;
    {
        const bool branch_taken_0x2cb5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB5D8u;
        // 0x2cb5dc: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb5d8) {
            ctx->pc = 0x2CB5F0u;
            goto label_2cb5f0;
        }
    }
    ctx->pc = 0x2CB5E0u;
    // 0x2cb5e0: 0x50620010  beql        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CB5E0u;
    {
        const bool branch_taken_0x2cb5e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cb5e0) {
            ctx->pc = 0x2CB5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB5E0u;
            // 0x2cb5e4: 0x24850030  addiu       $a1, $a0, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB624u;
            goto label_2cb624;
        }
    }
    ctx->pc = 0x2CB5E8u;
    // 0x2cb5e8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2CB5E8u;
    {
        const bool branch_taken_0x2cb5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB5E8u;
        // 0x2cb5ec: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb5e8) {
            ctx->pc = 0x2CB62Cu;
            goto label_2cb62c;
        }
    }
    ctx->pc = 0x2CB5F0u;
label_2cb5f0:
    // 0x2cb5f0: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x2cb5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x2cb5f4: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CB5F4u;
    {
        const bool branch_taken_0x2cb5f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cb5f4) {
            ctx->pc = 0x2CB5F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB5F4u;
            // 0x2cb5f8: 0x24850030  addiu       $a1, $a0, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB614u;
            goto label_2cb614;
        }
    }
    ctx->pc = 0x2CB5FCu;
    // 0x2cb5fc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2CB5FCu;
    {
        const bool branch_taken_0x2cb5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB5FCu;
        // 0x2cb600: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb5fc) {
            ctx->pc = 0x2CB62Cu;
            goto label_2cb62c;
        }
    }
    ctx->pc = 0x2CB604u;
label_2cb604:
    // 0x2cb604: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2cb604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2cb608: 0x24040330  addiu       $a0, $zero, 0x330
    ctx->pc = 0x2cb608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
    // 0x2cb60c: 0x8081602  j           func_205808
    ctx->pc = 0x2CB60Cu;
    ctx->pc = 0x2CB610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB60Cu;
    // 0x2cb610: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205808u;
    soundDelayStartEx_0x205808(rdram, ctx, runtime); return;
    ctx->pc = 0x2CB614u;
label_2cb614:
    // 0x2cb614: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2cb614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2cb618: 0x2404028f  addiu       $a0, $zero, 0x28F
    ctx->pc = 0x2cb618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 655));
    // 0x2cb61c: 0x8081602  j           func_205808
    ctx->pc = 0x2CB61Cu;
    ctx->pc = 0x2CB620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB61Cu;
    // 0x2cb620: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205808u;
    soundDelayStartEx_0x205808(rdram, ctx, runtime); return;
    ctx->pc = 0x2CB624u;
label_2cb624:
    // 0x2cb624: 0x8081546  j           func_205518
    ctx->pc = 0x2CB624u;
    ctx->pc = 0x2CB628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB624u;
    // 0x2cb628: 0x2404028f  addiu       $a0, $zero, 0x28F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 655));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    soundStart_0x205518(rdram, ctx, runtime); return;
    ctx->pc = 0x2CB62Cu;
label_2cb62c:
    // 0x2cb62c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB62Cu;
    {
        const bool branch_taken_0x2cb62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB62Cu;
        // 0x2cb630: 0x24850030  addiu       $a1, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb62c) {
            ctx->pc = 0x2CB63Cu;
            goto label_2cb63c;
        }
    }
    ctx->pc = 0x2CB634u;
    // 0x2cb634: 0x8081546  j           func_205518
    ctx->pc = 0x2CB634u;
    ctx->pc = 0x2CB638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB634u;
    // 0x2cb638: 0x240400bc  addiu       $a0, $zero, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    soundStart_0x205518(rdram, ctx, runtime); return;
    ctx->pc = 0x2CB63Cu;
label_2cb63c:
    // 0x2cb63c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB63Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB644u;
}
