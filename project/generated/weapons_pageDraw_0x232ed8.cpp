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

// Function: weapons_pageDraw
// Address: 0x232ed8 - 0x2333e4
void weapons_pageDraw_0x232ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("weapons_pageDraw_0x232ed8");
#endif

    switch (ctx->pc) {
        case 0x232f10u: goto label_232f10;
        case 0x232f1cu: goto label_232f1c;
        case 0x232f98u: goto label_232f98;
        case 0x232fe8u: goto label_232fe8;
        case 0x233020u: goto label_233020;
        case 0x233030u: goto label_233030;
        case 0x233060u: goto label_233060;
        case 0x233068u: goto label_233068;
        case 0x233088u: goto label_233088;
        case 0x2330dcu: goto label_2330dc;
        case 0x2330f8u: goto label_2330f8;
        case 0x233150u: goto label_233150;
        case 0x233174u: goto label_233174;
        case 0x2331d0u: goto label_2331d0;
        case 0x233204u: goto label_233204;
        case 0x233230u: goto label_233230;
        case 0x233240u: goto label_233240;
        case 0x233258u: goto label_233258;
        case 0x2332b8u: goto label_2332b8;
        case 0x233328u: goto label_233328;
        case 0x233388u: goto label_233388;
        case 0x2333acu: goto label_2333ac;
        case 0x2333b4u: goto label_2333b4;
        default: break;
    }

    ctx->pc = 0x232ed8u;

    // 0x232ed8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x232ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x232edc: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x232edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x232ee0: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x232ee0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232ee4: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x232ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x232ee8: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x232ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x232eec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x232eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x232ef0: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x232ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x232ef4: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x232ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x232ef8: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x232ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x232efc: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x232efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x232f00: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x232f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x232f04: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x232f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x232f08: 0xc08089c  jal         func_202270
    ctx->pc = 0x232F08u;
    SET_GPR_U32(ctx, 31, 0x232F10u);
    ctx->pc = 0x232F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232F08u;
    // 0x232f0c: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x232F08u, 0x232F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232F10u;
label_232f10:
    // 0x232f10: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x232f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x232f14: 0xc08c1a2  jal         func_230688
    ctx->pc = 0x232F14u;
    SET_GPR_U32(ctx, 31, 0x232F1Cu);
    ctx->pc = 0x232F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232F14u;
    // 0x232f18: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230688u, 0x232F14u, 0x232F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232F1Cu;
label_232f1c:
    // 0x232f1c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x232f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x232f20: 0x8c443a30  lw          $a0, 0x3A30($v0)
    ctx->pc = 0x232f20u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x353A30u));
    // 0x232f24: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x232f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x232f28: 0x24471b80  addiu       $a3, $v0, 0x1B80
    ctx->pc = 0x232f28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 7040));
    // 0x232f2c: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x232f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x232f30: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x232f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x232f34: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x232f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x232f38: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x232f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x232f3c: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x232f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3A1B90u));
    // 0x232f40: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x232f40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x232f44: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x232f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x232f48: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x232f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x232f4c: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x232f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x232f50: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x232f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x232f54: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x232F54u;
    {
        const bool branch_taken_0x232f54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x232F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232F54u;
        // 0x232f58: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232f54) {
            ctx->pc = 0x232F70u;
            goto label_232f70;
        }
    }
    ctx->pc = 0x232F5Cu;
    // 0x232f5c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x232f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x232f60: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x232f60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x232f64: 0x24424198  addiu       $v0, $v0, 0x4198
    ctx->pc = 0x232f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16792));
    // 0x232f68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x232F68u;
    {
        const bool branch_taken_0x232f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232F68u;
        // 0x232f6c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232f68) {
            ctx->pc = 0x232F78u;
            goto label_232f78;
        }
    }
    ctx->pc = 0x232F70u;
label_232f70:
    // 0x232f70: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x232f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x232f74: 0x24503a90  addiu       $s0, $v0, 0x3A90
    ctx->pc = 0x232f74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 14992));
label_232f78:
    // 0x232f78: 0x3c096e6e  lui         $t1, 0x6E6E
    ctx->pc = 0x232f78u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28270 << 16));
    // 0x232f7c: 0x24040138  addiu       $a0, $zero, 0x138
    ctx->pc = 0x232f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
    // 0x232f80: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x232f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x232f84: 0x2406023f  addiu       $a2, $zero, 0x23F
    ctx->pc = 0x232f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 575));
    // 0x232f88: 0x24070077  addiu       $a3, $zero, 0x77
    ctx->pc = 0x232f88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x232f8c: 0x24082040  addiu       $t0, $zero, 0x2040
    ctx->pc = 0x232f8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8256));
    // 0x232f90: 0xc08bb46  jal         func_22ED18
    ctx->pc = 0x232F90u;
    SET_GPR_U32(ctx, 31, 0x232F98u);
    ctx->pc = 0x232F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232F90u;
    // 0x232f94: 0x35296e80  ori         $t1, $t1, 0x6E80 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)28288);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ED18u, 0x232F90u, 0x232F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232F98u;
label_232f98:
    // 0x232f98: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x232f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x232f9c: 0x8c623a30  lw          $v0, 0x3A30($v1)
    ctx->pc = 0x232f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x353A30u));
    // 0x232fa0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x232FA0u;
    {
        const bool branch_taken_0x232fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232FA0u;
        // 0x232fa4: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232fa0) {
            ctx->pc = 0x232FC4u;
            goto label_232fc4;
        }
    }
    ctx->pc = 0x232FA8u;
    // 0x232fa8: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x232fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x232fac: 0x24a42c18  addiu       $a0, $a1, 0x2C18
    ctx->pc = 0x232facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 11288));
    // 0x232fb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x232fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x232fb4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x232fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x232fb8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x232fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x232fbc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x232FBCu;
    {
        const bool branch_taken_0x232fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232FBCu;
        // 0x232fc0: 0x8c710670  lw          $s1, 0x670($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232fbc) {
            ctx->pc = 0x232FDCu;
            goto label_232fdc;
        }
    }
    ctx->pc = 0x232FC4u;
label_232fc4:
    // 0x232fc4: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x232fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x232fc8: 0x24c42c18  addiu       $a0, $a2, 0x2C18
    ctx->pc = 0x232fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 11288));
    // 0x232fcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x232fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x232fd0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x232fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x232fd4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x232fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x232fd8: 0x8c710674  lw          $s1, 0x674($v1)
    ctx->pc = 0x232fd8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1652)));
label_232fdc:
    // 0x232fdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232fe0: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x232FE0u;
    SET_GPR_U32(ctx, 31, 0x232FE8u);
    ctx->pc = 0x232FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232FE0u;
    // 0x232fe4: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x232FE0u, 0x232FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232FE8u;
label_232fe8:
    // 0x232fe8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x232fe8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232fec: 0x24040108  addiu       $a0, $zero, 0x108
    ctx->pc = 0x232fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
    // 0x232ff0: 0x3c076e6e  lui         $a3, 0x6E6E
    ctx->pc = 0x232ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28270 << 16));
    // 0x232ff4: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x232ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x232ff8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x232ff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232ffc: 0x417c2  srl         $v0, $a0, 31
    ctx->pc = 0x232ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x233000: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x233000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x233004: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x233004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x233008: 0x34e76e80  ori         $a3, $a3, 0x6E80
    ctx->pc = 0x233008u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28288);
    // 0x23300c: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x23300cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x233010: 0x24082040  addiu       $t0, $zero, 0x2040
    ctx->pc = 0x233010u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8256));
    // 0x233014: 0x24840138  addiu       $a0, $a0, 0x138
    ctx->pc = 0x233014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 312));
    // 0x233018: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x233018u;
    SET_GPR_U32(ctx, 31, 0x233020u);
    ctx->pc = 0x23301Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233018u;
    // 0x23301c: 0x2417004b  addiu       $s7, $zero, 0x4B (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x233018u, 0x233020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233020u;
label_233020:
    // 0x233020: 0x24160041  addiu       $s6, $zero, 0x41
    ctx->pc = 0x233020u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x233024: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x233024u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x233028: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x233028u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23302c: 0x24110040  addiu       $s1, $zero, 0x40
    ctx->pc = 0x23302cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_233030:
    // 0x233030: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x233030u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x233034: 0x26820031  addiu       $v0, $s4, 0x31
    ctx->pc = 0x233034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 49));
    // 0x233038: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x233038u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x23303c: 0x24040138  addiu       $a0, $zero, 0x138
    ctx->pc = 0x23303cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
    // 0x233040: 0xa3a00021  sb          $zero, 0x21($sp)
    ctx->pc = 0x233040u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x233044: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x233044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233048: 0x2406023f  addiu       $a2, $zero, 0x23F
    ctx->pc = 0x233048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 575));
    // 0x23304c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x23304cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233050: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x233050u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x233054: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x233054u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x233058: 0xc08b9ec  jal         func_22E7B0
    ctx->pc = 0x233058u;
    SET_GPR_U32(ctx, 31, 0x233060u);
    ctx->pc = 0x23305Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233058u;
    // 0x23305c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7B0u, 0x233058u, 0x233060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233060u;
label_233060:
    // 0x233060: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x233060u;
    SET_GPR_U32(ctx, 31, 0x233068u);
    ctx->pc = 0x233064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233060u;
    // 0x233064: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x233060u, 0x233068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233068u;
label_233068:
    // 0x233068: 0x3c076e6e  lui         $a3, 0x6E6E
    ctx->pc = 0x233068u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28270 << 16));
    // 0x23306c: 0x2403012e  addiu       $v1, $zero, 0x12E
    ctx->pc = 0x23306cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
    // 0x233070: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x233070u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x233074: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x233074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233078: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x233078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23307c: 0x34e76e80  ori         $a3, $a3, 0x6E80
    ctx->pc = 0x23307cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28288);
    // 0x233080: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x233080u;
    SET_GPR_U32(ctx, 31, 0x233088u);
    ctx->pc = 0x233084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233080u;
    // 0x233084: 0x24082040  addiu       $t0, $zero, 0x2040 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x233080u, 0x233088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233088u;
label_233088:
    // 0x233088: 0x6000014  bltz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x233088u;
    {
        const bool branch_taken_0x233088 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x23308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233088u;
        // 0x23308c: 0x8f839354  lw          $v1, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233088) {
            ctx->pc = 0x2330DCu;
            goto label_2330dc;
        }
    }
    ctx->pc = 0x233090u;
    // 0x233090: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x233090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x233094: 0x248490fe  addiu       $a0, $a0, -0x6F02
    ctx->pc = 0x233094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938878));
    // 0x233098: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x233098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x23309c: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x23309cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x2330a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2330a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2330a4: 0x24a52c18  addiu       $a1, $a1, 0x2C18
    ctx->pc = 0x2330a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11288));
    // 0x2330a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2330a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2330ac: 0x84490000  lh          $t1, 0x0($v0)
    ctx->pc = 0x2330acu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2330b0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2330b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2330b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2330b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2330b8: 0x3c076e6e  lui         $a3, 0x6E6E
    ctx->pc = 0x2330b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28270 << 16));
    // 0x2330bc: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x2330bcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2330c0: 0x2404013a  addiu       $a0, $zero, 0x13A
    ctx->pc = 0x2330c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 314));
    // 0x2330c4: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x2330c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2330c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2330c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2330cc: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x2330ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2330d0: 0x34e76e80  ori         $a3, $a3, 0x6E80
    ctx->pc = 0x2330d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28288);
    // 0x2330d4: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x2330D4u;
    SET_GPR_U32(ctx, 31, 0x2330DCu);
    ctx->pc = 0x2330D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2330D4u;
    // 0x2330d8: 0x24080050  addiu       $t0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x2330D4u, 0x2330DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2330DCu;
label_2330dc:
    // 0x2330dc: 0x3c086e6e  lui         $t0, 0x6E6E
    ctx->pc = 0x2330dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28270 << 16));
    // 0x2330e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2330e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2330e4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2330e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2330e8: 0x24040138  addiu       $a0, $zero, 0x138
    ctx->pc = 0x2330e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
    // 0x2330ec: 0x2406023f  addiu       $a2, $zero, 0x23F
    ctx->pc = 0x2330ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 575));
    // 0x2330f0: 0xc0ae226  jal         func_2B8898
    ctx->pc = 0x2330F0u;
    SET_GPR_U32(ctx, 31, 0x2330F8u);
    ctx->pc = 0x2330F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2330F0u;
    // 0x2330f4: 0x35086e80  ori         $t0, $t0, 0x6E80 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)28288);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8898u, 0x2330F0u, 0x2330F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2330F8u;
label_2330f8:
    // 0x2330f8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2330f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2330fc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2330fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x233100: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x233100u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x233104: 0x26f7000b  addiu       $s7, $s7, 0xB
    ctx->pc = 0x233104u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 11));
    // 0x233108: 0x26d6000b  addiu       $s6, $s6, 0xB
    ctx->pc = 0x233108u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 11));
    // 0x23310c: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x23310cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x233110: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x233110u;
    {
        const bool branch_taken_0x233110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233110u;
        // 0x233114: 0x2631000b  addiu       $s1, $s1, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233110) {
            ctx->pc = 0x233030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233030;
        }
    }
    ctx->pc = 0x233118u;
    // 0x233118: 0x97c40004  lhu         $a0, 0x4($fp)
    ctx->pc = 0x233118u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x23311c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23311cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233120: 0x3091ffff  andi        $s1, $a0, 0xFFFF
    ctx->pc = 0x233120u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x233124: 0x16220016  bne         $s1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x233124u;
    {
        const bool branch_taken_0x233124 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x233128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233124u;
        // 0x233128: 0x3c060035  lui         $a2, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233124) {
            ctx->pc = 0x233180u;
            goto label_233180;
        }
    }
    ctx->pc = 0x23312Cu;
    // 0x23312c: 0x8f90a04c  lw          $s0, -0x5FB4($gp)
    ctx->pc = 0x23312cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942796)));
    // 0x233130: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x233130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x233134: 0x8f82a048  lw          $v0, -0x5FB8($gp)
    ctx->pc = 0x233134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942792)));
    // 0x233138: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x233138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x23313c: 0x24060107  addiu       $a2, $zero, 0x107
    ctx->pc = 0x23313cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
    // 0x233140: 0x240700ad  addiu       $a3, $zero, 0xAD
    ctx->pc = 0x233140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
    // 0x233144: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x233144u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x233148: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x233148u;
    SET_GPR_U32(ctx, 31, 0x233150u);
    ctx->pc = 0x23314Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233148u;
    // 0x23314c: 0x24082040  addiu       $t0, $zero, 0x2040 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x233148u, 0x233150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233150u;
label_233150:
    // 0x233150: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x233150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x233154: 0x9388a02c  lbu         $t0, -0x5FD4($gp)
    ctx->pc = 0x233154u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
    // 0x233158: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x233158u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x23315c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x23315cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x233160: 0x35088000  ori         $t0, $t0, 0x8000
    ctx->pc = 0x233160u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32768);
    // 0x233164: 0x24060107  addiu       $a2, $zero, 0x107
    ctx->pc = 0x233164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
    // 0x233168: 0x2607004a  addiu       $a3, $s0, 0x4A
    ctx->pc = 0x233168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 74));
    // 0x23316c: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x23316Cu;
    SET_GPR_U32(ctx, 31, 0x233174u);
    ctx->pc = 0x233170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23316Cu;
    // 0x233170: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x23316Cu, 0x233174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233174u;
label_233174:
    // 0x233174: 0x97c40004  lhu         $a0, 0x4($fp)
    ctx->pc = 0x233174u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x233178: 0x10910008  beq         $a0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x233178u;
    {
        const bool branch_taken_0x233178 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x23317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233178u;
        // 0x23317c: 0x3c060035  lui         $a2, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233178) {
            ctx->pc = 0x23319Cu;
            goto label_23319c;
        }
    }
    ctx->pc = 0x233180u;
label_233180:
    // 0x233180: 0x3c124040  lui         $s2, 0x4040
    ctx->pc = 0x233180u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16448 << 16));
    // 0x233184: 0x8cc33a30  lw          $v1, 0x3A30($a2)
    ctx->pc = 0x233184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 14896)));
    // 0x233188: 0x3c022020  lui         $v0, 0x2020
    ctx->pc = 0x233188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8224 << 16));
    // 0x23318c: 0x36524080  ori         $s2, $s2, 0x4080
    ctx->pc = 0x23318cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)16512);
    // 0x233190: 0x34422040  ori         $v0, $v0, 0x2040
    ctx->pc = 0x233190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8256);
    // 0x233194: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x233194u;
    {
        const bool branch_taken_0x233194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233194u;
        // 0x233198: 0x43900b  movn        $s2, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233194) {
            ctx->pc = 0x2331A4u;
            goto label_2331a4;
        }
    }
    ctx->pc = 0x23319Cu;
label_23319c:
    // 0x23319c: 0x3c126e6e  lui         $s2, 0x6E6E
    ctx->pc = 0x23319cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)28270 << 16));
    // 0x2331a0: 0x36526e80  ori         $s2, $s2, 0x6E80
    ctx->pc = 0x2331a0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)28288);
label_2331a4:
    // 0x2331a4: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x2331a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2331a8: 0x24022040  addiu       $v0, $zero, 0x2040
    ctx->pc = 0x2331a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8256));
    // 0x2331ac: 0x24100080  addiu       $s0, $zero, 0x80
    ctx->pc = 0x2331acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2331b0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2331b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2331b4: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x2331b4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x2331b8: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x2331b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2331bc: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2331bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2331c0: 0x24060107  addiu       $a2, $zero, 0x107
    ctx->pc = 0x2331c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
    // 0x2331c4: 0x240700ad  addiu       $a3, $zero, 0xAD
    ctx->pc = 0x2331c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
    // 0x2331c8: 0xc08bb46  jal         func_22ED18
    ctx->pc = 0x2331C8u;
    SET_GPR_U32(ctx, 31, 0x2331D0u);
    ctx->pc = 0x2331CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2331C8u;
    // 0x2331cc: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ED18u, 0x2331C8u, 0x2331D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2331D0u;
label_2331d0:
    // 0x2331d0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2331d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2331d4: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x2331d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2331d8: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x2331d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
    // 0x2331dc: 0x24e42c18  addiu       $a0, $a3, 0x2C18
    ctx->pc = 0x2331dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 11288));
    // 0x2331e0: 0x24150042  addiu       $s5, $zero, 0x42
    ctx->pc = 0x2331e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x2331e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2331e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2331e8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2331e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2331ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2331ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2331f0: 0x24130040  addiu       $s3, $zero, 0x40
    ctx->pc = 0x2331f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2331f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2331f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2331f8: 0x8c51066c  lw          $s1, 0x66C($v0)
    ctx->pc = 0x2331f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1644)));
    // 0x2331fc: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x2331FCu;
    SET_GPR_U32(ctx, 31, 0x233204u);
    ctx->pc = 0x233200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2331FCu;
    // 0x233200: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x2331FCu, 0x233204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233204u;
label_233204:
    // 0x233204: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x233204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x233208: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x233208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23320c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x23320cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x233210: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x233210u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233214: 0x417c2  srl         $v0, $a0, 31
    ctx->pc = 0x233214u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x233218: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x233218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x23321c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x23321cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x233220: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x233220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233224: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x233224u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x233228: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x233228u;
    SET_GPR_U32(ctx, 31, 0x233230u);
    ctx->pc = 0x23322Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233228u;
    // 0x23322c: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x233228u, 0x233230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233230u;
label_233230:
    // 0x233230: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x233230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x233234: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x233234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x233238: 0x24512a00  addiu       $s1, $v0, 0x2A00
    ctx->pc = 0x233238u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 10752));
    // 0x23323c: 0x247090fe  addiu       $s0, $v1, -0x6F02
    ctx->pc = 0x23323cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938878));
label_233240:
    // 0x233240: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x233240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x233244: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x233244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233248: 0x24060107  addiu       $a2, $zero, 0x107
    ctx->pc = 0x233248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
    // 0x23324c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23324cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233250: 0xc0ae226  jal         func_2B8898
    ctx->pc = 0x233250u;
    SET_GPR_U32(ctx, 31, 0x233258u);
    ctx->pc = 0x233254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233250u;
    // 0x233254: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8898u, 0x233250u, 0x233258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233258u;
label_233258:
    // 0x233258: 0x8f86a048  lw          $a2, -0x5FB8($gp)
    ctx->pc = 0x233258u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942792)));
    // 0x23325c: 0x8f82b75c  lw          $v0, -0x48A4($gp)
    ctx->pc = 0x23325cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948700)));
    // 0x233260: 0xd41821  addu        $v1, $a2, $s4
    ctx->pc = 0x233260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x233264: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x233264u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x233268: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x233268u;
    {
        const bool branch_taken_0x233268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233268u;
        // 0x23326c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233268) {
            ctx->pc = 0x2332B8u;
            goto label_2332b8;
        }
    }
    ctx->pc = 0x233270u;
    // 0x233270: 0xafb50030  sw          $s5, 0x30($sp)
    ctx->pc = 0x233270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 21));
    // 0x233274: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x233274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x233278: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x233278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23327c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x23327cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x233280: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x233280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x233284: 0xafb30034  sw          $s3, 0x34($sp)
    ctx->pc = 0x233284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 19));
    // 0x233288: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x233288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23328c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x23328cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x233290: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x233290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x233294: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x233294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x233298: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x233298u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23329c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x23329cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2332a0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2332a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2332a4: 0x27a50034  addiu       $a1, $sp, 0x34
    ctx->pc = 0x2332a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x2332a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2332a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2332ac: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2332acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2332b0: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x2332B0u;
    SET_GPR_U32(ctx, 31, 0x2332B8u);
    ctx->pc = 0x2332B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2332B0u;
    // 0x2332b4: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x2332B0u, 0x2332B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2332B8u;
label_2332b8:
    // 0x2332b8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2332b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2332bc: 0x2a82000a  slti        $v0, $s4, 0xA
    ctx->pc = 0x2332bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2332c0: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2332C0u;
    {
        const bool branch_taken_0x2332c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2332C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2332C0u;
        // 0x2332c4: 0x2673000b  addiu       $s3, $s3, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2332c0) {
            ctx->pc = 0x233240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233240;
        }
    }
    ctx->pc = 0x2332C8u;
    // 0x2332c8: 0x97c30004  lhu         $v1, 0x4($fp)
    ctx->pc = 0x2332c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2332cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2332ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2332d0: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2332D0u;
    {
        const bool branch_taken_0x2332d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2332D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2332D0u;
        // 0x2332d4: 0x3c030035  lui         $v1, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2332d0) {
            ctx->pc = 0x23332Cu;
            goto label_23332c;
        }
    }
    ctx->pc = 0x2332D8u;
    // 0x2332d8: 0x8f82a048  lw          $v0, -0x5FB8($gp)
    ctx->pc = 0x2332d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942792)));
    // 0x2332dc: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x2332dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2332e0: 0x8f85a04c  lw          $a1, -0x5FB4($gp)
    ctx->pc = 0x2332e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942796)));
    // 0x2332e4: 0x24060108  addiu       $a2, $zero, 0x108
    ctx->pc = 0x2332e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
    // 0x2332e8: 0x9389a02c  lbu         $t1, -0x5FD4($gp)
    ctx->pc = 0x2332e8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
    // 0x2332ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2332ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2332f0: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x2332f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2332f4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2332f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2332f8: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x2332f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2332fc: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x2332fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x233300: 0x94842  srl         $t1, $t1, 1
    ctx->pc = 0x233300u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x233304: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x233304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x233308: 0x94e00  sll         $t1, $t1, 24
    ctx->pc = 0x233308u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x23330c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x23330cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x233310: 0x35290080  ori         $t1, $t1, 0x80
    ctx->pc = 0x233310u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)128);
    // 0x233314: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x233314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x233318: 0x24a7004a  addiu       $a3, $a1, 0x4A
    ctx->pc = 0x233318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 74));
    // 0x23331c: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x23331cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x233320: 0xc08bb46  jal         func_22ED18
    ctx->pc = 0x233320u;
    SET_GPR_U32(ctx, 31, 0x233328u);
    ctx->pc = 0x233324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233320u;
    // 0x233324: 0x24a50041  addiu       $a1, $a1, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ED18u, 0x233320u, 0x233328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233328u;
label_233328:
    // 0x233328: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x233328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
label_23332c:
    // 0x23332c: 0x8c623a30  lw          $v0, 0x3A30($v1)
    ctx->pc = 0x23332cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14896)));
    // 0x233330: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x233330u;
    {
        const bool branch_taken_0x233330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233330u;
        // 0x233334: 0x9382a02c  lbu         $v0, -0x5FD4($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233330) {
            ctx->pc = 0x2333ACu;
            goto label_2333ac;
        }
    }
    ctx->pc = 0x233338u;
    // 0x233338: 0x8f84b75c  lw          $a0, -0x48A4($gp)
    ctx->pc = 0x233338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948700)));
    // 0x23333c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23333cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233340: 0x8f86a048  lw          $a2, -0x5FB8($gp)
    ctx->pc = 0x233340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942792)));
    // 0x233344: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x233344u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x233348: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x233348u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x23334c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x23334cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x233350: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x233350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x233354: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x233354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x233358: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x233358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x23335c: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x23335cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x233360: 0x2884000b  slti        $a0, $a0, 0xB
    ctx->pc = 0x233360u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x233364: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x233364u;
    {
        const bool branch_taken_0x233364 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x233368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233364u;
        // 0x233368: 0x439025  or          $s2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233364) {
            ctx->pc = 0x23338Cu;
            goto label_23338c;
        }
    }
    ctx->pc = 0x23336Cu;
    // 0x23336c: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x23336cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x233370: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x233370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x233374: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x233374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x233378: 0x3c014324  lui         $at, 0x4324
    ctx->pc = 0x233378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17188 << 16));
    // 0x23337c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x23337cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x233380: 0xc08b952  jal         func_22E548
    ctx->pc = 0x233380u;
    SET_GPR_U32(ctx, 31, 0x233388u);
    ctx->pc = 0x233384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233380u;
    // 0x233384: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x233380u, 0x233388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233388u;
label_233388:
    // 0x233388: 0x8f86a048  lw          $a2, -0x5FB8($gp)
    ctx->pc = 0x233388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942792)));
label_23338c:
    // 0x23338c: 0x18c00007  blez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x23338Cu;
    {
        const bool branch_taken_0x23338c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x233390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23338Cu;
        // 0x233390: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23338c) {
            ctx->pc = 0x2333ACu;
            goto label_2333ac;
        }
    }
    ctx->pc = 0x233394u;
    // 0x233394: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x233394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x233398: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x233398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23339c: 0x3c014284  lui         $at, 0x4284
    ctx->pc = 0x23339cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17028 << 16));
    // 0x2333a0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2333a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2333a4: 0xc08b952  jal         func_22E548
    ctx->pc = 0x2333A4u;
    SET_GPR_U32(ctx, 31, 0x2333ACu);
    ctx->pc = 0x2333A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2333A4u;
    // 0x2333a8: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x2333A4u, 0x2333ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2333ACu;
label_2333ac:
    // 0x2333ac: 0xc08089c  jal         func_202270
    ctx->pc = 0x2333ACu;
    SET_GPR_U32(ctx, 31, 0x2333B4u);
    ctx->pc = 0x2333B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2333ACu;
    // 0x2333b0: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x2333ACu, 0x2333B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2333B4u;
label_2333b4:
    // 0x2333b4: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x2333b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2333b8: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x2333b8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2333bc: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x2333bcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2333c0: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x2333c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2333c4: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x2333c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2333c8: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2333c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2333cc: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x2333ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2333d0: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2333d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2333d4: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x2333d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2333d8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2333d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2333dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2333DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2333E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2333DCu;
        // 0x2333e0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2333DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2333E4u;
}
