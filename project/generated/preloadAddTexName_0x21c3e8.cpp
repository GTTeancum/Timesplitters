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

// Function: preloadAddTexName
// Address: 0x21c3e8 - 0x21c480
void preloadAddTexName_0x21c3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("preloadAddTexName_0x21c3e8");
#endif

    switch (ctx->pc) {
        case 0x21c408u: goto label_21c408;
        case 0x21c440u: goto label_21c440;
        default: break;
    }

    ctx->pc = 0x21c3e8u;

    // 0x21c3e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21c3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21c3ec: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x21c3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21c3f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21c3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21c3f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21c3f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c3f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21c3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21c3fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21c3fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c400: 0xc08718c  jal         func_21C630
    ctx->pc = 0x21C400u;
    SET_GPR_U32(ctx, 31, 0x21C408u);
    ctx->pc = 0x21C404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C400u;
    // 0x21c404: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C630u, 0x21C400u, 0x21C408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C408u;
label_21c408:
    // 0x21c408: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x21C408u;
    {
        const bool branch_taken_0x21c408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C408u;
        // 0x21c40c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c408) {
            ctx->pc = 0x21C46Cu;
            goto label_21c46c;
        }
    }
    ctx->pc = 0x21C410u;
    // 0x21c410: 0x8f829d70  lw          $v0, -0x6290($gp)
    ctx->pc = 0x21c410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942064)));
    // 0x21c414: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x21c414u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x21c418: 0x3c0301fb  lui         $v1, 0x1FB
    ctx->pc = 0x21c418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)507 << 16));
    // 0x21c41c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x21c41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21c420: 0x508018  mult        $s0, $v0, $s0
    ctx->pc = 0x21c420u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x21c424: 0x24634c60  addiu       $v1, $v1, 0x4C60
    ctx->pc = 0x21c424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19552));
    // 0x21c428: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21c428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21c42c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21c42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c430: 0xaf829d70  sw          $v0, -0x6290($gp)
    ctx->pc = 0x21c430u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942064), GPR_U32(ctx, 2));
    // 0x21c434: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x21c434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x21c438: 0xc0868be  jal         func_21A2F8
    ctx->pc = 0x21C438u;
    SET_GPR_U32(ctx, 31, 0x21C440u);
    ctx->pc = 0x21C43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C438u;
    // 0x21c43c: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A2F8u, 0x21C438u, 0x21C440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C440u;
label_21c440:
    // 0x21c440: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x21c440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x21c444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c448: 0xae120010  sw          $s2, 0x10($s0)
    ctx->pc = 0x21c448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    // 0x21c44c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x21c44cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x21c450: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x21c450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x21c454: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21c454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21c458: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21c458u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21c45c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21c45cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c460: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c464: 0x8087090  j           func_21C240
    ctx->pc = 0x21C464u;
    ctx->pc = 0x21C468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C464u;
    // 0x21c468: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C240u;
    preloadInsert_0x21c240(rdram, ctx, runtime); return;
    ctx->pc = 0x21C46Cu;
label_21c46c:
    // 0x21c46c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21c46cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21c470: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21c470u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c474: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c474u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c478: 0x3e00008  jr          $ra
    ctx->pc = 0x21C478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C478u;
        // 0x21c47c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C480u;
}
