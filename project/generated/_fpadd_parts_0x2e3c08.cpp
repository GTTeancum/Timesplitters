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

// Function: _fpadd_parts
// Address: 0x2e3c08 - 0x2e3e3c
void _fpadd_parts_0x2e3c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_fpadd_parts_0x2e3c08");
#endif

    switch (ctx->pc) {
        case 0x2e3c1cu: goto label_2e3c1c;
        case 0x2e3c30u: goto label_2e3c30;
        case 0x2e3cf0u: goto label_2e3cf0;
        case 0x2e3d28u: goto label_2e3d28;
        case 0x2e3dd0u: goto label_2e3dd0;
        default: break;
    }

    ctx->pc = 0x2e3c08u;

    // 0x2e3c08: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2e3c08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3c0c: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x2e3c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2e3c10: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x2e3c10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e3c14: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3C14u;
    {
        const bool branch_taken_0x2e3c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3c14) {
            ctx->pc = 0x2E3C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3C14u;
            // 0x2e3c18: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3C24u;
            goto label_2e3c24;
        }
    }
    ctx->pc = 0x2E3C1Cu;
label_2e3c1c:
    // 0x2e3c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3C1Cu;
        // 0x2e3c20: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3C24u;
label_2e3c24:
    // 0x2e3c24: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2e3c24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e3c28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3C28u;
    {
        const bool branch_taken_0x2e3c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3C28u;
        // 0x2e3c2c: 0x38820004  xori        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3c28) {
            ctx->pc = 0x2E3C38u;
            goto label_2e3c38;
        }
    }
    ctx->pc = 0x2E3C30u;
label_2e3c30:
    // 0x2e3c30: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3C30u;
        // 0x2e3c34: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3C38u;
label_2e3c38:
    // 0x2e3c38: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E3C38u;
    {
        const bool branch_taken_0x2e3c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3C38u;
        // 0x2e3c3c: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3c38) {
            ctx->pc = 0x2E3C60u;
            goto label_2e3c60;
        }
    }
    ctx->pc = 0x2E3C40u;
    // 0x2e3c40: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2E3C40u;
    {
        const bool branch_taken_0x2e3c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3c40) {
            ctx->pc = 0x2E3C1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3c1c;
        }
    }
    ctx->pc = 0x2E3C48u;
    // 0x2e3c48: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2e3c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e3c4c: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x2e3c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2e3c50: 0x1043fff2  beq         $v0, $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x2E3C50u;
    {
        const bool branch_taken_0x2e3c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E3C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3C50u;
        // 0x2e3c54: 0x3c0201ff  lui         $v0, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3c50) {
            ctx->pc = 0x2E3C1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3c1c;
        }
    }
    ctx->pc = 0x2E3C58u;
    // 0x2e3c58: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3C58u;
        // 0x2e3c5c: 0x24425380  addiu       $v0, $v0, 0x5380 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21376));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3C60u;
label_2e3c60:
    // 0x2e3c60: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2E3C60u;
    {
        const bool branch_taken_0x2e3c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3C60u;
        // 0x2e3c64: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3c60) {
            ctx->pc = 0x2E3C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3c30;
        }
    }
    ctx->pc = 0x2E3C68u;
    // 0x2e3c68: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E3C68u;
    {
        const bool branch_taken_0x2e3c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3C68u;
        // 0x2e3c6c: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3c68) {
            ctx->pc = 0x2E3CB0u;
            goto label_2e3cb0;
        }
    }
    ctx->pc = 0x2E3C70u;
    // 0x2e3c70: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2E3C70u;
    {
        const bool branch_taken_0x2e3c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3c70) {
            ctx->pc = 0x2E3C1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3c1c;
        }
    }
    ctx->pc = 0x2E3C78u;
    // 0x2e3c78: 0x69220007  ldl         $v0, 0x7($t1)
    ctx->pc = 0x2e3c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2e3c7c: 0x6d220000  ldr         $v0, 0x0($t1)
    ctx->pc = 0x2e3c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2e3c80: 0x6923000f  ldl         $v1, 0xF($t1)
    ctx->pc = 0x2e3c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2e3c84: 0x6d230008  ldr         $v1, 0x8($t1)
    ctx->pc = 0x2e3c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2e3c88: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x2e3c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e3c8c: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x2e3c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e3c90: 0xb0c3000f  sdl         $v1, 0xF($a2)
    ctx->pc = 0x2e3c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e3c94: 0xb4c30008  sdr         $v1, 0x8($a2)
    ctx->pc = 0x2e3c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e3c98: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x2e3c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2e3c9c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2e3c9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3ca0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2e3ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e3ca4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2e3ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2e3ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3CA8u;
        // 0x2e3cac: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3CB0u;
label_2e3cb0:
    // 0x2e3cb0: 0x1040ffdf  beqz        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2E3CB0u;
    {
        const bool branch_taken_0x2e3cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3CB0u;
        // 0x2e3cb4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3cb0) {
            ctx->pc = 0x2E3C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3c30;
        }
    }
    ctx->pc = 0x2E3CB8u;
    // 0x2e3cb8: 0x8d270008  lw          $a3, 0x8($t1)
    ctx->pc = 0x2e3cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2e3cbc: 0x8ca80008  lw          $t0, 0x8($a1)
    ctx->pc = 0x2e3cbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2e3cc0: 0x8d2b000c  lw          $t3, 0xC($t1)
    ctx->pc = 0x2e3cc0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x2e3cc4: 0xe81823  subu        $v1, $a3, $t0
    ctx->pc = 0x2e3cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2e3cc8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2e3cc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e3ccc: 0x32023  negu        $a0, $v1
    ctx->pc = 0x2e3cccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2e3cd0: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x2e3cd0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x2e3cd4: 0x28630020  slti        $v1, $v1, 0x20
    ctx->pc = 0x2e3cd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2e3cd8: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2E3CD8u;
    {
        const bool branch_taken_0x2e3cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3CD8u;
        // 0x2e3cdc: 0x8caa000c  lw          $t2, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3cd8) {
            ctx->pc = 0x2E3D4Cu;
            goto label_2e3d4c;
        }
    }
    ctx->pc = 0x2E3CE0u;
    // 0x2e3ce0: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x2e3ce0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2e3ce4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E3CE4u;
    {
        const bool branch_taken_0x2e3ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3CE4u;
        // 0x2e3ce8: 0x8d290004  lw          $t1, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3ce4) {
            ctx->pc = 0x2E3D14u;
            goto label_2e3d14;
        }
    }
    ctx->pc = 0x2E3CECu;
    // 0x2e3cec: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x2e3cecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2e3cf0:
    // 0x2e3cf0: 0xa1042  srl         $v0, $t2, 1
    ctx->pc = 0x2e3cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x2e3cf4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2e3cf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2e3cf8: 0x31430001  andi        $v1, $t2, 0x1
    ctx->pc = 0x2e3cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x2e3cfc: 0x107202a  slt         $a0, $t0, $a3
    ctx->pc = 0x2e3cfcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2e3d00: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x2e3d00u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e3d04: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E3D04u;
    {
        const bool branch_taken_0x2e3d04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3d04) {
            ctx->pc = 0x2E3CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3cf0;
        }
    }
    ctx->pc = 0x2E3D0Cu;
    // 0x2e3d0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3D0Cu;
    {
        const bool branch_taken_0x2e3d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3D0Cu;
        // 0x2e3d10: 0xe8102a  slt         $v0, $a3, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3d0c) {
            ctx->pc = 0x2E3D1Cu;
            goto label_2e3d1c;
        }
    }
    ctx->pc = 0x2E3D14u;
label_2e3d14:
    // 0x2e3d14: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x2e3d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e3d18: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x2e3d18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_2e3d1c:
    // 0x2e3d1c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E3D1Cu;
    {
        const bool branch_taken_0x2e3d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3d1c) {
            ctx->pc = 0x2E3D70u;
            goto label_2e3d70;
        }
    }
    ctx->pc = 0x2E3D24u;
    // 0x2e3d24: 0x1073823  subu        $a3, $t0, $a3
    ctx->pc = 0x2e3d24u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_2e3d28:
    // 0x2e3d28: 0xb1842  srl         $v1, $t3, 1
    ctx->pc = 0x2e3d28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
    // 0x2e3d2c: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x2e3d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x2e3d30: 0x435825  or          $t3, $v0, $v1
    ctx->pc = 0x2e3d30u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e3d34: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2e3d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2e3d38: 0x0  nop
    ctx->pc = 0x2e3d38u;
    // NOP
    // 0x2e3d3c: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E3D3Cu;
    {
        const bool branch_taken_0x2e3d3c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3d3c) {
            ctx->pc = 0x2E3D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3d28;
        }
    }
    ctx->pc = 0x2E3D44u;
    // 0x2e3d44: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E3D44u;
    {
        const bool branch_taken_0x2e3d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3D44u;
        // 0x2e3d48: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3d44) {
            ctx->pc = 0x2E3D70u;
            goto label_2e3d70;
        }
    }
    ctx->pc = 0x2E3D4Cu;
label_2e3d4c:
    // 0x2e3d4c: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x2e3d4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2e3d50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E3D50u;
    {
        const bool branch_taken_0x2e3d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3D50u;
        // 0x2e3d54: 0x8d290004  lw          $t1, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3d50) {
            ctx->pc = 0x2E3D64u;
            goto label_2e3d64;
        }
    }
    ctx->pc = 0x2E3D58u;
    // 0x2e3d58: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2e3d58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3d5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E3D5Cu;
    {
        const bool branch_taken_0x2e3d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3D5Cu;
        // 0x2e3d60: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3d5c) {
            ctx->pc = 0x2E3D70u;
            goto label_2e3d70;
        }
    }
    ctx->pc = 0x2E3D64u;
label_2e3d64:
    // 0x2e3d64: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x2e3d64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3d68: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x2e3d68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e3d6c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2e3d6cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e3d70:
    // 0x2e3d70: 0x11250022  beq         $t1, $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2E3D70u;
    {
        const bool branch_taken_0x2e3d70 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 5));
        ctx->pc = 0x2E3D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3D70u;
        // 0x2e3d74: 0x16a1021  addu        $v0, $t3, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3d70) {
            ctx->pc = 0x2E3DFCu;
            goto label_2e3dfc;
        }
    }
    ctx->pc = 0x2E3D78u;
    // 0x2e3d78: 0x15200002  bnez        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E3D78u;
    {
        const bool branch_taken_0x2e3d78 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3D78u;
        // 0x2e3d7c: 0x14b1023  subu        $v0, $t2, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3d78) {
            ctx->pc = 0x2E3D84u;
            goto label_2e3d84;
        }
    }
    ctx->pc = 0x2E3D80u;
    // 0x2e3d80: 0x16a1023  subu        $v0, $t3, $t2
    ctx->pc = 0x2e3d80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
label_2e3d84:
    // 0x2e3d84: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E3D84u;
    {
        const bool branch_taken_0x2e3d84 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E3D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3D84u;
        // 0x2e3d88: 0x21823  negu        $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3d84) {
            ctx->pc = 0x2E3D9Cu;
            goto label_2e3d9c;
        }
    }
    ctx->pc = 0x2E3D8Cu;
    // 0x2e3d8c: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x2e3d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x2e3d90: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x2e3d90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x2e3d94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E3D94u;
    {
        const bool branch_taken_0x2e3d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3D94u;
        // 0x2e3d98: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3d94) {
            ctx->pc = 0x2E3DACu;
            goto label_2e3dac;
        }
    }
    ctx->pc = 0x2E3D9Cu;
label_2e3d9c:
    // 0x2e3d9c: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x2e3d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x2e3da0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3da4: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x2e3da4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x2e3da8: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x2e3da8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_2e3dac:
    // 0x2e3dac: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x2e3dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2e3db0: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x2e3db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x2e3db4: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2e3db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2e3db8: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x2e3db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2e3dbc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2e3dbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e3dc0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2E3DC0u;
    {
        const bool branch_taken_0x2e3dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3DC0u;
        // 0x2e3dc4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3dc0) {
            ctx->pc = 0x2E3E0Cu;
            goto label_2e3e0c;
        }
    }
    ctx->pc = 0x2E3DC8u;
    // 0x2e3dc8: 0x3c053fff  lui         $a1, 0x3FFF
    ctx->pc = 0x2e3dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16383 << 16));
    // 0x2e3dcc: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x2e3dccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
label_2e3dd0:
    // 0x2e3dd0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2e3dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2e3dd4: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x2e3dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2e3dd8: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2e3dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2e3ddc: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x2e3ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
    // 0x2e3de0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e3de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e3de4: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x2e3de4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e3de8: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x2e3de8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x2e3dec: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2E3DECu;
    {
        const bool branch_taken_0x2e3dec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3DECu;
        // 0x2e3df0: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3dec) {
            ctx->pc = 0x2E3DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3dd0;
        }
    }
    ctx->pc = 0x2E3DF4u;
    // 0x2e3df4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E3DF4u;
    {
        const bool branch_taken_0x2e3df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3DF4u;
        // 0x2e3df8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3df4) {
            ctx->pc = 0x2E3E0Cu;
            goto label_2e3e0c;
        }
    }
    ctx->pc = 0x2E3DFCu;
label_2e3dfc:
    // 0x2e3dfc: 0xacc90004  sw          $t1, 0x4($a2)
    ctx->pc = 0x2e3dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 9));
    // 0x2e3e00: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x2e3e00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x2e3e04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e3e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3e08: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x2e3e08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_2e3e0c:
    // 0x2e3e0c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e3e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e3e10: 0x4a10008  bgez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E3E10u;
    {
        const bool branch_taken_0x2e3e10 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2E3E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E10u;
        // 0x2e3e14: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3e10) {
            ctx->pc = 0x2E3E34u;
            goto label_2e3e34;
        }
    }
    ctx->pc = 0x2E3E18u;
    // 0x2e3e18: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2e3e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2e3e1c: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x2e3e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x2e3e20: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x2e3e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2e3e24: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e3e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e3e28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e3e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e3e2c: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x2e3e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x2e3e30: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x2e3e30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_2e3e34:
    // 0x2e3e34: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E34u;
        // 0x2e3e38: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3E3Cu;
}
