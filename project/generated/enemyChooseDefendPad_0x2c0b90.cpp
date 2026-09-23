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

// Function: enemyChooseDefendPad
// Address: 0x2c0b90 - 0x2c0e4c
void enemyChooseDefendPad_0x2c0b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyChooseDefendPad_0x2c0b90");
#endif

    switch (ctx->pc) {
        case 0x2c0c2cu: goto label_2c0c2c;
        case 0x2c0ca0u: goto label_2c0ca0;
        case 0x2c0cdcu: goto label_2c0cdc;
        case 0x2c0ce8u: goto label_2c0ce8;
        case 0x2c0cf8u: goto label_2c0cf8;
        case 0x2c0d7cu: goto label_2c0d7c;
        case 0x2c0dc4u: goto label_2c0dc4;
        case 0x2c0decu: goto label_2c0dec;
        default: break;
    }

    ctx->pc = 0x2c0b90u;

    // 0x2c0b90: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2c0b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x2c0b94: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2c0b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2c0b98: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x2c0b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
    // 0x2c0b9c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2c0b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c0ba0: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x2c0ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x2c0ba4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2c0ba4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0ba8: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x2c0ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x2c0bac: 0xffb70120  sd          $s7, 0x120($sp)
    ctx->pc = 0x2c0bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 23));
    // 0x2c0bb0: 0xffb50100  sd          $s5, 0x100($sp)
    ctx->pc = 0x2c0bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 21));
    // 0x2c0bb4: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x2c0bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
    // 0x2c0bb8: 0xffb300e0  sd          $s3, 0xE0($sp)
    ctx->pc = 0x2c0bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 19));
    // 0x2c0bbc: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x2c0bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x2c0bc0: 0xffb100c0  sd          $s1, 0xC0($sp)
    ctx->pc = 0x2c0bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 17));
    // 0x2c0bc4: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x2c0bc4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x2c0bc8: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x2c0bc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x2c0bcc: 0x8f86b4f0  lw          $a2, -0x4B10($gp)
    ctx->pc = 0x2c0bccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948080)));
    // 0x2c0bd0: 0x8ec30160  lw          $v1, 0x160($s6)
    ctx->pc = 0x2c0bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 352)));
    // 0x2c0bd4: 0x24499d30  addiu       $t1, $v0, -0x62D0
    ctx->pc = 0x2c0bd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942000));
    // 0x2c0bd8: 0x69240007  ldl         $a0, 0x7($t1)
    ctx->pc = 0x2c0bd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2c0bdc: 0x6d240000  ldr         $a0, 0x0($t1)
    ctx->pc = 0x2c0bdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2c0be0: 0x8d250008  lw          $a1, 0x8($t1)
    ctx->pc = 0x2c0be0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A9D38u));
    // 0x2c0be4: 0xb3a40067  sdl         $a0, 0x67($sp)
    ctx->pc = 0x2c0be4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c0be8: 0xb7a40060  sdr         $a0, 0x60($sp)
    ctx->pc = 0x2c0be8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c0bec: 0xafa50068  sw          $a1, 0x68($sp)
    ctx->pc = 0x2c0becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
    // 0x2c0bf0: 0x18c0001a  blez        $a2, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C0BF0u;
    {
        const bool branch_taken_0x2c0bf0 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2C0BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0BF0u;
        // 0x2c0bf4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0bf0) {
            ctx->pc = 0x2C0C5Cu;
            goto label_2c0c5c;
        }
    }
    ctx->pc = 0x2C0BF8u;
    // 0x2c0bf8: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x2c0bf8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
    // 0x2c0bfc: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x2c0bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2c0c00: 0x252223e8  addiu       $v0, $t1, 0x23E8
    ctx->pc = 0x2c0c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 9192));
    // 0x2c0c04: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2c0c04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3823ECu));
    // 0x2c0c08: 0x8c640160  lw          $a0, 0x160($v1)
    ctx->pc = 0x2c0c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x2c0c0c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2c0c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2c0c10: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0C10u;
    {
        const bool branch_taken_0x2c0c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2C0C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0C10u;
        // 0x2c0c14: 0x120402d  daddu       $t0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0c10) {
            ctx->pc = 0x2C0C20u;
            goto label_2c0c20;
        }
    }
    ctx->pc = 0x2C0C18u;
    // 0x2c0c18: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2C0C18u;
    {
        const bool branch_taken_0x2c0c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0C18u;
        // 0x2c0c1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0c18) {
            ctx->pc = 0x2C0C60u;
            goto label_2c0c60;
        }
    }
    ctx->pc = 0x2C0C20u;
label_2c0c20:
    // 0x2c0c20: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x2c0c20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2c0c24: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x2c0c24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c0c28: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c0c28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2c0c2c:
    // 0x2c0c2c: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x2c0c2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2c0c30: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C0C30u;
    {
        const bool branch_taken_0x2c0c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0C30u;
        // 0x2c0c34: 0x1018c0  sll         $v1, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0c30) {
            ctx->pc = 0x2C0C68u;
            goto label_2c0c68;
        }
    }
    ctx->pc = 0x2C0C38u;
    // 0x2c0c38: 0x250223e8  addiu       $v0, $t0, 0x23E8
    ctx->pc = 0x2c0c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 9192));
    // 0x2c0c3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c0c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c0c40: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2c0c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c0c44: 0x8c830160  lw          $v1, 0x160($a0)
    ctx->pc = 0x2c0c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x2c0c48: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2c0c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2c0c4c: 0x5445fff7  bnel        $v0, $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2C0C4Cu;
    {
        const bool branch_taken_0x2c0c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2c0c4c) {
            ctx->pc = 0x2C0C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0C4Cu;
            // 0x2c0c50: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0C2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0c2c;
        }
    }
    ctx->pc = 0x2C0C54u;
    // 0x2c0c54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0C54u;
    {
        const bool branch_taken_0x2c0c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0C54u;
        // 0x2c0c58: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0c54) {
            ctx->pc = 0x2C0C68u;
            goto label_2c0c68;
        }
    }
    ctx->pc = 0x2C0C5Cu;
label_2c0c5c:
    // 0x2c0c5c: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x2c0c5cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
label_2c0c60:
    // 0x2c0c60: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x2c0c60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2c0c64: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x2c0c64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2c0c68:
    // 0x2c0c68: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x2c0c68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2c0c6c: 0x252223e8  addiu       $v0, $t1, 0x23E8
    ctx->pc = 0x2c0c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 9192));
    // 0x2c0c70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c0c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c0c74: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c0c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0c78: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2c0c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c0c7c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2c0c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c0c80: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x2c0c80u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c0c84: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2c0c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2c0c88: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2c0c88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2c0c8c: 0x8c620160  lw          $v0, 0x160($v1)
    ctx->pc = 0x2c0c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x2c0c90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c0c90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0c94: 0x8c540024  lw          $s4, 0x24($v0)
    ctx->pc = 0x2c0c94u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2c0c98: 0xc099286  jal         func_264A18
    ctx->pc = 0x2C0C98u;
    SET_GPR_U32(ctx, 31, 0x2C0CA0u);
    ctx->pc = 0x2C0C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0C98u;
    // 0x2c0c9c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264A18u, 0x2C0C98u, 0x2C0CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0CA0u;
label_2c0ca0:
    // 0x2c0ca0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2c0ca0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0ca4: 0x8f83a2ec  lw          $v1, -0x5D14($gp)
    ctx->pc = 0x2c0ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2c0ca8: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2c0ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2c0cac: 0xc78190c4  lwc1        $f1, -0x6F3C($gp)
    ctx->pc = 0x2c0cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0cb0: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x2c0cb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c0cb4: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2c0cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2c0cb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c0cb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0cbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c0cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c0cc0: 0xc44c0018  lwc1        $f12, 0x18($v0)
    ctx->pc = 0x2c0cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c0cc4: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x2c0cc4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2c0cc8: 0x0  nop
    ctx->pc = 0x2c0cc8u;
    // NOP
    // 0x2c0ccc: 0x0  nop
    ctx->pc = 0x2c0cccu;
    // NOP
    // 0x2c0cd0: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x2c0cd0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x2c0cd4: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x2C0CD4u;
    SET_GPR_U32(ctx, 31, 0x2C0CDCu);
    ctx->pc = 0x2C0CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0CD4u;
    // 0x2c0cd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x2C0CD4u, 0x2C0CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0CDCu;
label_2c0cdc:
    // 0x2c0cdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c0cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0ce0: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x2C0CE0u;
    SET_GPR_U32(ctx, 31, 0x2C0CE8u);
    ctx->pc = 0x2C0CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0CE0u;
    // 0x2c0ce4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x2C0CE0u, 0x2C0CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0CE8u;
label_2c0ce8:
    // 0x2c0ce8: 0x1aa0004a  blez        $s5, . + 4 + (0x4A << 2)
    ctx->pc = 0x2C0CE8u;
    {
        const bool branch_taken_0x2c0ce8 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x2C0CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0CE8u;
        // 0x2c0cec: 0x27b30050  addiu       $s3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ce8) {
            ctx->pc = 0x2C0E14u;
            goto label_2c0e14;
        }
    }
    ctx->pc = 0x2C0CF0u;
    // 0x2c0cf0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c0cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c0cf4: 0x0  nop
    ctx->pc = 0x2c0cf4u;
    // NOP
label_2c0cf8:
    // 0x2c0cf8: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x2c0cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2c0cfc: 0x3a28821  addu        $s1, $sp, $v0
    ctx->pc = 0x2c0cfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2c0d00: 0x2833018  mult        $a2, $s4, $v1
    ctx->pc = 0x2c0d00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2c0d04: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c0d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c0d08: 0x8f84a2ec  lw          $a0, -0x5D14($gp)
    ctx->pc = 0x2c0d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2c0d0c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2c0d0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c0d10: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x2c0d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2c0d14: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2c0d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0d18: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c0d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c0d1c: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x2c0d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c0d20: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2c0d20u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2c0d24: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x2c0d24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2c0d28: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c0d28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c0d2c: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x2c0d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0d30: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2c0d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0d34: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c0d34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c0d38: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2c0d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2c0d3c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c0d3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c0d40: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2c0d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0d44: 0xc4a30014  lwc1        $f3, 0x14($a1)
    ctx->pc = 0x2c0d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c0d48: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2c0d48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c0d4c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2c0d4cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2c0d50: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x2c0d50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c0d54: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x2c0d54u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c0d58: 0x0  nop
    ctx->pc = 0x2c0d58u;
    // NOP
    // 0x2c0d5c: 0x0  nop
    ctx->pc = 0x2c0d5cu;
    // NOP
    // 0x2c0d60: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2c0d60u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x2c0d64: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2c0d64u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0d68: 0x0  nop
    ctx->pc = 0x2c0d68u;
    // NOP
    // 0x2c0d6c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0D6Cu;
    {
        const bool branch_taken_0x2c0d6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C0D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0D6Cu;
        // 0x2c0d70: 0xe7a10058  swc1        $f1, 0x58($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0d6c) {
            ctx->pc = 0x2C0D7Cu;
            goto label_2c0d7c;
        }
    }
    ctx->pc = 0x2C0D74u;
    // 0x2c0d74: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2C0D74u;
    SET_GPR_U32(ctx, 31, 0x2C0D7Cu);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2C0D74u, 0x2C0D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0D7Cu;
label_2c0d7c:
    // 0x2c0d7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c0d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c0d80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c0d80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c0d84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c0d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0d88: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x2c0d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c0d8c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c0d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0d90: 0x0  nop
    ctx->pc = 0x2c0d90u;
    // NOP
    // 0x2c0d94: 0x0  nop
    ctx->pc = 0x2c0d94u;
    // NOP
    // 0x2c0d98: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2c0d98u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x2c0d9c: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x2c0d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c0da0: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2c0da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0da4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c0da4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c0da8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c0da8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c0dac: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2c0dacu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2c0db0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2c0db0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2c0db4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2c0db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2c0db8: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x2c0db8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2c0dbc: 0xc0b1ac0  jal         func_2C6B00
    ctx->pc = 0x2C0DBCu;
    SET_GPR_U32(ctx, 31, 0x2C0DC4u);
    ctx->pc = 0x2C0DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0DBCu;
    // 0x2c0dc0: 0xe7a20054  swc1        $f2, 0x54($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6B00u, 0x2C0DBCu, 0x2C0DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0DC4u;
label_2c0dc4:
    // 0x2c0dc4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2c0dc4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2c0dc8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2c0dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2c0dcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c0dccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0dd0: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x2c0dd0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0dd4: 0x0  nop
    ctx->pc = 0x2c0dd4u;
    // NOP
    // 0x2c0dd8: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
    ctx->pc = 0x2C0DD8u;
    {
        const bool branch_taken_0x2c0dd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0dd8) {
            ctx->pc = 0x2C0DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0DD8u;
            // 0x2c0ddc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0E08u;
            goto label_2c0e08;
        }
    }
    ctx->pc = 0x2C0DE0u;
    // 0x2c0de0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c0de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c0de4: 0xc0b0394  jal         func_2C0E50
    ctx->pc = 0x2C0DE4u;
    SET_GPR_U32(ctx, 31, 0x2C0DECu);
    ctx->pc = 0x2C0DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0DE4u;
    // 0x2c0de8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0E50u, 0x2C0DE4u, 0x2C0DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0DECu;
label_2c0dec:
    // 0x2c0dec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C0DECu;
    {
        const bool branch_taken_0x2c0dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0DECu;
        // 0x2c0df0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0dec) {
            ctx->pc = 0x2C0E08u;
            goto label_2c0e08;
        }
    }
    ctx->pc = 0x2C0DF4u;
    // 0x2c0df4: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x2c0df4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0df8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0DF8u;
    {
        const bool branch_taken_0x2c0df8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0df8) {
            ctx->pc = 0x2C0E08u;
            goto label_2c0e08;
        }
    }
    ctx->pc = 0x2C0E00u;
    // 0x2c0e00: 0x8e370000  lw          $s7, 0x0($s1)
    ctx->pc = 0x2c0e00u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c0e04: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x2c0e04u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
label_2c0e08:
    // 0x2c0e08: 0x215102a  slt         $v0, $s0, $s5
    ctx->pc = 0x2c0e08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2c0e0c: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x2C0E0Cu;
    {
        const bool branch_taken_0x2c0e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E0Cu;
        // 0x2c0e10: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0e0c) {
            ctx->pc = 0x2C0CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0cf8;
        }
    }
    ctx->pc = 0x2C0E14u;
label_2c0e14:
    // 0x2c0e14: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x2c0e14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0e18: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x2c0e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2c0e1c: 0xdfb70120  ld          $s7, 0x120($sp)
    ctx->pc = 0x2c0e1cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2c0e20: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x2c0e20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2c0e24: 0xdfb50100  ld          $s5, 0x100($sp)
    ctx->pc = 0x2c0e24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2c0e28: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x2c0e28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2c0e2c: 0xdfb300e0  ld          $s3, 0xE0($sp)
    ctx->pc = 0x2c0e2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2c0e30: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x2c0e30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2c0e34: 0xdfb100c0  ld          $s1, 0xC0($sp)
    ctx->pc = 0x2c0e34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2c0e38: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x2c0e38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c0e3c: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x2c0e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c0e40: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x2c0e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c0e44: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E44u;
        // 0x2c0e48: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0E4Cu;
}
