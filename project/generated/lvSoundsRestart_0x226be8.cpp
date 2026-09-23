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

// Function: lvSoundsRestart
// Address: 0x226be8 - 0x226dec
void lvSoundsRestart_0x226be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvSoundsRestart_0x226be8");
#endif

    switch (ctx->pc) {
        case 0x226c68u: goto label_226c68;
        case 0x226c98u: goto label_226c98;
        case 0x226cc8u: goto label_226cc8;
        case 0x226d08u: goto label_226d08;
        case 0x226d38u: goto label_226d38;
        case 0x226d6cu: goto label_226d6c;
        case 0x226dacu: goto label_226dac;
        case 0x226ddcu: goto label_226ddc;
        default: break;
    }

    ctx->pc = 0x226be8u;

    // 0x226be8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x226be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x226bec: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x226becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x226bf0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x226bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x226bf4: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x226bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x226bf8: 0x1062005e  beq         $v1, $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x226BF8u;
    {
        const bool branch_taken_0x226bf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x226BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226BF8u;
        // 0x226bfc: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x226bf8) {
            ctx->pc = 0x226D74u;
            goto label_226d74;
        }
    }
    ctx->pc = 0x226C00u;
    // 0x226c00: 0x28620012  slti        $v0, $v1, 0x12
    ctx->pc = 0x226c00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x226c04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x226C04u;
    {
        const bool branch_taken_0x226c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C04u;
        // 0x226c08: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226c04) {
            ctx->pc = 0x226C1Cu;
            goto label_226c1c;
        }
    }
    ctx->pc = 0x226C0Cu;
    // 0x226c0c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x226C0Cu;
    {
        const bool branch_taken_0x226c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x226C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C0Cu;
        // 0x226c10: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226c0c) {
            ctx->pc = 0x226C30u;
            goto label_226c30;
        }
    }
    ctx->pc = 0x226C14u;
    // 0x226c14: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x226C14u;
    {
        const bool branch_taken_0x226c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C14u;
        // 0x226c18: 0xc7b40050  lwc1        $f20, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x226c14) {
            ctx->pc = 0x226DE4u;
            goto label_226de4;
        }
    }
    ctx->pc = 0x226C1Cu;
label_226c1c:
    // 0x226c1c: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x226c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x226c20: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x226C20u;
    {
        const bool branch_taken_0x226c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x226C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C20u;
        // 0x226c24: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226c20) {
            ctx->pc = 0x226CD0u;
            goto label_226cd0;
        }
    }
    ctx->pc = 0x226C28u;
    // 0x226c28: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x226C28u;
    {
        const bool branch_taken_0x226c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C28u;
        // 0x226c2c: 0xc7b40050  lwc1        $f20, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x226c28) {
            ctx->pc = 0x226DE4u;
            goto label_226de4;
        }
    }
    ctx->pc = 0x226C30u;
label_226c30:
    // 0x226c30: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x226c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x226c34: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x226c34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x226c38: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x226c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x226c3c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x226c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x226c40: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x226c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226c44: 0x24480e98  addiu       $t0, $v0, 0xE98
    ctx->pc = 0x226c44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 3736));
    // 0x226c48: 0x69030007  ldl         $v1, 0x7($t0)
    ctx->pc = 0x226c48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x226c4c: 0x6d030000  ldr         $v1, 0x0($t0)
    ctx->pc = 0x226c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x226c50: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x226c50u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3A0EA0u));
    // 0x226c54: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x226c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x226c58: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x226c58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x226c5c: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x226c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x226c60: 0xc08163c  jal         func_2058F0
    ctx->pc = 0x226C60u;
    SET_GPR_U32(ctx, 31, 0x226C68u);
    ctx->pc = 0x226C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226C60u;
    // 0x226c64: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2058F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2058F0u, 0x226C60u, 0x226C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226C68u;
label_226c68:
    // 0x226c68: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x226c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x226c6c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x226c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x226c70: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x226c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x226c74: 0x24680ea8  addiu       $t0, $v1, 0xEA8
    ctx->pc = 0x226c74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 3752));
    // 0x226c78: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x226c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x226c7c: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x226c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x226c80: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x226c80u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3A0EB0u));
    // 0x226c84: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x226c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x226c88: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x226c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x226c8c: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x226c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x226c90: 0xc08163c  jal         func_2058F0
    ctx->pc = 0x226C90u;
    SET_GPR_U32(ctx, 31, 0x226C98u);
    ctx->pc = 0x226C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226C90u;
    // 0x226c94: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2058F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2058F0u, 0x226C90u, 0x226C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226C98u;
label_226c98:
    // 0x226c98: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x226c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x226c9c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x226c9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x226ca0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x226ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x226ca4: 0x24680eb8  addiu       $t0, $v1, 0xEB8
    ctx->pc = 0x226ca4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 3768));
    // 0x226ca8: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x226ca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x226cac: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x226cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x226cb0: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x226cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3A0EC0u));
    // 0x226cb4: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x226cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x226cb8: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x226cb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x226cbc: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x226cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x226cc0: 0xc08163c  jal         func_2058F0
    ctx->pc = 0x226CC0u;
    SET_GPR_U32(ctx, 31, 0x226CC8u);
    ctx->pc = 0x226CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226CC0u;
    // 0x226cc4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2058F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2058F0u, 0x226CC0u, 0x226CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226CC8u;
label_226cc8:
    // 0x226cc8: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x226CC8u;
    {
        const bool branch_taken_0x226cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226CC8u;
        // 0x226ccc: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226cc8) {
            ctx->pc = 0x226DE0u;
            goto label_226de0;
        }
    }
    ctx->pc = 0x226CD0u;
label_226cd0:
    // 0x226cd0: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x226cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x226cd4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x226cd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x226cd8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x226cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x226cdc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x226cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x226ce0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x226ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226ce4: 0x24480ec8  addiu       $t0, $v0, 0xEC8
    ctx->pc = 0x226ce4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 3784));
    // 0x226ce8: 0x69030007  ldl         $v1, 0x7($t0)
    ctx->pc = 0x226ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x226cec: 0x6d030000  ldr         $v1, 0x0($t0)
    ctx->pc = 0x226cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x226cf0: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x226cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3A0ED0u));
    // 0x226cf4: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x226cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x226cf8: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x226cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x226cfc: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x226cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x226d00: 0xc08163c  jal         func_2058F0
    ctx->pc = 0x226D00u;
    SET_GPR_U32(ctx, 31, 0x226D08u);
    ctx->pc = 0x226D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226D00u;
    // 0x226d04: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2058F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2058F0u, 0x226D00u, 0x226D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D08u;
label_226d08:
    // 0x226d08: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x226d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x226d0c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x226d0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x226d10: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x226d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x226d14: 0x24680ed8  addiu       $t0, $v1, 0xED8
    ctx->pc = 0x226d14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 3800));
    // 0x226d18: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x226d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x226d1c: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x226d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x226d20: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x226d20u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3A0EE0u));
    // 0x226d24: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x226d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x226d28: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x226d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x226d2c: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x226d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x226d30: 0xc08163c  jal         func_2058F0
    ctx->pc = 0x226D30u;
    SET_GPR_U32(ctx, 31, 0x226D38u);
    ctx->pc = 0x226D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226D30u;
    // 0x226d34: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2058F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2058F0u, 0x226D30u, 0x226D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D38u;
label_226d38:
    // 0x226d38: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x226d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x226d3c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x226d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x226d40: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x226d40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x226d44: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x226d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x226d48: 0x24680ee8  addiu       $t0, $v1, 0xEE8
    ctx->pc = 0x226d48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 3816));
    // 0x226d4c: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x226d4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x226d50: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x226d50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x226d54: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x226d54u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3A0EF0u));
    // 0x226d58: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x226d58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x226d5c: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x226d5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x226d60: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x226d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x226d64: 0xc08163c  jal         func_2058F0
    ctx->pc = 0x226D64u;
    SET_GPR_U32(ctx, 31, 0x226D6Cu);
    ctx->pc = 0x226D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226D64u;
    // 0x226d68: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2058F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2058F0u, 0x226D64u, 0x226D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D6Cu;
label_226d6c:
    // 0x226d6c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x226D6Cu;
    {
        const bool branch_taken_0x226d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D6Cu;
        // 0x226d70: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226d6c) {
            ctx->pc = 0x226DE0u;
            goto label_226de0;
        }
    }
    ctx->pc = 0x226D74u;
label_226d74:
    // 0x226d74: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x226d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x226d78: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x226d78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x226d7c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x226d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x226d80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x226d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226d84: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x226d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226d88: 0x24480ef8  addiu       $t0, $v0, 0xEF8
    ctx->pc = 0x226d88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 3832));
    // 0x226d8c: 0x69030007  ldl         $v1, 0x7($t0)
    ctx->pc = 0x226d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x226d90: 0x6d030000  ldr         $v1, 0x0($t0)
    ctx->pc = 0x226d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x226d94: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x226d94u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3A0F00u));
    // 0x226d98: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x226d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x226d9c: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x226d9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x226da0: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x226da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x226da4: 0xc08163c  jal         func_2058F0
    ctx->pc = 0x226DA4u;
    SET_GPR_U32(ctx, 31, 0x226DACu);
    ctx->pc = 0x226DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226DA4u;
    // 0x226da8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2058F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2058F0u, 0x226DA4u, 0x226DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226DACu;
label_226dac:
    // 0x226dac: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x226dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x226db0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x226db0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x226db4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x226db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226db8: 0x24680f08  addiu       $t0, $v1, 0xF08
    ctx->pc = 0x226db8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 3848));
    // 0x226dbc: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x226dbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x226dc0: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x226dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x226dc4: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x226dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3A0F10u));
    // 0x226dc8: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x226dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x226dcc: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x226dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x226dd0: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x226dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x226dd4: 0xc08163c  jal         func_2058F0
    ctx->pc = 0x226DD4u;
    SET_GPR_U32(ctx, 31, 0x226DDCu);
    ctx->pc = 0x226DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226DD4u;
    // 0x226dd8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2058F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2058F0u, 0x226DD4u, 0x226DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226DDCu;
label_226ddc:
    // 0x226ddc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x226ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_226de0:
    // 0x226de0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x226de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_226de4:
    // 0x226de4: 0x3e00008  jr          $ra
    ctx->pc = 0x226DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226DE4u;
        // 0x226de8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226DECu;
}
