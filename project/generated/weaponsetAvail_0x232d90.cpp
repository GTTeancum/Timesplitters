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

// Function: weaponsetAvail
// Address: 0x232d90 - 0x232df0
void weaponsetAvail_0x232d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("weaponsetAvail_0x232d90");
#endif

    switch (ctx->pc) {
        case 0x232ddcu: goto label_232ddc;
        default: break;
    }

    ctx->pc = 0x232d90u;

    // 0x232d90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x232d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x232d94: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x232d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x232d98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x232d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x232d9c: 0x24840009  addiu       $a0, $a0, 0x9
    ctx->pc = 0x232d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9));
    // 0x232da0: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x232da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x232da4: 0x24481b70  addiu       $t0, $v0, 0x1B70
    ctx->pc = 0x232da4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 7024));
    // 0x232da8: 0x69050007  ldl         $a1, 0x7($t0)
    ctx->pc = 0x232da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x232dac: 0x6d050000  ldr         $a1, 0x0($t0)
    ctx->pc = 0x232dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x232db0: 0x6906000f  ldl         $a2, 0xF($t0)
    ctx->pc = 0x232db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x232db4: 0x6d060008  ldr         $a2, 0x8($t0)
    ctx->pc = 0x232db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x232db8: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x232db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x232dbc: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x232dbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x232dc0: 0xb3a6000f  sdl         $a2, 0xF($sp)
    ctx->pc = 0x232dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x232dc4: 0xb7a60008  sdr         $a2, 0x8($sp)
    ctx->pc = 0x232dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x232dc8: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x232DC8u;
    {
        const bool branch_taken_0x232dc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x232DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232DC8u;
        // 0x232dcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232dc8) {
            ctx->pc = 0x232DE4u;
            goto label_232de4;
        }
    }
    ctx->pc = 0x232DD0u;
    // 0x232dd0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x232dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232dd4: 0xc08946a  jal         func_2251A8
    ctx->pc = 0x232DD4u;
    SET_GPR_U32(ctx, 31, 0x232DDCu);
    ctx->pc = 0x232DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232DD4u;
    // 0x232dd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2251A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2251A8u, 0x232DD4u, 0x232DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232DDCu;
label_232ddc:
    // 0x232ddc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x232DDCu;
    {
        const bool branch_taken_0x232ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232DDCu;
        // 0x232de0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232ddc) {
            ctx->pc = 0x232DE8u;
            goto label_232de8;
        }
    }
    ctx->pc = 0x232DE4u;
label_232de4:
    // 0x232de4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x232de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_232de8:
    // 0x232de8: 0x3e00008  jr          $ra
    ctx->pc = 0x232DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232DE8u;
        // 0x232dec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232DF0u;
}
