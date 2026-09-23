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

// Function: mmNewTile
// Address: 0x248910 - 0x2489e0
void mmNewTile_0x248910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmNewTile_0x248910");
#endif

    switch (ctx->pc) {
        case 0x248948u: goto label_248948;
        case 0x2489a8u: goto label_2489a8;
        default: break;
    }

    ctx->pc = 0x248910u;

    // 0x248910: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x248910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x248914: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x248914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x248918: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x248918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x24891c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x24891cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248920: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x248920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x248924: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x248924u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248928: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x248928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24892c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x24892cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248930: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x248930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x248934: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x248934u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248938: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x248938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24893c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x24893cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x248940: 0xc092194  jal         func_248650
    ctx->pc = 0x248940u;
    SET_GPR_U32(ctx, 31, 0x248948u);
    ctx->pc = 0x248944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248940u;
    // 0x248944: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248650u, 0x248940u, 0x248948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248948u;
label_248948:
    // 0x248948: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x248948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x24894c: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x24894cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x248950: 0x24636588  addiu       $v1, $v1, 0x6588
    ctx->pc = 0x248950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25992));
    // 0x248954: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x248954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248958: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x248958u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x24895c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24895cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248960: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x248960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x248964: 0x3c077f7f  lui         $a3, 0x7F7F
    ctx->pc = 0x248964u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32639 << 16));
    // 0x248968: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x248968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x24896c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24896cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248970: 0x8c6a0070  lw          $t2, 0x70($v1)
    ctx->pc = 0x248970u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x248974: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x248974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248978: 0x8c690018  lw          $t1, 0x18($v1)
    ctx->pc = 0x248978u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x24897c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24897cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248980: 0x8d480070  lw          $t0, 0x70($t2)
    ctx->pc = 0x248980u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 112)));
    // 0x248984: 0x34e77f80  ori         $a3, $a3, 0x7F80
    ctx->pc = 0x248984u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32640);
    // 0x248988: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x248988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x24898c: 0x8d020070  lw          $v0, 0x70($t0)
    ctx->pc = 0x24898cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 112)));
    // 0x248990: 0xae090008  sw          $t1, 0x8($s0)
    ctx->pc = 0x248990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 9));
    // 0x248994: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x248994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x248998: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x248998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x24899c: 0xae0a0028  sw          $t2, 0x28($s0)
    ctx->pc = 0x24899cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 10));
    // 0x2489a0: 0xc0918c2  jal         func_246308
    ctx->pc = 0x2489A0u;
    SET_GPR_U32(ctx, 31, 0x2489A8u);
    ctx->pc = 0x2489A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2489A0u;
    // 0x2489a4: 0xae08002c  sw          $t0, 0x2C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246308u, 0x2489A0u, 0x2489A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2489A8u;
label_2489a8:
    // 0x2489a8: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x2489a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x2489ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2489acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2489b0: 0xae130010  sw          $s3, 0x10($s0)
    ctx->pc = 0x2489b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 19));
    // 0x2489b4: 0xae140014  sw          $s4, 0x14($s0)
    ctx->pc = 0x2489b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 20));
    // 0x2489b8: 0xae150018  sw          $s5, 0x18($s0)
    ctx->pc = 0x2489b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 21));
    // 0x2489bc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2489bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2489c0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2489c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2489c4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2489c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2489c8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2489c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2489cc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2489ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2489d0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2489d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2489d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2489d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2489d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2489D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2489DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2489D8u;
        // 0x2489dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2489D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2489E0u;
}
