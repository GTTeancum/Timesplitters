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

// Function: preloadAddFile
// Address: 0x21c2d8 - 0x21c350
void preloadAddFile_0x21c2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("preloadAddFile_0x21c2d8");
#endif

    switch (ctx->pc) {
        case 0x21c2f4u: goto label_21c2f4;
        default: break;
    }

    ctx->pc = 0x21c2d8u;

    // 0x21c2d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21c2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21c2dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c2e0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x21c2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21c2e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21c2e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c2e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21c2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21c2ec: 0xc087140  jal         func_21C500
    ctx->pc = 0x21C2ECu;
    SET_GPR_U32(ctx, 31, 0x21C2F4u);
    ctx->pc = 0x21C2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C2ECu;
    // 0x21c2f0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C500u, 0x21C2ECu, 0x21C2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C2F4u;
label_21c2f4:
    // 0x21c2f4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x21C2F4u;
    {
        const bool branch_taken_0x21c2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C2F4u;
        // 0x21c2f8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c2f4) {
            ctx->pc = 0x21C340u;
            goto label_21c340;
        }
    }
    ctx->pc = 0x21C2FCu;
    // 0x21c2fc: 0x8f839d70  lw          $v1, -0x6290($gp)
    ctx->pc = 0x21c2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942064)));
    // 0x21c300: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x21c300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x21c304: 0x3c0401fb  lui         $a0, 0x1FB
    ctx->pc = 0x21c304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)507 << 16));
    // 0x21c308: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x21c308u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21c30c: 0x24844c60  addiu       $a0, $a0, 0x4C60
    ctx->pc = 0x21c30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19552));
    // 0x21c310: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21c310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21c314: 0xaf839d70  sw          $v1, -0x6290($gp)
    ctx->pc = 0x21c314u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942064), GPR_U32(ctx, 3));
    // 0x21c318: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21c318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21c31c: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x21c31cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
    // 0x21c320: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21c320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c324: 0xac510010  sw          $s1, 0x10($v0)
    ctx->pc = 0x21c324u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
    // 0x21c328: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21c328u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c32c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c32cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c330: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x21c330u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x21c334: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x21c334u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x21c338: 0x8087090  j           func_21C240
    ctx->pc = 0x21C338u;
    ctx->pc = 0x21C33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C338u;
    // 0x21c33c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C240u;
    preloadInsert_0x21c240(rdram, ctx, runtime); return;
    ctx->pc = 0x21C340u;
label_21c340:
    // 0x21c340: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21c340u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c344: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c344u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c348: 0x3e00008  jr          $ra
    ctx->pc = 0x21C348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C348u;
        // 0x21c34c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C350u;
}
