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

// Function: mmfileDirBuiltinMaps
// Address: 0x253568 - 0x253620
void mmfileDirBuiltinMaps_0x253568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmfileDirBuiltinMaps_0x253568");
#endif

    switch (ctx->pc) {
        case 0x2535a0u: goto label_2535a0;
        case 0x2535f0u: goto label_2535f0;
        default: break;
    }

    ctx->pc = 0x253568u;

    // 0x253568: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x253568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25356c: 0x8f87a22c  lw          $a3, -0x5DD4($gp)
    ctx->pc = 0x25356cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x253570: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x253570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x253574: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x253574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x253578: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x253578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25357c: 0x3c13002f  lui         $s3, 0x2F
    ctx->pc = 0x25357cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)47 << 16));
    // 0x253580: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x253580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x253584: 0x3c120035  lui         $s2, 0x35
    ctx->pc = 0x253584u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)53 << 16));
    // 0x253588: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x253588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x25358c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x25358cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253590: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x253590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x253594: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x253594u;
    {
        const bool branch_taken_0x253594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253594u;
        // 0x253598: 0xace20008  sw          $v0, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253594) {
            ctx->pc = 0x2535A4u;
            goto label_2535a4;
        }
    }
    ctx->pc = 0x25359Cu;
    // 0x25359c: 0x0  nop
    ctx->pc = 0x25359cu;
    // NOP
label_2535a0:
    // 0x2535a0: 0x8f87a22c  lw          $a3, -0x5DD4($gp)
    ctx->pc = 0x2535a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
label_2535a4:
    // 0x2535a4: 0x8f849354  lw          $a0, -0x6CAC($gp)
    ctx->pc = 0x2535a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2535a8: 0x1128c0  sll         $a1, $s1, 3
    ctx->pc = 0x2535a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2535ac: 0x264272d8  addiu       $v0, $s2, 0x72D8
    ctx->pc = 0x2535acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29400));
    // 0x2535b0: 0x26632c18  addiu       $v1, $s3, 0x2C18
    ctx->pc = 0x2535b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 11288));
    // 0x2535b4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2535b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2535b8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2535b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2535bc: 0x24100028  addiu       $s0, $zero, 0x28
    ctx->pc = 0x2535bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2535c0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2535c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2535c4: 0x2308018  mult        $s0, $s1, $s0
    ctx->pc = 0x2535c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2535c8: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x2535c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2535cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2535ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2535d0: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x2535d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2535d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2535d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2535d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2535d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2535dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2535dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2535e0: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x2535e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2535e4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2535e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2535e8: 0xc0b98d8  jal         func_2E6360
    ctx->pc = 0x2535E8u;
    SET_GPR_U32(ctx, 31, 0x2535F0u);
    ctx->pc = 0x2535ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2535E8u;
    // 0x2535ec: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6360u, 0x2535E8u, 0x2535F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2535F0u;
label_2535f0:
    // 0x2535f0: 0x8f83a22c  lw          $v1, -0x5DD4($gp)
    ctx->pc = 0x2535f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x2535f4: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x2535f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2535f8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2535f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2535fc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2535FCu;
    {
        const bool branch_taken_0x2535fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2535FCu;
        // 0x253600: 0xa060002b  sb          $zero, 0x2B($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 43), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2535fc) {
            ctx->pc = 0x2535A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2535a0;
        }
    }
    ctx->pc = 0x253604u;
    // 0x253604: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x253604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x253608: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x253608u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25360c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25360cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253610: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x253610u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253614: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x253614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253618: 0x3e00008  jr          $ra
    ctx->pc = 0x253618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25361Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253618u;
        // 0x25361c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253620u;
}
