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

// Function: playerprefsNew
// Address: 0x21fbf0 - 0x21fc84
void playerprefsNew_0x21fbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("playerprefsNew_0x21fbf0");
#endif

    ctx->pc = 0x21fbf0u;

    // 0x21fbf0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21fbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21fbf4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x21fbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21fbf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21fbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21fbfc: 0x240600fd  addiu       $a2, $zero, 0xFD
    ctx->pc = 0x21fbfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x21fc00: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x21fc00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21fc04: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x21fc04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x21fc08: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x21fc08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21fc0c: 0x240a1000  addiu       $t2, $zero, 0x1000
    ctx->pc = 0x21fc0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x21fc10: 0x240b4000  addiu       $t3, $zero, 0x4000
    ctx->pc = 0x21fc10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x21fc14: 0x240c0040  addiu       $t4, $zero, 0x40
    ctx->pc = 0x21fc14u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x21fc18: 0x240d2000  addiu       $t5, $zero, 0x2000
    ctx->pc = 0x21fc18u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x21fc1c: 0x340e8000  ori         $t6, $zero, 0x8000
    ctx->pc = 0x21fc1cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x21fc20: 0xa4860002  sh          $a2, 0x2($a0)
    ctx->pc = 0x21fc20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x21fc24: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x21fc24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x21fc28: 0xac880010  sw          $t0, 0x10($a0)
    ctx->pc = 0x21fc28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 8));
    // 0x21fc2c: 0xac890020  sw          $t1, 0x20($a0)
    ctx->pc = 0x21fc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 9));
    // 0x21fc30: 0xac8a0018  sw          $t2, 0x18($a0)
    ctx->pc = 0x21fc30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 10));
    // 0x21fc34: 0xac8b001c  sw          $t3, 0x1C($a0)
    ctx->pc = 0x21fc34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 11));
    // 0x21fc38: 0xac8c000c  sw          $t4, 0xC($a0)
    ctx->pc = 0x21fc38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 12));
    // 0x21fc3c: 0xac8d0024  sw          $t5, 0x24($a0)
    ctx->pc = 0x21fc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 13));
    // 0x21fc40: 0xac8e0028  sw          $t6, 0x28($a0)
    ctx->pc = 0x21fc40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 14));
    // 0x21fc44: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x21fc44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x21fc48: 0xac850044  sw          $a1, 0x44($a0)
    ctx->pc = 0x21fc48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 5));
    // 0x21fc4c: 0xac820048  sw          $v0, 0x48($a0)
    ctx->pc = 0x21fc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
    // 0x21fc50: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x21fc50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x21fc54: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x21fc54u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x21fc58: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x21fc58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x21fc5c: 0xac820058  sw          $v0, 0x58($a0)
    ctx->pc = 0x21fc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
    // 0x21fc60: 0xac85005c  sw          $a1, 0x5C($a0)
    ctx->pc = 0x21fc60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 5));
    // 0x21fc64: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x21fc64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x21fc68: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x21fc68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x21fc6c: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x21fc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x21fc70: 0xac850034  sw          $a1, 0x34($a0)
    ctx->pc = 0x21fc70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 5));
    // 0x21fc74: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x21fc74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x21fc78: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x21fc78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x21fc7c: 0x3e00008  jr          $ra
    ctx->pc = 0x21FC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FC7Cu;
        // 0x21fc80: 0xac800040  sw          $zero, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FC7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21FC84u;
}
