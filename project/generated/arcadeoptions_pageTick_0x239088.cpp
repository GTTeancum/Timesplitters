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

// Function: arcadeoptions_pageTick
// Address: 0x239088 - 0x239714
void arcadeoptions_pageTick_0x239088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("arcadeoptions_pageTick_0x239088");
#endif

    switch (ctx->pc) {
        case 0x2390e8u: goto label_2390e8;
        case 0x2390f0u: goto label_2390f0;
        case 0x2390fcu: goto label_2390fc;
        case 0x239104u: goto label_239104;
        case 0x239130u: goto label_239130;
        case 0x239230u: goto label_239230;
        case 0x239340u: goto label_239340;
        case 0x239360u: goto label_239360;
        case 0x2394c8u: goto label_2394c8;
        case 0x2394d4u: goto label_2394d4;
        case 0x239510u: goto label_239510;
        case 0x239518u: goto label_239518;
        case 0x239528u: goto label_239528;
        case 0x239530u: goto label_239530;
        case 0x239548u: goto label_239548;
        case 0x239570u: goto label_239570;
        case 0x239578u: goto label_239578;
        case 0x23958cu: goto label_23958c;
        case 0x2395c4u: goto label_2395c4;
        case 0x2395dcu: goto label_2395dc;
        case 0x239608u: goto label_239608;
        case 0x239620u: goto label_239620;
        case 0x239648u: goto label_239648;
        case 0x239654u: goto label_239654;
        default: break;
    }

    ctx->pc = 0x239088u;

    // 0x239088: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x239088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x23908c: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23908cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x239090: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x239090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x239094: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x239094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x239098: 0x3c12002f  lui         $s2, 0x2F
    ctx->pc = 0x239098u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)47 << 16));
    // 0x23909c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x23909cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2390a0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2390a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2390a4: 0x26432c18  addiu       $v1, $s2, 0x2C18
    ctx->pc = 0x2390a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 11288));
    // 0x2390a8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2390a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2390ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2390acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2390b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2390b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2390b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2390b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2390b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2390b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2390bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2390bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2390c0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2390c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2390c4: 0x24a545b8  addiu       $a1, $a1, 0x45B8
    ctx->pc = 0x2390c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17848));
    // 0x2390c8: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2390c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2390cc: 0x3c130035  lui         $s3, 0x35
    ctx->pc = 0x2390ccu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)53 << 16));
    // 0x2390d0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2390d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2390d4: 0x3c140035  lui         $s4, 0x35
    ctx->pc = 0x2390d4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)53 << 16));
    // 0x2390d8: 0x3c150035  lui         $s5, 0x35
    ctx->pc = 0x2390d8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)53 << 16));
    // 0x2390dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2390dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2390e0: 0xc08c086  jal         func_230218
    ctx->pc = 0x2390E0u;
    SET_GPR_U32(ctx, 31, 0x2390E8u);
    ctx->pc = 0x2390E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2390E0u;
    // 0x2390e4: 0x8c6401f0  lw          $a0, 0x1F0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 496)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230218u, 0x2390E0u, 0x2390E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2390E8u;
label_2390e8:
    // 0x2390e8: 0xc08a984  jal         func_22A610
    ctx->pc = 0x2390E8u;
    SET_GPR_U32(ctx, 31, 0x2390F0u);
    ctx->pc = 0x2390ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2390E8u;
    // 0x2390ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A610u, 0x2390E8u, 0x2390F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2390F0u;
label_2390f0:
    // 0x2390f0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2390f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2390f4: 0xc08d11e  jal         func_234478
    ctx->pc = 0x2390F4u;
    SET_GPR_U32(ctx, 31, 0x2390FCu);
    ctx->pc = 0x2390F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2390F4u;
    // 0x2390f8: 0x8c443a58  lw          $a0, 0x3A58($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14936)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234478u, 0x2390F4u, 0x2390FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2390FCu;
label_2390fc:
    // 0x2390fc: 0xc08d4fa  jal         func_2353E8
    ctx->pc = 0x2390FCu;
    SET_GPR_U32(ctx, 31, 0x239104u);
    ctx->pc = 0x239100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2390FCu;
    // 0x239100: 0x3c1001fc  lui         $s0, 0x1FC (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)508 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2353E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2353E8u, 0x2390FCu, 0x239104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239104u;
label_239104:
    // 0x239104: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x239104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x239108: 0x8f8e9354  lw          $t6, -0x6CAC($gp)
    ctx->pc = 0x239108u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23910c: 0x244c3f38  addiu       $t4, $v0, 0x3F38
    ctx->pc = 0x23910cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 16184));
    // 0x239110: 0x3c0f0035  lui         $t7, 0x35
    ctx->pc = 0x239110u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)53 << 16));
    // 0x239114: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x239114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x239118: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x239118u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23911c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x23911cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239120: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x239120u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239124: 0x180102d  daddu       $v0, $t4, $zero
    ctx->pc = 0x239124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239128: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x239128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x23912c: 0x0  nop
    ctx->pc = 0x23912cu;
    // NOP
label_239130:
    // 0x239130: 0x24683ee8  addiu       $t0, $v1, 0x3EE8
    ctx->pc = 0x239130u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 16104));
    // 0x239134: 0x69040007  ldl         $a0, 0x7($t0)
    ctx->pc = 0x239134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x239138: 0x6d040000  ldr         $a0, 0x0($t0)
    ctx->pc = 0x239138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x23913c: 0x6906000f  ldl         $a2, 0xF($t0)
    ctx->pc = 0x23913cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x239140: 0x6d060008  ldr         $a2, 0x8($t0)
    ctx->pc = 0x239140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x239144: 0x69070017  ldl         $a3, 0x17($t0)
    ctx->pc = 0x239144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x239148: 0x6d070010  ldr         $a3, 0x10($t0)
    ctx->pc = 0x239148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x23914c: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x23914cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239150: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x239150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239154: 0xb046000f  sdl         $a2, 0xF($v0)
    ctx->pc = 0x239154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239158: 0xb4460008  sdr         $a2, 0x8($v0)
    ctx->pc = 0x239158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23915c: 0xb0470017  sdl         $a3, 0x17($v0)
    ctx->pc = 0x23915cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239160: 0xb4470010  sdr         $a3, 0x10($v0)
    ctx->pc = 0x239160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239164: 0x6904001f  ldl         $a0, 0x1F($t0)
    ctx->pc = 0x239164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x239168: 0x6d040018  ldr         $a0, 0x18($t0)
    ctx->pc = 0x239168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x23916c: 0xb044001f  sdl         $a0, 0x1F($v0)
    ctx->pc = 0x23916cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239170: 0xb4440018  sdr         $a0, 0x18($v0)
    ctx->pc = 0x239170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239174: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x239174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x239178: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x239178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x23917c: 0x0  nop
    ctx->pc = 0x23917cu;
    // NOP
    // 0x239180: 0x0  nop
    ctx->pc = 0x239180u;
    // NOP
    // 0x239184: 0x4a1ffea  bgez        $a1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x239184u;
    {
        const bool branch_taken_0x239184 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x239184) {
            ctx->pc = 0x239130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239130;
        }
    }
    ctx->pc = 0x23918Cu;
    // 0x23918c: 0x260211f8  addiu       $v0, $s0, 0x11F8
    ctx->pc = 0x23918cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4600));
    // 0x239190: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x239190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x239194: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x239194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x239198: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x239198u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x23919c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x23919Cu;
    {
        const bool branch_taken_0x23919c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2391A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23919Cu;
        // 0x2391a0: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23919c) {
            ctx->pc = 0x239218u;
            goto label_239218;
        }
    }
    ctx->pc = 0x2391A4u;
    // 0x2391a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2391a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2391a8: 0x24421d10  addiu       $v0, $v0, 0x1D10
    ctx->pc = 0x2391a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7440));
    // 0x2391ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2391acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2391b0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2391b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2391b4: 0x800008  jr          $a0
    ctx->pc = 0x2391B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2391BCu: goto label_2391bc;
            case 0x2391CCu: goto label_2391cc;
            case 0x2391DCu: goto label_2391dc;
            case 0x2391ECu: goto label_2391ec;
            case 0x2391FCu: goto label_2391fc;
            case 0x23920Cu: goto label_23920c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2391B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2391BCu;
label_2391bc:
    // 0x2391bc: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2391bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2391c0: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x2391c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2391c4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2391C4u;
    {
        const bool branch_taken_0x2391c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2391C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391C4u;
        // 0x2391c8: 0x24494118  addiu       $t1, $v0, 0x4118 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 16664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2391c4) {
            ctx->pc = 0x239218u;
            goto label_239218;
        }
    }
    ctx->pc = 0x2391CCu;
label_2391cc:
    // 0x2391cc: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2391ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2391d0: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x2391d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2391d4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2391D4u;
    {
        const bool branch_taken_0x2391d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2391D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391D4u;
        // 0x2391d8: 0x24494218  addiu       $t1, $v0, 0x4218 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 16920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2391d4) {
            ctx->pc = 0x239218u;
            goto label_239218;
        }
    }
    ctx->pc = 0x2391DCu;
label_2391dc:
    // 0x2391dc: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2391dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2391e0: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x2391e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2391e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2391E4u;
    {
        const bool branch_taken_0x2391e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2391E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391E4u;
        // 0x2391e8: 0x244942d8  addiu       $t1, $v0, 0x42D8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 17112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2391e4) {
            ctx->pc = 0x239218u;
            goto label_239218;
        }
    }
    ctx->pc = 0x2391ECu;
label_2391ec:
    // 0x2391ec: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2391ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2391f0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x2391f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2391f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2391F4u;
    {
        const bool branch_taken_0x2391f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2391F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391F4u;
        // 0x2391f8: 0x24494418  addiu       $t1, $v0, 0x4418 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 17432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2391f4) {
            ctx->pc = 0x239218u;
            goto label_239218;
        }
    }
    ctx->pc = 0x2391FCu;
label_2391fc:
    // 0x2391fc: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2391fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x239200: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x239200u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x239204: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x239204u;
    {
        const bool branch_taken_0x239204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239204u;
        // 0x239208: 0x24494498  addiu       $t1, $v0, 0x4498 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 17560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239204) {
            ctx->pc = 0x239218u;
            goto label_239218;
        }
    }
    ctx->pc = 0x23920Cu;
label_23920c:
    // 0x23920c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x23920cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x239210: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x239210u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x239214: 0x24494558  addiu       $t1, $v0, 0x4558
    ctx->pc = 0x239214u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 17752));
label_239218:
    // 0x239218: 0x1140002d  beqz        $t2, . + 4 + (0x2D << 2)
    ctx->pc = 0x239218u;
    {
        const bool branch_taken_0x239218 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x23921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239218u;
        // 0x23921c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239218) {
            ctx->pc = 0x2392D0u;
            goto label_2392d0;
        }
    }
    ctx->pc = 0x239220u;
    // 0x239220: 0x2548ffff  addiu       $t0, $t2, -0x1
    ctx->pc = 0x239220u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x239224: 0x254b0001  addiu       $t3, $t2, 0x1
    ctx->pc = 0x239224u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x239228: 0x53140  sll         $a2, $a1, 5
    ctx->pc = 0x239228u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x23922c: 0x0  nop
    ctx->pc = 0x23922cu;
    // NOP
label_239230:
    // 0x239230: 0x24a30002  addiu       $v1, $a1, 0x2
    ctx->pc = 0x239230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x239234: 0xcc2021  addu        $a0, $a2, $t4
    ctx->pc = 0x239234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x239238: 0xc91021  addu        $v0, $a2, $t1
    ctx->pc = 0x239238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x23923c: 0x684d0007  ldl         $t5, 0x7($v0)
    ctx->pc = 0x23923cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x239240: 0x6c4d0000  ldr         $t5, 0x0($v0)
    ctx->pc = 0x239240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x239244: 0x6856000f  ldl         $s6, 0xF($v0)
    ctx->pc = 0x239244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
    // 0x239248: 0x6c560008  ldr         $s6, 0x8($v0)
    ctx->pc = 0x239248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem >> shift)); }
    // 0x23924c: 0x68570017  ldl         $s7, 0x17($v0)
    ctx->pc = 0x23924cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem << shift)); }
    // 0x239250: 0x6c570010  ldr         $s7, 0x10($v0)
    ctx->pc = 0x239250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem >> shift)); }
    // 0x239254: 0x6847001f  ldl         $a3, 0x1F($v0)
    ctx->pc = 0x239254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x239258: 0x6c470018  ldr         $a3, 0x18($v0)
    ctx->pc = 0x239258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x23925c: 0xb08d0007  sdl         $t5, 0x7($a0)
    ctx->pc = 0x23925cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239260: 0xb48d0000  sdr         $t5, 0x0($a0)
    ctx->pc = 0x239260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239264: 0xb096000f  sdl         $s6, 0xF($a0)
    ctx->pc = 0x239264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239268: 0xb4960008  sdr         $s6, 0x8($a0)
    ctx->pc = 0x239268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23926c: 0xb0970017  sdl         $s7, 0x17($a0)
    ctx->pc = 0x23926cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 23); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239270: 0xb4970010  sdr         $s7, 0x10($a0)
    ctx->pc = 0x239270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 23); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239274: 0xb087001f  sdl         $a3, 0x1F($a0)
    ctx->pc = 0x239274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x239278: 0xb4870018  sdr         $a3, 0x18($a0)
    ctx->pc = 0x239278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23927c: 0x18a00004  blez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x23927Cu;
    {
        const bool branch_taken_0x23927c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x239280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23927Cu;
        // 0x239280: 0xa4830008  sh          $v1, 0x8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23927c) {
            ctx->pc = 0x239290u;
            goto label_239290;
        }
    }
    ctx->pc = 0x239284u;
    // 0x239284: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x239284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x239288: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x239288u;
    {
        const bool branch_taken_0x239288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239288u;
        // 0x23928c: 0xa4870010  sh          $a3, 0x10($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239288) {
            ctx->pc = 0x23929Cu;
            goto label_23929c;
        }
    }
    ctx->pc = 0x239290u;
label_239290:
    // 0x239290: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x239290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x239294: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x239294u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x239298: 0xa4820010  sh          $v0, 0x10($a0)
    ctx->pc = 0x239298u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 2));
label_23929c:
    // 0x23929c: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x23929cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2392a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2392A0u;
    {
        const bool branch_taken_0x2392a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2392A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392A0u;
        // 0x2392a4: 0xcc1821  addu        $v1, $a2, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2392a0) {
            ctx->pc = 0x2392B0u;
            goto label_2392b0;
        }
    }
    ctx->pc = 0x2392A8u;
    // 0x2392a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2392A8u;
    {
        const bool branch_taken_0x2392a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2392ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392A8u;
        // 0x2392ac: 0x24a20003  addiu       $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2392a8) {
            ctx->pc = 0x2392B4u;
            goto label_2392b4;
        }
    }
    ctx->pc = 0x2392B0u;
label_2392b0:
    // 0x2392b0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2392b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2392b4:
    // 0x2392b4: 0xa4620012  sh          $v0, 0x12($v1)
    ctx->pc = 0x2392b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x2392b8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2392b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2392bc: 0xaa102a  slt         $v0, $a1, $t2
    ctx->pc = 0x2392bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x2392c0: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x2392C0u;
    {
        const bool branch_taken_0x2392c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2392C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392C0u;
        // 0x2392c4: 0x53140  sll         $a2, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2392c0) {
            ctx->pc = 0x239230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239230;
        }
    }
    ctx->pc = 0x2392C8u;
    // 0x2392c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2392C8u;
    {
        const bool branch_taken_0x2392c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2392CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392C8u;
        // 0x2392cc: 0x260211f8  addiu       $v0, $s0, 0x11F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2392c8) {
            ctx->pc = 0x2392D8u;
            goto label_2392d8;
        }
    }
    ctx->pc = 0x2392D0u;
label_2392d0:
    // 0x2392d0: 0x254b0001  addiu       $t3, $t2, 0x1
    ctx->pc = 0x2392d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2392d4: 0x260211f8  addiu       $v0, $s0, 0x11F8
    ctx->pc = 0x2392d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4600));
label_2392d8:
    // 0x2392d8: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2392d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2392dc: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x2392dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2392e0: 0x26442c18  addiu       $a0, $s2, 0x2C18
    ctx->pc = 0x2392e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11288));
    // 0x2392e4: 0xe1080  sll         $v0, $t6, 2
    ctx->pc = 0x2392e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x2392e8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2392e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x2392ec: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x2392ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2392f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2392f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2392f4: 0x25e43f18  addiu       $a0, $t7, 0x3F18
    ctx->pc = 0x2392f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 16152));
    // 0x2392f8: 0x2463c3a8  addiu       $v1, $v1, -0x3C58
    ctx->pc = 0x2392f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951848));
    // 0x2392fc: 0xa48b0170  sh          $t3, 0x170($a0)
    ctx->pc = 0x2392fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 368), (uint16_t)GPR_U32(ctx, 11));
    // 0x239300: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x239300u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239304: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x239304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x239308: 0x2484002c  addiu       $a0, $a0, 0x2C
    ctx->pc = 0x239308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
    // 0x23930c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x23930cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x239310: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x239310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x239314: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x239314u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x239318: 0x244c3838  addiu       $t4, $v0, 0x3838
    ctx->pc = 0x239318u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 14392));
    // 0x23931c: 0x8c483838  lw          $t0, 0x3838($v0)
    ctx->pc = 0x23931cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x353838u));
    // 0x239320: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x239320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239324: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x239324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x239328: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x239328u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
    // 0x23932c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x23932cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x239330: 0x3c090035  lui         $t1, 0x35
    ctx->pc = 0x239330u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)53 << 16));
    // 0x239334: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x239334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x239338: 0xade23f18  sw          $v0, 0x3F18($t7)
    ctx->pc = 0x239338u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 16152), GPR_U32(ctx, 2));
    // 0x23933c: 0x0  nop
    ctx->pc = 0x23933cu;
    // NOP
label_239340:
    // 0x239340: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x239340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x239344: 0x144c0016  bne         $v0, $t4, . + 4 + (0x16 << 2)
    ctx->pc = 0x239344u;
    {
        const bool branch_taken_0x239344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 12));
        ctx->pc = 0x239348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239344u;
        // 0x239348: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239344) {
            ctx->pc = 0x2393A0u;
            goto label_2393a0;
        }
    }
    ctx->pc = 0x23934Cu;
    // 0x23934c: 0x24e73888  addiu       $a3, $a3, 0x3888
    ctx->pc = 0x23934cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14472));
    // 0x239350: 0x25263860  addiu       $a2, $t1, 0x3860
    ctx->pc = 0x239350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 14432));
    // 0x239354: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x239354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239358: 0x25a40020  addiu       $a0, $t5, 0x20
    ctx->pc = 0x239358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
    // 0x23935c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x23935cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_239360:
    // 0x239360: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x239360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x239364: 0x10470003  beq         $v0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x239364u;
    {
        const bool branch_taken_0x239364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x239364) {
            ctx->pc = 0x239374u;
            goto label_239374;
        }
    }
    ctx->pc = 0x23936Cu;
    // 0x23936c: 0x54460008  bnel        $v0, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x23936Cu;
    {
        const bool branch_taken_0x23936c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x23936c) {
            ctx->pc = 0x239370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23936Cu;
            // 0x239370: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239390u;
            goto label_239390;
        }
    }
    ctx->pc = 0x239374u;
label_239374:
    // 0x239374: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x239374u;
    {
        const bool branch_taken_0x239374 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x239378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239374u;
        // 0x239378: 0x9482000a  lhu         $v0, 0xA($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239374) {
            ctx->pc = 0x239384u;
            goto label_239384;
        }
    }
    ctx->pc = 0x23937Cu;
    // 0x23937c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23937Cu;
    {
        const bool branch_taken_0x23937c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23937Cu;
        // 0x239380: 0x3042bfbf  andi        $v0, $v0, 0xBFBF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)49087);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23937c) {
            ctx->pc = 0x239388u;
            goto label_239388;
        }
    }
    ctx->pc = 0x239384u;
label_239384:
    // 0x239384: 0x34424040  ori         $v0, $v0, 0x4040
    ctx->pc = 0x239384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16448);
label_239388:
    // 0x239388: 0xa482000a  sh          $v0, 0xA($a0)
    ctx->pc = 0x239388u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x23938c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23938cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_239390:
    // 0x239390: 0x461fff3  bgez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x239390u;
    {
        const bool branch_taken_0x239390 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x239394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239390u;
        // 0x239394: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239390) {
            ctx->pc = 0x239360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239360;
        }
    }
    ctx->pc = 0x239398u;
    // 0x239398: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x239398u;
    {
        const bool branch_taken_0x239398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239398) {
            ctx->pc = 0x2393ACu;
            goto label_2393ac;
        }
    }
    ctx->pc = 0x2393A0u;
label_2393a0:
    // 0x2393a0: 0x28a2000b  slti        $v0, $a1, 0xB
    ctx->pc = 0x2393a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2393a4: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2393A4u;
    {
        const bool branch_taken_0x2393a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2393A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393A4u;
        // 0x2393a8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2393a4) {
            ctx->pc = 0x239340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239340;
        }
    }
    ctx->pc = 0x2393ACu;
label_2393ac:
    // 0x2393ac: 0x11c00007  beqz        $t6, . + 4 + (0x7 << 2)
    ctx->pc = 0x2393ACu;
    {
        const bool branch_taken_0x2393ac = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x2393B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393ACu;
        // 0x2393b0: 0x25e23f18  addiu       $v0, $t7, 0x3F18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 16152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2393ac) {
            ctx->pc = 0x2393CCu;
            goto label_2393cc;
        }
    }
    ctx->pc = 0x2393B4u;
    // 0x2393b4: 0x9443016a  lhu         $v1, 0x16A($v0)
    ctx->pc = 0x2393b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 362)));
    // 0x2393b8: 0x9444018a  lhu         $a0, 0x18A($v0)
    ctx->pc = 0x2393b8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 394)));
    // 0x2393bc: 0x3063feff  andi        $v1, $v1, 0xFEFF
    ctx->pc = 0x2393bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
    // 0x2393c0: 0x3084feff  andi        $a0, $a0, 0xFEFF
    ctx->pc = 0x2393c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65279);
    // 0x2393c4: 0xa443016a  sh          $v1, 0x16A($v0)
    ctx->pc = 0x2393c4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 362), (uint16_t)GPR_U32(ctx, 3));
    // 0x2393c8: 0xa444018a  sh          $a0, 0x18A($v0)
    ctx->pc = 0x2393c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 394), (uint16_t)GPR_U32(ctx, 4));
label_2393cc:
    // 0x2393cc: 0x25e63f18  addiu       $a2, $t7, 0x3F18
    ctx->pc = 0x2393ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), 16152));
    // 0x2393d0: 0x2402006f  addiu       $v0, $zero, 0x6F
    ctx->pc = 0x2393d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x2393d4: 0x2404007d  addiu       $a0, $zero, 0x7D
    ctx->pc = 0x2393d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x2393d8: 0x24050092  addiu       $a1, $zero, 0x92
    ctx->pc = 0x2393d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
    // 0x2393dc: 0xa4c20166  sh          $v0, 0x166($a2)
    ctx->pc = 0x2393dcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 358), (uint16_t)GPR_U32(ctx, 2));
    // 0x2393e0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2393e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2393e4: 0xa4c40186  sh          $a0, 0x186($a2)
    ctx->pc = 0x2393e4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 390), (uint16_t)GPR_U32(ctx, 4));
    // 0x2393e8: 0x15430007  bne         $t2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2393E8u;
    {
        const bool branch_taken_0x2393e8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        ctx->pc = 0x2393ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393E8u;
        // 0x2393ec: 0xa4c501a6  sh          $a1, 0x1A6($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 422), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2393e8) {
            ctx->pc = 0x239408u;
            goto label_239408;
        }
    }
    ctx->pc = 0x2393F0u;
    // 0x2393f0: 0x24020076  addiu       $v0, $zero, 0x76
    ctx->pc = 0x2393f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x2393f4: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x2393f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x2393f8: 0x24040096  addiu       $a0, $zero, 0x96
    ctx->pc = 0x2393f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x2393fc: 0xa4c20166  sh          $v0, 0x166($a2)
    ctx->pc = 0x2393fcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 358), (uint16_t)GPR_U32(ctx, 2));
    // 0x239400: 0xa4c30186  sh          $v1, 0x186($a2)
    ctx->pc = 0x239400u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 390), (uint16_t)GPR_U32(ctx, 3));
    // 0x239404: 0xa4c401a6  sh          $a0, 0x1A6($a2)
    ctx->pc = 0x239404u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 422), (uint16_t)GPR_U32(ctx, 4));
label_239408:
    // 0x239408: 0x260211f8  addiu       $v0, $s0, 0x11F8
    ctx->pc = 0x239408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4600));
    // 0x23940c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x23940cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x239410: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x239410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x239414: 0x5464000c  bnel        $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x239414u;
    {
        const bool branch_taken_0x239414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x239414) {
            ctx->pc = 0x239418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239414u;
            // 0x239418: 0x94c2018a  lhu         $v0, 0x18A($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 394)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239448u;
            goto label_239448;
        }
    }
    ctx->pc = 0x23941Cu;
    // 0x23941c: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x23941cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x239420: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x239420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x239424: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x239424u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x239428: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x239428u;
    {
        const bool branch_taken_0x239428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239428u;
        // 0x23942c: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239428) {
            ctx->pc = 0x239434u;
            goto label_239434;
        }
    }
    ctx->pc = 0x239430u;
    // 0x239430: 0xa6220004  sh          $v0, 0x4($s1)
    ctx->pc = 0x239430u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
label_239434:
    // 0x239434: 0x94c2018a  lhu         $v0, 0x18A($a2)
    ctx->pc = 0x239434u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 394)));
    // 0x239438: 0x94c3016a  lhu         $v1, 0x16A($a2)
    ctx->pc = 0x239438u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 362)));
    // 0x23943c: 0x34424200  ori         $v0, $v0, 0x4200
    ctx->pc = 0x23943cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16896);
    // 0x239440: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x239440u;
    {
        const bool branch_taken_0x239440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239440u;
        // 0x239444: 0x34634200  ori         $v1, $v1, 0x4200 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16896);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239440) {
            ctx->pc = 0x239454u;
            goto label_239454;
        }
    }
    ctx->pc = 0x239448u;
label_239448:
    // 0x239448: 0x94c3016a  lhu         $v1, 0x16A($a2)
    ctx->pc = 0x239448u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 362)));
    // 0x23944c: 0x3042bdff  andi        $v0, $v0, 0xBDFF
    ctx->pc = 0x23944cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48639);
    // 0x239450: 0x3063bdff  andi        $v1, $v1, 0xBDFF
    ctx->pc = 0x239450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48639);
label_239454:
    // 0x239454: 0xa4c2018a  sh          $v0, 0x18A($a2)
    ctx->pc = 0x239454u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 394), (uint16_t)GPR_U32(ctx, 2));
    // 0x239458: 0xa4c3016a  sh          $v1, 0x16A($a2)
    ctx->pc = 0x239458u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 362), (uint16_t)GPR_U32(ctx, 3));
    // 0x23945c: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x23945cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x239460: 0x2862000c  slti        $v0, $v1, 0xC
    ctx->pc = 0x239460u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x239464: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x239464u;
    {
        const bool branch_taken_0x239464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239464u;
        // 0x239468: 0x260211f8  addiu       $v0, $s0, 0x11F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239464) {
            ctx->pc = 0x2394B8u;
            goto label_2394b8;
        }
    }
    ctx->pc = 0x23946Cu;
    // 0x23946c: 0x2862000e  slti        $v0, $v1, 0xE
    ctx->pc = 0x23946cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x239470: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x239470u;
    {
        const bool branch_taken_0x239470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239470u;
        // 0x239474: 0xe1080  sll         $v0, $t6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239470) {
            ctx->pc = 0x23948Cu;
            goto label_23948c;
        }
    }
    ctx->pc = 0x239478u;
    // 0x239478: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x239478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x23947c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23947Cu;
    {
        const bool branch_taken_0x23947c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x239480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23947Cu;
        // 0x239480: 0x260211f8  addiu       $v0, $s0, 0x11F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23947c) {
            ctx->pc = 0x2394A0u;
            goto label_2394a0;
        }
    }
    ctx->pc = 0x239484u;
    // 0x239484: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x239484u;
    {
        const bool branch_taken_0x239484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239484u;
        // 0x239488: 0x25e33f18  addiu       $v1, $t7, 0x3F18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 16152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239484) {
            ctx->pc = 0x2394BCu;
            goto label_2394bc;
        }
    }
    ctx->pc = 0x23948Cu;
label_23948c:
    // 0x23948c: 0x26432c18  addiu       $v1, $s2, 0x2C18
    ctx->pc = 0x23948cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 11288));
    // 0x239490: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x239490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x239494: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x239494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x239498: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x239498u;
    {
        const bool branch_taken_0x239498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239498u;
        // 0x23949c: 0x8c98039c  lw          $t8, 0x39C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 924)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239498) {
            ctx->pc = 0x2394B4u;
            goto label_2394b4;
        }
    }
    ctx->pc = 0x2394A0u;
label_2394a0:
    // 0x2394a0: 0xe1080  sll         $v0, $t6, 2
    ctx->pc = 0x2394a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x2394a4: 0x26432c18  addiu       $v1, $s2, 0x2C18
    ctx->pc = 0x2394a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 11288));
    // 0x2394a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2394a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2394ac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2394acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2394b0: 0x8c980200  lw          $t8, 0x200($a0)
    ctx->pc = 0x2394b0u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 512)));
label_2394b4:
    // 0x2394b4: 0x260211f8  addiu       $v0, $s0, 0x11F8
    ctx->pc = 0x2394b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4600));
label_2394b8:
    // 0x2394b8: 0x25e33f18  addiu       $v1, $t7, 0x3F18
    ctx->pc = 0x2394b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 16152));
label_2394bc:
    // 0x2394bc: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2394bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2394c0: 0xc08e3fa  jal         func_238FE8
    ctx->pc = 0x2394C0u;
    SET_GPR_U32(ctx, 31, 0x2394C8u);
    ctx->pc = 0x2394C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2394C0u;
    // 0x2394c4: 0xac7801e0  sw          $t8, 0x1E0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 480), GPR_U32(ctx, 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238FE8u, 0x2394C0u, 0x2394C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2394C8u;
label_2394c8:
    // 0x2394c8: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x2394c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2394cc: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x2394CCu;
    SET_GPR_U32(ctx, 31, 0x2394D4u);
    ctx->pc = 0x2394D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2394CCu;
    // 0x2394d0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x2394CCu, 0x2394D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2394D4u;
label_2394d4:
    // 0x2394d4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2394d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2394d8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2394D8u;
    {
        const bool branch_taken_0x2394d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2394DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394D8u;
        // 0x2394dc: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2394d8) {
            ctx->pc = 0x239580u;
            goto label_239580;
        }
    }
    ctx->pc = 0x2394E0u;
    // 0x2394e0: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x2394e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2394e4: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2394E4u;
    {
        const bool branch_taken_0x2394e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2394E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394E4u;
        // 0x2394e8: 0x2862000e  slti        $v0, $v1, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)14) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2394e4) {
            ctx->pc = 0x23955Cu;
            goto label_23955c;
        }
    }
    ctx->pc = 0x2394ECu;
    // 0x2394ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2394ECu;
    {
        const bool branch_taken_0x2394ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2394F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394ECu;
        // 0x2394f0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2394ec) {
            ctx->pc = 0x239504u;
            goto label_239504;
        }
    }
    ctx->pc = 0x2394F4u;
    // 0x2394f4: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2394F4u;
    {
        const bool branch_taken_0x2394f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2394F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394F4u;
        // 0x2394f8: 0x3c050035  lui         $a1, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2394f4) {
            ctx->pc = 0x239550u;
            goto label_239550;
        }
    }
    ctx->pc = 0x2394FCu;
    // 0x2394fc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2394FCu;
    {
        const bool branch_taken_0x2394fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2394fc) {
            ctx->pc = 0x2395A0u;
            goto label_2395a0;
        }
    }
    ctx->pc = 0x239504u;
label_239504:
    // 0x239504: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x239504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x239508: 0x54620024  bnel        $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x239508u;
    {
        const bool branch_taken_0x239508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x239508) {
            ctx->pc = 0x23950Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239508u;
            // 0x23950c: 0x96230004  lhu         $v1, 0x4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23959Cu;
            goto label_23959c;
        }
    }
    ctx->pc = 0x239510u;
label_239510:
    // 0x239510: 0xc08d5e2  jal         func_235788
    ctx->pc = 0x239510u;
    SET_GPR_U32(ctx, 31, 0x239518u);
    ctx->pc = 0x235788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235788u, 0x239510u, 0x239518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239518u;
label_239518:
    // 0x239518: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x239518u;
    {
        const bool branch_taken_0x239518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239518) {
            ctx->pc = 0x23951Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239518u;
            // 0x23951c: 0x2404008e  addiu       $a0, $zero, 0x8E (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239540u;
            goto label_239540;
        }
    }
    ctx->pc = 0x239520u;
    // 0x239520: 0xc08ccfa  jal         func_2333E8
    ctx->pc = 0x239520u;
    SET_GPR_U32(ctx, 31, 0x239528u);
    ctx->pc = 0x2333E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2333E8u, 0x239520u, 0x239528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239528u;
label_239528:
    // 0x239528: 0xc08c02a  jal         func_2300A8
    ctx->pc = 0x239528u;
    SET_GPR_U32(ctx, 31, 0x239530u);
    ctx->pc = 0x23952Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239528u;
    // 0x23952c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2300A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2300A8u, 0x239528u, 0x239530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239530u;
label_239530:
    // 0x239530: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x239530u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x239534: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x239534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239538: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x239538u;
    {
        const bool branch_taken_0x239538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239538u;
        // 0x23953c: 0x24a53ed8  addiu       $a1, $a1, 0x3ED8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239538) {
            ctx->pc = 0x239568u;
            goto label_239568;
        }
    }
    ctx->pc = 0x239540u;
label_239540:
    // 0x239540: 0xc081546  jal         func_205518
    ctx->pc = 0x239540u;
    SET_GPR_U32(ctx, 31, 0x239548u);
    ctx->pc = 0x239544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239540u;
    // 0x239544: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x239540u, 0x239548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239548u;
label_239548:
    // 0x239548: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x239548u;
    {
        const bool branch_taken_0x239548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239548u;
        // 0x23954c: 0x96230004  lhu         $v1, 0x4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239548) {
            ctx->pc = 0x23959Cu;
            goto label_23959c;
        }
    }
    ctx->pc = 0x239550u;
label_239550:
    // 0x239550: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x239550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239554: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x239554u;
    {
        const bool branch_taken_0x239554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239554u;
        // 0x239558: 0x24a53b38  addiu       $a1, $a1, 0x3B38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239554) {
            ctx->pc = 0x239568u;
            goto label_239568;
        }
    }
    ctx->pc = 0x23955Cu;
label_23955c:
    // 0x23955c: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x23955cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x239560: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x239560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239564: 0x24a53bf8  addiu       $a1, $a1, 0x3BF8
    ctx->pc = 0x239564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15352));
label_239568:
    // 0x239568: 0xc08b3ac  jal         func_22CEB0
    ctx->pc = 0x239568u;
    SET_GPR_U32(ctx, 31, 0x239570u);
    ctx->pc = 0x22CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEB0u, 0x239568u, 0x239570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239570u;
label_239570:
    // 0x239570: 0xc08c070  jal         func_2301C0
    ctx->pc = 0x239570u;
    SET_GPR_U32(ctx, 31, 0x239578u);
    ctx->pc = 0x239574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239570u;
    // 0x239574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2301C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2301C0u, 0x239570u, 0x239578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239578u;
label_239578:
    // 0x239578: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x239578u;
    {
        const bool branch_taken_0x239578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239578u;
        // 0x23957c: 0x96230004  lhu         $v1, 0x4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239578) {
            ctx->pc = 0x23959Cu;
            goto label_23959c;
        }
    }
    ctx->pc = 0x239580u;
label_239580:
    // 0x239580: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x239580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x239584: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x239584u;
    SET_GPR_U32(ctx, 31, 0x23958Cu);
    ctx->pc = 0x239588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239584u;
    // 0x239588: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x239584u, 0x23958Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23958Cu;
label_23958c:
    // 0x23958c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x23958cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x239590: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x239590u;
    {
        const bool branch_taken_0x239590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239590) {
            ctx->pc = 0x239510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239510;
        }
    }
    ctx->pc = 0x239598u;
    // 0x239598: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x239598u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_23959c:
    // 0x23959c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x23959cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2395a0:
    // 0x2395a0: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2395A0u;
    {
        const bool branch_taken_0x2395a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2395A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2395A0u;
        // 0x2395a4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2395a0) {
            ctx->pc = 0x2395E4u;
            goto label_2395e4;
        }
    }
    ctx->pc = 0x2395A8u;
    // 0x2395a8: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x2395a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2395ac: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2395acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2395b0: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2395b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2395b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2395B4u;
    {
        const bool branch_taken_0x2395b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2395B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2395B4u;
        // 0x2395b8: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2395b4) {
            ctx->pc = 0x2395CCu;
            goto label_2395cc;
        }
    }
    ctx->pc = 0x2395BCu;
    // 0x2395bc: 0xc08cb7c  jal         func_232DF0
    ctx->pc = 0x2395BCu;
    SET_GPR_U32(ctx, 31, 0x2395C4u);
    ctx->pc = 0x232DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232DF0u, 0x2395BCu, 0x2395C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2395C4u;
label_2395c4:
    // 0x2395c4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2395C4u;
    {
        const bool branch_taken_0x2395c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2395C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2395C4u;
        // 0x2395c8: 0x8f84a004  lw          $a0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2395c4) {
            ctx->pc = 0x239624u;
            goto label_239624;
        }
    }
    ctx->pc = 0x2395CCu;
label_2395cc:
    // 0x2395cc: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2395CCu;
    {
        const bool branch_taken_0x2395cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2395cc) {
            ctx->pc = 0x2395D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2395CCu;
            // 0x2395d0: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239628u;
            goto label_239628;
        }
    }
    ctx->pc = 0x2395D4u;
    // 0x2395d4: 0xc08cb9a  jal         func_232E68
    ctx->pc = 0x2395D4u;
    SET_GPR_U32(ctx, 31, 0x2395DCu);
    ctx->pc = 0x232E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232E68u, 0x2395D4u, 0x2395DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2395DCu;
label_2395dc:
    // 0x2395dc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2395DCu;
    {
        const bool branch_taken_0x2395dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2395E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2395DCu;
        // 0x2395e0: 0x8f84a004  lw          $a0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2395dc) {
            ctx->pc = 0x239624u;
            goto label_239624;
        }
    }
    ctx->pc = 0x2395E4u;
label_2395e4:
    // 0x2395e4: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2395E4u;
    {
        const bool branch_taken_0x2395e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2395E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2395E4u;
        // 0x2395e8: 0x3c100035  lui         $s0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2395e4) {
            ctx->pc = 0x239638u;
            goto label_239638;
        }
    }
    ctx->pc = 0x2395ECu;
    // 0x2395ec: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x2395ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2395f0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2395f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2395f4: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2395f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2395f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2395F8u;
    {
        const bool branch_taken_0x2395f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2395FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2395F8u;
        // 0x2395fc: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2395f8) {
            ctx->pc = 0x239610u;
            goto label_239610;
        }
    }
    ctx->pc = 0x239600u;
    // 0x239600: 0xc08d144  jal         func_234510
    ctx->pc = 0x239600u;
    SET_GPR_U32(ctx, 31, 0x239608u);
    ctx->pc = 0x234510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234510u, 0x239600u, 0x239608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239608u;
label_239608:
    // 0x239608: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x239608u;
    {
        const bool branch_taken_0x239608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239608u;
        // 0x23960c: 0x8f84a004  lw          $a0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239608) {
            ctx->pc = 0x239624u;
            goto label_239624;
        }
    }
    ctx->pc = 0x239610u;
label_239610:
    // 0x239610: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x239610u;
    {
        const bool branch_taken_0x239610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239610) {
            ctx->pc = 0x239614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239610u;
            // 0x239614: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239628u;
            goto label_239628;
        }
    }
    ctx->pc = 0x239618u;
    // 0x239618: 0xc08d162  jal         func_234588
    ctx->pc = 0x239618u;
    SET_GPR_U32(ctx, 31, 0x239620u);
    ctx->pc = 0x234588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234588u, 0x239618u, 0x239620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239620u;
label_239620:
    // 0x239620: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x239620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_239624:
    // 0x239624: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x239624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_239628:
    // 0x239628: 0x2403ffcf  addiu       $v1, $zero, -0x31
    ctx->pc = 0x239628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x23962c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23962cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x239630: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x239630u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x239634: 0x3c100035  lui         $s0, 0x35
    ctx->pc = 0x239634u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
label_239638:
    // 0x239638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x239638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23963c: 0x26103f08  addiu       $s0, $s0, 0x3F08
    ctx->pc = 0x23963cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16136));
    // 0x239640: 0xc08c08e  jal         func_230238
    ctx->pc = 0x239640u;
    SET_GPR_U32(ctx, 31, 0x239648u);
    ctx->pc = 0x239644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239640u;
    // 0x239644: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230238u, 0x239640u, 0x239648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239648u;
label_239648:
    // 0x239648: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x239648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x23964c: 0xc08b6be  jal         func_22DAF8
    ctx->pc = 0x23964Cu;
    SET_GPR_U32(ctx, 31, 0x239654u);
    ctx->pc = 0x239650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23964Cu;
    // 0x239650: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DAF8u, 0x23964Cu, 0x239654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239654u;
label_239654:
    // 0x239654: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x239654u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x239658: 0x8e623900  lw          $v0, 0x3900($s3)
    ctx->pc = 0x239658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 14592)));
    // 0x23965c: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23965Cu;
    {
        const bool branch_taken_0x23965c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x239660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23965Cu;
        // 0x239660: 0x26653900  addiu       $a1, $s3, 0x3900 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 14592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23965c) {
            ctx->pc = 0x239680u;
            goto label_239680;
        }
    }
    ctx->pc = 0x239664u;
    // 0x239664: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x239664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x239668: 0x26442c18  addiu       $a0, $s2, 0x2C18
    ctx->pc = 0x239668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11288));
    // 0x23966c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23966cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x239670: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x239670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x239674: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x239674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x239678: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x239678u;
    {
        const bool branch_taken_0x239678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239678u;
        // 0x23967c: 0x8c630394  lw          $v1, 0x394($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 916)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239678) {
            ctx->pc = 0x239684u;
            goto label_239684;
        }
    }
    ctx->pc = 0x239680u;
label_239680:
    // 0x239680: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x239680u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239684:
    // 0x239684: 0x8e823990  lw          $v0, 0x3990($s4)
    ctx->pc = 0x239684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 14736)));
    // 0x239688: 0x26863990  addiu       $a2, $s4, 0x3990
    ctx->pc = 0x239688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 14736));
    // 0x23968c: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23968Cu;
    {
        const bool branch_taken_0x23968c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x239690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23968Cu;
        // 0x239690: 0xaca30018  sw          $v1, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23968c) {
            ctx->pc = 0x2396B0u;
            goto label_2396b0;
        }
    }
    ctx->pc = 0x239694u;
    // 0x239694: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x239694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x239698: 0x26442c18  addiu       $a0, $s2, 0x2C18
    ctx->pc = 0x239698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11288));
    // 0x23969c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23969cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2396a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2396a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2396a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2396a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2396a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2396A8u;
    {
        const bool branch_taken_0x2396a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2396ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2396A8u;
        // 0x2396ac: 0x8c630398  lw          $v1, 0x398($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2396a8) {
            ctx->pc = 0x2396B4u;
            goto label_2396b4;
        }
    }
    ctx->pc = 0x2396B0u;
label_2396b0:
    // 0x2396b0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2396b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2396b4:
    // 0x2396b4: 0x8ea23928  lw          $v0, 0x3928($s5)
    ctx->pc = 0x2396b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 14632)));
    // 0x2396b8: 0x26a53928  addiu       $a1, $s5, 0x3928
    ctx->pc = 0x2396b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 14632));
    // 0x2396bc: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2396BCu;
    {
        const bool branch_taken_0x2396bc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2396C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2396BCu;
        // 0x2396c0: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2396bc) {
            ctx->pc = 0x2396E0u;
            goto label_2396e0;
        }
    }
    ctx->pc = 0x2396C4u;
    // 0x2396c4: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x2396c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2396c8: 0x26442c18  addiu       $a0, $s2, 0x2C18
    ctx->pc = 0x2396c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11288));
    // 0x2396cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2396ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2396d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2396d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2396d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2396d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2396d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2396D8u;
    {
        const bool branch_taken_0x2396d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2396DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2396D8u;
        // 0x2396dc: 0x8c630398  lw          $v1, 0x398($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2396d8) {
            ctx->pc = 0x2396E4u;
            goto label_2396e4;
        }
    }
    ctx->pc = 0x2396E0u;
label_2396e0:
    // 0x2396e0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2396e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2396e4:
    // 0x2396e4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2396e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2396e8: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2396e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2396ec: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2396ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2396f0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2396f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2396f4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2396f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2396f8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2396f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2396fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2396fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239700: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x239700u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239704: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239704u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239708: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x239708u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x23970c: 0x3e00008  jr          $ra
    ctx->pc = 0x23970Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23970Cu;
        // 0x239710: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23970Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239714u;
}
