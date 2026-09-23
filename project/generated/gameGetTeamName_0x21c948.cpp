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

// Function: gameGetTeamName
// Address: 0x21c948 - 0x21ca0c
void gameGetTeamName_0x21c948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gameGetTeamName_0x21c948");
#endif

    switch (ctx->pc) {
        case 0x21ca00u: goto label_21ca00;
        default: break;
    }

    ctx->pc = 0x21c948u;

    // 0x21c948: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21c948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21c94c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x21c94cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21c950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21c954: 0x8c44c4f0  lw          $a0, -0x3B10($v0)
    ctx->pc = 0x21c954u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x21c958: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x21c958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21c95c: 0x14830016  bne         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x21C95Cu;
    {
        const bool branch_taken_0x21c95c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x21C960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C95Cu;
        // 0x21c960: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c95c) {
            ctx->pc = 0x21C9B8u;
            goto label_21c9b8;
        }
    }
    ctx->pc = 0x21C964u;
    // 0x21c964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21c964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21c968: 0x54c20009  bnel        $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21C968u;
    {
        const bool branch_taken_0x21c968 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x21c968) {
            ctx->pc = 0x21C96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C968u;
            // 0x21c96c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C990u;
            goto label_21c990;
        }
    }
    ctx->pc = 0x21C970u;
    // 0x21c970: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x21c970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x21c974: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x21c974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x21c978: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x21c978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x21c97c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21c97cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21c980: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21c980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21c984: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21c984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21c988: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x21C988u;
    {
        const bool branch_taken_0x21c988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C988u;
        // 0x21c98c: 0x8c82069c  lw          $v0, 0x69C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c988) {
            ctx->pc = 0x21CA00u;
            goto label_21ca00;
        }
    }
    ctx->pc = 0x21C990u;
label_21c990:
    // 0x21c990: 0x14c2000a  bne         $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21C990u;
    {
        const bool branch_taken_0x21c990 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x21C994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C990u;
        // 0x21c994: 0x8f859354  lw          $a1, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c990) {
            ctx->pc = 0x21C9BCu;
            goto label_21c9bc;
        }
    }
    ctx->pc = 0x21C998u;
    // 0x21c998: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x21c998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x21c99c: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x21c99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x21c9a0: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x21c9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x21c9a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21c9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21c9a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21c9ac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21c9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21c9b0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x21C9B0u;
    {
        const bool branch_taken_0x21c9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C9B0u;
        // 0x21c9b4: 0x8c8206a0  lw          $v0, 0x6A0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c9b0) {
            ctx->pc = 0x21CA00u;
            goto label_21ca00;
        }
    }
    ctx->pc = 0x21C9B8u;
label_21c9b8:
    // 0x21c9b8: 0x8f859354  lw          $a1, -0x6CAC($gp)
    ctx->pc = 0x21c9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
label_21c9bc:
    // 0x21c9bc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21c9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21c9c0: 0x2442c378  addiu       $v0, $v0, -0x3C88
    ctx->pc = 0x21c9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951800));
    // 0x21c9c4: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x21c9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x21c9c8: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x21c9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x21c9cc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x21c9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21c9d0: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x21c9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x21c9d4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x21c9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x21c9d8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x21c9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x21c9dc: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x21c9dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21c9e0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x21c9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21c9e4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x21c9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x21c9e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21c9ec: 0x2484e568  addiu       $a0, $a0, -0x1A98
    ctx->pc = 0x21c9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960488));
    // 0x21c9f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21c9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21c9f4: 0x8c650b08  lw          $a1, 0xB08($v1)
    ctx->pc = 0x21c9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2824)));
    // 0x21c9f8: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x21C9F8u;
    SET_GPR_U32(ctx, 31, 0x21CA00u);
    ctx->pc = 0x21C9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C9F8u;
    // 0x21c9fc: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x21C9F8u, 0x21CA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CA00u;
label_21ca00:
    // 0x21ca00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21ca00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ca04: 0x3e00008  jr          $ra
    ctx->pc = 0x21CA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA04u;
        // 0x21ca08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CA04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CA0Cu;
}
