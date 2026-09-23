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

// Function: adddate
// Address: 0x2e0e10 - 0x2e0ef4
void adddate_0x2e0e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("adddate_0x2e0e10");
#endif

    switch (ctx->pc) {
        case 0x2e0e68u: goto label_2e0e68;
        default: break;
    }

    ctx->pc = 0x2e0e10u;

    // 0x2e0e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e0e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e0e14: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e0e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2e0e18: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2e0e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2e0e1c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e0e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e0e20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e0e20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0e24: 0x2446b740  addiu       $a2, $v0, -0x48C0
    ctx->pc = 0x2e0e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948672));
    // 0x2e0e28: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x2e0e28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2e0e2c: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x2e0e2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2e0e30: 0x88c4000b  lwl         $a0, 0xB($a2)
    ctx->pc = 0x2e0e30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x2e0e34: 0x98c40008  lwr         $a0, 0x8($a2)
    ctx->pc = 0x2e0e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x2e0e38: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x2e0e38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e0e3c: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x2e0e3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e0e40: 0xaba4000b  swl         $a0, 0xB($sp)
    ctx->pc = 0x2e0e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e0e44: 0xbba40008  swr         $a0, 0x8($sp)
    ctx->pc = 0x2e0e44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e0e48: 0x56000008  bnel        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E0E48u;
    {
        const bool branch_taken_0x2e0e48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0e48) {
            ctx->pc = 0x2E0E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0E48u;
            // 0x2e0e4c: 0x92020005  lbu         $v0, 0x5($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0E6Cu;
            goto label_2e0e6c;
        }
    }
    ctx->pc = 0x2E0E50u;
    // 0x2e0e50: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2e0e50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2e0e54: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x2e0e54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x2e0e58: 0x2484b708  addiu       $a0, $a0, -0x48F8
    ctx->pc = 0x2e0e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948616));
    // 0x2e0e5c: 0x24c6b730  addiu       $a2, $a2, -0x48D0
    ctx->pc = 0x2e0e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948656));
    // 0x2e0e60: 0xc0b91aa  jal         func_2E46A8
    ctx->pc = 0x2E0E60u;
    SET_GPR_U32(ctx, 31, 0x2E0E68u);
    ctx->pc = 0x2E0E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0E60u;
    // 0x2e0e64: 0x24050152  addiu       $a1, $zero, 0x152 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 338));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E46A8u, 0x2E0E60u, 0x2E0E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0E68u;
label_2e0e68:
    // 0x2e0e68: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x2e0e68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_2e0e6c:
    // 0x2e0e6c: 0x92030007  lbu         $v1, 0x7($s0)
    ctx->pc = 0x2e0e6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x2e0e70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e0e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e0e74: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2e0e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2e0e78: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0E78u;
    {
        const bool branch_taken_0x2e0e78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0E78u;
        // 0x2e0e7c: 0xa2020005  sb          $v0, 0x5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0e78) {
            ctx->pc = 0x2E0E88u;
            goto label_2e0e88;
        }
    }
    ctx->pc = 0x2E0E80u;
    // 0x2e0e80: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x2e0e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2e0e84: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x2e0e84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
label_2e0e88:
    // 0x2e0e88: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x2e0e88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2e0e8c: 0x92040005  lbu         $a0, 0x5($s0)
    ctx->pc = 0x2e0e8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x2e0e90: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2e0e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2e0e94: 0x8043ffff  lb          $v1, -0x1($v0)
    ctx->pc = 0x2e0e94u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x2e0e98: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2e0e98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2e0e9c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E0E9Cu;
    {
        const bool branch_taken_0x2e0e9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0E9Cu;
        // 0x2e0ea0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0e9c) {
            ctx->pc = 0x2E0EE4u;
            goto label_2e0ee4;
        }
    }
    ctx->pc = 0x2E0EA4u;
    // 0x2e0ea4: 0x92030006  lbu         $v1, 0x6($s0)
    ctx->pc = 0x2e0ea4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2e0ea8: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x2e0ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e0eac: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2e0eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2e0eb0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e0eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e0eb4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2e0eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e0eb8: 0x1444000a  bne         $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E0EB8u;
    {
        const bool branch_taken_0x2e0eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2E0EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0EB8u;
        // 0x2e0ebc: 0xa2030006  sb          $v1, 0x6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0eb8) {
            ctx->pc = 0x2E0EE4u;
            goto label_2e0ee4;
        }
    }
    ctx->pc = 0x2E0EC0u;
    // 0x2e0ec0: 0x92030007  lbu         $v1, 0x7($s0)
    ctx->pc = 0x2e0ec0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x2e0ec4: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x2e0ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2e0ec8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0EC8u;
    {
        const bool branch_taken_0x2e0ec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E0ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0EC8u;
        // 0x2e0ecc: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0ec8) {
            ctx->pc = 0x2E0ED8u;
            goto label_2e0ed8;
        }
    }
    ctx->pc = 0x2E0ED0u;
    // 0x2e0ed0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E0ED0u;
    {
        const bool branch_taken_0x2e0ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0ED0u;
        // 0x2e0ed4: 0xa2000007  sb          $zero, 0x7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0ed0) {
            ctx->pc = 0x2E0EDCu;
            goto label_2e0edc;
        }
    }
    ctx->pc = 0x2E0ED8u;
label_2e0ed8:
    // 0x2e0ed8: 0xa2020007  sb          $v0, 0x7($s0)
    ctx->pc = 0x2e0ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
label_2e0edc:
    // 0x2e0edc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e0edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0ee0: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x2e0ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
label_2e0ee4:
    // 0x2e0ee4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e0ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0ee8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e0ee8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0eec: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0EECu;
        // 0x2e0ef0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0EF4u;
}
