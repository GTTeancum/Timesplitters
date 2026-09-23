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

// Function: decalRestart
// Address: 0x2a24e0 - 0x2a2658
void decalRestart_0x2a24e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("decalRestart_0x2a24e0");
#endif

    switch (ctx->pc) {
        case 0x2a2560u: goto label_2a2560;
        case 0x2a2590u: goto label_2a2590;
        case 0x2a25b8u: goto label_2a25b8;
        case 0x2a25f0u: goto label_2a25f0;
        case 0x2a25f8u: goto label_2a25f8;
        case 0x2a2620u: goto label_2a2620;
        default: break;
    }

    ctx->pc = 0x2a24e0u;

    // 0x2a24e0: 0x8f83a264  lw          $v1, -0x5D9C($gp)
    ctx->pc = 0x2a24e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x2a24e4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2a24e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a24e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a24e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a24ec: 0x24650008  addiu       $a1, $v1, 0x8
    ctx->pc = 0x2a24ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2a24f0: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x2a24f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2a24f4: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x2a24f4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2a24f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a24f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a24fc: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x2a24fcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x2a2500: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a2500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a2504: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x2a2504u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x2a2508: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a2508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a250c: 0xaf83b30c  sw          $v1, -0x4CF4($gp)
    ctx->pc = 0x2a250cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947596), GPR_U32(ctx, 3));
    // 0x2a2510: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A2510u;
    {
        const bool branch_taken_0x2a2510 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2A2514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2510u;
        // 0x2a2514: 0xaf82b308  sw          $v0, -0x4CF8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294947592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2510) {
            ctx->pc = 0x2A2520u;
            goto label_2a2520;
        }
    }
    ctx->pc = 0x2A2518u;
    // 0x2a2518: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a2518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a251c: 0xaf82b308  sw          $v0, -0x4CF8($gp)
    ctx->pc = 0x2a251cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947592), GPR_U32(ctx, 2));
label_2a2520:
    // 0x2a2520: 0x8f87b310  lw          $a3, -0x4CF0($gp)
    ctx->pc = 0x2a2520u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947600)));
    // 0x2a2524: 0x8f84b308  lw          $a0, -0x4CF8($gp)
    ctx->pc = 0x2a2524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947592)));
    // 0x2a2528: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2a2528u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a252c: 0xe4001a  div         $zero, $a3, $a0
    ctx->pc = 0x2a252cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2a2530: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A2530u;
    {
        const bool branch_taken_0x2a2530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2530) {
            ctx->pc = 0x2A2534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2530u;
            // 0x2a2534: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2538u;
            goto label_2a2538;
        }
    }
    ctx->pc = 0x2A2538u;
label_2a2538:
    // 0x2a2538: 0x1012  mflo        $v0
    ctx->pc = 0x2a2538u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2a253c: 0x2843004c  slti        $v1, $v0, 0x4C
    ctx->pc = 0x2a253cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)76) ? 1 : 0);
    // 0x2a2540: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A2540u;
    {
        const bool branch_taken_0x2a2540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2540u;
        // 0x2a2544: 0xaf82b304  sw          $v0, -0x4CFC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294947588), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2540) {
            ctx->pc = 0x2A2550u;
            goto label_2a2550;
        }
    }
    ctx->pc = 0x2A2548u;
    // 0x2a2548: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x2a2548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x2a254c: 0xaf82b304  sw          $v0, -0x4CFC($gp)
    ctx->pc = 0x2a254cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947588), GPR_U32(ctx, 2));
label_2a2550:
    // 0x2a2550: 0x1880000b  blez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A2550u;
    {
        const bool branch_taken_0x2a2550 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2A2554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2550u;
        // 0x2a2554: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2550) {
            ctx->pc = 0x2A2580u;
            goto label_2a2580;
        }
    }
    ctx->pc = 0x2A2558u;
    // 0x2a2558: 0x3c0601ff  lui         $a2, 0x1FF
    ctx->pc = 0x2a2558u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)511 << 16));
    // 0x2a255c: 0x0  nop
    ctx->pc = 0x2a255cu;
    // NOP
label_2a2560:
    // 0x2a2560: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2a2560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a2564: 0x24c39cd8  addiu       $v1, $a2, -0x6328
    ctx->pc = 0x2a2564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941912));
    // 0x2a2568: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a2568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a256c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2a256cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2a2570: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a2570u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a2574: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x2a2574u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a2578: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2A2578u;
    {
        const bool branch_taken_0x2a2578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2578) {
            ctx->pc = 0x2A2560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2560;
        }
    }
    ctx->pc = 0x2A2580u;
label_2a2580:
    // 0x2a2580: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x2a2580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x2a2584: 0x240500d3  addiu       $a1, $zero, 0xD3
    ctx->pc = 0x2a2584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
    // 0x2a2588: 0x24429d48  addiu       $v0, $v0, -0x62B8
    ctx->pc = 0x2a2588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942024));
    // 0x2a258c: 0x2442034c  addiu       $v0, $v0, 0x34C
    ctx->pc = 0x2a258cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 844));
label_2a2590:
    // 0x2a2590: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a2590u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a2594: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2a2594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2a2598: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2a2598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2a259c: 0x0  nop
    ctx->pc = 0x2a259cu;
    // NOP
    // 0x2a25a0: 0x0  nop
    ctx->pc = 0x2a25a0u;
    // NOP
    // 0x2a25a4: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A25A4u;
    {
        const bool branch_taken_0x2a25a4 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x2a25a4) {
            ctx->pc = 0x2A2590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2590;
        }
    }
    ctx->pc = 0x2A25ACu;
    // 0x2a25ac: 0x1900000d  blez        $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A25ACu;
    {
        const bool branch_taken_0x2a25ac = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x2A25B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A25ACu;
        // 0x2a25b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a25ac) {
            ctx->pc = 0x2A25E4u;
            goto label_2a25e4;
        }
    }
    ctx->pc = 0x2A25B4u;
    // 0x2a25b4: 0x8f86b300  lw          $a2, -0x4D00($gp)
    ctx->pc = 0x2a25b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947584)));
label_2a25b8:
    // 0x2a25b8: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x2a25b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x2a25bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a25bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a25c0: 0xa22018  mult        $a0, $a1, $v0
    ctx->pc = 0x2a25c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a25c4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2a25c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2a25c8: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x2a25c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2a25cc: 0xa7202a  slt         $a0, $a1, $a3
    ctx->pc = 0x2a25ccu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2a25d0: 0xac4300cc  sw          $v1, 0xCC($v0)
    ctx->pc = 0x2a25d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 3));
    // 0x2a25d4: 0xac4000d0  sw          $zero, 0xD0($v0)
    ctx->pc = 0x2a25d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 0));
    // 0x2a25d8: 0xac4000c0  sw          $zero, 0xC0($v0)
    ctx->pc = 0x2a25d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 0));
    // 0x2a25dc: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A25DCu;
    {
        const bool branch_taken_0x2a25dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A25E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A25DCu;
        // 0x2a25e0: 0xac4000c4  sw          $zero, 0xC4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a25dc) {
            ctx->pc = 0x2A25B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a25b8;
        }
    }
    ctx->pc = 0x2A25E4u;
label_2a25e4:
    // 0x2a25e4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2a25e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2a25e8: 0x2450a1f8  addiu       $s0, $v0, -0x5E08
    ctx->pc = 0x2a25e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943224));
    // 0x2a25ec: 0x26110090  addiu       $s1, $s0, 0x90
    ctx->pc = 0x2a25ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_2a25f0:
    // 0x2a25f0: 0xc08718c  jal         func_21C630
    ctx->pc = 0x2A25F0u;
    SET_GPR_U32(ctx, 31, 0x2A25F8u);
    ctx->pc = 0x2A25F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A25F0u;
    // 0x2a25f4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C630u, 0x2A25F0u, 0x2A25F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A25F8u;
label_2a25f8:
    // 0x2a25f8: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2a25f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2a25fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2a25fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2a2600: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x2a2600u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2a2604: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2a2604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2a2608: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2A2608u;
    {
        const bool branch_taken_0x2a2608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2608u;
        // 0x2a260c: 0x3c0201ff  lui         $v0, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2608) {
            ctx->pc = 0x2A25F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a25f0;
        }
    }
    ctx->pc = 0x2A2610u;
    // 0x2a2610: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2a2610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2a2614: 0x24429a40  addiu       $v0, $v0, -0x65C0
    ctx->pc = 0x2a2614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941248));
    // 0x2a2618: 0x2442026c  addiu       $v0, $v0, 0x26C
    ctx->pc = 0x2a2618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 620));
    // 0x2a261c: 0x0  nop
    ctx->pc = 0x2a261cu;
    // NOP
label_2a2620:
    // 0x2a2620: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a2620u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a2624: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2a2624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2a2628: 0x2442ffd4  addiu       $v0, $v0, -0x2C
    ctx->pc = 0x2a2628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967252));
    // 0x2a262c: 0x0  nop
    ctx->pc = 0x2a262cu;
    // NOP
    // 0x2a2630: 0x0  nop
    ctx->pc = 0x2a2630u;
    // NOP
    // 0x2a2634: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A2634u;
    {
        const bool branch_taken_0x2a2634 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x2a2634) {
            ctx->pc = 0x2A2620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2620;
        }
    }
    ctx->pc = 0x2A263Cu;
    // 0x2a263c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a263cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2640: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a2640u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2644: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a2644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2648: 0xaf80b2f8  sw          $zero, -0x4D08($gp)
    ctx->pc = 0x2a2648u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947576), GPR_U32(ctx, 0));
    // 0x2a264c: 0xaf80b2fc  sw          $zero, -0x4D04($gp)
    ctx->pc = 0x2a264cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947580), GPR_U32(ctx, 0));
    // 0x2a2650: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2650u;
        // 0x2a2654: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2658u;
}
