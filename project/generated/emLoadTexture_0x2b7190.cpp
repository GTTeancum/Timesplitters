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

// Function: emLoadTexture
// Address: 0x2b7190 - 0x2b78d4
void emLoadTexture_0x2b7190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emLoadTexture_0x2b7190");
#endif

    switch (ctx->pc) {
        case 0x2b7218u: goto label_2b7218;
        case 0x2b722cu: goto label_2b722c;
        case 0x2b7248u: goto label_2b7248;
        case 0x2b72b8u: goto label_2b72b8;
        case 0x2b72c4u: goto label_2b72c4;
        case 0x2b72e8u: goto label_2b72e8;
        case 0x2b7300u: goto label_2b7300;
        case 0x2b7360u: goto label_2b7360;
        case 0x2b7368u: goto label_2b7368;
        case 0x2b7370u: goto label_2b7370;
        case 0x2b737cu: goto label_2b737c;
        case 0x2b7388u: goto label_2b7388;
        case 0x2b7390u: goto label_2b7390;
        case 0x2b7434u: goto label_2b7434;
        case 0x2b743cu: goto label_2b743c;
        case 0x2b7444u: goto label_2b7444;
        case 0x2b7450u: goto label_2b7450;
        case 0x2b745cu: goto label_2b745c;
        case 0x2b7464u: goto label_2b7464;
        case 0x2b75f0u: goto label_2b75f0;
        case 0x2b75fcu: goto label_2b75fc;
        case 0x2b7654u: goto label_2b7654;
        case 0x2b7660u: goto label_2b7660;
        default: break;
    }

    ctx->pc = 0x2b7190u;

    // 0x2b7190: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2b7190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2b7194: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2b7194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2b7198: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2b7198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2b719c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b719cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b71a0: 0xffb500c0  sd          $s5, 0xC0($sp)
    ctx->pc = 0x2b71a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x2b71a4: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x2b71a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x2b71a8: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x2b71a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b71ac: 0x8f84b498  lw          $a0, -0x4B68($gp)
    ctx->pc = 0x2b71acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
    // 0x2b71b0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2b71b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b71b4: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x2b71b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x2b71b8: 0xffbe00f0  sd          $fp, 0xF0($sp)
    ctx->pc = 0x2b71b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
    // 0x2b71bc: 0xffb700e0  sd          $s7, 0xE0($sp)
    ctx->pc = 0x2b71bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
    // 0x2b71c0: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x2b71c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x2b71c4: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x2b71c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x2b71c8: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x2b71c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x2b71cc: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x2b71ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x2b71d0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2b71d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2b71d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b71d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b71d8: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B71D8u;
    {
        const bool branch_taken_0x2b71d8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B71DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B71D8u;
        // 0x2b71dc: 0x629821  addu        $s3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b71d8) {
            ctx->pc = 0x2B71E4u;
            goto label_2b71e4;
        }
    }
    ctx->pc = 0x2B71E0u;
    // 0x2b71e0: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x2b71e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2b71e4:
    // 0x2b71e4: 0xae640008  sw          $a0, 0x8($s3)
    ctx->pc = 0x2b71e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 4));
    // 0x2b71e8: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B71E8u;
    {
        const bool branch_taken_0x2b71e8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B71ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B71E8u;
        // 0x2b71ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b71e8) {
            ctx->pc = 0x2B71F4u;
            goto label_2b71f4;
        }
    }
    ctx->pc = 0x2B71F0u;
    // 0x2b71f0: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x2b71f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_2b71f4:
    // 0x2b71f4: 0x12a0000a  beqz        $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x2B71F4u;
    {
        const bool branch_taken_0x2b71f4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B71F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B71F4u;
        // 0x2b71f8: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b71f4) {
            ctx->pc = 0x2B7220u;
            goto label_2b7220;
        }
    }
    ctx->pc = 0x2B71FCu;
    // 0x2b71fc: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x2b71fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x2b7200: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2b7200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2b7204: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b7204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b7208: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B7208u;
    {
        const bool branch_taken_0x2b7208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7208u;
        // 0x2b720c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7208) {
            ctx->pc = 0x2B7220u;
            goto label_2b7220;
        }
    }
    ctx->pc = 0x2B7210u;
    // 0x2b7210: 0xc0ae736  jal         func_2B9CD8
    ctx->pc = 0x2B7210u;
    SET_GPR_U32(ctx, 31, 0x2B7218u);
    ctx->pc = 0x2B7214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7210u;
    // 0x2b7214: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9CD8u, 0x2B7210u, 0x2B7218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7218u;
label_2b7218:
    // 0x2b7218: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B7218u;
    {
        const bool branch_taken_0x2b7218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7218u;
        // 0x2b721c: 0x92620024  lbu         $v0, 0x24($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7218) {
            ctx->pc = 0x2B7230u;
            goto label_2b7230;
        }
    }
    ctx->pc = 0x2B7220u;
label_2b7220:
    // 0x2b7220: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2b7220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7224: 0xc0ae6fc  jal         func_2B9BF0
    ctx->pc = 0x2B7224u;
    SET_GPR_U32(ctx, 31, 0x2B722Cu);
    ctx->pc = 0x2B7228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7224u;
    // 0x2b7228: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9BF0u, 0x2B7224u, 0x2B722Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B722Cu;
label_2b722c:
    // 0x2b722c: 0x92620024  lbu         $v0, 0x24($s3)
    ctx->pc = 0x2b722cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 36)));
label_2b7230:
    // 0x2b7230: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b7230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b7234: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B7234u;
    {
        const bool branch_taken_0x2b7234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7234u;
        // 0x2b7238: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7234) {
            ctx->pc = 0x2B7248u;
            goto label_2b7248;
        }
    }
    ctx->pc = 0x2B723Cu;
    // 0x2b723c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b723cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7240: 0xc0adb08  jal         func_2B6C20
    ctx->pc = 0x2B7240u;
    SET_GPR_U32(ctx, 31, 0x2B7248u);
    ctx->pc = 0x2B7244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7240u;
    // 0x2b7244: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6C20u, 0x2B7240u, 0x2B7248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7248u;
label_2b7248:
    // 0x2b7248: 0x6a620007  ldl         $v0, 0x7($s3)
    ctx->pc = 0x2b7248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2b724c: 0x6e620000  ldr         $v0, 0x0($s3)
    ctx->pc = 0x2b724cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2b7250: 0x6a63000f  ldl         $v1, 0xF($s3)
    ctx->pc = 0x2b7250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2b7254: 0x6e630008  ldr         $v1, 0x8($s3)
    ctx->pc = 0x2b7254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2b7258: 0x6a640017  ldl         $a0, 0x17($s3)
    ctx->pc = 0x2b7258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2b725c: 0x6e640010  ldr         $a0, 0x10($s3)
    ctx->pc = 0x2b725cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2b7260: 0x6a65001f  ldl         $a1, 0x1F($s3)
    ctx->pc = 0x2b7260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2b7264: 0x6e650018  ldr         $a1, 0x18($s3)
    ctx->pc = 0x2b7264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2b7268: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2b7268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b726c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2b726cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b7270: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x2b7270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b7274: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x2b7274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b7278: 0xb3a40017  sdl         $a0, 0x17($sp)
    ctx->pc = 0x2b7278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b727c: 0xb7a40010  sdr         $a0, 0x10($sp)
    ctx->pc = 0x2b727cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b7280: 0xb3a5001f  sdl         $a1, 0x1F($sp)
    ctx->pc = 0x2b7280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b7284: 0xb7a50018  sdr         $a1, 0x18($sp)
    ctx->pc = 0x2b7284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b7288: 0x6a620027  ldl         $v0, 0x27($s3)
    ctx->pc = 0x2b7288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2b728c: 0x6e620020  ldr         $v0, 0x20($s3)
    ctx->pc = 0x2b728cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2b7290: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x2b7290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b7294: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x2b7294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b7298: 0x92620025  lbu         $v0, 0x25($s3)
    ctx->pc = 0x2b7298u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 37)));
    // 0x2b729c: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x2B729Cu;
    {
        const bool branch_taken_0x2b729c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B72A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B729Cu;
        // 0x2b72a0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b729c) {
            ctx->pc = 0x2B73F4u;
            goto label_2b73f4;
        }
    }
    ctx->pc = 0x2B72A4u;
    // 0x2b72a4: 0x10f1c0  sll         $fp, $s0, 7
    ctx->pc = 0x2b72a4u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x2b72a8: 0x27b70030  addiu       $s7, $sp, 0x30
    ctx->pc = 0x2b72a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b72ac: 0x27b60050  addiu       $s6, $sp, 0x50
    ctx->pc = 0x2b72acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2b72b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b72b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b72b4: 0x0  nop
    ctx->pc = 0x2b72b4u;
    // NOP
label_2b72b8:
    // 0x2b72b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b72b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b72bc: 0xc0adb08  jal         func_2B6C20
    ctx->pc = 0x2B72BCu;
    SET_GPR_U32(ctx, 31, 0x2B72C4u);
    ctx->pc = 0x2B72C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B72BCu;
    // 0x2b72c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6C20u, 0x2B72BCu, 0x2B72C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B72C4u;
label_2b72c4:
    // 0x2b72c4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B72C4u;
    {
        const bool branch_taken_0x2b72c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b72c4) {
            ctx->pc = 0x2B72C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B72C4u;
            // 0x2b72c8: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B72CCu;
            goto label_2b72cc;
        }
    }
    ctx->pc = 0x2B72CCu;
label_2b72cc:
    // 0x2b72cc: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2b72ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2b72d0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2b72d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b72d4: 0x2e28821  addu        $s1, $s7, $v0
    ctx->pc = 0x2b72d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2b72d8: 0x2c29021  addu        $s2, $s6, $v0
    ctx->pc = 0x2b72d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2b72dc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2b72dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2b72e0: 0xc0adc04  jal         func_2B7010
    ctx->pc = 0x2B72E0u;
    SET_GPR_U32(ctx, 31, 0x2B72E8u);
    ctx->pc = 0x2B72E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B72E0u;
    // 0x2b72e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7010u, 0x2B72E0u, 0x2B72E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B72E8u;
label_2b72e8:
    // 0x2b72e8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2b72e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2b72ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b72ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b72f0: 0x50400042  beql        $v0, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x2B72F0u;
    {
        const bool branch_taken_0x2b72f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b72f0) {
            ctx->pc = 0x2B72F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B72F0u;
            // 0x2b72f4: 0x92620024  lbu         $v0, 0x24($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B73FCu;
            goto label_2b73fc;
        }
    }
    ctx->pc = 0x2B72F8u;
    // 0x2b72f8: 0xc0b3c54  jal         func_2CF150
    ctx->pc = 0x2B72F8u;
    SET_GPR_U32(ctx, 31, 0x2B7300u);
    ctx->pc = 0x2B72FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B72F8u;
    // 0x2b72fc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF150u, 0x2B72F8u, 0x2B7300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7300u;
label_2b7300:
    // 0x2b7300: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2b7300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2b7304: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x2b7304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x2b7308: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2B7308u;
    {
        const bool branch_taken_0x2b7308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7308u;
        // 0x2b730c: 0x97a70002  lhu         $a3, 0x2($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7308) {
            ctx->pc = 0x2B7398u;
            goto label_2b7398;
        }
    }
    ctx->pc = 0x2B7310u;
    // 0x2b7310: 0x30e20003  andi        $v0, $a3, 0x3
    ctx->pc = 0x2b7310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x2b7314: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x2B7314u;
    {
        const bool branch_taken_0x2b7314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7314) {
            ctx->pc = 0x2B7318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7314u;
            // 0x2b7318: 0x97a40002  lhu         $a0, 0x2($sp) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B739Cu;
            goto label_2b739c;
        }
    }
    ctx->pc = 0x2B731Cu;
    // 0x2b731c: 0x92620024  lbu         $v0, 0x24($s3)
    ctx->pc = 0x2b731cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x2b7320: 0x75c00  sll         $t3, $a3, 16
    ctx->pc = 0x2b7320u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x2b7324: 0x97aa0004  lhu         $t2, 0x4($sp)
    ctx->pc = 0x2b7324u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2b7328: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x2b7328u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x2b732c: 0x26100400  addiu       $s0, $s0, 0x400
    ctx->pc = 0x2b732cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
    // 0x2b7330: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b7330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b7334: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x2b7334u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x2b7338: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x2b7338u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b733c: 0x86460000  lh          $a2, 0x0($s2)
    ctx->pc = 0x2b733cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b7340: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x2b7340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2b7344: 0x2380a  movz        $a3, $zero, $v0
    ctx->pc = 0x2b7344u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x2b7348: 0xa5403  sra         $t2, $t2, 16
    ctx->pc = 0x2b7348u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 16));
    // 0x2b734c: 0xb5c03  sra         $t3, $t3, 16
    ctx->pc = 0x2b734cu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 16));
    // 0x2b7350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b7350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7354: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b7354u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7358: 0xc0b39a2  jal         func_2CE688
    ctx->pc = 0x2B7358u;
    SET_GPR_U32(ctx, 31, 0x2B7360u);
    ctx->pc = 0x2B735Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7358u;
    // 0x2b735c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE688u, 0x2B7358u, 0x2B7360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7360u;
label_2b7360:
    // 0x2b7360: 0xc0b40e8  jal         func_2D03A0
    ctx->pc = 0x2B7360u;
    SET_GPR_U32(ctx, 31, 0x2B7368u);
    ctx->pc = 0x2B7364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7360u;
    // 0x2b7364: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D03A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D03A0u, 0x2B7360u, 0x2B7368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7368u;
label_2b7368:
    // 0x2b7368: 0xc0b4058  jal         func_2D0160
    ctx->pc = 0x2B7368u;
    SET_GPR_U32(ctx, 31, 0x2B7370u);
    ctx->pc = 0x2B736Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7368u;
    // 0x2b736c: 0x8f849340  lw          $a0, -0x6CC0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939456)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0160u, 0x2B7368u, 0x2B7370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7370u;
label_2b7370:
    // 0x2b7370: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x2b7370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2b7374: 0xc0adc10  jal         func_2B7040
    ctx->pc = 0x2B7374u;
    SET_GPR_U32(ctx, 31, 0x2B737Cu);
    ctx->pc = 0x2B7378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7374u;
    // 0x2b7378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7040u, 0x2B7374u, 0x2B737Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B737Cu;
label_2b737c:
    // 0x2b737c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b737cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7380: 0xc0b38dc  jal         func_2CE370
    ctx->pc = 0x2B7380u;
    SET_GPR_U32(ctx, 31, 0x2B7388u);
    ctx->pc = 0x2B7384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7380u;
    // 0x2b7384: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE370u, 0x2B7380u, 0x2B7388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7388u;
label_2b7388:
    // 0x2b7388: 0xc0b4050  jal         func_2D0140
    ctx->pc = 0x2B7388u;
    SET_GPR_U32(ctx, 31, 0x2B7390u);
    ctx->pc = 0x2B738Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7388u;
    // 0x2b738c: 0x8f849340  lw          $a0, -0x6CC0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939456)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0140u, 0x2B7388u, 0x2B7390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7390u;
label_2b7390:
    // 0x2b7390: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2b7390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2b7394: 0x97a70002  lhu         $a3, 0x2($sp)
    ctx->pc = 0x2b7394u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
label_2b7398:
    // 0x2b7398: 0x97a40002  lhu         $a0, 0x2($sp)
    ctx->pc = 0x2b7398u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
label_2b739c:
    // 0x2b739c: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x2b739cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x2b73a0: 0x92660024  lbu         $a2, 0x24($s3)
    ctx->pc = 0x2b73a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x2b73a4: 0x73842  srl         $a3, $a3, 1
    ctx->pc = 0x2b73a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x2b73a8: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x2b73a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b73ac: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2b73acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2b73b0: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x2b73b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2b73b4: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x2b73b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2b73b8: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x2b73b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b73bc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2b73bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2b73c0: 0xa7a70002  sh          $a3, 0x2($sp)
    ctx->pc = 0x2b73c0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x2b73c4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b73c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b73c8: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x2b73c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2b73cc: 0x66200a  movz        $a0, $v1, $a2
    ctx->pc = 0x2b73ccu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x2b73d0: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x2b73d0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b73d4: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2b73d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2b73d8: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x2b73d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x2b73dc: 0x92620025  lbu         $v0, 0x25($s3)
    ctx->pc = 0x2b73dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 37)));
    // 0x2b73e0: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x2b73e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b73e4: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x2B73E4u;
    {
        const bool branch_taken_0x2b73e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B73E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B73E4u;
        // 0x2b73e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b73e4) {
            ctx->pc = 0x2B72B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b72b8;
        }
    }
    ctx->pc = 0x2B73ECu;
    // 0x2b73ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B73ECu;
    {
        const bool branch_taken_0x2b73ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B73F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B73ECu;
        // 0x2b73f0: 0x92620024  lbu         $v0, 0x24($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b73ec) {
            ctx->pc = 0x2B73FCu;
            goto label_2b73fc;
        }
    }
    ctx->pc = 0x2B73F4u;
label_2b73f4:
    // 0x2b73f4: 0x10f1c0  sll         $fp, $s0, 7
    ctx->pc = 0x2b73f4u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x2b73f8: 0x92620024  lbu         $v0, 0x24($s3)
    ctx->pc = 0x2b73f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 36)));
label_2b73fc:
    // 0x2b73fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b73fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b7400: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2B7400u;
    {
        const bool branch_taken_0x2b7400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7400u;
        // 0x2b7404: 0xa2740025  sb          $s4, 0x25($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 37), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7400) {
            ctx->pc = 0x2B7464u;
            goto label_2b7464;
        }
    }
    ctx->pc = 0x2B7408u;
    // 0x2b7408: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x2b7408u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x2b740c: 0x86650018  lh          $a1, 0x18($s3)
    ctx->pc = 0x2b740cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2b7410: 0x26100400  addiu       $s0, $s0, 0x400
    ctx->pc = 0x2b7410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
    // 0x2b7414: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b7414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b7418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b741c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b741cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7420: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b7420u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7424: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2b7424u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7428: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x2b7428u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b742c: 0xc0b39a2  jal         func_2CE688
    ctx->pc = 0x2B742Cu;
    SET_GPR_U32(ctx, 31, 0x2B7434u);
    ctx->pc = 0x2B7430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B742Cu;
    // 0x2b7430: 0x240b0010  addiu       $t3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE688u, 0x2B742Cu, 0x2B7434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7434u;
label_2b7434:
    // 0x2b7434: 0xc0b40e8  jal         func_2D03A0
    ctx->pc = 0x2B7434u;
    SET_GPR_U32(ctx, 31, 0x2B743Cu);
    ctx->pc = 0x2B7438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7434u;
    // 0x2b7438: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D03A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D03A0u, 0x2B7434u, 0x2B743Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B743Cu;
label_2b743c:
    // 0x2b743c: 0xc0b4058  jal         func_2D0160
    ctx->pc = 0x2B743Cu;
    SET_GPR_U32(ctx, 31, 0x2B7444u);
    ctx->pc = 0x2B7440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B743Cu;
    // 0x2b7440: 0x8f849340  lw          $a0, -0x6CC0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939456)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0160u, 0x2B743Cu, 0x2B7444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7444u;
label_2b7444:
    // 0x2b7444: 0x8e65001c  lw          $a1, 0x1C($s3)
    ctx->pc = 0x2b7444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2b7448: 0xc0adc10  jal         func_2B7040
    ctx->pc = 0x2B7448u;
    SET_GPR_U32(ctx, 31, 0x2B7450u);
    ctx->pc = 0x2B744Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7448u;
    // 0x2b744c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7040u, 0x2B7448u, 0x2B7450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7450u;
label_2b7450:
    // 0x2b7450: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b7450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7454: 0xc0b38dc  jal         func_2CE370
    ctx->pc = 0x2B7454u;
    SET_GPR_U32(ctx, 31, 0x2B745Cu);
    ctx->pc = 0x2B7458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7454u;
    // 0x2b7458: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE370u, 0x2B7454u, 0x2B745Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B745Cu;
label_2b745c:
    // 0x2b745c: 0xc0b4050  jal         func_2D0140
    ctx->pc = 0x2B745Cu;
    SET_GPR_U32(ctx, 31, 0x2B7464u);
    ctx->pc = 0x2B7460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B745Cu;
    // 0x2b7460: 0x8f849340  lw          $a0, -0x6CC0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939456)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0140u, 0x2B745Cu, 0x2B7464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7464u;
label_2b7464:
    // 0x2b7464: 0x8f83b498  lw          $v1, -0x4B68($gp)
    ctx->pc = 0x2b7464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
    // 0x2b7468: 0x3c046c07  lui         $a0, 0x6C07
    ctx->pc = 0x2b7468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27655 << 16));
    // 0x2b746c: 0x348480d8  ori         $a0, $a0, 0x80D8
    ctx->pc = 0x2b746cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32984);
    // 0x2b7470: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b7470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7474: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b7474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b7478: 0x3c066000  lui         $a2, 0x6000
    ctx->pc = 0x2b7478u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24576 << 16));
    // 0x2b747c: 0x3c0300ee  lui         $v1, 0xEE
    ctx->pc = 0x2b747cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)238 << 16));
    // 0x2b7480: 0x2407003f  addiu       $a3, $zero, 0x3F
    ctx->pc = 0x2b7480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2b7484: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x2b7484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2b7488: 0x3463eeee  ori         $v1, $v1, 0xEEEE
    ctx->pc = 0x2b7488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61166);
    // 0x2b748c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b748cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7490: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x2b7490u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
    // 0x2b7494: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2b7494u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2b7498: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b7498u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2b749c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2b749cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2b74a0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b74a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2b74a4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2b74a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2b74a8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b74a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2b74ac: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x2b74acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x2b74b0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b74b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2b74b4: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x2b74b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x2b74b8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b74b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2b74bc: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x2b74bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x2b74c0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b74c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2b74c4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2b74c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2b74c8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b74c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2b74cc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2b74ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2b74d0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b74d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2b74d4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2b74d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2b74d8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b74d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2b74dc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2b74dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2b74e0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b74e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2b74e4: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x2b74e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
    // 0x2b74e8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b74e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2b74ec: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2b74ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2b74f0: 0x92620024  lbu         $v0, 0x24($s3)
    ctx->pc = 0x2b74f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x2b74f4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2b74f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2b74f8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2B74F8u;
    {
        const bool branch_taken_0x2b74f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B74FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B74F8u;
        // 0x2b74fc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b74f8) {
            ctx->pc = 0x2B7564u;
            goto label_2b7564;
        }
    }
    ctx->pc = 0x2B7500u;
    // 0x2b7500: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B7500u;
    {
        const bool branch_taken_0x2b7500 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7500u;
        // 0x2b7504: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7500) {
            ctx->pc = 0x2B751Cu;
            goto label_2b751c;
        }
    }
    ctx->pc = 0x2B7508u;
    // 0x2b7508: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x2b7508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x2b750c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2b750cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2b7510: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b7510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b7514: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b7514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b7518: 0x82280b  movn        $a1, $a0, $v0
    ctx->pc = 0x2b7518u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
label_2b751c:
    // 0x2b751c: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B751Cu;
    {
        const bool branch_taken_0x2b751c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B751Cu;
        // 0x2b7520: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b751c) {
            ctx->pc = 0x2B7538u;
            goto label_2b7538;
        }
    }
    ctx->pc = 0x2B7524u;
    // 0x2b7524: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x2b7524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x2b7528: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2b7528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2b752c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b752cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b7530: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B7530u;
    {
        const bool branch_taken_0x2b7530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7530) {
            ctx->pc = 0x2B7534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7530u;
            // 0x2b7534: 0x92620025  lbu         $v0, 0x25($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 37)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7540u;
            goto label_2b7540;
        }
    }
    ctx->pc = 0x2B7538u;
label_2b7538:
    // 0x2b7538: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b7538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b753c: 0x92620025  lbu         $v0, 0x25($s3)
    ctx->pc = 0x2b753cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 37)));
label_2b7540:
    // 0x2b7540: 0x519b8  dsll        $v1, $a1, 6
    ctx->pc = 0x2b7540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 6);
    // 0x2b7544: 0x42178  dsll        $a0, $a0, 5
    ctx->pc = 0x2b7544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 5);
    // 0x2b7548: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x2b7548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x2b754c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2b754cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2b7550: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b7550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b7554: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2b7554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2b7558: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x2b7558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x2b755c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B755Cu;
    {
        const bool branch_taken_0x2b755c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B755Cu;
        // 0x2b7560: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b755c) {
            ctx->pc = 0x2B7590u;
            goto label_2b7590;
        }
    }
    ctx->pc = 0x2B7564u;
label_2b7564:
    // 0x2b7564: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B7564u;
    {
        const bool branch_taken_0x2b7564 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7564u;
        // 0x2b7568: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7564) {
            ctx->pc = 0x2B7580u;
            goto label_2b7580;
        }
    }
    ctx->pc = 0x2B756Cu;
    // 0x2b756c: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x2b756cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x2b7570: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2b7570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2b7574: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b7574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b7578: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B7578u;
    {
        const bool branch_taken_0x2b7578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7578u;
        // 0x2b757c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7578) {
            ctx->pc = 0x2B7588u;
            goto label_2b7588;
        }
    }
    ctx->pc = 0x2B7580u;
label_2b7580:
    // 0x2b7580: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b7580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7584: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b7584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b7588:
    // 0x2b7588: 0x219b8  dsll        $v1, $v0, 6
    ctx->pc = 0x2b7588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 6);
    // 0x2b758c: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x2b758cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
label_2b7590:
    // 0x2b7590: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b7590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b7594: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2b7594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2b7598: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2b7598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2b759c: 0x2183e  dsrl32      $v1, $v0, 0
    ctx->pc = 0x2b759cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2b75a0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2b75a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2b75a4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2b75a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2b75a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2b75a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2b75ac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2b75acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2b75b0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2b75b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2b75b4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2b75b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2b75b8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2b75b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2b75bc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b75bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b75c0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b75c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2b75c4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2b75c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2b75c8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b75c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2b75cc: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x2b75ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x2b75d0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b75d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2b75d4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2b75d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2b75d8: 0x92620024  lbu         $v0, 0x24($s3)
    ctx->pc = 0x2b75d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x2b75dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b75dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b75e0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2B75E0u;
    {
        const bool branch_taken_0x2b75e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B75E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B75E0u;
        // 0x2b75e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b75e0) {
            ctx->pc = 0x2B764Cu;
            goto label_2b764c;
        }
    }
    ctx->pc = 0x2B75E8u;
    // 0x2b75e8: 0xc0ad230  jal         func_2B48C0
    ctx->pc = 0x2B75E8u;
    SET_GPR_U32(ctx, 31, 0x2B75F0u);
    ctx->pc = 0x2B75ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B75E8u;
    // 0x2b75ec: 0x96640000  lhu         $a0, 0x0($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B48C0u, 0x2B75E8u, 0x2B75F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B75F0u;
label_2b75f0:
    // 0x2b75f0: 0x96640002  lhu         $a0, 0x2($s3)
    ctx->pc = 0x2b75f0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2b75f4: 0xc0ad230  jal         func_2B48C0
    ctx->pc = 0x2B75F4u;
    SET_GPR_U32(ctx, 31, 0x2B75FCu);
    ctx->pc = 0x2B75F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B75F4u;
    // 0x2b75f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B48C0u, 0x2B75F4u, 0x2B75FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B75FCu;
label_2b75fc:
    // 0x2b75fc: 0x9fa40050  lwu         $a0, 0x50($sp)
    ctx->pc = 0x2b75fcu;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b7600: 0x9e680018  lwu         $t0, 0x18($s3)
    ctx->pc = 0x2b7600u;
    SET_GPR_ZE32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2b7604: 0x9fa30030  lwu         $v1, 0x30($sp)
    ctx->pc = 0x2b7604u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b7608: 0x423b8  dsll        $a0, $a0, 14
    ctx->pc = 0x2b7608u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 14);
    // 0x2b760c: 0x1086b8  dsll        $s0, $s0, 26
    ctx->pc = 0x2b760cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 26);
    // 0x2b7610: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x2b7610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x2b7614: 0x8417c  dsll32      $t0, $t0, 5
    ctx->pc = 0x2b7614u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 5));
    // 0x2b7618: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2b7618u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2b761c: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x2b761cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2b7620: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x2b7620u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2b7624: 0x634f8  dsll        $a2, $a2, 19
    ctx->pc = 0x2b7624u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 19);
    // 0x2b7628: 0x3c070130  lui         $a3, 0x130
    ctx->pc = 0x2b7628u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)304 << 16));
    // 0x2b762c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x2b762cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x2b7630: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2b7630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2b7634: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x2b7634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x2b7638: 0x2078025  or          $s0, $s0, $a3
    ctx->pc = 0x2b7638u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 7));
    // 0x2b763c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2b763cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2b7640: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2b7640u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x2b7644: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2B7644u;
    {
        const bool branch_taken_0x2b7644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7644u;
        // 0x2b7648: 0x701025  or          $v0, $v1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7644) {
            ctx->pc = 0x2B768Cu;
            goto label_2b768c;
        }
    }
    ctx->pc = 0x2B764Cu;
label_2b764c:
    // 0x2b764c: 0xc0ad230  jal         func_2B48C0
    ctx->pc = 0x2B764Cu;
    SET_GPR_U32(ctx, 31, 0x2B7654u);
    ctx->pc = 0x2B7650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B764Cu;
    // 0x2b7650: 0x96640000  lhu         $a0, 0x0($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B48C0u, 0x2B764Cu, 0x2B7654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7654u;
label_2b7654:
    // 0x2b7654: 0x96640002  lhu         $a0, 0x2($s3)
    ctx->pc = 0x2b7654u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2b7658: 0xc0ad230  jal         func_2B48C0
    ctx->pc = 0x2B7658u;
    SET_GPR_U32(ctx, 31, 0x2B7660u);
    ctx->pc = 0x2B765Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7658u;
    // 0x2b765c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B48C0u, 0x2B7658u, 0x2B7660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7660u;
label_2b7660:
    // 0x2b7660: 0x9fa50050  lwu         $a1, 0x50($sp)
    ctx->pc = 0x2b7660u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b7664: 0x9fa40030  lwu         $a0, 0x30($sp)
    ctx->pc = 0x2b7664u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b7668: 0x1086b8  dsll        $s0, $s0, 26
    ctx->pc = 0x2b7668u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 26);
    // 0x2b766c: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x2b766cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x2b7670: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2b7670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2b7674: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x2b7674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x2b7678: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b7678u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b767c: 0x2058025  or          $s0, $s0, $a1
    ctx->pc = 0x2b767cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 5));
    // 0x2b7680: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x2b7680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x2b7684: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x2b7684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x2b7688: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x2b7688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_2b768c:
    // 0x2b768c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2b768cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2b7690: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2b7690u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2b7694: 0x2183e  dsrl32      $v1, $v0, 0
    ctx->pc = 0x2b7694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2b7698: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2b7698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2b769c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2b769cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2b76a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2b76a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2b76a4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2b76a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2b76a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2b76a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2b76ac: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2b76acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2b76b0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2b76b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2b76b4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2b76b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b76b8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b76b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2b76bc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2b76bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2b76c0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b76c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2b76c4: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x2b76c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x2b76c8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b76c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2b76cc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2b76ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2b76d0: 0x92620024  lbu         $v0, 0x24($s3)
    ctx->pc = 0x2b76d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x2b76d4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2b76d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2b76d8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B76D8u;
    {
        const bool branch_taken_0x2b76d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B76DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B76D8u;
        // 0x2b76dc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b76d8) {
            ctx->pc = 0x2B7724u;
            goto label_2b7724;
        }
    }
    ctx->pc = 0x2B76E0u;
    // 0x2b76e0: 0x9fa7005c  lwu         $a3, 0x5C($sp)
    ctx->pc = 0x2b76e0u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2b76e4: 0x9fa50058  lwu         $a1, 0x58($sp)
    ctx->pc = 0x2b76e4u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2b76e8: 0x9fa60038  lwu         $a2, 0x38($sp)
    ctx->pc = 0x2b76e8u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2b76ec: 0x73dbc  dsll32      $a3, $a3, 22
    ctx->pc = 0x2b76ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 22));
    // 0x2b76f0: 0x9fa40034  lwu         $a0, 0x34($sp)
    ctx->pc = 0x2b76f0u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2b76f4: 0x528bc  dsll32      $a1, $a1, 2
    ctx->pc = 0x2b76f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 2));
    // 0x2b76f8: 0x9fa20054  lwu         $v0, 0x54($sp)
    ctx->pc = 0x2b76f8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2b76fc: 0x63538  dsll        $a2, $a2, 20
    ctx->pc = 0x2b76fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 20);
    // 0x2b7700: 0x9fa3003c  lwu         $v1, 0x3C($sp)
    ctx->pc = 0x2b7700u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2b7704: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x2b7704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x2b7708: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x2b7708u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2b770c: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x2b770cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x2b7710: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x2b7710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x2b7714: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2b7714u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2b7718: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b7718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b771c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B771Cu;
    {
        const bool branch_taken_0x2b771c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B771Cu;
        // 0x2b7720: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b771c) {
            ctx->pc = 0x2B7728u;
            goto label_2b7728;
        }
    }
    ctx->pc = 0x2B7724u;
label_2b7724:
    // 0x2b7724: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b7724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7728:
    // 0x2b7728: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2b7728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2b772c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2b772cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2b7730: 0x2183e  dsrl32      $v1, $v0, 0
    ctx->pc = 0x2b7730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2b7734: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2b7734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2b7738: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2b7738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2b773c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2b773cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2b7740: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2b7740u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2b7744: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2b7744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2b7748: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2b7748u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2b774c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2b774cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2b7750: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x2b7750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2b7754: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b7754u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2b7758: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2b7758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2b775c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b775cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2b7760: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x2b7760u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x2b7764: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b7764u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2b7768: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2b7768u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2b776c: 0x92620024  lbu         $v0, 0x24($s3)
    ctx->pc = 0x2b776cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x2b7770: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2b7770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2b7774: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2B7774u;
    {
        const bool branch_taken_0x2b7774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7774u;
        // 0x2b7778: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7774) {
            ctx->pc = 0x2B77D0u;
            goto label_2b77d0;
        }
    }
    ctx->pc = 0x2B777Cu;
    // 0x2b777c: 0x92620025  lbu         $v0, 0x25($s3)
    ctx->pc = 0x2b777cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 37)));
    // 0x2b7780: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x2b7780u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b7784: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B7784u;
    {
        const bool branch_taken_0x2b7784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7784) {
            ctx->pc = 0x2B7788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7784u;
            // 0x2b7788: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B77D4u;
            goto label_2b77d4;
        }
    }
    ctx->pc = 0x2B778Cu;
    // 0x2b778c: 0x9fa70068  lwu         $a3, 0x68($sp)
    ctx->pc = 0x2b778cu;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2b7790: 0x9fa50064  lwu         $a1, 0x64($sp)
    ctx->pc = 0x2b7790u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2b7794: 0x9fa60044  lwu         $a2, 0x44($sp)
    ctx->pc = 0x2b7794u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2b7798: 0x73dbc  dsll32      $a3, $a3, 22
    ctx->pc = 0x2b7798u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 22));
    // 0x2b779c: 0x9fa40040  lwu         $a0, 0x40($sp)
    ctx->pc = 0x2b779cu;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b77a0: 0x528bc  dsll32      $a1, $a1, 2
    ctx->pc = 0x2b77a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 2));
    // 0x2b77a4: 0x9fa20060  lwu         $v0, 0x60($sp)
    ctx->pc = 0x2b77a4u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b77a8: 0x63538  dsll        $a2, $a2, 20
    ctx->pc = 0x2b77a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 20);
    // 0x2b77ac: 0x9fa30048  lwu         $v1, 0x48($sp)
    ctx->pc = 0x2b77acu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2b77b0: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x2b77b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x2b77b4: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x2b77b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2b77b8: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x2b77b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x2b77bc: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x2b77bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x2b77c0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2b77c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2b77c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b77c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b77c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B77C8u;
    {
        const bool branch_taken_0x2b77c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B77CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B77C8u;
        // 0x2b77cc: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b77c8) {
            ctx->pc = 0x2B77D4u;
            goto label_2b77d4;
        }
    }
    ctx->pc = 0x2B77D0u;
label_2b77d0:
    // 0x2b77d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b77d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b77d4:
    // 0x2b77d4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2b77d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2b77d8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2b77d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2b77dc: 0x2183e  dsrl32      $v1, $v0, 0
    ctx->pc = 0x2b77dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2b77e0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2b77e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2b77e4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2b77e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2b77e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2b77e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2b77ec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2b77ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2b77f0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2b77f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2b77f4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2b77f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2b77f8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2b77f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2b77fc: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x2b77fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2b7800: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b7800u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2b7804: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x2b7804u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b7808: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2b7808u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2b780c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2b780cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b7810: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b7810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2b7814: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x2b7814u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2b7818: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x2b7818u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x2b781c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2b781cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2b7820: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b7820u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2b7824: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b7824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b7828: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2b7828u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2b782c: 0x42bb8  dsll        $a1, $a0, 14
    ctx->pc = 0x2b782cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 14);
    // 0x2b7830: 0x220bc  dsll32      $a0, $v0, 2
    ctx->pc = 0x2b7830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 2));
    // 0x2b7834: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b7834u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2b7838: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2b7838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2b783c: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x2b783cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2b7840: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B7840u;
    {
        const bool branch_taken_0x2b7840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7840u;
        // 0x2b7844: 0x2300a  movz        $a2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7840) {
            ctx->pc = 0x2B785Cu;
            goto label_2b785c;
        }
    }
    ctx->pc = 0x2B7848u;
    // 0x2b7848: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2b7848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2b784c: 0xc41825  or          $v1, $a2, $a0
    ctx->pc = 0x2b784cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x2b7850: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x2b7850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2b7854: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B7854u;
    {
        const bool branch_taken_0x2b7854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7854u;
        // 0x2b7858: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7854) {
            ctx->pc = 0x2B7864u;
            goto label_2b7864;
        }
    }
    ctx->pc = 0x2B785Cu;
label_2b785c:
    // 0x2b785c: 0xc51025  or          $v0, $a2, $a1
    ctx->pc = 0x2b785cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x2b7860: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2b7860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2b7864:
    // 0x2b7864: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2b7864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2b7868: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2b7868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2b786c: 0x2183e  dsrl32      $v1, $v0, 0
    ctx->pc = 0x2b786cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2b7870: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2b7870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2b7874: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2b7874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2b7878: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2b7878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2b787c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2b787cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2b7880: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2b7880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2b7884: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2b7884u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2b7888: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2b7888u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2b788c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2b788cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2b7890: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b7890u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2b7894: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x2b7894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2b7898: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2b7898u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2b789c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b789cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2b78a0: 0xdfbe00f0  ld          $fp, 0xF0($sp)
    ctx->pc = 0x2b78a0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2b78a4: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x2b78a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x2b78a8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2b78a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2b78ac: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x2b78acu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2b78b0: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x2b78b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2b78b4: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x2b78b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2b78b8: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x2b78b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2b78bc: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x2b78bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b78c0: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x2b78c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b78c4: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x2b78c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b78c8: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2b78c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b78cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B78CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B78D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B78CCu;
        // 0x2b78d0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B78CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B78D4u;
}
