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

// Function: gunFireSfx
// Address: 0x28de68 - 0x28df28
void gunFireSfx_0x28de68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gunFireSfx_0x28de68");
#endif

    switch (ctx->pc) {
        case 0x28deecu: goto label_28deec;
        default: break;
    }

    ctx->pc = 0x28de68u;

    // 0x28de68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28de68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28de6c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28de6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28de70: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28de70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28de74: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x28de74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28de78: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x28DE78u;
    {
        const bool branch_taken_0x28de78 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DE78u;
        // 0x28de7c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28de78) {
            ctx->pc = 0x28DE94u;
            goto label_28de94;
        }
    }
    ctx->pc = 0x28DE80u;
    // 0x28de80: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x28de80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28de84: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x28de84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x28de88: 0x24040190  addiu       $a0, $zero, 0x190
    ctx->pc = 0x28de88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x28de8c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28DE8Cu;
    {
        const bool branch_taken_0x28de8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DE8Cu;
        // 0x28de90: 0x2442624c  addiu       $v0, $v0, 0x624C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28de8c) {
            ctx->pc = 0x28DEA4u;
            goto label_28dea4;
        }
    }
    ctx->pc = 0x28DE94u;
label_28de94:
    // 0x28de94: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x28de94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28de98: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x28de98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x28de9c: 0x24040190  addiu       $a0, $zero, 0x190
    ctx->pc = 0x28de9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x28dea0: 0x244262d4  addiu       $v0, $v0, 0x62D4
    ctx->pc = 0x28dea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25300));
label_28dea4:
    // 0x28dea4: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x28dea4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x28dea8: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x28dea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28deac: 0x8f829f54  lw          $v0, -0x60AC($gp)
    ctx->pc = 0x28deacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942548)));
    // 0x28deb0: 0x8f839f4c  lw          $v1, -0x60B4($gp)
    ctx->pc = 0x28deb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942540)));
    // 0x28deb4: 0x8f849f50  lw          $a0, -0x60B0($gp)
    ctx->pc = 0x28deb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942544)));
    // 0x28deb8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x28deb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x28debc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x28debcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x28dec0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28dec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28dec4: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x28DEC4u;
    {
        const bool branch_taken_0x28dec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dec4) {
            ctx->pc = 0x28DEC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DEC4u;
            // 0x28dec8: 0x8ca4002c  lw          $a0, 0x2C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DED0u;
            goto label_28ded0;
        }
    }
    ctx->pc = 0x28DECCu;
    // 0x28decc: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x28deccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_28ded0:
    // 0x28ded0: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x28ded0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x28ded4: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x28DED4u;
    {
        const bool branch_taken_0x28ded4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28DED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DED4u;
        // 0x28ded8: 0x8cb00034  lw          $s0, 0x34($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ded4) {
            ctx->pc = 0x28DF14u;
            goto label_28df14;
        }
    }
    ctx->pc = 0x28DEDCu;
    // 0x28dedc: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28DEDCu;
    {
        const bool branch_taken_0x28dedc = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28dedc) {
            ctx->pc = 0x28DEECu;
            goto label_28deec;
        }
    }
    ctx->pc = 0x28DEE4u;
    // 0x28dee4: 0xc081546  jal         func_205518
    ctx->pc = 0x28DEE4u;
    SET_GPR_U32(ctx, 31, 0x28DEECu);
    ctx->pc = 0x28DEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DEE4u;
    // 0x28dee8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x28DEE4u, 0x28DEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DEECu;
label_28deec:
    // 0x28deec: 0x600000a  bltz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x28DEECu;
    {
        const bool branch_taken_0x28deec = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x28DEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DEECu;
        // 0x28def0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28deec) {
            ctx->pc = 0x28DF18u;
            goto label_28df18;
        }
    }
    ctx->pc = 0x28DEF4u;
    // 0x28def4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28def4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28def8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28def8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28defc: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x28defcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x28df00: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28df00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28df04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28df04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28df08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28df08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28df0c: 0x8081602  j           func_205808
    ctx->pc = 0x28DF0Cu;
    ctx->pc = 0x28DF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DF0Cu;
    // 0x28df10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205808u;
    soundDelayStartEx_0x205808(rdram, ctx, runtime); return;
    ctx->pc = 0x28DF14u;
label_28df14:
    // 0x28df14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28df14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28df18:
    // 0x28df18: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28df18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28df1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28df1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28df20: 0x3e00008  jr          $ra
    ctx->pc = 0x28DF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DF20u;
        // 0x28df24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DF28u;
}
