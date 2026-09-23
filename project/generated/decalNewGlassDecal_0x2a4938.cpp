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

// Function: decalNewGlassDecal
// Address: 0x2a4938 - 0x2a4ac8
void decalNewGlassDecal_0x2a4938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("decalNewGlassDecal_0x2a4938");
#endif

    switch (ctx->pc) {
        case 0x2a4980u: goto label_2a4980;
        case 0x2a49a0u: goto label_2a49a0;
        case 0x2a49bcu: goto label_2a49bc;
        case 0x2a49d4u: goto label_2a49d4;
        case 0x2a4a5cu: goto label_2a4a5c;
        case 0x2a4a98u: goto label_2a4a98;
        default: break;
    }

    ctx->pc = 0x2a4938u;

    // 0x2a4938: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2a4938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2a493c: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x2a493cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x2a4940: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x2a4940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x2a4944: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2a4944u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4948: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x2a4948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x2a494c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2a494cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4950: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x2a4950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x2a4954: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2a4954u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4958: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x2a4958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x2a495c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2a495cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4960: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x2a4960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x2a4964: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2a4964u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4968: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2a4968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2a496c: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x2a496cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4970: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x2a4970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x2a4974: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x2a4974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x2a4978: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2A4978u;
    SET_GPR_U32(ctx, 31, 0x2A4980u);
    ctx->pc = 0x2A497Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4978u;
    // 0x2a497c: 0xffb20070  sd          $s2, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2A4978u, 0x2A4980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4980u;
label_2a4980:
    // 0x2a4980: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2a4980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a4984: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2a4984u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2a4988: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A4988u;
    {
        const bool branch_taken_0x2a4988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4988) {
            ctx->pc = 0x2A498Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4988u;
            // 0x2a498c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4990u;
            goto label_2a4990;
        }
    }
    ctx->pc = 0x2A4990u;
label_2a4990:
    // 0x2a4990: 0x2010  mfhi        $a0
    ctx->pc = 0x2a4990u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2a4994: 0x24840005  addiu       $a0, $a0, 0x5
    ctx->pc = 0x2a4994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x2a4998: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2A4998u;
    SET_GPR_U32(ctx, 31, 0x2A49A0u);
    ctx->pc = 0x2A499Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4998u;
    // 0x2a499c: 0xafa40040  sw          $a0, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2A4998u, 0x2A49A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A49A0u;
label_2a49a0:
    // 0x2a49a0: 0x30500003  andi        $s0, $v0, 0x3
    ctx->pc = 0x2a49a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2a49a4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A49A4u;
    {
        const bool branch_taken_0x2a49a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A49A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A49A4u;
        // 0x2a49a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a49a4) {
            ctx->pc = 0x2A49B4u;
            goto label_2a49b4;
        }
    }
    ctx->pc = 0x2A49ACu;
    // 0x2a49ac: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A49ACu;
    {
        const bool branch_taken_0x2a49ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a49ac) {
            ctx->pc = 0x2A49CCu;
            goto label_2a49cc;
        }
    }
    ctx->pc = 0x2A49B4u;
label_2a49b4:
    // 0x2a49b4: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2A49B4u;
    SET_GPR_U32(ctx, 31, 0x2A49BCu);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2A49B4u, 0x2A49BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A49BCu;
label_2a49bc:
    // 0x2a49bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a49bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a49c0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2a49c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2a49c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A49C4u;
    {
        const bool branch_taken_0x2a49c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A49C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A49C4u;
        // 0x2a49c8: 0x24530001  addiu       $s3, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a49c4) {
            ctx->pc = 0x2A49DCu;
            goto label_2a49dc;
        }
    }
    ctx->pc = 0x2A49CCu;
label_2a49cc:
    // 0x2a49cc: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2A49CCu;
    SET_GPR_U32(ctx, 31, 0x2A49D4u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2A49CCu, 0x2A49D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A49D4u;
label_2a49d4:
    // 0x2a49d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a49d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a49d8: 0x29840  sll         $s3, $v0, 1
    ctx->pc = 0x2a49d8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2a49dc:
    // 0x2a49dc: 0x8f829f50  lw          $v0, -0x60B0($gp)
    ctx->pc = 0x2a49dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942544)));
    // 0x2a49e0: 0x3c07003b  lui         $a3, 0x3B
    ctx->pc = 0x2a49e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)59 << 16));
    // 0x2a49e4: 0x8f839f4c  lw          $v1, -0x60B4($gp)
    ctx->pc = 0x2a49e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942540)));
    // 0x2a49e8: 0x3c0600ff  lui         $a2, 0xFF
    ctx->pc = 0x2a49e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)255 << 16));
    // 0x2a49ec: 0x8f849f54  lw          $a0, -0x60AC($gp)
    ctx->pc = 0x2a49ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942548)));
    // 0x2a49f0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2a49f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2a49f4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2a49f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a49f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a49f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a49fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a49fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4a00: 0x24eb93b8  addiu       $t3, $a3, -0x6C48
    ctx->pc = 0x2a4a00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939576));
    // 0x2a4a04: 0x69680007  ldl         $t0, 0x7($t3)
    ctx->pc = 0x2a4a04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2a4a08: 0x6d680000  ldr         $t0, 0x0($t3)
    ctx->pc = 0x2a4a08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2a4a0c: 0x81690008  lb          $t1, 0x8($t3)
    ctx->pc = 0x2a4a0cu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x2a4a10: 0x816a0009  lb          $t2, 0x9($t3)
    ctx->pc = 0x2a4a10u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 9)));
    // 0x2a4a14: 0xb3a80037  sdl         $t0, 0x37($sp)
    ctx->pc = 0x2a4a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a4a18: 0xb7a80030  sdr         $t0, 0x30($sp)
    ctx->pc = 0x2a4a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a4a1c: 0xa3a90038  sb          $t1, 0x38($sp)
    ctx->pc = 0x2a4a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 9));
    // 0x2a4a20: 0xa3aa0039  sb          $t2, 0x39($sp)
    ctx->pc = 0x2a4a20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 57), (uint8_t)GPR_U32(ctx, 10));
    // 0x2a4a24: 0x30840010  andi        $a0, $a0, 0x10
    ctx->pc = 0x2a4a24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x2a4a28: 0x2a25000b  slti        $a1, $s1, 0xB
    ctx->pc = 0x2a4a28u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2a4a2c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2a4a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a4a30: 0x45880a  movz        $s1, $v0, $a1
    ctx->pc = 0x2a4a30u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x2a4a34: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2a4a34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2a4a38: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2a4a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2a4a3c: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x2a4a3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a4a40: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A4A40u;
    {
        const bool branch_taken_0x2a4a40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4A40u;
        // 0x2a4a44: 0xafa60048  sw          $a2, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4a40) {
            ctx->pc = 0x2A4A5Cu;
            goto label_2a4a5c;
        }
    }
    ctx->pc = 0x2A4A48u;
    // 0x2a4a48: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a4a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4a4c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2a4a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a4a50: 0x27a60044  addiu       $a2, $sp, 0x44
    ctx->pc = 0x2a4a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x2a4a54: 0xc0a91d6  jal         func_2A4758
    ctx->pc = 0x2A4A54u;
    SET_GPR_U32(ctx, 31, 0x2A4A5Cu);
    ctx->pc = 0x2A4A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4A54u;
    // 0x2a4a58: 0x27a70048  addiu       $a3, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4758u, 0x2A4A54u, 0x2A4A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4A5Cu;
label_2a4a5c:
    // 0x2a4a5c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2a4a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a4a60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a4a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4a64: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x2a4a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a4a68: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2a4a68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4a6c: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2a4a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a4a70: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x2a4a70u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4a74: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x2a4a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0x2a4a78: 0x3c0582d  daddu       $t3, $fp, $zero
    ctx->pc = 0x2a4a78u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4a7c: 0xafb60008  sw          $s6, 0x8($sp)
    ctx->pc = 0x2a4a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 22));
    // 0x2a4a80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a4a80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4a84: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x2a4a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x2a4a88: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a4a88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4a8c: 0xafb10018  sw          $s1, 0x18($sp)
    ctx->pc = 0x2a4a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 17));
    // 0x2a4a90: 0xc0a8c9c  jal         func_2A3270
    ctx->pc = 0x2A4A90u;
    SET_GPR_U32(ctx, 31, 0x2A4A98u);
    ctx->pc = 0x2A4A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4A90u;
    // 0x2a4a94: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3270u, 0x2A4A90u, 0x2A4A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4A98u;
label_2a4a98:
    // 0x2a4a98: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x2a4a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2a4a9c: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x2a4a9cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a4aa0: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x2a4aa0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a4aa4: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x2a4aa4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a4aa8: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x2a4aa8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a4aac: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x2a4aacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a4ab0: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x2a4ab0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a4ab4: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2a4ab4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a4ab8: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x2a4ab8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a4abc: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2a4abcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a4ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4AC0u;
        // 0x2a4ac4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4AC8u;
}
