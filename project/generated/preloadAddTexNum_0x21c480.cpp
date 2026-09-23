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

// Function: preloadAddTexNum
// Address: 0x21c480 - 0x21c500
void preloadAddTexNum_0x21c480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("preloadAddTexNum_0x21c480");
#endif

    switch (ctx->pc) {
        case 0x21c49cu: goto label_21c49c;
        default: break;
    }

    ctx->pc = 0x21c480u;

    // 0x21c480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21c480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21c484: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c488: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x21c488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21c48c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21c48cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c490: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21c490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21c494: 0xc0871b2  jal         func_21C6C8
    ctx->pc = 0x21C494u;
    SET_GPR_U32(ctx, 31, 0x21C49Cu);
    ctx->pc = 0x21C498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C494u;
    // 0x21c498: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C6C8u, 0x21C494u, 0x21C49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C49Cu;
label_21c49c:
    // 0x21c49c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x21C49Cu;
    {
        const bool branch_taken_0x21c49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C49Cu;
        // 0x21c4a0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c49c) {
            ctx->pc = 0x21C4F0u;
            goto label_21c4f0;
        }
    }
    ctx->pc = 0x21C4A4u;
    // 0x21c4a4: 0x8f839d70  lw          $v1, -0x6290($gp)
    ctx->pc = 0x21c4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942064)));
    // 0x21c4a8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x21c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x21c4ac: 0x3c0401fb  lui         $a0, 0x1FB
    ctx->pc = 0x21c4acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)507 << 16));
    // 0x21c4b0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x21c4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21c4b4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x21c4b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21c4b8: 0x24844c60  addiu       $a0, $a0, 0x4C60
    ctx->pc = 0x21c4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19552));
    // 0x21c4bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21c4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21c4c0: 0xaf839d70  sw          $v1, -0x6290($gp)
    ctx->pc = 0x21c4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942064), GPR_U32(ctx, 3));
    // 0x21c4c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21c4c8: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x21c4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
    // 0x21c4cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21c4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c4d0: 0xac510010  sw          $s1, 0x10($v0)
    ctx->pc = 0x21c4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
    // 0x21c4d4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21c4d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c4d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c4d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c4dc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x21c4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x21c4e0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x21c4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x21c4e4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x21c4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x21c4e8: 0x8087090  j           func_21C240
    ctx->pc = 0x21C4E8u;
    ctx->pc = 0x21C4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C4E8u;
    // 0x21c4ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C240u;
    preloadInsert_0x21c240(rdram, ctx, runtime); return;
    ctx->pc = 0x21C4F0u;
label_21c4f0:
    // 0x21c4f0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21c4f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c4f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c4f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x21C4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C4F8u;
        // 0x21c4fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C4F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C500u;
}
