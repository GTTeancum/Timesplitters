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

// Function: signonAddFile
// Address: 0x2204f8 - 0x220708
void signonAddFile_0x2204f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("signonAddFile_0x2204f8");
#endif

    switch (ctx->pc) {
        case 0x220538u: goto label_220538;
        case 0x220550u: goto label_220550;
        case 0x220558u: goto label_220558;
        case 0x220560u: goto label_220560;
        case 0x22057cu: goto label_22057c;
        case 0x2205b0u: goto label_2205b0;
        case 0x2205dcu: goto label_2205dc;
        case 0x220640u: goto label_220640;
        default: break;
    }

    ctx->pc = 0x2204f8u;

    // 0x2204f8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2204f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2204fc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2204fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x220500: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x220500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x220504: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x220504u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220508: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x220508u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22050c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x22050cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x220510: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x220510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x220514: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x220514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x220518: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x220518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x22051c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22051cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220520: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x220520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x220524: 0x26910010  addiu       $s1, $s4, 0x10
    ctx->pc = 0x220524u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x220528: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x220528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x22052c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22052cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x220530: 0xc088112  jal         func_220448
    ctx->pc = 0x220530u;
    SET_GPR_U32(ctx, 31, 0x220538u);
    ctx->pc = 0x220534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220530u;
    // 0x220534: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220448u, 0x220530u, 0x220538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220538u;
label_220538:
    // 0x220538: 0x92820010  lbu         $v0, 0x10($s4)
    ctx->pc = 0x220538u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x22053c: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x22053Cu;
    {
        const bool branch_taken_0x22053c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22053Cu;
        // 0x220540: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22053c) {
            ctx->pc = 0x2206D8u;
            goto label_2206d8;
        }
    }
    ctx->pc = 0x220544u;
    // 0x220544: 0x24150b78  addiu       $s5, $zero, 0xB78
    ctx->pc = 0x220544u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2936));
    // 0x220548: 0x245ee1c8  addiu       $fp, $v0, -0x1E38
    ctx->pc = 0x220548u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959560));
    // 0x22054c: 0x27d70004  addiu       $s7, $fp, 0x4
    ctx->pc = 0x22054cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_220550:
    // 0x220550: 0xc088224  jal         func_220890
    ctx->pc = 0x220550u;
    SET_GPR_U32(ctx, 31, 0x220558u);
    ctx->pc = 0x220554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220550u;
    // 0x220554: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220890u, 0x220550u, 0x220558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220558u;
label_220558:
    // 0x220558: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x220558u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22055c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x22055cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_220560:
    // 0x220560: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x220560u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x220564: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x220564u;
    {
        const bool branch_taken_0x220564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220564u;
        // 0x220568: 0x2151018  mult        $v0, $s0, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x220564) {
            ctx->pc = 0x2205A8u;
            goto label_2205a8;
        }
    }
    ctx->pc = 0x22056Cu;
    // 0x22056c: 0x8f849dd8  lw          $a0, -0x6228($gp)
    ctx->pc = 0x22056cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x220570: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x220570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220574: 0xc0b9786  jal         func_2E5E18
    ctx->pc = 0x220574u;
    SET_GPR_U32(ctx, 31, 0x22057Cu);
    ctx->pc = 0x220578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220574u;
    // 0x220578: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5E18u, 0x220574u, 0x22057Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22057Cu;
label_22057c:
    // 0x22057c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22057Cu;
    {
        const bool branch_taken_0x22057c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22057c) {
            ctx->pc = 0x220580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22057Cu;
            // 0x220580: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x220560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220560;
        }
    }
    ctx->pc = 0x220584u;
    // 0x220584: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x220584u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x220588: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x220588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x22058c: 0xb71821  addu        $v1, $a1, $s7
    ctx->pc = 0x22058cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x220590: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x220590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x220594: 0x1482fff2  bne         $a0, $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x220594u;
    {
        const bool branch_taken_0x220594 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x220598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220594u;
        // 0x220598: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220594) {
            ctx->pc = 0x220560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220560;
        }
    }
    ctx->pc = 0x22059Cu;
    // 0x22059c: 0xbe1021  addu        $v0, $a1, $fp
    ctx->pc = 0x22059cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
    // 0x2205a0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2205A0u;
    {
        const bool branch_taken_0x2205a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2205A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2205A0u;
        // 0x2205a4: 0xac560000  sw          $s6, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2205a0) {
            ctx->pc = 0x2206B8u;
            goto label_2206b8;
        }
    }
    ctx->pc = 0x2205A8u;
label_2205a8:
    // 0x2205a8: 0xc088090  jal         func_220240
    ctx->pc = 0x2205A8u;
    SET_GPR_U32(ctx, 31, 0x2205B0u);
    ctx->pc = 0x220240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220240u, 0x2205A8u, 0x2205B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2205B0u;
label_2205b0:
    // 0x2205b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2205b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2205b4: 0x6400040  bltz        $s2, . + 4 + (0x40 << 2)
    ctx->pc = 0x2205B4u;
    {
        const bool branch_taken_0x2205b4 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2205B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2205B4u;
        // 0x2205b8: 0x2552018  mult        $a0, $s2, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2205b4) {
            ctx->pc = 0x2206B8u;
            goto label_2206b8;
        }
    }
    ctx->pc = 0x2205BCu;
    // 0x2205bc: 0x8f839dd8  lw          $v1, -0x6228($gp)
    ctx->pc = 0x2205bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x2205c0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2205c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2205c4: 0x2241025  or          $v0, $s1, $a0
    ctx->pc = 0x2205c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x2205c8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2205c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2205cc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2205CCu;
    {
        const bool branch_taken_0x2205cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2205D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2205CCu;
        // 0x2205d0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2205cc) {
            ctx->pc = 0x220638u;
            goto label_220638;
        }
    }
    ctx->pc = 0x2205D4u;
    // 0x2205d4: 0x26220b60  addiu       $v0, $s1, 0xB60
    ctx->pc = 0x2205d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2912));
    // 0x2205d8: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x2205d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_2205dc:
    // 0x2205dc: 0x68c50007  ldl         $a1, 0x7($a2)
    ctx->pc = 0x2205dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2205e0: 0x6cc50000  ldr         $a1, 0x0($a2)
    ctx->pc = 0x2205e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2205e4: 0x68c7000f  ldl         $a3, 0xF($a2)
    ctx->pc = 0x2205e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2205e8: 0x6cc70008  ldr         $a3, 0x8($a2)
    ctx->pc = 0x2205e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2205ec: 0x68c80017  ldl         $t0, 0x17($a2)
    ctx->pc = 0x2205ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2205f0: 0x6cc80010  ldr         $t0, 0x10($a2)
    ctx->pc = 0x2205f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2205f4: 0x68c9001f  ldl         $t1, 0x1F($a2)
    ctx->pc = 0x2205f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2205f8: 0x6cc90018  ldr         $t1, 0x18($a2)
    ctx->pc = 0x2205f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2205fc: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x2205fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x220600: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x220600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x220604: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x220604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x220608: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x220608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22060c: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x22060cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x220610: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x220610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x220614: 0xb089001f  sdl         $t1, 0x1F($a0)
    ctx->pc = 0x220614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x220618: 0xb4890018  sdr         $t1, 0x18($a0)
    ctx->pc = 0x220618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22061c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x22061cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x220620: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x220620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x220624: 0x0  nop
    ctx->pc = 0x220624u;
    // NOP
    // 0x220628: 0x14c2ffec  bne         $a2, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x220628u;
    {
        const bool branch_taken_0x220628 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x220628) {
            ctx->pc = 0x2205DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2205dc;
        }
    }
    ctx->pc = 0x220630u;
    // 0x220630: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x220630u;
    {
        const bool branch_taken_0x220630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220630) {
            ctx->pc = 0x220674u;
            goto label_220674;
        }
    }
    ctx->pc = 0x220638u;
label_220638:
    // 0x220638: 0x26220b60  addiu       $v0, $s1, 0xB60
    ctx->pc = 0x220638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2912));
    // 0x22063c: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x22063cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_220640:
    // 0x220640: 0xdcc50000  ld          $a1, 0x0($a2)
    ctx->pc = 0x220640u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x220644: 0xdcc70008  ld          $a3, 0x8($a2)
    ctx->pc = 0x220644u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x220648: 0xdcc80010  ld          $t0, 0x10($a2)
    ctx->pc = 0x220648u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x22064c: 0xdcc90018  ld          $t1, 0x18($a2)
    ctx->pc = 0x22064cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x220650: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x220650u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x220654: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x220654u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x220658: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x220658u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x22065c: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x22065cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x220660: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x220660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x220664: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x220664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x220668: 0x0  nop
    ctx->pc = 0x220668u;
    // NOP
    // 0x22066c: 0x14c2fff4  bne         $a2, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x22066Cu;
    {
        const bool branch_taken_0x22066c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x22066c) {
            ctx->pc = 0x220640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220640;
        }
    }
    ctx->pc = 0x220674u;
label_220674:
    // 0x220674: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x220674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x220678: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x220678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x22067c: 0x68c5000f  ldl         $a1, 0xF($a2)
    ctx->pc = 0x22067cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x220680: 0x6cc50008  ldr         $a1, 0x8($a2)
    ctx->pc = 0x220680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x220684: 0x68c70017  ldl         $a3, 0x17($a2)
    ctx->pc = 0x220684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x220688: 0x6cc70010  ldr         $a3, 0x10($a2)
    ctx->pc = 0x220688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x22068c: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x22068cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x220690: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x220690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x220694: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x220694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x220698: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x220698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22069c: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x22069cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2206a0: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x2206a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2206a4: 0x771021  addu        $v0, $v1, $s7
    ctx->pc = 0x2206a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x2206a8: 0x7e2021  addu        $a0, $v1, $fp
    ctx->pc = 0x2206a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x2206ac: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x2206acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2206b0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2206b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2206b4: 0xac960000  sw          $s6, 0x0($a0)
    ctx->pc = 0x2206b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 22));
label_2206b8:
    // 0x2206b8: 0x2a620010  slti        $v0, $s3, 0x10
    ctx->pc = 0x2206b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2206bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2206BCu;
    {
        const bool branch_taken_0x2206bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2206C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2206BCu;
        // 0x2206c0: 0x2751018  mult        $v0, $s3, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2206bc) {
            ctx->pc = 0x2206D8u;
            goto label_2206d8;
        }
    }
    ctx->pc = 0x2206C4u;
    // 0x2206c4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2206c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2206c8: 0x2828821  addu        $s1, $s4, $v0
    ctx->pc = 0x2206c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2206cc: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x2206ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2206d0: 0x1460ff9f  bnez        $v1, . + 4 + (-0x61 << 2)
    ctx->pc = 0x2206D0u;
    {
        const bool branch_taken_0x2206d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2206d0) {
            ctx->pc = 0x220550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220550;
        }
    }
    ctx->pc = 0x2206D8u;
label_2206d8:
    // 0x2206d8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2206d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2206dc: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2206dcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2206e0: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2206e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2206e4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2206e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2206e8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2206e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2206ec: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2206ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2206f0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2206f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2206f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2206f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2206f8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2206f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2206fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2206fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220700: 0x3e00008  jr          $ra
    ctx->pc = 0x220700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220700u;
        // 0x220704: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220708u;
}
