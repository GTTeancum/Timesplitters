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

// Function: _ratio
// Address: 0x2ecd90 - 0x2ece50
void _ratio_0x2ecd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ratio_0x2ecd90");
#endif

    switch (ctx->pc) {
        case 0x2ecdb4u: goto label_2ecdb4;
        case 0x2ecdc4u: goto label_2ecdc4;
        case 0x2ece38u: goto label_2ece38;
        default: break;
    }

    ctx->pc = 0x2ecd90u;

    // 0x2ecd90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ecd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ecd94: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2ecd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2ecd98: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2ecd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2ecd9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ecd9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecda0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ecda0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecda4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2ecda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2ecda8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ecda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2ecdac: 0xc0bb2a4  jal         func_2ECA90
    ctx->pc = 0x2ECDACu;
    SET_GPR_U32(ctx, 31, 0x2ECDB4u);
    ctx->pc = 0x2ECDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECDACu;
    // 0x2ecdb0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ECA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECA90u, 0x2ECDACu, 0x2ECDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECDB4u;
label_2ecdb4:
    // 0x2ecdb4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ecdb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecdb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ecdb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecdbc: 0xc0bb2a4  jal         func_2ECA90
    ctx->pc = 0x2ECDBCu;
    SET_GPR_U32(ctx, 31, 0x2ECDC4u);
    ctx->pc = 0x2ECDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECDBCu;
    // 0x2ecdc0: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ECA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECA90u, 0x2ECDBCu, 0x2ECDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECDC4u;
label_2ecdc4:
    // 0x2ecdc4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2ecdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2ecdc8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ecdc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecdcc: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2ecdccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ecdd0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2ecdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ecdd4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2ecdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2ecdd8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2ecdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ecddc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2ecddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2ecde0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2ecde0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ecde4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ecde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ecde8: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ECDE8u;
    {
        const bool branch_taken_0x2ecde8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2ECDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECDE8u;
        // 0x2ecdec: 0x21500  sll         $v0, $v0, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecde8) {
            ctx->pc = 0x2ECE10u;
            goto label_2ece10;
        }
    }
    ctx->pc = 0x2ECDF0u;
    // 0x2ecdf0: 0x12183f  dsra32      $v1, $s2, 0
    ctx->pc = 0x2ecdf0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x2ecdf4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ecdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ecdf8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2ecdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2ecdfc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2ecdfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2ece00: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2ece00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ece04: 0x2449024  and         $s2, $s2, $a0
    ctx->pc = 0x2ece04u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x2ece08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2ECE08u;
    {
        const bool branch_taken_0x2ece08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE08u;
        // 0x2ece0c: 0x2439025  or          $s2, $s2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ece08) {
            ctx->pc = 0x2ECE2Cu;
            goto label_2ece2c;
        }
    }
    ctx->pc = 0x2ECE10u;
label_2ece10:
    // 0x2ece10: 0x6183f  dsra32      $v1, $a2, 0
    ctx->pc = 0x2ece10u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x2ece14: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2ece14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ece18: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2ece18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2ece1c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2ece1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2ece20: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2ece20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ece24: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x2ece24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x2ece28: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2ece28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_2ece2c:
    // 0x2ece2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ece2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ece30: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x2ECE30u;
    SET_GPR_U32(ctx, 31, 0x2ECE38u);
    ctx->pc = 0x2ECE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECE30u;
    // 0x2ece34: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x2ECE30u, 0x2ECE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECE38u;
label_2ece38:
    // 0x2ece38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ece38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ece3c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2ece3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ece40: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2ece40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ece44: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2ece44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ece48: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE48u;
        // 0x2ece4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECE48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ECE50u;
}
