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

// Function: playerSetControls
// Address: 0x27f5a8 - 0x27f804
void playerSetControls_0x27f5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("playerSetControls_0x27f5a8");
#endif

    switch (ctx->pc) {
        case 0x27f60cu: goto label_27f60c;
        case 0x27f668u: goto label_27f668;
        default: break;
    }

    ctx->pc = 0x27f5a8u;

    // 0x27f5a8: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x27f5a8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f5ac: 0x8d850018  lw          $a1, 0x18($t4)
    ctx->pc = 0x27f5acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 24)));
    // 0x27f5b0: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x27F5B0u;
    {
        const bool branch_taken_0x27f5b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F5B0u;
        // 0x27f5b4: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f5b0) {
            ctx->pc = 0x27F5BCu;
            goto label_27f5bc;
        }
    }
    ctx->pc = 0x27F5B8u;
    // 0x27f5b8: 0x94aa0000  lhu         $t2, 0x0($a1)
    ctx->pc = 0x27f5b8u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_27f5bc:
    // 0x27f5bc: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x27f5bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f5c0: 0x114d003d  beq         $t2, $t5, . + 4 + (0x3D << 2)
    ctx->pc = 0x27F5C0u;
    {
        const bool branch_taken_0x27f5c0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 13));
        ctx->pc = 0x27F5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F5C0u;
        // 0x27f5c4: 0x29420002  slti        $v0, $t2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f5c0) {
            ctx->pc = 0x27F6B8u;
            goto label_27f6b8;
        }
    }
    ctx->pc = 0x27F5C8u;
    // 0x27f5c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27F5C8u;
    {
        const bool branch_taken_0x27f5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F5C8u;
        // 0x27f5cc: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f5c8) {
            ctx->pc = 0x27F5E0u;
            goto label_27f5e0;
        }
    }
    ctx->pc = 0x27F5D0u;
    // 0x27f5d0: 0x11400009  beqz        $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x27F5D0u;
    {
        const bool branch_taken_0x27f5d0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F5D0u;
        // 0x27f5d4: 0x2584001c  addiu       $a0, $t4, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f5d0) {
            ctx->pc = 0x27F5F8u;
            goto label_27f5f8;
        }
    }
    ctx->pc = 0x27F5D8u;
    // 0x27f5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x27F5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F5E0u;
label_27f5e0:
    // 0x27f5e0: 0x114b0052  beq         $t2, $t3, . + 4 + (0x52 << 2)
    ctx->pc = 0x27F5E0u;
    {
        const bool branch_taken_0x27f5e0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 11));
        ctx->pc = 0x27F5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F5E0u;
        // 0x27f5e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f5e0) {
            ctx->pc = 0x27F72Cu;
            goto label_27f72c;
        }
    }
    ctx->pc = 0x27F5E8u;
    // 0x27f5e8: 0x1142006c  beq         $t2, $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x27F5E8u;
    {
        const bool branch_taken_0x27f5e8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        ctx->pc = 0x27F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F5E8u;
        // 0x27f5ec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f5e8) {
            ctx->pc = 0x27F79Cu;
            goto label_27f79c;
        }
    }
    ctx->pc = 0x27F5F0u;
    // 0x27f5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x27F5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F5F8u;
label_27f5f8:
    // 0x27f5f8: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x27f5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x27f5fc: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x27f5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x27f600: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x27f600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x27f604: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x27F604u;
    {
        const bool branch_taken_0x27f604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F604u;
        // 0x27f608: 0x24a20044  addiu       $v0, $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f604) {
            ctx->pc = 0x27F668u;
            goto label_27f668;
        }
    }
    ctx->pc = 0x27F60Cu;
label_27f60c:
    // 0x27f60c: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x27f60cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x27f610: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x27f610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x27f614: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x27f614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x27f618: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x27f618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x27f61c: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x27f61cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x27f620: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x27f620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x27f624: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x27f624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x27f628: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x27f628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x27f62c: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x27f62cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f630: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x27f630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f634: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x27f634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f638: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x27f638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f63c: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x27f63cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f640: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x27f640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f644: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x27f644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f648: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x27f648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f64c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x27f64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x27f650: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x27f650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x27f654: 0x0  nop
    ctx->pc = 0x27f654u;
    // NOP
    // 0x27f658: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x27F658u;
    {
        const bool branch_taken_0x27f658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27f658) {
            ctx->pc = 0x27F60Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f60c;
        }
    }
    ctx->pc = 0x27F660u;
    // 0x27f660: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x27F660u;
    {
        const bool branch_taken_0x27f660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f660) {
            ctx->pc = 0x27F69Cu;
            goto label_27f69c;
        }
    }
    ctx->pc = 0x27F668u;
label_27f668:
    // 0x27f668: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x27f668u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27f66c: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x27f66cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27f670: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x27f670u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x27f674: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x27f674u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x27f678: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x27f678u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x27f67c: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x27f67cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x27f680: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x27f680u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x27f684: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x27f684u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x27f688: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x27f688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x27f68c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x27f68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x27f690: 0x0  nop
    ctx->pc = 0x27f690u;
    // NOP
    // 0x27f694: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x27F694u;
    {
        const bool branch_taken_0x27f694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27f694) {
            ctx->pc = 0x27F668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f668;
        }
    }
    ctx->pc = 0x27F69Cu;
label_27f69c:
    // 0x27f69c: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x27f69cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x27f6a0: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x27f6a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x27f6a4: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x27f6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27f6a8: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x27f6a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f6ac: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x27f6acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x27F6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F6B0u;
        // 0x27f6b4: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F6B8u;
label_27f6b8:
    // 0x27f6b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27f6bc: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x27f6bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27f6c0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x27f6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27f6c4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x27f6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x27f6c8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x27f6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27f6cc: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x27f6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x27f6d0: 0x24074000  addiu       $a3, $zero, 0x4000
    ctx->pc = 0x27f6d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x27f6d4: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x27f6d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x27f6d8: 0x24092000  addiu       $t1, $zero, 0x2000
    ctx->pc = 0x27f6d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x27f6dc: 0x340a8000  ori         $t2, $zero, 0x8000
    ctx->pc = 0x27f6dcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x27f6e0: 0xad820060  sw          $v0, 0x60($t4)
    ctx->pc = 0x27f6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 96), GPR_U32(ctx, 2));
    // 0x27f6e4: 0xad830020  sw          $v1, 0x20($t4)
    ctx->pc = 0x27f6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 32), GPR_U32(ctx, 3));
    // 0x27f6e8: 0xad840028  sw          $a0, 0x28($t4)
    ctx->pc = 0x27f6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 40), GPR_U32(ctx, 4));
    // 0x27f6ec: 0xad850038  sw          $a1, 0x38($t4)
    ctx->pc = 0x27f6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 56), GPR_U32(ctx, 5));
    // 0x27f6f0: 0xad860030  sw          $a2, 0x30($t4)
    ctx->pc = 0x27f6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 48), GPR_U32(ctx, 6));
    // 0x27f6f4: 0xad870034  sw          $a3, 0x34($t4)
    ctx->pc = 0x27f6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 52), GPR_U32(ctx, 7));
    // 0x27f6f8: 0xad880024  sw          $t0, 0x24($t4)
    ctx->pc = 0x27f6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 36), GPR_U32(ctx, 8));
    // 0x27f6fc: 0xad89003c  sw          $t1, 0x3C($t4)
    ctx->pc = 0x27f6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 60), GPR_U32(ctx, 9));
    // 0x27f700: 0xad8a0040  sw          $t2, 0x40($t4)
    ctx->pc = 0x27f700u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 64), GPR_U32(ctx, 10));
    // 0x27f704: 0xad8d0054  sw          $t5, 0x54($t4)
    ctx->pc = 0x27f704u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 84), GPR_U32(ctx, 13));
    // 0x27f708: 0xad8b005c  sw          $t3, 0x5C($t4)
    ctx->pc = 0x27f708u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 92), GPR_U32(ctx, 11));
    // 0x27f70c: 0xad82001c  sw          $v0, 0x1C($t4)
    ctx->pc = 0x27f70cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 28), GPR_U32(ctx, 2));
    // 0x27f710: 0xad8d002c  sw          $t5, 0x2C($t4)
    ctx->pc = 0x27f710u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 44), GPR_U32(ctx, 13));
    // 0x27f714: 0xad8d0044  sw          $t5, 0x44($t4)
    ctx->pc = 0x27f714u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 68), GPR_U32(ctx, 13));
    // 0x27f718: 0xad8b004c  sw          $t3, 0x4C($t4)
    ctx->pc = 0x27f718u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 76), GPR_U32(ctx, 11));
    // 0x27f71c: 0xad800048  sw          $zero, 0x48($t4)
    ctx->pc = 0x27f71cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 72), GPR_U32(ctx, 0));
    // 0x27f720: 0xad820050  sw          $v0, 0x50($t4)
    ctx->pc = 0x27f720u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 80), GPR_U32(ctx, 2));
    // 0x27f724: 0x3e00008  jr          $ra
    ctx->pc = 0x27F724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F724u;
        // 0x27f728: 0xad800058  sw          $zero, 0x58($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F72Cu;
label_27f72c:
    // 0x27f72c: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x27f72cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27f730: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x27f730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27f734: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x27f734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x27f738: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x27f738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27f73c: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x27f73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x27f740: 0x24064000  addiu       $a2, $zero, 0x4000
    ctx->pc = 0x27f740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x27f744: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x27f744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x27f748: 0x24082000  addiu       $t0, $zero, 0x2000
    ctx->pc = 0x27f748u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x27f74c: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x27f74cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x27f750: 0xad8b0060  sw          $t3, 0x60($t4)
    ctx->pc = 0x27f750u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 96), GPR_U32(ctx, 11));
    // 0x27f754: 0xad820020  sw          $v0, 0x20($t4)
    ctx->pc = 0x27f754u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 32), GPR_U32(ctx, 2));
    // 0x27f758: 0xad830028  sw          $v1, 0x28($t4)
    ctx->pc = 0x27f758u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 40), GPR_U32(ctx, 3));
    // 0x27f75c: 0xad840038  sw          $a0, 0x38($t4)
    ctx->pc = 0x27f75cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 56), GPR_U32(ctx, 4));
    // 0x27f760: 0xad850030  sw          $a1, 0x30($t4)
    ctx->pc = 0x27f760u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 48), GPR_U32(ctx, 5));
    // 0x27f764: 0xad860034  sw          $a2, 0x34($t4)
    ctx->pc = 0x27f764u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 52), GPR_U32(ctx, 6));
    // 0x27f768: 0xad870024  sw          $a3, 0x24($t4)
    ctx->pc = 0x27f768u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 36), GPR_U32(ctx, 7));
    // 0x27f76c: 0xad88003c  sw          $t0, 0x3C($t4)
    ctx->pc = 0x27f76cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 60), GPR_U32(ctx, 8));
    // 0x27f770: 0xad890040  sw          $t1, 0x40($t4)
    ctx->pc = 0x27f770u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 64), GPR_U32(ctx, 9));
    // 0x27f774: 0xad8d0054  sw          $t5, 0x54($t4)
    ctx->pc = 0x27f774u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 84), GPR_U32(ctx, 13));
    // 0x27f778: 0xad8a005c  sw          $t2, 0x5C($t4)
    ctx->pc = 0x27f778u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 92), GPR_U32(ctx, 10));
    // 0x27f77c: 0xad8b001c  sw          $t3, 0x1C($t4)
    ctx->pc = 0x27f77cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 28), GPR_U32(ctx, 11));
    // 0x27f780: 0xad8d002c  sw          $t5, 0x2C($t4)
    ctx->pc = 0x27f780u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 44), GPR_U32(ctx, 13));
    // 0x27f784: 0xad8a0044  sw          $t2, 0x44($t4)
    ctx->pc = 0x27f784u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 68), GPR_U32(ctx, 10));
    // 0x27f788: 0xad8d004c  sw          $t5, 0x4C($t4)
    ctx->pc = 0x27f788u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 76), GPR_U32(ctx, 13));
    // 0x27f78c: 0xad800048  sw          $zero, 0x48($t4)
    ctx->pc = 0x27f78cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 72), GPR_U32(ctx, 0));
    // 0x27f790: 0xad8b0050  sw          $t3, 0x50($t4)
    ctx->pc = 0x27f790u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 80), GPR_U32(ctx, 11));
    // 0x27f794: 0x3e00008  jr          $ra
    ctx->pc = 0x27F794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F794u;
        // 0x27f798: 0xad800058  sw          $zero, 0x58($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F79Cu;
label_27f79c:
    // 0x27f79c: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x27f79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x27f7a0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x27f7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27f7a4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x27f7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x27f7a8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x27f7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x27f7ac: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x27f7acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x27f7b0: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x27f7b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27f7b4: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x27f7b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x27f7b8: 0xad820020  sw          $v0, 0x20($t4)
    ctx->pc = 0x27f7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 32), GPR_U32(ctx, 2));
    // 0x27f7bc: 0xad830028  sw          $v1, 0x28($t4)
    ctx->pc = 0x27f7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 40), GPR_U32(ctx, 3));
    // 0x27f7c0: 0xad840038  sw          $a0, 0x38($t4)
    ctx->pc = 0x27f7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 56), GPR_U32(ctx, 4));
    // 0x27f7c4: 0xad850030  sw          $a1, 0x30($t4)
    ctx->pc = 0x27f7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 48), GPR_U32(ctx, 5));
    // 0x27f7c8: 0xad860034  sw          $a2, 0x34($t4)
    ctx->pc = 0x27f7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 52), GPR_U32(ctx, 6));
    // 0x27f7cc: 0xad870024  sw          $a3, 0x24($t4)
    ctx->pc = 0x27f7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 36), GPR_U32(ctx, 7));
    // 0x27f7d0: 0xad88003c  sw          $t0, 0x3C($t4)
    ctx->pc = 0x27f7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 60), GPR_U32(ctx, 8));
    // 0x27f7d4: 0xad890040  sw          $t1, 0x40($t4)
    ctx->pc = 0x27f7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 64), GPR_U32(ctx, 9));
    // 0x27f7d8: 0xad8a0054  sw          $t2, 0x54($t4)
    ctx->pc = 0x27f7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 84), GPR_U32(ctx, 10));
    // 0x27f7dc: 0xad8d005c  sw          $t5, 0x5C($t4)
    ctx->pc = 0x27f7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 92), GPR_U32(ctx, 13));
    // 0x27f7e0: 0xad8b0058  sw          $t3, 0x58($t4)
    ctx->pc = 0x27f7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 88), GPR_U32(ctx, 11));
    // 0x27f7e4: 0xad800060  sw          $zero, 0x60($t4)
    ctx->pc = 0x27f7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 96), GPR_U32(ctx, 0));
    // 0x27f7e8: 0xad8d001c  sw          $t5, 0x1C($t4)
    ctx->pc = 0x27f7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 28), GPR_U32(ctx, 13));
    // 0x27f7ec: 0xad8b002c  sw          $t3, 0x2C($t4)
    ctx->pc = 0x27f7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 44), GPR_U32(ctx, 11));
    // 0x27f7f0: 0xad8a0044  sw          $t2, 0x44($t4)
    ctx->pc = 0x27f7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 68), GPR_U32(ctx, 10));
    // 0x27f7f4: 0xad8d004c  sw          $t5, 0x4C($t4)
    ctx->pc = 0x27f7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 76), GPR_U32(ctx, 13));
    // 0x27f7f8: 0xad8b0048  sw          $t3, 0x48($t4)
    ctx->pc = 0x27f7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 72), GPR_U32(ctx, 11));
    // 0x27f7fc: 0x3e00008  jr          $ra
    ctx->pc = 0x27F7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F7FCu;
        // 0x27f800: 0xad800050  sw          $zero, 0x50($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F804u;
}
