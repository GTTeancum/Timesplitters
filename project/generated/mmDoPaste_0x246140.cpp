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

// Function: mmDoPaste
// Address: 0x246140 - 0x246304
void mmDoPaste_0x246140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmDoPaste_0x246140");
#endif

    switch (ctx->pc) {
        case 0x246168u: goto label_246168;
        case 0x246184u: goto label_246184;
        case 0x2461acu: goto label_2461ac;
        case 0x2461c8u: goto label_2461c8;
        case 0x2461d0u: goto label_2461d0;
        case 0x2462a4u: goto label_2462a4;
        case 0x2462b4u: goto label_2462b4;
        case 0x2462bcu: goto label_2462bc;
        case 0x2462d8u: goto label_2462d8;
        default: break;
    }

    ctx->pc = 0x246140u;

    // 0x246140: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x246140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x246144: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x246144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x246148: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x246148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x24614c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24614cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x246150: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x246150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x246154: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x246154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x246158: 0x3c100010  lui         $s0, 0x10
    ctx->pc = 0x246158u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16 << 16));
    // 0x24615c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x24615cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x246160: 0xc0920ba  jal         func_2482E8
    ctx->pc = 0x246160u;
    SET_GPR_U32(ctx, 31, 0x246168u);
    ctx->pc = 0x246164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246160u;
    // 0x246164: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2482E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2482E8u, 0x246160u, 0x246168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246168u;
label_246168:
    // 0x246168: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x246168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24616c: 0x8f83a158  lw          $v1, -0x5EA8($gp)
    ctx->pc = 0x24616cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943064)));
    // 0x246170: 0x84440022  lh          $a0, 0x22($v0)
    ctx->pc = 0x246170u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x246174: 0x8f85a188  lw          $a1, -0x5E78($gp)
    ctx->pc = 0x246174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943112)));
    // 0x246178: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x246178u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x24617c: 0xc092e5e  jal         func_24B978
    ctx->pc = 0x24617Cu;
    SET_GPR_U32(ctx, 31, 0x246184u);
    ctx->pc = 0x246180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24617Cu;
    // 0x246180: 0x42400  sll         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B978u, 0x24617Cu, 0x246184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246184u;
label_246184:
    // 0x246184: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x246184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x246188: 0x8f83a168  lw          $v1, -0x5E98($gp)
    ctx->pc = 0x246188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943080)));
    // 0x24618c: 0x84a40026  lh          $a0, 0x26($a1)
    ctx->pc = 0x24618cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 38)));
    // 0x246190: 0x8f86a15c  lw          $a2, -0x5EA4($gp)
    ctx->pc = 0x246190u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943068)));
    // 0x246194: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x246194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x246198: 0x8f85a18c  lw          $a1, -0x5E74($gp)
    ctx->pc = 0x246198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943116)));
    // 0x24619c: 0x70a021  addu        $s4, $v1, $s0
    ctx->pc = 0x24619cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2461a0: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x2461a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2461a4: 0xc092e5e  jal         func_24B978
    ctx->pc = 0x2461A4u;
    SET_GPR_U32(ctx, 31, 0x2461ACu);
    ctx->pc = 0x2461A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2461A4u;
    // 0x2461a8: 0x42400  sll         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B978u, 0x2461A4u, 0x2461ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2461ACu;
label_2461ac:
    // 0x2461ac: 0x8f83a16c  lw          $v1, -0x5E94($gp)
    ctx->pc = 0x2461acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943084)));
    // 0x2461b0: 0x8f91a0f8  lw          $s1, -0x5F08($gp)
    ctx->pc = 0x2461b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942968)));
    // 0x2461b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2461b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2461b8: 0x12200045  beqz        $s1, . + 4 + (0x45 << 2)
    ctx->pc = 0x2461B8u;
    {
        const bool branch_taken_0x2461b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2461BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2461B8u;
        // 0x2461bc: 0x709821  addu        $s3, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2461b8) {
            ctx->pc = 0x2462D0u;
            goto label_2462d0;
        }
    }
    ctx->pc = 0x2461C0u;
    // 0x2461c0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2461c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2461c4: 0x3c12ffe0  lui         $s2, 0xFFE0
    ctx->pc = 0x2461c4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65504 << 16));
label_2461c8:
    // 0x2461c8: 0xc092194  jal         func_248650
    ctx->pc = 0x2461C8u;
    SET_GPR_U32(ctx, 31, 0x2461D0u);
    ctx->pc = 0x248650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248650u, 0x2461C8u, 0x2461D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2461D0u;
label_2461d0:
    // 0x2461d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2461d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2461d4: 0x1200003e  beqz        $s0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2461D4u;
    {
        const bool branch_taken_0x2461d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2461d4) {
            ctx->pc = 0x2462D0u;
            goto label_2462d0;
        }
    }
    ctx->pc = 0x2461DCu;
    // 0x2461dc: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x2461dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2461e0: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x2461e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2461e4: 0x6a23000f  ldl         $v1, 0xF($s1)
    ctx->pc = 0x2461e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2461e8: 0x6e230008  ldr         $v1, 0x8($s1)
    ctx->pc = 0x2461e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2461ec: 0x6a240017  ldl         $a0, 0x17($s1)
    ctx->pc = 0x2461ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2461f0: 0x6e240010  ldr         $a0, 0x10($s1)
    ctx->pc = 0x2461f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2461f4: 0x6a25001f  ldl         $a1, 0x1F($s1)
    ctx->pc = 0x2461f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2461f8: 0x6e250018  ldr         $a1, 0x18($s1)
    ctx->pc = 0x2461f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2461fc: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x2461fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x246200: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x246200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x246204: 0xb203000f  sdl         $v1, 0xF($s0)
    ctx->pc = 0x246204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x246208: 0xb6030008  sdr         $v1, 0x8($s0)
    ctx->pc = 0x246208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24620c: 0xb2040017  sdl         $a0, 0x17($s0)
    ctx->pc = 0x24620cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x246210: 0xb6040010  sdr         $a0, 0x10($s0)
    ctx->pc = 0x246210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x246214: 0xb205001f  sdl         $a1, 0x1F($s0)
    ctx->pc = 0x246214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x246218: 0xb6050018  sdr         $a1, 0x18($s0)
    ctx->pc = 0x246218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24621c: 0x6a220027  ldl         $v0, 0x27($s1)
    ctx->pc = 0x24621cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x246220: 0x6e220020  ldr         $v0, 0x20($s1)
    ctx->pc = 0x246220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x246224: 0x6a23002f  ldl         $v1, 0x2F($s1)
    ctx->pc = 0x246224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x246228: 0x6e230028  ldr         $v1, 0x28($s1)
    ctx->pc = 0x246228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x24622c: 0x6a240037  ldl         $a0, 0x37($s1)
    ctx->pc = 0x24622cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x246230: 0x6e240030  ldr         $a0, 0x30($s1)
    ctx->pc = 0x246230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x246234: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x246234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x246238: 0xb2020027  sdl         $v0, 0x27($s0)
    ctx->pc = 0x246238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24623c: 0xb6020020  sdr         $v0, 0x20($s0)
    ctx->pc = 0x24623cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x246240: 0xb203002f  sdl         $v1, 0x2F($s0)
    ctx->pc = 0x246240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x246244: 0xb6030028  sdr         $v1, 0x28($s0)
    ctx->pc = 0x246244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x246248: 0xb2040037  sdl         $a0, 0x37($s0)
    ctx->pc = 0x246248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24624c: 0xb6040030  sdr         $a0, 0x30($s0)
    ctx->pc = 0x24624cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x246250: 0xae050038  sw          $a1, 0x38($s0)
    ctx->pc = 0x246250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 5));
    // 0x246254: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x246254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x246258: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x246258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24625c: 0x542821  addu        $a1, $v0, $s4
    ctx->pc = 0x24625cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x246260: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x246260u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x246264: 0xae05000c  sw          $a1, 0xC($s0)
    ctx->pc = 0x246264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
    // 0x246268: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x246268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x24626c: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x24626cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x246270: 0x14750005  bne         $v1, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x246270u;
    {
        const bool branch_taken_0x246270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x246274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246270u;
        // 0x246274: 0xae040010  sw          $a0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246270) {
            ctx->pc = 0x246288u;
            goto label_246288;
        }
    }
    ctx->pc = 0x246278u;
    // 0x246278: 0xb21024  and         $v0, $a1, $s2
    ctx->pc = 0x246278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 18));
    // 0x24627c: 0x921824  and         $v1, $a0, $s2
    ctx->pc = 0x24627cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 18));
    // 0x246280: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x246280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x246284: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x246284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_246288:
    // 0x246288: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x246288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x24628c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24628cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246290: 0x8f83a0dc  lw          $v1, -0x5F24($gp)
    ctx->pc = 0x246290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942940)));
    // 0x246294: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x246294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x246298: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x246298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24629c: 0xc0921f4  jal         func_2487D0
    ctx->pc = 0x24629Cu;
    SET_GPR_U32(ctx, 31, 0x2462A4u);
    ctx->pc = 0x2462A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24629Cu;
    // 0x2462a0: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2487D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2487D0u, 0x24629Cu, 0x2462A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2462A4u;
label_2462a4:
    // 0x2462a4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2462A4u;
    {
        const bool branch_taken_0x2462a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2462a4) {
            ctx->pc = 0x2462A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2462A4u;
            // 0x2462a8: 0x8e310038  lw          $s1, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2462C8u;
            goto label_2462c8;
        }
    }
    ctx->pc = 0x2462ACu;
    // 0x2462ac: 0xc0921e6  jal         func_248798
    ctx->pc = 0x2462ACu;
    SET_GPR_U32(ctx, 31, 0x2462B4u);
    ctx->pc = 0x2462B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2462ACu;
    // 0x2462b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248798u, 0x2462ACu, 0x2462B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2462B4u;
label_2462b4:
    // 0x2462b4: 0xc0921e6  jal         func_248798
    ctx->pc = 0x2462B4u;
    SET_GPR_U32(ctx, 31, 0x2462BCu);
    ctx->pc = 0x2462B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2462B4u;
    // 0x2462b8: 0x8f84a0f8  lw          $a0, -0x5F08($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942968)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248798u, 0x2462B4u, 0x2462BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2462BCu;
label_2462bc:
    // 0x2462bc: 0xaf80a0f8  sw          $zero, -0x5F08($gp)
    ctx->pc = 0x2462bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942968), GPR_U32(ctx, 0));
    // 0x2462c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2462C0u;
    {
        const bool branch_taken_0x2462c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2462C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2462C0u;
        // 0x2462c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2462c0) {
            ctx->pc = 0x2462E0u;
            goto label_2462e0;
        }
    }
    ctx->pc = 0x2462C8u;
label_2462c8:
    // 0x2462c8: 0x1620ffbf  bnez        $s1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x2462C8u;
    {
        const bool branch_taken_0x2462c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2462c8) {
            ctx->pc = 0x2461C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2461c8;
        }
    }
    ctx->pc = 0x2462D0u;
label_2462d0:
    // 0x2462d0: 0xc0921e6  jal         func_248798
    ctx->pc = 0x2462D0u;
    SET_GPR_U32(ctx, 31, 0x2462D8u);
    ctx->pc = 0x2462D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2462D0u;
    // 0x2462d4: 0x8f84a0f8  lw          $a0, -0x5F08($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942968)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248798u, 0x2462D0u, 0x2462D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2462D8u;
label_2462d8:
    // 0x2462d8: 0xaf80a0f8  sw          $zero, -0x5F08($gp)
    ctx->pc = 0x2462d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942968), GPR_U32(ctx, 0));
    // 0x2462dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2462dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2462e0:
    // 0x2462e0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2462e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2462e4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2462e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2462e8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2462e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2462ec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2462ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2462f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2462f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2462f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2462f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2462f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2462f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2462fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2462FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2462FCu;
        // 0x246300: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2462FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246304u;
}
