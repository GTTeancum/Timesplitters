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

// Function: subdate
// Address: 0x2e0ef8 - 0x2e0fcc
void subdate_0x2e0ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("subdate_0x2e0ef8");
#endif

    switch (ctx->pc) {
        case 0x2e0f50u: goto label_2e0f50;
        default: break;
    }

    ctx->pc = 0x2e0ef8u;

    // 0x2e0ef8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e0ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e0efc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e0efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2e0f00: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2e0f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2e0f04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e0f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e0f08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e0f08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0f0c: 0x2446b740  addiu       $a2, $v0, -0x48C0
    ctx->pc = 0x2e0f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948672));
    // 0x2e0f10: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x2e0f10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2e0f14: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x2e0f14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2e0f18: 0x88c4000b  lwl         $a0, 0xB($a2)
    ctx->pc = 0x2e0f18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x2e0f1c: 0x98c40008  lwr         $a0, 0x8($a2)
    ctx->pc = 0x2e0f1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x2e0f20: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x2e0f20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e0f24: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x2e0f24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e0f28: 0xaba4000b  swl         $a0, 0xB($sp)
    ctx->pc = 0x2e0f28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e0f2c: 0xbba40008  swr         $a0, 0x8($sp)
    ctx->pc = 0x2e0f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e0f30: 0x56000008  bnel        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E0F30u;
    {
        const bool branch_taken_0x2e0f30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0f30) {
            ctx->pc = 0x2E0F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0F30u;
            // 0x2e0f34: 0x92020005  lbu         $v0, 0x5($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0F54u;
            goto label_2e0f54;
        }
    }
    ctx->pc = 0x2E0F38u;
    // 0x2e0f38: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2e0f38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2e0f3c: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x2e0f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x2e0f40: 0x2484b708  addiu       $a0, $a0, -0x48F8
    ctx->pc = 0x2e0f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948616));
    // 0x2e0f44: 0x24c6b730  addiu       $a2, $a2, -0x48D0
    ctx->pc = 0x2e0f44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948656));
    // 0x2e0f48: 0xc0b91aa  jal         func_2E46A8
    ctx->pc = 0x2E0F48u;
    SET_GPR_U32(ctx, 31, 0x2E0F50u);
    ctx->pc = 0x2E0F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0F48u;
    // 0x2e0f4c: 0x2405016a  addiu       $a1, $zero, 0x16A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 362));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E46A8u, 0x2E0F48u, 0x2E0F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0F50u;
label_2e0f50:
    // 0x2e0f50: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x2e0f50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_2e0f54:
    // 0x2e0f54: 0x92030007  lbu         $v1, 0x7($s0)
    ctx->pc = 0x2e0f54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x2e0f58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e0f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e0f5c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2e0f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2e0f60: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0F60u;
    {
        const bool branch_taken_0x2e0f60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0F60u;
        // 0x2e0f64: 0xa2020005  sb          $v0, 0x5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0f60) {
            ctx->pc = 0x2E0F70u;
            goto label_2e0f70;
        }
    }
    ctx->pc = 0x2E0F68u;
    // 0x2e0f68: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x2e0f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2e0f6c: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x2e0f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
label_2e0f70:
    // 0x2e0f70: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x2e0f70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x2e0f74: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2E0F74u;
    {
        const bool branch_taken_0x2e0f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0F74u;
        // 0x2e0f78: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0f74) {
            ctx->pc = 0x2E0FC0u;
            goto label_2e0fc0;
        }
    }
    ctx->pc = 0x2E0F7Cu;
    // 0x2e0f7c: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x2e0f7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2e0f80: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e0f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e0f84: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2e0f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e0f88: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E0F88u;
    {
        const bool branch_taken_0x2e0f88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0F88u;
        // 0x2e0f8c: 0xa2020006  sb          $v0, 0x6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0f88) {
            ctx->pc = 0x2E0FACu;
            goto label_2e0fac;
        }
    }
    ctx->pc = 0x2E0F90u;
    // 0x2e0f90: 0x92020007  lbu         $v0, 0x7($s0)
    ctx->pc = 0x2e0f90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x2e0f94: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E0F94u;
    {
        const bool branch_taken_0x2e0f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0F94u;
        // 0x2e0f98: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0f94) {
            ctx->pc = 0x2E0FA0u;
            goto label_2e0fa0;
        }
    }
    ctx->pc = 0x2E0F9Cu;
    // 0x2e0f9c: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x2e0f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_2e0fa0:
    // 0x2e0fa0: 0xa2020007  sb          $v0, 0x7($s0)
    ctx->pc = 0x2e0fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e0fa4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2e0fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2e0fa8: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x2e0fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
label_2e0fac:
    // 0x2e0fac: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x2e0facu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2e0fb0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2e0fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2e0fb4: 0x9043ffff  lbu         $v1, -0x1($v0)
    ctx->pc = 0x2e0fb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x2e0fb8: 0xa2030005  sb          $v1, 0x5($s0)
    ctx->pc = 0x2e0fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e0fbc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e0fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e0fc0:
    // 0x2e0fc0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e0fc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0FC4u;
        // 0x2e0fc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0FCCu;
}
