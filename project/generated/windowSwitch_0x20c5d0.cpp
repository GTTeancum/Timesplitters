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

// Function: windowSwitch
// Address: 0x20c5d0 - 0x20c7e0
void windowSwitch_0x20c5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("windowSwitch_0x20c5d0");
#endif

    switch (ctx->pc) {
        case 0x20c5f4u: goto label_20c5f4;
        case 0x20c65cu: goto label_20c65c;
        case 0x20c6a8u: goto label_20c6a8;
        case 0x20c704u: goto label_20c704;
        case 0x20c748u: goto label_20c748;
        case 0x20c7a4u: goto label_20c7a4;
        default: break;
    }

    ctx->pc = 0x20c5d0u;

    // 0x20c5d0: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x20c5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x20c5d4: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20c5d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x20c5d8: 0x24c399f0  addiu       $v1, $a2, -0x6610
    ctx->pc = 0x20c5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941168));
    // 0x20c5dc: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x20c5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x20c5e0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x20C5E0u;
    {
        const bool branch_taken_0x20c5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5E0u;
        // 0x20c5e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c5e0) {
            ctx->pc = 0x20C650u;
            goto label_20c650;
        }
    }
    ctx->pc = 0x20C5E8u;
    // 0x20c5e8: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x20c5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x20c5ec: 0x3c0701fb  lui         $a3, 0x1FB
    ctx->pc = 0x20c5ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)507 << 16));
    // 0x20c5f0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x20c5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_20c5f4:
    // 0x20c5f4: 0x68680007  ldl         $t0, 0x7($v1)
    ctx->pc = 0x20c5f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x20c5f8: 0x6c680000  ldr         $t0, 0x0($v1)
    ctx->pc = 0x20c5f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x20c5fc: 0x6869000f  ldl         $t1, 0xF($v1)
    ctx->pc = 0x20c5fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x20c600: 0x6c690008  ldr         $t1, 0x8($v1)
    ctx->pc = 0x20c600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x20c604: 0x686a0017  ldl         $t2, 0x17($v1)
    ctx->pc = 0x20c604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x20c608: 0x6c6a0010  ldr         $t2, 0x10($v1)
    ctx->pc = 0x20c608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x20c60c: 0x686b001f  ldl         $t3, 0x1F($v1)
    ctx->pc = 0x20c60cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x20c610: 0x6c6b0018  ldr         $t3, 0x18($v1)
    ctx->pc = 0x20c610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x20c614: 0xb0880007  sdl         $t0, 0x7($a0)
    ctx->pc = 0x20c614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c618: 0xb4880000  sdr         $t0, 0x0($a0)
    ctx->pc = 0x20c618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c61c: 0xb089000f  sdl         $t1, 0xF($a0)
    ctx->pc = 0x20c61cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c620: 0xb4890008  sdr         $t1, 0x8($a0)
    ctx->pc = 0x20c620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c624: 0xb08a0017  sdl         $t2, 0x17($a0)
    ctx->pc = 0x20c624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c628: 0xb48a0010  sdr         $t2, 0x10($a0)
    ctx->pc = 0x20c628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c62c: 0xb08b001f  sdl         $t3, 0x1F($a0)
    ctx->pc = 0x20c62cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c630: 0xb48b0018  sdr         $t3, 0x18($a0)
    ctx->pc = 0x20c630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c634: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x20c634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x20c638: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x20c638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x20c63c: 0x0  nop
    ctx->pc = 0x20c63cu;
    // NOP
    // 0x20c640: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x20C640u;
    {
        const bool branch_taken_0x20c640 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20c640) {
            ctx->pc = 0x20C5F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20c5f4;
        }
    }
    ctx->pc = 0x20C648u;
    // 0x20c648: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x20C648u;
    {
        const bool branch_taken_0x20c648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C648u;
        // 0x20c64c: 0x24c499f0  addiu       $a0, $a2, -0x6610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c648) {
            ctx->pc = 0x20C694u;
            goto label_20c694;
        }
    }
    ctx->pc = 0x20C650u;
label_20c650:
    // 0x20c650: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x20c650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x20c654: 0x3c0701fb  lui         $a3, 0x1FB
    ctx->pc = 0x20c654u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)507 << 16));
    // 0x20c658: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x20c658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_20c65c:
    // 0x20c65c: 0xdc680000  ld          $t0, 0x0($v1)
    ctx->pc = 0x20c65cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20c660: 0xdc690008  ld          $t1, 0x8($v1)
    ctx->pc = 0x20c660u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x20c664: 0xdc6a0010  ld          $t2, 0x10($v1)
    ctx->pc = 0x20c664u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x20c668: 0xdc6b0018  ld          $t3, 0x18($v1)
    ctx->pc = 0x20c668u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x20c66c: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x20c66cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x20c670: 0xfc890008  sd          $t1, 0x8($a0)
    ctx->pc = 0x20c670u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 9));
    // 0x20c674: 0xfc8a0010  sd          $t2, 0x10($a0)
    ctx->pc = 0x20c674u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 10));
    // 0x20c678: 0xfc8b0018  sd          $t3, 0x18($a0)
    ctx->pc = 0x20c678u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 11));
    // 0x20c67c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x20c67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x20c680: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x20c680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x20c684: 0x0  nop
    ctx->pc = 0x20c684u;
    // NOP
    // 0x20c688: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x20C688u;
    {
        const bool branch_taken_0x20c688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20c688) {
            ctx->pc = 0x20C65Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20c65c;
        }
    }
    ctx->pc = 0x20C690u;
    // 0x20c690: 0x24c499f0  addiu       $a0, $a2, -0x6610
    ctx->pc = 0x20c690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941168));
label_20c694:
    // 0x20c694: 0x24e331c0  addiu       $v1, $a3, 0x31C0
    ctx->pc = 0x20c694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 12736));
    // 0x20c698: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x20c698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x20c69c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x20c69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x20c6a0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x20C6A0u;
    {
        const bool branch_taken_0x20c6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C6A0u;
        // 0x20c6a4: 0x24620060  addiu       $v0, $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c6a0) {
            ctx->pc = 0x20C704u;
            goto label_20c704;
        }
    }
    ctx->pc = 0x20C6A8u;
label_20c6a8:
    // 0x20c6a8: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x20c6a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x20c6ac: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x20c6acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x20c6b0: 0x6868000f  ldl         $t0, 0xF($v1)
    ctx->pc = 0x20c6b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x20c6b4: 0x6c680008  ldr         $t0, 0x8($v1)
    ctx->pc = 0x20c6b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x20c6b8: 0x68690017  ldl         $t1, 0x17($v1)
    ctx->pc = 0x20c6b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x20c6bc: 0x6c690010  ldr         $t1, 0x10($v1)
    ctx->pc = 0x20c6bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x20c6c0: 0x686a001f  ldl         $t2, 0x1F($v1)
    ctx->pc = 0x20c6c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x20c6c4: 0x6c6a0018  ldr         $t2, 0x18($v1)
    ctx->pc = 0x20c6c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x20c6c8: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x20c6c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c6cc: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x20c6ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c6d0: 0xb088000f  sdl         $t0, 0xF($a0)
    ctx->pc = 0x20c6d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c6d4: 0xb4880008  sdr         $t0, 0x8($a0)
    ctx->pc = 0x20c6d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c6d8: 0xb0890017  sdl         $t1, 0x17($a0)
    ctx->pc = 0x20c6d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c6dc: 0xb4890010  sdr         $t1, 0x10($a0)
    ctx->pc = 0x20c6dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c6e0: 0xb08a001f  sdl         $t2, 0x1F($a0)
    ctx->pc = 0x20c6e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c6e4: 0xb48a0018  sdr         $t2, 0x18($a0)
    ctx->pc = 0x20c6e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c6e8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x20c6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x20c6ec: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x20c6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x20c6f0: 0x0  nop
    ctx->pc = 0x20c6f0u;
    // NOP
    // 0x20c6f4: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x20C6F4u;
    {
        const bool branch_taken_0x20c6f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20c6f4) {
            ctx->pc = 0x20C6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20c6a8;
        }
    }
    ctx->pc = 0x20C6FCu;
    // 0x20c6fc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x20C6FCu;
    {
        const bool branch_taken_0x20c6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C6FCu;
        // 0x20c700: 0x24e431c0  addiu       $a0, $a3, 0x31C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 12736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c6fc) {
            ctx->pc = 0x20C73Cu;
            goto label_20c73c;
        }
    }
    ctx->pc = 0x20C704u;
label_20c704:
    // 0x20c704: 0xdc6b0000  ld          $t3, 0x0($v1)
    ctx->pc = 0x20c704u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20c708: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x20c708u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x20c70c: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x20c70cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x20c710: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x20c710u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x20c714: 0xfc8b0000  sd          $t3, 0x0($a0)
    ctx->pc = 0x20c714u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 11));
    // 0x20c718: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x20c718u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x20c71c: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x20c71cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x20c720: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x20c720u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x20c724: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x20c724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x20c728: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x20c728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x20c72c: 0x0  nop
    ctx->pc = 0x20c72cu;
    // NOP
    // 0x20c730: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x20C730u;
    {
        const bool branch_taken_0x20c730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20c730) {
            ctx->pc = 0x20C704u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20c704;
        }
    }
    ctx->pc = 0x20C738u;
    // 0x20c738: 0x24e431c0  addiu       $a0, $a3, 0x31C0
    ctx->pc = 0x20c738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 12736));
label_20c73c:
    // 0x20c73c: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x20c73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x20c740: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x20C740u;
    {
        const bool branch_taken_0x20c740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C740u;
        // 0x20c744: 0x3a0182d  daddu       $v1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c740) {
            ctx->pc = 0x20C7A4u;
            goto label_20c7a4;
        }
    }
    ctx->pc = 0x20C748u;
label_20c748:
    // 0x20c748: 0x686a0007  ldl         $t2, 0x7($v1)
    ctx->pc = 0x20c748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x20c74c: 0x6c6a0000  ldr         $t2, 0x0($v1)
    ctx->pc = 0x20c74cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x20c750: 0x686b000f  ldl         $t3, 0xF($v1)
    ctx->pc = 0x20c750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x20c754: 0x6c6b0008  ldr         $t3, 0x8($v1)
    ctx->pc = 0x20c754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x20c758: 0x68620017  ldl         $v0, 0x17($v1)
    ctx->pc = 0x20c758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x20c75c: 0x6c620010  ldr         $v0, 0x10($v1)
    ctx->pc = 0x20c75cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x20c760: 0x6866001f  ldl         $a2, 0x1F($v1)
    ctx->pc = 0x20c760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x20c764: 0x6c660018  ldr         $a2, 0x18($v1)
    ctx->pc = 0x20c764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x20c768: 0xb08a0007  sdl         $t2, 0x7($a0)
    ctx->pc = 0x20c768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c76c: 0xb48a0000  sdr         $t2, 0x0($a0)
    ctx->pc = 0x20c76cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c770: 0xb08b000f  sdl         $t3, 0xF($a0)
    ctx->pc = 0x20c770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c774: 0xb48b0008  sdr         $t3, 0x8($a0)
    ctx->pc = 0x20c774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c778: 0xb0820017  sdl         $v0, 0x17($a0)
    ctx->pc = 0x20c778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c77c: 0xb4820010  sdr         $v0, 0x10($a0)
    ctx->pc = 0x20c77cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c780: 0xb086001f  sdl         $a2, 0x1F($a0)
    ctx->pc = 0x20c780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c784: 0xb4860018  sdr         $a2, 0x18($a0)
    ctx->pc = 0x20c784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20c788: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x20c788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x20c78c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x20c78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x20c790: 0x0  nop
    ctx->pc = 0x20c790u;
    // NOP
    // 0x20c794: 0x1465ffec  bne         $v1, $a1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x20C794u;
    {
        const bool branch_taken_0x20c794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x20c794) {
            ctx->pc = 0x20C748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20c748;
        }
    }
    ctx->pc = 0x20C79Cu;
    // 0x20c79c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x20C79Cu;
    {
        const bool branch_taken_0x20c79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c79c) {
            ctx->pc = 0x20C7D8u;
            goto label_20c7d8;
        }
    }
    ctx->pc = 0x20C7A4u;
label_20c7a4:
    // 0x20c7a4: 0xdc670000  ld          $a3, 0x0($v1)
    ctx->pc = 0x20c7a4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20c7a8: 0xdc680008  ld          $t0, 0x8($v1)
    ctx->pc = 0x20c7a8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x20c7ac: 0xdc690010  ld          $t1, 0x10($v1)
    ctx->pc = 0x20c7acu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x20c7b0: 0xdc6a0018  ld          $t2, 0x18($v1)
    ctx->pc = 0x20c7b0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x20c7b4: 0xfc870000  sd          $a3, 0x0($a0)
    ctx->pc = 0x20c7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 7));
    // 0x20c7b8: 0xfc880008  sd          $t0, 0x8($a0)
    ctx->pc = 0x20c7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 8));
    // 0x20c7bc: 0xfc890010  sd          $t1, 0x10($a0)
    ctx->pc = 0x20c7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 9));
    // 0x20c7c0: 0xfc8a0018  sd          $t2, 0x18($a0)
    ctx->pc = 0x20c7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 10));
    // 0x20c7c4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x20c7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x20c7c8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x20c7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x20c7cc: 0x0  nop
    ctx->pc = 0x20c7ccu;
    // NOP
    // 0x20c7d0: 0x1465fff4  bne         $v1, $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x20C7D0u;
    {
        const bool branch_taken_0x20c7d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x20c7d0) {
            ctx->pc = 0x20C7A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20c7a4;
        }
    }
    ctx->pc = 0x20C7D8u;
label_20c7d8:
    // 0x20c7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x20C7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7D8u;
        // 0x20c7dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C7E0u;
}
