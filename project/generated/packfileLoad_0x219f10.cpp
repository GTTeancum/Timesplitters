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

// Function: packfileLoad
// Address: 0x219f10 - 0x21a14c
void packfileLoad_0x219f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("packfileLoad_0x219f10");
#endif

    switch (ctx->pc) {
        case 0x219f70u: goto label_219f70;
        case 0x219f7cu: goto label_219f7c;
        case 0x219fd0u: goto label_219fd0;
        case 0x219fe4u: goto label_219fe4;
        case 0x21a018u: goto label_21a018;
        case 0x21a050u: goto label_21a050;
        case 0x21a09cu: goto label_21a09c;
        case 0x21a0b8u: goto label_21a0b8;
        default: break;
    }

    ctx->pc = 0x219f10u;

    // 0x219f10: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x219f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x219f14: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x219f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x219f18: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x219f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x219f1c: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x219f1cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x219f20: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x219f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x219f24: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x219f24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219f28: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x219f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x219f2c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x219f2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219f30: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x219f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x219f34: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x219f34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x219f38: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x219f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x219f3c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x219f3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219f40: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x219f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x219f44: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x219f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x219f48: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x219F48u;
    {
        const bool branch_taken_0x219f48 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x219F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F48u;
        // 0x219f4c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f48) {
            ctx->pc = 0x219F5Cu;
            goto label_219f5c;
        }
    }
    ctx->pc = 0x219F50u;
    // 0x219f50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x219f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x219f54: 0x16820006  bne         $s4, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x219F54u;
    {
        const bool branch_taken_0x219f54 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x219F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F54u;
        // 0x219f58: 0x24900007  addiu       $s0, $a0, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f54) {
            ctx->pc = 0x219F70u;
            goto label_219f70;
        }
    }
    ctx->pc = 0x219F5Cu;
label_219f5c:
    // 0x219f5c: 0x8f82b6bc  lw          $v0, -0x4944($gp)
    ctx->pc = 0x219f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948540)));
    // 0x219f60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x219F60u;
    {
        const bool branch_taken_0x219f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F60u;
        // 0x219f64: 0x24900007  addiu       $s0, $a0, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f60) {
            ctx->pc = 0x219F70u;
            goto label_219f70;
        }
    }
    ctx->pc = 0x219F68u;
    // 0x219f68: 0xc0b8690  jal         func_2E1A40
    ctx->pc = 0x219F68u;
    SET_GPR_U32(ctx, 31, 0x219F70u);
    ctx->pc = 0x219F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219F68u;
    // 0x219f6c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A40u, 0x219F68u, 0x219F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219F70u;
label_219f70:
    // 0x219f70: 0x2784b6b0  addiu       $a0, $gp, -0x4950
    ctx->pc = 0x219f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948528));
    // 0x219f74: 0xc0acd9c  jal         func_2B3670
    ctx->pc = 0x219F74u;
    SET_GPR_U32(ctx, 31, 0x219F7Cu);
    ctx->pc = 0x219F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219F74u;
    // 0x219f78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3670u, 0x219F74u, 0x219F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219F7Cu;
label_219f7c:
    // 0x219f7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x219f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219f80: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x219F80u;
    {
        const bool branch_taken_0x219f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x219f80) {
            ctx->pc = 0x219F94u;
            goto label_219f94;
        }
    }
    ctx->pc = 0x219F88u;
    // 0x219f88: 0x8f93b6b0  lw          $s3, -0x4950($gp)
    ctx->pc = 0x219f88u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948528)));
    // 0x219f8c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x219f8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219f90: 0x8f96b6b4  lw          $s6, -0x494C($gp)
    ctx->pc = 0x219f90u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948532)));
label_219f94:
    // 0x219f94: 0x1220fff6  beqz        $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x219F94u;
    {
        const bool branch_taken_0x219f94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x219F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F94u;
        // 0x219f98: 0x8f82b6b8  lw          $v0, -0x4948($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f94) {
            ctx->pc = 0x219F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219f70;
        }
    }
    ctx->pc = 0x219F9Cu;
    // 0x219f9c: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x219f9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x219fa0: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x219FA0u;
    {
        const bool branch_taken_0x219fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219FA0u;
        // 0x219fa4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219fa0) {
            ctx->pc = 0x21A120u;
            goto label_21a120;
        }
    }
    ctx->pc = 0x219FA8u;
    // 0x219fa8: 0x12a00017  beqz        $s5, . + 4 + (0x17 << 2)
    ctx->pc = 0x219FA8u;
    {
        const bool branch_taken_0x219fa8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x219FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219FA8u;
        // 0x219fac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219fa8) {
            ctx->pc = 0x21A008u;
            goto label_21a008;
        }
    }
    ctx->pc = 0x219FB0u;
    // 0x219fb0: 0x8f92b6b4  lw          $s2, -0x494C($gp)
    ctx->pc = 0x219fb0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948532)));
    // 0x219fb4: 0x1a40005a  blez        $s2, . + 4 + (0x5A << 2)
    ctx->pc = 0x219FB4u;
    {
        const bool branch_taken_0x219fb4 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x219FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219FB4u;
        // 0x219fb8: 0x2642000f  addiu       $v0, $s2, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219fb4) {
            ctx->pc = 0x21A120u;
            goto label_21a120;
        }
    }
    ctx->pc = 0x219FBCu;
    // 0x219fbc: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x219fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x219fc0: 0x3484fff0  ori         $a0, $a0, 0xFFF0
    ctx->pc = 0x219fc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65520);
    // 0x219fc4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x219fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219fc8: 0xc08074e  jal         func_201D38
    ctx->pc = 0x219FC8u;
    SET_GPR_U32(ctx, 31, 0x219FD0u);
    ctx->pc = 0x219FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219FC8u;
    // 0x219fcc: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D38u, 0x219FC8u, 0x219FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219FD0u;
label_219fd0:
    // 0x219fd0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x219fd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219fd4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x219fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219fd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x219fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219fdc: 0xc086732  jal         func_219CC8
    ctx->pc = 0x219FDCu;
    SET_GPR_U32(ctx, 31, 0x219FE4u);
    ctx->pc = 0x219FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219FDCu;
    // 0x219fe0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219CC8u, 0x219FDCu, 0x219FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219FE4u;
label_219fe4:
    // 0x219fe4: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x219fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x219fe8: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x219fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x219fec: 0x8a23000b  lwl         $v1, 0xB($s1)
    ctx->pc = 0x219fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x219ff0: 0x9a230008  lwr         $v1, 0x8($s1)
    ctx->pc = 0x219ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x219ff4: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x219ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x219ff8: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x219ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x219ffc: 0xaba3000b  swl         $v1, 0xB($sp)
    ctx->pc = 0x219ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x21a000: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21A000u;
    {
        const bool branch_taken_0x21a000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A000u;
        // 0x21a004: 0xbba30008  swr         $v1, 0x8($sp) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a000) {
            ctx->pc = 0x21A018u;
            goto label_21a018;
        }
    }
    ctx->pc = 0x21A008u;
label_21a008:
    // 0x21a008: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21a008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a00c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21a00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a010: 0xc086732  jal         func_219CC8
    ctx->pc = 0x21A010u;
    SET_GPR_U32(ctx, 31, 0x21A018u);
    ctx->pc = 0x21A014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A010u;
    // 0x21a014: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219CC8u, 0x21A010u, 0x21A018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A018u;
label_21a018:
    // 0x21a018: 0x3c024b43  lui         $v0, 0x4B43
    ctx->pc = 0x21a018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19267 << 16));
    // 0x21a01c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x21a01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a020: 0x34423450  ori         $v0, $v0, 0x3450
    ctx->pc = 0x21a020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13392);
    // 0x21a024: 0x1462003f  bne         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x21A024u;
    {
        const bool branch_taken_0x21a024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A024u;
        // 0x21a028: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a024) {
            ctx->pc = 0x21A124u;
            goto label_21a124;
        }
    }
    ctx->pc = 0x21A02Cu;
    // 0x21a02c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x21a02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a030: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x21a030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x21a034: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x21a034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x21a038: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x21a038u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x21a03c: 0x5440003a  bnel        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x21A03Cu;
    {
        const bool branch_taken_0x21a03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a03c) {
            ctx->pc = 0x21A040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A03Cu;
            // 0x21a040: 0xdfb70080  ld          $s7, 0x80($sp) (Delay Slot)
            SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A128u;
            goto label_21a128;
        }
    }
    ctx->pc = 0x21A044u;
    // 0x21a044: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x21a044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x21a048: 0xc08070e  jal         func_201C38
    ctx->pc = 0x21A048u;
    SET_GPR_U32(ctx, 31, 0x21A050u);
    ctx->pc = 0x21A04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A048u;
    // 0x21a04c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x21A048u, 0x21A050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A050u;
label_21a050:
    // 0x21a050: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x21A050u;
    {
        const bool branch_taken_0x21a050 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A050u;
        // 0x21a054: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a050) {
            ctx->pc = 0x21A080u;
            goto label_21a080;
        }
    }
    ctx->pc = 0x21A058u;
    // 0x21a058: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x21a058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a05c: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x21a05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x21a060: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x21a060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21a064: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x21a064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x21a068: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x21a068u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21a06c: 0xae160008  sw          $s6, 0x8($s0)
    ctx->pc = 0x21a06cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 22));
    // 0x21a070: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x21a070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x21a074: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x21a074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x21a078: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x21A078u;
    {
        const bool branch_taken_0x21a078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A078u;
        // 0x21a07c: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a078) {
            ctx->pc = 0x21A0C8u;
            goto label_21a0c8;
        }
    }
    ctx->pc = 0x21A080u;
label_21a080:
    // 0x21a080: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x21a080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a084: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x21a084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x21a088: 0x3484fff0  ori         $a0, $a0, 0xFFF0
    ctx->pc = 0x21a088u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65520);
    // 0x21a08c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x21a08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21a090: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x21a090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x21a094: 0xc08074e  jal         func_201D38
    ctx->pc = 0x21A094u;
    SET_GPR_U32(ctx, 31, 0x21A09Cu);
    ctx->pc = 0x21A098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A094u;
    // 0x21a098: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D38u, 0x21A094u, 0x21A09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A09Cu;
label_21a09c:
    // 0x21a09c: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x21a09cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a0a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21a0a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a0a4: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x21a0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x21a0a8: 0x2c62023  subu        $a0, $s6, $a2
    ctx->pc = 0x21a0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x21a0ac: 0x422c3  sra         $a0, $a0, 11
    ctx->pc = 0x21a0acu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 11));
    // 0x21a0b0: 0xc086732  jal         func_219CC8
    ctx->pc = 0x21A0B0u;
    SET_GPR_U32(ctx, 31, 0x21A0B8u);
    ctx->pc = 0x21A0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A0B0u;
    // 0x21a0b4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219CC8u, 0x21A0B0u, 0x21A0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A0B8u;
label_21a0b8:
    // 0x21a0b8: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x21a0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x21a0bc: 0xae160008  sw          $s6, 0x8($s0)
    ctx->pc = 0x21a0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 22));
    // 0x21a0c0: 0xae170000  sw          $s7, 0x0($s0)
    ctx->pc = 0x21a0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 23));
    // 0x21a0c4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x21a0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_21a0c8:
    // 0x21a0c8: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x21a0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a0cc: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x21a0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x21a0d0: 0x8f84b6b8  lw          $a0, -0x4948($gp)
    ctx->pc = 0x21a0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948536)));
    // 0x21a0d4: 0x3c0301fb  lui         $v1, 0x1FB
    ctx->pc = 0x21a0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)507 << 16));
    // 0x21a0d8: 0xa6001b  divu        $zero, $a1, $a2
    ctx->pc = 0x21a0d8u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x21a0dc: 0x24634c40  addiu       $v1, $v1, 0x4C40
    ctx->pc = 0x21a0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19520));
    // 0x21a0e0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x21a0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21a0e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21a0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21a0e8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x21a0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x21a0ec: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x21a0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x21a0f0: 0xaf84b6b8  sw          $a0, -0x4948($gp)
    ctx->pc = 0x21a0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948536), GPR_U32(ctx, 4));
    // 0x21a0f4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21A0F4u;
    {
        const bool branch_taken_0x21a0f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a0f4) {
            ctx->pc = 0x21A0F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A0F4u;
            // 0x21a0f8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A0FCu;
            goto label_21a0fc;
        }
    }
    ctx->pc = 0x21A0FCu;
label_21a0fc:
    // 0x21a0fc: 0x2812  mflo        $a1
    ctx->pc = 0x21a0fcu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x21a100: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x21A100u;
    {
        const bool branch_taken_0x21a100 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A100u;
        // 0x21a104: 0xae05000c  sw          $a1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a100) {
            ctx->pc = 0x21A120u;
            goto label_21a120;
        }
    }
    ctx->pc = 0x21A108u;
    // 0x21a108: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21a108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a10c: 0x16820005  bne         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21A10Cu;
    {
        const bool branch_taken_0x21a10c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x21A110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A10Cu;
        // 0x21a110: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a10c) {
            ctx->pc = 0x21A124u;
            goto label_21a124;
        }
    }
    ctx->pc = 0x21A114u;
    // 0x21a114: 0x8f82b6bc  lw          $v0, -0x4944($gp)
    ctx->pc = 0x21a114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948540)));
    // 0x21a118: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21a118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21a11c: 0xaf82b6bc  sw          $v0, -0x4944($gp)
    ctx->pc = 0x21a11cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948540), GPR_U32(ctx, 2));
label_21a120:
    // 0x21a120: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x21a120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_21a124:
    // 0x21a124: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x21a124u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_21a128:
    // 0x21a128: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x21a128u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21a12c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x21a12cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21a130: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x21a130u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21a134: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x21a134u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21a138: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x21a138u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21a13c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x21a13cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21a140: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21a140u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a144: 0x3e00008  jr          $ra
    ctx->pc = 0x21A144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A144u;
        // 0x21a148: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A14Cu;
}
