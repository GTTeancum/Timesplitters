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

// Function: makesignonmenu
// Address: 0x23e088 - 0x23e4b0
void makesignonmenu_0x23e088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("makesignonmenu_0x23e088");
#endif

    switch (ctx->pc) {
        case 0x23e0b0u: goto label_23e0b0;
        case 0x23e248u: goto label_23e248;
        case 0x23e258u: goto label_23e258;
        case 0x23e388u: goto label_23e388;
        case 0x23e390u: goto label_23e390;
        case 0x23e3b8u: goto label_23e3b8;
        case 0x23e438u: goto label_23e438;
        default: break;
    }

    ctx->pc = 0x23e088u;

    // 0x23e088: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x23e088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x23e08c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x23e08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x23e090: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23e090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23e094: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23e094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23e098: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x23e098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x23e09c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x23e09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x23e0a0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x23e0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x23e0a4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x23e0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x23e0a8: 0xc088224  jal         func_220890
    ctx->pc = 0x23E0A8u;
    SET_GPR_U32(ctx, 31, 0x23E0B0u);
    ctx->pc = 0x23E0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E0A8u;
    // 0x23e0ac: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220890u, 0x23E0A8u, 0x23E0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E0B0u;
label_23e0b0:
    // 0x23e0b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23e0b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e0b4: 0x3c130035  lui         $s3, 0x35
    ctx->pc = 0x23e0b4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)53 << 16));
    // 0x23e0b8: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x23e0b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
    // 0x23e0bc: 0x26715160  addiu       $s1, $s3, 0x5160
    ctx->pc = 0x23e0bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 20832));
    // 0x23e0c0: 0x24e563c0  addiu       $a1, $a3, 0x63C0
    ctx->pc = 0x23e0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 25536));
    // 0x23e0c4: 0x26645160  addiu       $a0, $s3, 0x5160
    ctx->pc = 0x23e0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20832));
    // 0x23e0c8: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x23e0c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x23e0cc: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x23e0ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x23e0d0: 0x68a3000f  ldl         $v1, 0xF($a1)
    ctx->pc = 0x23e0d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x23e0d4: 0x6ca30008  ldr         $v1, 0x8($a1)
    ctx->pc = 0x23e0d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x23e0d8: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x23e0d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23e0dc: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x23e0dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23e0e0: 0xb083000f  sdl         $v1, 0xF($a0)
    ctx->pc = 0x23e0e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23e0e4: 0xb4830008  sdr         $v1, 0x8($a0)
    ctx->pc = 0x23e0e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23e0e8: 0x68a20017  ldl         $v0, 0x17($a1)
    ctx->pc = 0x23e0e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x23e0ec: 0x6ca20010  ldr         $v0, 0x10($a1)
    ctx->pc = 0x23e0ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x23e0f0: 0x68a3001f  ldl         $v1, 0x1F($a1)
    ctx->pc = 0x23e0f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x23e0f4: 0x6ca30018  ldr         $v1, 0x18($a1)
    ctx->pc = 0x23e0f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x23e0f8: 0xb0820017  sdl         $v0, 0x17($a0)
    ctx->pc = 0x23e0f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23e0fc: 0xb4820010  sdr         $v0, 0x10($a0)
    ctx->pc = 0x23e0fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23e100: 0xb083001f  sdl         $v1, 0x1F($a0)
    ctx->pc = 0x23e100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23e104: 0xb4830018  sdr         $v1, 0x18($a0)
    ctx->pc = 0x23e104u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23e108: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x23e108u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
    // 0x23e10c: 0xa6320010  sh          $s2, 0x10($s1)
    ctx->pc = 0x23e10cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x355170u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x355170u, _value); } while (0);
    // 0x23e110: 0x250463e0  addiu       $a0, $t0, 0x63E0
    ctx->pc = 0x23e110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 25568));
    // 0x23e114: 0x9623000a  lhu         $v1, 0xA($s1)
    ctx->pc = 0x23e114u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x35516Au));
    // 0x23e118: 0x2a450090  slti        $a1, $s2, 0x90
    ctx->pc = 0x23e118u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)144) ? 1 : 0);
    // 0x23e11c: 0x94860008  lhu         $a2, 0x8($a0)
    ctx->pc = 0x23e11cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x23e120: 0x34620040  ori         $v0, $v1, 0x40
    ctx->pc = 0x23e120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x23e124: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x23e124u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x23e128: 0xa6260012  sh          $a2, 0x12($s1)
    ctx->pc = 0x23e128u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 6));
    // 0x23e12c: 0xa622000a  sh          $v0, 0xA($s1)
    ctx->pc = 0x23e12cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x23e130: 0x9383b758  lbu         $v1, -0x48A8($gp)
    ctx->pc = 0x23e130u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948696)));
    // 0x23e134: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x23E134u;
    {
        const bool branch_taken_0x23e134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e134) {
            ctx->pc = 0x23E138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E134u;
            // 0x23e138: 0x9622000a  lhu         $v0, 0xA($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E164u;
            goto label_23e164;
        }
    }
    ctx->pc = 0x23E13Cu;
    // 0x23e13c: 0x9382b750  lbu         $v0, -0x48B0($gp)
    ctx->pc = 0x23e13cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948688)));
    // 0x23e140: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x23E140u;
    {
        const bool branch_taken_0x23e140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e140) {
            ctx->pc = 0x23E144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E140u;
            // 0x23e144: 0x9622000a  lhu         $v0, 0xA($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E164u;
            goto label_23e164;
        }
    }
    ctx->pc = 0x23E148u;
    // 0x23e148: 0x9382b75a  lbu         $v0, -0x48A6($gp)
    ctx->pc = 0x23e148u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948698)));
    // 0x23e14c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E14Cu;
    {
        const bool branch_taken_0x23e14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e14c) {
            ctx->pc = 0x23E150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E14Cu;
            // 0x23e150: 0x9622000a  lhu         $v0, 0xA($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E164u;
            goto label_23e164;
        }
    }
    ctx->pc = 0x23E154u;
    // 0x23e154: 0x9382b7a4  lbu         $v0, -0x485C($gp)
    ctx->pc = 0x23e154u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948772)));
    // 0x23e158: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E158u;
    {
        const bool branch_taken_0x23e158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e158) {
            ctx->pc = 0x23E15Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E158u;
            // 0x23e15c: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E170u;
            goto label_23e170;
        }
    }
    ctx->pc = 0x23E160u;
    // 0x23e160: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x23e160u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_23e164:
    // 0x23e164: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x23e164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x23e168: 0xa622000a  sh          $v0, 0xA($s1)
    ctx->pc = 0x23e168u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x23e16c: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x23e16cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_23e170:
    // 0x23e170: 0x24e463c0  addiu       $a0, $a3, 0x63C0
    ctx->pc = 0x23e170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 25536));
    // 0x23e174: 0x250263e0  addiu       $v0, $t0, 0x63E0
    ctx->pc = 0x23e174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 25568));
    // 0x23e178: 0x68460007  ldl         $a2, 0x7($v0)
    ctx->pc = 0x23e178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x23e17c: 0x6c460000  ldr         $a2, 0x0($v0)
    ctx->pc = 0x23e17cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x23e180: 0x6855000f  ldl         $s5, 0xF($v0)
    ctx->pc = 0x23e180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem << shift)); }
    // 0x23e184: 0x6c550008  ldr         $s5, 0x8($v0)
    ctx->pc = 0x23e184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
    // 0x23e188: 0x68560017  ldl         $s6, 0x17($v0)
    ctx->pc = 0x23e188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
    // 0x23e18c: 0x6c560010  ldr         $s6, 0x10($v0)
    ctx->pc = 0x23e18cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem >> shift)); }
    // 0x23e190: 0xb2260007  sdl         $a2, 0x7($s1)
    ctx->pc = 0x23e190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23e194: 0xb6260000  sdr         $a2, 0x0($s1)
    ctx->pc = 0x23e194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23e198: 0xb235000f  sdl         $s5, 0xF($s1)
    ctx->pc = 0x23e198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 21); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23e19c: 0xb6350008  sdr         $s5, 0x8($s1)
    ctx->pc = 0x23e19cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 21); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23e1a0: 0xb2360017  sdl         $s6, 0x17($s1)
    ctx->pc = 0x23e1a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23e1a4: 0xb6360010  sdr         $s6, 0x10($s1)
    ctx->pc = 0x23e1a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23e1a8: 0x6846001f  ldl         $a2, 0x1F($v0)
    ctx->pc = 0x23e1a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x23e1ac: 0x6c460018  ldr         $a2, 0x18($v0)
    ctx->pc = 0x23e1acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x23e1b0: 0xb226001f  sdl         $a2, 0x1F($s1)
    ctx->pc = 0x23e1b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23e1b4: 0xb6260018  sdr         $a2, 0x18($s1)
    ctx->pc = 0x23e1b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23e1b8: 0x12102a  slt         $v0, $zero, $s2
    ctx->pc = 0x23e1b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x23e1bc: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x23e1bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x23e1c0: 0xa6220012  sh          $v0, 0x12($s1)
    ctx->pc = 0x23e1c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x23e1c4: 0xa6230010  sh          $v1, 0x10($s1)
    ctx->pc = 0x23e1c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x23e1c8: 0x9382b758  lbu         $v0, -0x48A8($gp)
    ctx->pc = 0x23e1c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948696)));
    // 0x23e1cc: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x23E1CCu;
    {
        const bool branch_taken_0x23e1cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e1cc) {
            ctx->pc = 0x23E1D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E1CCu;
            // 0x23e1d0: 0x9622000a  lhu         $v0, 0xA($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E1FCu;
            goto label_23e1fc;
        }
    }
    ctx->pc = 0x23E1D4u;
    // 0x23e1d4: 0x9382b750  lbu         $v0, -0x48B0($gp)
    ctx->pc = 0x23e1d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948688)));
    // 0x23e1d8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x23E1D8u;
    {
        const bool branch_taken_0x23e1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e1d8) {
            ctx->pc = 0x23E1DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E1D8u;
            // 0x23e1dc: 0x9622000a  lhu         $v0, 0xA($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E1FCu;
            goto label_23e1fc;
        }
    }
    ctx->pc = 0x23E1E0u;
    // 0x23e1e0: 0x9382b75a  lbu         $v0, -0x48A6($gp)
    ctx->pc = 0x23e1e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948698)));
    // 0x23e1e4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E1E4u;
    {
        const bool branch_taken_0x23e1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e1e4) {
            ctx->pc = 0x23E1E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E1E4u;
            // 0x23e1e8: 0x9622000a  lhu         $v0, 0xA($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E1FCu;
            goto label_23e1fc;
        }
    }
    ctx->pc = 0x23E1ECu;
    // 0x23e1ec: 0x9382b7a4  lbu         $v0, -0x485C($gp)
    ctx->pc = 0x23e1ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948772)));
    // 0x23e1f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E1F0u;
    {
        const bool branch_taken_0x23e1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1F0u;
        // 0x23e1f4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e1f0) {
            ctx->pc = 0x23E208u;
            goto label_23e208;
        }
    }
    ctx->pc = 0x23E1F8u;
    // 0x23e1f8: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x23e1f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_23e1fc:
    // 0x23e1fc: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x23e1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x23e200: 0xa622000a  sh          $v0, 0xA($s1)
    ctx->pc = 0x23e200u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x23e204: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x23e204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_23e208:
    // 0x23e208: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x23e208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x23e20c: 0x244fe1c8  addiu       $t7, $v0, -0x1E38
    ctx->pc = 0x23e20cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959560));
    // 0x23e210: 0x246e63e0  addiu       $t6, $v1, 0x63E0
    ctx->pc = 0x23e210u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 25568));
    // 0x23e214: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x23e214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x23e218: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x23e218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x23e21c: 0x244d63c0  addiu       $t5, $v0, 0x63C0
    ctx->pc = 0x23e21cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 25536));
    // 0x23e220: 0x246c3310  addiu       $t4, $v1, 0x3310
    ctx->pc = 0x23e220u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 13072));
    // 0x23e224: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x23e224u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x23e228: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23e228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e22c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23e22cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e230: 0x26540002  addiu       $s4, $s2, 0x2
    ctx->pc = 0x23e230u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x23e234: 0x3c0b0035  lui         $t3, 0x35
    ctx->pc = 0x23e234u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)53 << 16));
    // 0x23e238: 0x240a0b78  addiu       $t2, $zero, 0xB78
    ctx->pc = 0x23e238u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2936));
    // 0x23e23c: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x23e23cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x23e240: 0x2648ffff  addiu       $t0, $s2, -0x1
    ctx->pc = 0x23e240u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x23e244: 0x0  nop
    ctx->pc = 0x23e244u;
    // NOP
label_23e248:
    // 0x23e248: 0x1a400046  blez        $s2, . + 4 + (0x46 << 2)
    ctx->pc = 0x23E248u;
    {
        const bool branch_taken_0x23e248 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x23E24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E248u;
        // 0x23e24c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e248) {
            ctx->pc = 0x23E364u;
            goto label_23e364;
        }
    }
    ctx->pc = 0x23E250u;
    // 0x23e250: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x23e250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x23e254: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x23e254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_23e258:
    // 0x23e258: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x23e258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x23e25c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23e25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e260: 0x5466003b  bnel        $v1, $a2, . + 4 + (0x3B << 2)
    ctx->pc = 0x23E260u;
    {
        const bool branch_taken_0x23e260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x23e260) {
            ctx->pc = 0x23E264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E260u;
            // 0x23e264: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E350u;
            goto label_23e350;
        }
    }
    ctx->pc = 0x23E268u;
    // 0x23e268: 0x256263a0  addiu       $v0, $t3, 0x63A0
    ctx->pc = 0x23e268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 25504));
    // 0x23e26c: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x23e26cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x23e270: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x23e270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x23e274: 0x6855000f  ldl         $s5, 0xF($v0)
    ctx->pc = 0x23e274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem << shift)); }
    // 0x23e278: 0x6c550008  ldr         $s5, 0x8($v0)
    ctx->pc = 0x23e278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
    // 0x23e27c: 0x68560017  ldl         $s6, 0x17($v0)
    ctx->pc = 0x23e27cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
    // 0x23e280: 0x6c560010  ldr         $s6, 0x10($v0)
    ctx->pc = 0x23e280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem >> shift)); }
    // 0x23e284: 0xb2240007  sdl         $a0, 0x7($s1)
    ctx->pc = 0x23e284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23e288: 0xb6240000  sdr         $a0, 0x0($s1)
    ctx->pc = 0x23e288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23e28c: 0xb235000f  sdl         $s5, 0xF($s1)
    ctx->pc = 0x23e28cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 21); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23e290: 0xb6350008  sdr         $s5, 0x8($s1)
    ctx->pc = 0x23e290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 21); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23e294: 0xb2360017  sdl         $s6, 0x17($s1)
    ctx->pc = 0x23e294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23e298: 0xb6360010  sdr         $s6, 0x10($s1)
    ctx->pc = 0x23e298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23e29c: 0x6844001f  ldl         $a0, 0x1F($v0)
    ctx->pc = 0x23e29cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x23e2a0: 0x6c440018  ldr         $a0, 0x18($v0)
    ctx->pc = 0x23e2a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x23e2a4: 0xb224001f  sdl         $a0, 0x1F($s1)
    ctx->pc = 0x23e2a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23e2a8: 0xb6240018  sdr         $a0, 0x18($s1)
    ctx->pc = 0x23e2a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23e2ac: 0x20a1818  mult        $v1, $s0, $t2
    ctx->pc = 0x23e2acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23e2b0: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x23e2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x23e2b4: 0x8f829dd8  lw          $v0, -0x6228($gp)
    ctx->pc = 0x23e2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x23e2b8: 0xa6240008  sh          $a0, 0x8($s1)
    ctx->pc = 0x23e2b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x23e2bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23e2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23e2c0: 0x18a00003  blez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E2C0u;
    {
        const bool branch_taken_0x23e2c0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x23E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E2C0u;
        // 0x23e2c4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e2c0) {
            ctx->pc = 0x23E2D0u;
            goto label_23e2d0;
        }
    }
    ctx->pc = 0x23E2C8u;
    // 0x23e2c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23E2C8u;
    {
        const bool branch_taken_0x23e2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E2C8u;
        // 0x23e2cc: 0xa629000a  sh          $t1, 0xA($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e2c8) {
            ctx->pc = 0x23E2D4u;
            goto label_23e2d4;
        }
    }
    ctx->pc = 0x23E2D0u;
label_23e2d0:
    // 0x23e2d0: 0xa620000a  sh          $zero, 0xA($s1)
    ctx->pc = 0x23e2d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 0));
label_23e2d4:
    // 0x23e2d4: 0x58a00003  blezl       $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E2D4u;
    {
        const bool branch_taken_0x23e2d4 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x23e2d4) {
            ctx->pc = 0x23E2D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E2D4u;
            // 0x23e2d8: 0x95c20008  lhu         $v0, 0x8($t6) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E2E4u;
            goto label_23e2e4;
        }
    }
    ctx->pc = 0x23E2DCu;
    // 0x23e2dc: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x23e2dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x23e2e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23e2e4:
    // 0x23e2e4: 0xa6220010  sh          $v0, 0x10($s1)
    ctx->pc = 0x23e2e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x23e2e8: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x23e2e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x23e2ec: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E2ECu;
    {
        const bool branch_taken_0x23e2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e2ec) {
            ctx->pc = 0x23E2F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E2ECu;
            // 0x23e2f0: 0x95a20008  lhu         $v0, 0x8($t5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E2FCu;
            goto label_23e2fc;
        }
    }
    ctx->pc = 0x23E2F4u;
    // 0x23e2f4: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x23e2f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x23e2f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23e2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23e2fc:
    // 0x23e2fc: 0xa6220012  sh          $v0, 0x12($s1)
    ctx->pc = 0x23e2fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x23e300: 0x9382b758  lbu         $v0, -0x48A8($gp)
    ctx->pc = 0x23e300u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948696)));
    // 0x23e304: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x23E304u;
    {
        const bool branch_taken_0x23e304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e304) {
            ctx->pc = 0x23E308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E304u;
            // 0x23e308: 0x9622000a  lhu         $v0, 0xA($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E334u;
            goto label_23e334;
        }
    }
    ctx->pc = 0x23E30Cu;
    // 0x23e30c: 0x9382b750  lbu         $v0, -0x48B0($gp)
    ctx->pc = 0x23e30cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948688)));
    // 0x23e310: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x23E310u;
    {
        const bool branch_taken_0x23e310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e310) {
            ctx->pc = 0x23E314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E310u;
            // 0x23e314: 0x9622000a  lhu         $v0, 0xA($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E334u;
            goto label_23e334;
        }
    }
    ctx->pc = 0x23E318u;
    // 0x23e318: 0x9382b75a  lbu         $v0, -0x48A6($gp)
    ctx->pc = 0x23e318u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948698)));
    // 0x23e31c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E31Cu;
    {
        const bool branch_taken_0x23e31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e31c) {
            ctx->pc = 0x23E320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E31Cu;
            // 0x23e320: 0x9622000a  lhu         $v0, 0xA($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E334u;
            goto label_23e334;
        }
    }
    ctx->pc = 0x23E324u;
    // 0x23e324: 0x9382b7a4  lbu         $v0, -0x485C($gp)
    ctx->pc = 0x23e324u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948772)));
    // 0x23e328: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E328u;
    {
        const bool branch_taken_0x23e328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E328u;
        // 0x23e32c: 0xac1021  addu        $v0, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e328) {
            ctx->pc = 0x23E340u;
            goto label_23e340;
        }
    }
    ctx->pc = 0x23E330u;
    // 0x23e330: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x23e330u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_23e334:
    // 0x23e334: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x23e334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x23e338: 0xa622000a  sh          $v0, 0xA($s1)
    ctx->pc = 0x23e338u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x23e33c: 0xac1021  addu        $v0, $a1, $t4
    ctx->pc = 0x23e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_23e340:
    // 0x23e340: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x23e340u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x23e344: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x23e344u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x23e348: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x23e348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e34c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23e34cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_23e350:
    // 0x23e350: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x23e350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x23e354: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x23E354u;
    {
        const bool branch_taken_0x23e354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E354u;
        // 0x23e358: 0x1010c0  sll         $v0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e354) {
            ctx->pc = 0x23E258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e258;
        }
    }
    ctx->pc = 0x23E35Cu;
    // 0x23e35c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23E35Cu;
    {
        const bool branch_taken_0x23e35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E35Cu;
        // 0x23e360: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e35c) {
            ctx->pc = 0x23E36Cu;
            goto label_23e36c;
        }
    }
    ctx->pc = 0x23E364u;
label_23e364:
    // 0x23e364: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x23e364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x23e368: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x23e368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_23e36c:
    // 0x23e36c: 0x28c20009  slti        $v0, $a2, 0x9
    ctx->pc = 0x23e36cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x23e370: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x23E370u;
    {
        const bool branch_taken_0x23e370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E370u;
        // 0x23e374: 0x8f82b730  lw          $v0, -0x48D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e370) {
            ctx->pc = 0x23E248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e248;
        }
    }
    ctx->pc = 0x23E378u;
    // 0x23e378: 0x26715160  addiu       $s1, $s3, 0x5160
    ctx->pc = 0x23e378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 20832));
    // 0x23e37c: 0x18400040  blez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x23E37Cu;
    {
        const bool branch_taken_0x23e37c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E37Cu;
        // 0x23e380: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e37c) {
            ctx->pc = 0x23E480u;
            goto label_23e480;
        }
    }
    ctx->pc = 0x23E384u;
    // 0x23e384: 0x2793b7a0  addiu       $s3, $gp, -0x4860
    ctx->pc = 0x23e384u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948768));
label_23e388:
    // 0x23e388: 0xc08828c  jal         func_220A30
    ctx->pc = 0x23E388u;
    SET_GPR_U32(ctx, 31, 0x23E390u);
    ctx->pc = 0x23E38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E388u;
    // 0x23e38c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220A30u, 0x23E388u, 0x23E390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E390u;
label_23e390:
    // 0x23e390: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23e390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e394: 0x4800018  bltz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x23E394u;
    {
        const bool branch_taken_0x23e394 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x23E398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E394u;
        // 0x23e398: 0x26060001  addiu       $a2, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e394) {
            ctx->pc = 0x23E3F8u;
            goto label_23e3f8;
        }
    }
    ctx->pc = 0x23E39Cu;
    // 0x23e39c: 0x1a400018  blez        $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x23E39Cu;
    {
        const bool branch_taken_0x23e39c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x23E3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E39Cu;
        // 0x23e3a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e39c) {
            ctx->pc = 0x23E400u;
            goto label_23e400;
        }
    }
    ctx->pc = 0x23E3A4u;
    // 0x23e3a4: 0x8f87b730  lw          $a3, -0x48D0($gp)
    ctx->pc = 0x23e3a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x23e3a8: 0x3c0801fc  lui         $t0, 0x1FC
    ctx->pc = 0x23e3a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)508 << 16));
    // 0x23e3ac: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x23e3acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x23e3b0: 0x25023310  addiu       $v0, $t0, 0x3310
    ctx->pc = 0x23e3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 13072));
    // 0x23e3b4: 0x0  nop
    ctx->pc = 0x23e3b4u;
    // NOP
label_23e3b8:
    // 0x23e3b8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x23e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x23e3bc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x23e3bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e3c0: 0x54640008  bnel        $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23E3C0u;
    {
        const bool branch_taken_0x23e3c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x23e3c0) {
            ctx->pc = 0x23E3C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E3C0u;
            // 0x23e3c4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E3E4u;
            goto label_23e3e4;
        }
    }
    ctx->pc = 0x23E3C8u;
    // 0x23e3c8: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x23e3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x23e3cc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x23e3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x23e3d0: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x23e3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x23e3d4: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x23e3d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x23e3d8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x23e3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x23e3dc: 0xa462000a  sh          $v0, 0xA($v1)
    ctx->pc = 0x23e3dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x23e3e0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23e3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_23e3e4:
    // 0x23e3e4: 0xb2102a  slt         $v0, $a1, $s2
    ctx->pc = 0x23e3e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x23e3e8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x23E3E8u;
    {
        const bool branch_taken_0x23e3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E3E8u;
        // 0x23e3ec: 0x25023310  addiu       $v0, $t0, 0x3310 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 13072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e3e8) {
            ctx->pc = 0x23E3B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e3b8;
        }
    }
    ctx->pc = 0x23E3F0u;
    // 0x23e3f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23E3F0u;
    {
        const bool branch_taken_0x23e3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E3F0u;
        // 0x23e3f4: 0x2131821  addu        $v1, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e3f0) {
            ctx->pc = 0x23E40Cu;
            goto label_23e40c;
        }
    }
    ctx->pc = 0x23E3F8u;
label_23e3f8:
    // 0x23e3f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23E3F8u;
    {
        const bool branch_taken_0x23e3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E3F8u;
        // 0x23e3fc: 0x8f87b730  lw          $a3, -0x48D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e3f8) {
            ctx->pc = 0x23E408u;
            goto label_23e408;
        }
    }
    ctx->pc = 0x23E400u;
label_23e400:
    // 0x23e400: 0x8f87b730  lw          $a3, -0x48D0($gp)
    ctx->pc = 0x23e400u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x23e404: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x23e404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_23e408:
    // 0x23e408: 0x2131821  addu        $v1, $s0, $s3
    ctx->pc = 0x23e408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_23e40c:
    // 0x23e40c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x23e40cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23e410: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x23E410u;
    {
        const bool branch_taken_0x23e410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E410u;
        // 0x23e414: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e410) {
            ctx->pc = 0x23E474u;
            goto label_23e474;
        }
    }
    ctx->pc = 0x23E418u;
    // 0x23e418: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x23e418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23e41c: 0x92182b  sltu        $v1, $a0, $s2
    ctx->pc = 0x23e41cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x23e420: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x23E420u;
    {
        const bool branch_taken_0x23e420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E420u;
        // 0x23e424: 0x207102a  slt         $v0, $s0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e420) {
            ctx->pc = 0x23E478u;
            goto label_23e478;
        }
    }
    ctx->pc = 0x23E428u;
    // 0x23e428: 0x1a400013  blez        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x23E428u;
    {
        const bool branch_taken_0x23e428 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x23E42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E428u;
        // 0x23e42c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e428) {
            ctx->pc = 0x23E478u;
            goto label_23e478;
        }
    }
    ctx->pc = 0x23E430u;
    // 0x23e430: 0x3c0801fc  lui         $t0, 0x1FC
    ctx->pc = 0x23e430u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)508 << 16));
    // 0x23e434: 0x25023310  addiu       $v0, $t0, 0x3310
    ctx->pc = 0x23e434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 13072));
label_23e438:
    // 0x23e438: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x23e438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x23e43c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x23e43cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e440: 0x54640008  bnel        $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23E440u;
    {
        const bool branch_taken_0x23e440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x23e440) {
            ctx->pc = 0x23E444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E440u;
            // 0x23e444: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E464u;
            goto label_23e464;
        }
    }
    ctx->pc = 0x23E448u;
    // 0x23e448: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x23e448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x23e44c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x23e44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x23e450: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x23e450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x23e454: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x23e454u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x23e458: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x23e458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x23e45c: 0xa462000a  sh          $v0, 0xA($v1)
    ctx->pc = 0x23e45cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x23e460: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23e460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_23e464:
    // 0x23e464: 0xb2102a  slt         $v0, $a1, $s2
    ctx->pc = 0x23e464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x23e468: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x23E468u;
    {
        const bool branch_taken_0x23e468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E468u;
        // 0x23e46c: 0x25023310  addiu       $v0, $t0, 0x3310 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 13072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e468) {
            ctx->pc = 0x23E438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e438;
        }
    }
    ctx->pc = 0x23E470u;
    // 0x23e470: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x23e470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23e474:
    // 0x23e474: 0x207102a  slt         $v0, $s0, $a3
    ctx->pc = 0x23e474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_23e478:
    // 0x23e478: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x23E478u;
    {
        const bool branch_taken_0x23e478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e478) {
            ctx->pc = 0x23E388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e388;
        }
    }
    ctx->pc = 0x23E480u;
label_23e480:
    // 0x23e480: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x23e480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x23e484: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x23e484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23e488: 0xa4545150  sh          $s4, 0x5150($v0)
    ctx->pc = 0x23e488u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x355150u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x355150u, _value); } while (0);
    // 0x23e48c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x23e48cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23e490: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x23e490u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23e494: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23e494u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23e498: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23e498u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e49c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23e49cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23e4a0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23e4a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e4a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23e4a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x23E4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E4A8u;
        // 0x23e4ac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E4B0u;
}
