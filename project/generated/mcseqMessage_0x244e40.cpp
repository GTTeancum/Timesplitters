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

// Function: mcseqMessage
// Address: 0x244e40 - 0x244ee4
void mcseqMessage_0x244e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcseqMessage_0x244e40");
#endif

    switch (ctx->pc) {
        case 0x244e74u: goto label_244e74;
        case 0x244ea0u: goto label_244ea0;
        default: break;
    }

    ctx->pc = 0x244e40u;

    // 0x244e40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x244e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x244e44: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x244e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x244e48: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x244e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x244e4c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x244e4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244e50: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x244e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x244e54: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x244e54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244e58: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x244e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x244e5c: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x244E5Cu;
    {
        const bool branch_taken_0x244e5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x244E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E5Cu;
        // 0x244e60: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244e5c) {
            ctx->pc = 0x244E7Cu;
            goto label_244e7c;
        }
    }
    ctx->pc = 0x244E64u;
    // 0x244e64: 0x3c1001fc  lui         $s0, 0x1FC
    ctx->pc = 0x244e64u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)508 << 16));
    // 0x244e68: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x244e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x244e6c: 0xc0b98d8  jal         func_2E6360
    ctx->pc = 0x244E6Cu;
    SET_GPR_U32(ctx, 31, 0x244E74u);
    ctx->pc = 0x244E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244E6Cu;
    // 0x244e70: 0x26043470  addiu       $a0, $s0, 0x3470 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 13424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6360u, 0x244E6Cu, 0x244E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244E74u;
label_244e74:
    // 0x244e74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x244E74u;
    {
        const bool branch_taken_0x244e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E74u;
        // 0x244e78: 0x26123470  addiu       $s2, $s0, 0x3470 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 13424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244e74) {
            ctx->pc = 0x244E84u;
            goto label_244e84;
        }
    }
    ctx->pc = 0x244E7Cu;
label_244e7c:
    // 0x244e7c: 0x3c1001fc  lui         $s0, 0x1FC
    ctx->pc = 0x244e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)508 << 16));
    // 0x244e80: 0x26123470  addiu       $s2, $s0, 0x3470
    ctx->pc = 0x244e80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 13424));
label_244e84:
    // 0x244e84: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x244E84u;
    {
        const bool branch_taken_0x244e84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x244E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E84u;
        // 0x244e88: 0xa24000ff  sb          $zero, 0xFF($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 255), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244e84) {
            ctx->pc = 0x244EA8u;
            goto label_244ea8;
        }
    }
    ctx->pc = 0x244E8Cu;
    // 0x244e8c: 0x3c1001fc  lui         $s0, 0x1FC
    ctx->pc = 0x244e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)508 << 16));
    // 0x244e90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x244e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244e94: 0x26043570  addiu       $a0, $s0, 0x3570
    ctx->pc = 0x244e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 13680));
    // 0x244e98: 0xc0b98d8  jal         func_2E6360
    ctx->pc = 0x244E98u;
    SET_GPR_U32(ctx, 31, 0x244EA0u);
    ctx->pc = 0x244E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244E98u;
    // 0x244e9c: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6360u, 0x244E98u, 0x244EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244EA0u;
label_244ea0:
    // 0x244ea0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x244EA0u;
    {
        const bool branch_taken_0x244ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244EA0u;
        // 0x244ea4: 0x26023570  addiu       $v0, $s0, 0x3570 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 13680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244ea0) {
            ctx->pc = 0x244EB0u;
            goto label_244eb0;
        }
    }
    ctx->pc = 0x244EA8u;
label_244ea8:
    // 0x244ea8: 0x3c1001fc  lui         $s0, 0x1FC
    ctx->pc = 0x244ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)508 << 16));
    // 0x244eac: 0x26023570  addiu       $v0, $s0, 0x3570
    ctx->pc = 0x244eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 13680));
label_244eb0:
    // 0x244eb0: 0xaf92b7d4  sw          $s2, -0x482C($gp)
    ctx->pc = 0x244eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948820), GPR_U32(ctx, 18));
    // 0x244eb4: 0xaf93a0cc  sw          $s3, -0x5F34($gp)
    ctx->pc = 0x244eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942924), GPR_U32(ctx, 19));
    // 0x244eb8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x244eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x244ebc: 0xaf82b7d8  sw          $v0, -0x4828($gp)
    ctx->pc = 0x244ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948824), GPR_U32(ctx, 2));
    // 0x244ec0: 0xaf83a0a8  sw          $v1, -0x5F58($gp)
    ctx->pc = 0x244ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942888), GPR_U32(ctx, 3));
    // 0x244ec4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x244ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x244ec8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x244ec8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x244ecc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x244eccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x244ed0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x244ed0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244ed4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x244ed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244ed8: 0xa04000ff  sb          $zero, 0xFF($v0)
    ctx->pc = 0x244ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 255), (uint8_t)GPR_U32(ctx, 0));
    // 0x244edc: 0x3e00008  jr          $ra
    ctx->pc = 0x244EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244EDCu;
        // 0x244ee0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244EE4u;
}
