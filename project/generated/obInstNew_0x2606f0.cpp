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

// Function: obInstNew
// Address: 0x2606f0 - 0x260914
void obInstNew_0x2606f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("obInstNew_0x2606f0");
#endif

    switch (ctx->pc) {
        case 0x260724u: goto label_260724;
        case 0x260770u: goto label_260770;
        case 0x260830u: goto label_260830;
        case 0x2608c0u: goto label_2608c0;
        case 0x2608e8u: goto label_2608e8;
        default: break;
    }

    ctx->pc = 0x2606f0u;

    // 0x2606f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2606f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2606f4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2606f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2606f8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2606f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2606fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2606fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260700: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x260700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x260704: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x260704u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260708: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x260708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x26070c: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x26070cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x260710: 0x8ce20024  lw          $v0, 0x24($a3)
    ctx->pc = 0x260710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x260714: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x260714u;
    {
        const bool branch_taken_0x260714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x260718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260714u;
        // 0x260718: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260714) {
            ctx->pc = 0x260728u;
            goto label_260728;
        }
    }
    ctx->pc = 0x26071Cu;
    // 0x26071c: 0xc097af8  jal         func_25EBE0
    ctx->pc = 0x26071Cu;
    SET_GPR_U32(ctx, 31, 0x260724u);
    ctx->pc = 0x260720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26071Cu;
    // 0x260720: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EBE0u, 0x26071Cu, 0x260724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260724u;
label_260724:
    // 0x260724: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x260724u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_260728:
    // 0x260728: 0x8f82a2e0  lw          $v0, -0x5D20($gp)
    ctx->pc = 0x260728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943456)));
    // 0x26072c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26072Cu;
    {
        const bool branch_taken_0x26072c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x260730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26072Cu;
        // 0x260730: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26072c) {
            ctx->pc = 0x260754u;
            goto label_260754;
        }
    }
    ctx->pc = 0x260734u;
    // 0x260734: 0x8f83a2dc  lw          $v1, -0x5D24($gp)
    ctx->pc = 0x260734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943452)));
    // 0x260738: 0x24020148  addiu       $v0, $zero, 0x148
    ctx->pc = 0x260738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x26073c: 0x8f84a294  lw          $a0, -0x5D6C($gp)
    ctx->pc = 0x26073cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943380)));
    // 0x260740: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x260740u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x260744: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x260744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x260748: 0xaf85a2dc  sw          $a1, -0x5D24($gp)
    ctx->pc = 0x260748u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943452), GPR_U32(ctx, 5));
    // 0x26074c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x26074Cu;
    {
        const bool branch_taken_0x26074c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26074Cu;
        // 0x260750: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26074c) {
            ctx->pc = 0x2607C4u;
            goto label_2607c4;
        }
    }
    ctx->pc = 0x260754u;
label_260754:
    // 0x260754: 0x8f85a2dc  lw          $a1, -0x5D24($gp)
    ctx->pc = 0x260754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943452)));
    // 0x260758: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x260758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26075c: 0x18a0000d  blez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x26075Cu;
    {
        const bool branch_taken_0x26075c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x260760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26075Cu;
        // 0x260760: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26075c) {
            ctx->pc = 0x260794u;
            goto label_260794;
        }
    }
    ctx->pc = 0x260764u;
    // 0x260764: 0x8f85a294  lw          $a1, -0x5D6C($gp)
    ctx->pc = 0x260764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943380)));
    // 0x260768: 0x24030148  addiu       $v1, $zero, 0x148
    ctx->pc = 0x260768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x26076c: 0x0  nop
    ctx->pc = 0x26076cu;
    // NOP
label_260770:
    // 0x260770: 0x831018  mult        $v0, $a0, $v1
    ctx->pc = 0x260770u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x260774: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x260774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x260778: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x260778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26077c: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x26077cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x260780: 0x1600000e  bnez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x260780u;
    {
        const bool branch_taken_0x260780 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x260784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260780u;
        // 0x260784: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260780) {
            ctx->pc = 0x2607BCu;
            goto label_2607bc;
        }
    }
    ctx->pc = 0x260788u;
    // 0x260788: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x260788u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x26078c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x26078Cu;
    {
        const bool branch_taken_0x26078c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x260790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26078Cu;
        // 0x260790: 0x24030148  addiu       $v1, $zero, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26078c) {
            ctx->pc = 0x260770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_260770;
        }
    }
    ctx->pc = 0x260794u;
label_260794:
    // 0x260794: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x260794u;
    {
        const bool branch_taken_0x260794 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x260798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260794u;
        // 0x260798: 0x2502ffff  addiu       $v0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260794) {
            ctx->pc = 0x2607C0u;
            goto label_2607c0;
        }
    }
    ctx->pc = 0x26079Cu;
    // 0x26079c: 0x24020148  addiu       $v0, $zero, 0x148
    ctx->pc = 0x26079cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x2607a0: 0x8f83a294  lw          $v1, -0x5D6C($gp)
    ctx->pc = 0x2607a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943380)));
    // 0x2607a4: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x2607a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2607a8: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x2607a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2607ac: 0xaf85a2dc  sw          $a1, -0x5D24($gp)
    ctx->pc = 0x2607acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943452), GPR_U32(ctx, 5));
    // 0x2607b0: 0xaf80a2e0  sw          $zero, -0x5D20($gp)
    ctx->pc = 0x2607b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943456), GPR_U32(ctx, 0));
    // 0x2607b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2607B4u;
    {
        const bool branch_taken_0x2607b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2607B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2607B4u;
        // 0x2607b8: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2607b4) {
            ctx->pc = 0x2607C4u;
            goto label_2607c4;
        }
    }
    ctx->pc = 0x2607BCu;
label_2607bc:
    // 0x2607bc: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x2607bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_2607c0:
    // 0x2607c0: 0xaf82a2e0  sw          $v0, -0x5D20($gp)
    ctx->pc = 0x2607c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943456), GPR_U32(ctx, 2));
label_2607c4:
    // 0x2607c4: 0xae1200f4  sw          $s2, 0xF4($s0)
    ctx->pc = 0x2607c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 18));
    // 0x2607c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2607c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2607cc: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x2607ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x2607d0: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x2607d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x2607d4: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x2607d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x2607d8: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x2607d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x2607dc: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x2607dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x2607e0: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x2607e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x2607e4: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x2607e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x2607e8: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x2607e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x2607ec: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x2607ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x2607f0: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x2607f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x2607f4: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x2607f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x2607f8: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x2607f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
    // 0x2607fc: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x2607fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    // 0x260800: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x260800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x260804: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x260804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x260808: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x260808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x26080c: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x26080cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x260810: 0xae00010c  sw          $zero, 0x10C($s0)
    ctx->pc = 0x260810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
    // 0x260814: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x260814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x260818: 0xae000114  sw          $zero, 0x114($s0)
    ctx->pc = 0x260818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
    // 0x26081c: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x26081cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x260820: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x260820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
    // 0x260824: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x260824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
    // 0x260828: 0xc098246  jal         func_260918
    ctx->pc = 0x260828u;
    SET_GPR_U32(ctx, 31, 0x260830u);
    ctx->pc = 0x26082Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260828u;
    // 0x26082c: 0xae070000  sw          $a3, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260918u, 0x260828u, 0x260830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260830u;
label_260830:
    // 0x260830: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x260830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x260834: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x260834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x260838: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x260838u;
    {
        const bool branch_taken_0x260838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260838u;
        // 0x26083c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260838) {
            ctx->pc = 0x260850u;
            goto label_260850;
        }
    }
    ctx->pc = 0x260840u;
    // 0x260840: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x260840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x260844: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x260844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x260848: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x260848u;
    {
        const bool branch_taken_0x260848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x260848) {
            ctx->pc = 0x26084Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260848u;
            // 0x26084c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260860u;
            goto label_260860;
        }
    }
    ctx->pc = 0x260850u;
label_260850:
    // 0x260850: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x260850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x260854: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x260854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x260858: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x260858u;
    {
        const bool branch_taken_0x260858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260858u;
        // 0x26085c: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260858) {
            ctx->pc = 0x2608A0u;
            goto label_2608a0;
        }
    }
    ctx->pc = 0x260860u;
label_260860:
    // 0x260860: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x260860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x260864: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x260864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x260868: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x260868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26086c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x26086cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x260870: 0x321c0  sll         $a0, $v1, 7
    ctx->pc = 0x260870u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x260874: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x260874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x260878: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x260878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x26087c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x26087cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x260880: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x260880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x260884: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x260884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x260888: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x260888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26088c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x26088cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x260890: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x260890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x260894: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x260894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x260898: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x260898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26089c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x26089cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_2608a0:
    // 0x2608a0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2608a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2608a4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2608a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2608a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2608A8u;
    {
        const bool branch_taken_0x2608a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2608ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2608A8u;
        // 0x2608ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2608a8) {
            ctx->pc = 0x2608C8u;
            goto label_2608c8;
        }
    }
    ctx->pc = 0x2608B0u;
    // 0x2608b0: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x2608b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2608b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2608b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2608b8: 0xc098250  jal         func_260940
    ctx->pc = 0x2608B8u;
    SET_GPR_U32(ctx, 31, 0x2608C0u);
    ctx->pc = 0x2608BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2608B8u;
    // 0x2608bc: 0x2cc60001  sltiu       $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x260940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260940u, 0x2608B8u, 0x2608C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2608C0u;
label_2608c0:
    // 0x2608c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2608C0u;
    {
        const bool branch_taken_0x2608c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2608C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2608C0u;
        // 0x2608c4: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2608c0) {
            ctx->pc = 0x2608D4u;
            goto label_2608d4;
        }
    }
    ctx->pc = 0x2608C8u;
label_2608c8:
    // 0x2608c8: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2608c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x2608cc: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x2608ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x2608d0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2608d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2608d4:
    // 0x2608d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2608d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2608d8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2608D8u;
    {
        const bool branch_taken_0x2608d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2608DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2608D8u;
        // 0x2608dc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2608d8) {
            ctx->pc = 0x2608ECu;
            goto label_2608ec;
        }
    }
    ctx->pc = 0x2608E0u;
    // 0x2608e0: 0xc0969c8  jal         func_25A720
    ctx->pc = 0x2608E0u;
    SET_GPR_U32(ctx, 31, 0x2608E8u);
    ctx->pc = 0x2608E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2608E0u;
    // 0x2608e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A720u, 0x2608E0u, 0x2608E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2608E8u;
label_2608e8:
    // 0x2608e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2608e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2608ec:
    // 0x2608ec: 0xa6000124  sh          $zero, 0x124($s0)
    ctx->pc = 0x2608ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 292), (uint16_t)GPR_U32(ctx, 0));
    // 0x2608f0: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x2608f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
    // 0x2608f4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2608f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2608f8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2608f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x2608fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2608fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x260900: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x260900u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x260904: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x260904u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x260908: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x260908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26090c: 0x3e00008  jr          $ra
    ctx->pc = 0x26090Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26090Cu;
        // 0x260910: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26090Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260914u;
}
