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

// Function: makebox
// Address: 0x22cec0 - 0x22cf6c
void makebox_0x22cec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("makebox_0x22cec0");
#endif

    switch (ctx->pc) {
        case 0x22cf24u: goto label_22cf24;
        default: break;
    }

    ctx->pc = 0x22cec0u;

    // 0x22cec0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x22cec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x22cec4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x22cec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x22cec8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x22cec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22cecc: 0x8a400  sll         $s4, $t0, 16
    ctx->pc = 0x22ceccu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x22ced0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22ced0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22ced4: 0x79c00  sll         $s3, $a3, 16
    ctx->pc = 0x22ced4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x22ced8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22ced8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22cedc: 0x69400  sll         $s2, $a2, 16
    ctx->pc = 0x22cedcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x22cee0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22cee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22cee4: 0x58c00  sll         $s1, $a1, 16
    ctx->pc = 0x22cee4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x22cee8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22cee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ceec: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x22ceecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x22cef0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x22cef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x22cef4: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x22cef4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x22cef8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x22cef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x22cefc: 0x129403  sra         $s2, $s2, 16
    ctx->pc = 0x22cefcu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 16));
    // 0x22cf00: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x22cf00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cf04: 0x139c03  sra         $s3, $s3, 16
    ctx->pc = 0x22cf04u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 16));
    // 0x22cf08: 0x14a403  sra         $s4, $s4, 16
    ctx->pc = 0x22cf08u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 20), 16));
    // 0x22cf0c: 0x3136ffff  andi        $s6, $t1, 0xFFFF
    ctx->pc = 0x22cf0cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x22cf10: 0x315700ff  andi        $s7, $t2, 0xFF
    ctx->pc = 0x22cf10u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x22cf14: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x22cf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x22cf18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22cf18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cf1c: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x22CF1Cu;
    SET_GPR_U32(ctx, 31, 0x22CF24u);
    ctx->pc = 0x22CF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CF1Cu;
    // 0x22cf20: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x22CF1Cu, 0x22CF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CF24u;
label_22cf24:
    // 0x22cf24: 0xae15000c  sw          $s5, 0xC($s0)
    ctx->pc = 0x22cf24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
    // 0x22cf28: 0xa6110000  sh          $s1, 0x0($s0)
    ctx->pc = 0x22cf28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x22cf2c: 0xa6120002  sh          $s2, 0x2($s0)
    ctx->pc = 0x22cf2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 18));
    // 0x22cf30: 0xa6130004  sh          $s3, 0x4($s0)
    ctx->pc = 0x22cf30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 19));
    // 0x22cf34: 0xa6140006  sh          $s4, 0x6($s0)
    ctx->pc = 0x22cf34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 20));
    // 0x22cf38: 0xa6160008  sh          $s6, 0x8($s0)
    ctx->pc = 0x22cf38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 22));
    // 0x22cf3c: 0xa617000a  sh          $s7, 0xA($s0)
    ctx->pc = 0x22cf3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 23));
    // 0x22cf40: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x22cf40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22cf44: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x22cf44u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22cf48: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x22cf48u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22cf4c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x22cf4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22cf50: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22cf50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22cf54: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22cf54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22cf58: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22cf58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22cf5c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22cf5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22cf60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22cf60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22cf64: 0x3e00008  jr          $ra
    ctx->pc = 0x22CF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF64u;
        // 0x22cf68: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22CF6Cu;
}
