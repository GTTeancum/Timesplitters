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

// Function: customcontrols_makemenu
// Address: 0x20ece0 - 0x20eef0
void customcontrols_makemenu_0x20ece0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("customcontrols_makemenu_0x20ece0");
#endif

    switch (ctx->pc) {
        case 0x20ed20u: goto label_20ed20;
        case 0x20ed54u: goto label_20ed54;
        case 0x20ee08u: goto label_20ee08;
        default: break;
    }

    ctx->pc = 0x20ece0u;

    // 0x20ece0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20ece0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x20ece4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x20ece4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x20ece8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20ece8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20ecec: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x20ececu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x20ecf0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x20ecf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20ecf4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x20ecf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x20ecf8: 0x2451a318  addiu       $s1, $v0, -0x5CE8
    ctx->pc = 0x20ecf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943512));
    // 0x20ecfc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x20ecfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x20ed00: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x20ed00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x20ed04: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x20ed04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x20ed08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20ed08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20ed0c: 0x96240008  lhu         $a0, 0x8($s1)
    ctx->pc = 0x20ed0cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x32A320u));
    // 0x20ed10: 0x10830065  beq         $a0, $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x20ED10u;
    {
        const bool branch_taken_0x20ed10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x20ED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED10u;
        // 0x20ed14: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed10) {
            ctx->pc = 0x20EEA8u;
            goto label_20eea8;
        }
    }
    ctx->pc = 0x20ED18u;
    // 0x20ed18: 0x3c150033  lui         $s5, 0x33
    ctx->pc = 0x20ed18u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)51 << 16));
    // 0x20ed1c: 0x3c140033  lui         $s4, 0x33
    ctx->pc = 0x20ed1cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
label_20ed20:
    // 0x20ed20: 0x10800059  beqz        $a0, . + 4 + (0x59 << 2)
    ctx->pc = 0x20ED20u;
    {
        const bool branch_taken_0x20ed20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED20u;
        // 0x20ed24: 0x24030028  addiu       $v1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed20) {
            ctx->pc = 0x20EE88u;
            goto label_20ee88;
        }
    }
    ctx->pc = 0x20ED28u;
    // 0x20ed28: 0x3c1301fb  lui         $s3, 0x1FB
    ctx->pc = 0x20ed28u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)507 << 16));
    // 0x20ed2c: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x20ed2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x20ed30: 0x266434e0  addiu       $a0, $s3, 0x34E0
    ctx->pc = 0x20ed30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 13536));
    // 0x20ed34: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20ed34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20ed38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20ed38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ed3c: 0xa622000a  sh          $v0, 0xA($s1)
    ctx->pc = 0x20ed3cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x20ed40: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x20ed40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x20ed44: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x20ed44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20ed48: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x20ed48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
    // 0x20ed4c: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x20ED4Cu;
    SET_GPR_U32(ctx, 31, 0x20ED54u);
    ctx->pc = 0x20ED50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ED4Cu;
    // 0x20ed50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x20ED4Cu, 0x20ED54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ED54u;
label_20ed54:
    // 0x20ed54: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x20ed54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x20ed58: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x20ed58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x20ed5c: 0x2463a578  addiu       $v1, $v1, -0x5A88
    ctx->pc = 0x20ed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944120));
    // 0x20ed60: 0x8f84b234  lw          $a0, -0x4DCC($gp)
    ctx->pc = 0x20ed60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x20ed64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20ed68: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20ed68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20ed6c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x20ed6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x20ed70: 0x28a20012  slti        $v0, $a1, 0x12
    ctx->pc = 0x20ed70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x20ed74: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x20ed74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20ed78: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x20ED78u;
    {
        const bool branch_taken_0x20ed78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED78u;
        // 0x20ed7c: 0x8c84001c  lw          $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed78) {
            ctx->pc = 0x20EDDCu;
            goto label_20eddc;
        }
    }
    ctx->pc = 0x20ED80u;
    // 0x20ed80: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x20ed80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x20ed84: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x20ED84u;
    {
        const bool branch_taken_0x20ed84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20ED88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED84u;
        // 0x20ed88: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed84) {
            ctx->pc = 0x20EDE0u;
            goto label_20ede0;
        }
    }
    ctx->pc = 0x20ED8Cu;
    // 0x20ed8c: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x20ed8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x20ed90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20ED90u;
    {
        const bool branch_taken_0x20ed90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED90u;
        // 0x20ed94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed90) {
            ctx->pc = 0x20EDA0u;
            goto label_20eda0;
        }
    }
    ctx->pc = 0x20ED98u;
    // 0x20ed98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20ED98u;
    {
        const bool branch_taken_0x20ed98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED98u;
        // 0x20ed9c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed98) {
            ctx->pc = 0x20EDA4u;
            goto label_20eda4;
        }
    }
    ctx->pc = 0x20EDA0u;
label_20eda0:
    // 0x20eda0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x20eda0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_20eda4:
    // 0x20eda4: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x20eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x20eda8: 0x266334e0  addiu       $v1, $s3, 0x34E0
    ctx->pc = 0x20eda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 13536));
    // 0x20edac: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x20edacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20edb0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x20edb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x20edb4: 0x2484a238  addiu       $a0, $a0, -0x5DC8
    ctx->pc = 0x20edb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943288));
    // 0x20edb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20edb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20edbc: 0x26290020  addiu       $t1, $s1, 0x20
    ctx->pc = 0x20edbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x20edc0: 0x3c0b0021  lui         $t3, 0x21
    ctx->pc = 0x20edc0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)33 << 16));
    // 0x20edc4: 0x26480001  addiu       $t0, $s2, 0x1
    ctx->pc = 0x20edc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x20edc8: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x20edc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20edcc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x20edccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20edd0: 0xaca60008  sw          $a2, 0x8($a1)
    ctx->pc = 0x20edd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
    // 0x20edd4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x20EDD4u;
    {
        const bool branch_taken_0x20edd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDD4u;
        // 0x20edd8: 0xac640010  sw          $a0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20edd4) {
            ctx->pc = 0x20EE68u;
            goto label_20ee68;
        }
    }
    ctx->pc = 0x20EDDCu;
label_20eddc:
    // 0x20eddc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x20eddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_20ede0:
    // 0x20ede0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20ede0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ede4: 0x8c43a2c8  lw          $v1, -0x5D38($v0)
    ctx->pc = 0x20ede4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943432)));
    // 0x20ede8: 0x4600010  bltz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x20EDE8u;
    {
        const bool branch_taken_0x20ede8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x20EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDE8u;
        // 0x20edec: 0x2445a2c8  addiu       $a1, $v0, -0x5D38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ede8) {
            ctx->pc = 0x20EE2Cu;
            goto label_20ee2c;
        }
    }
    ctx->pc = 0x20EDF0u;
    // 0x20edf0: 0x1064000e  beq         $v1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x20EDF0u;
    {
        const bool branch_taken_0x20edf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x20EDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDF0u;
        // 0x20edf4: 0x26290020  addiu       $t1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20edf0) {
            ctx->pc = 0x20EE2Cu;
            goto label_20ee2c;
        }
    }
    ctx->pc = 0x20EDF8u;
    // 0x20edf8: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x20edf8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x20edfc: 0x3c0b0021  lui         $t3, 0x21
    ctx->pc = 0x20edfcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)33 << 16));
    // 0x20ee00: 0x26480001  addiu       $t0, $s2, 0x1
    ctx->pc = 0x20ee00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x20ee04: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x20ee04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_20ee08:
    // 0x20ee08: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x20ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x20ee0c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20ee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20ee10: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20ee10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20ee14: 0x442000a  bltzl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20EE14u;
    {
        const bool branch_taken_0x20ee14 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20ee14) {
            ctx->pc = 0x20EE18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20EE14u;
            // 0x20ee18: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20EE40u;
            goto label_20ee40;
        }
    }
    ctx->pc = 0x20EE1Cu;
    // 0x20ee1c: 0x5444fffa  bnel        $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20EE1Cu;
    {
        const bool branch_taken_0x20ee1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x20ee1c) {
            ctx->pc = 0x20EE20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20EE1Cu;
            // 0x20ee20: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20EE08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ee08;
        }
    }
    ctx->pc = 0x20EE24u;
    // 0x20ee24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20EE24u;
    {
        const bool branch_taken_0x20ee24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE24u;
        // 0x20ee28: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ee24) {
            ctx->pc = 0x20EE40u;
            goto label_20ee40;
        }
    }
    ctx->pc = 0x20EE2Cu;
label_20ee2c:
    // 0x20ee2c: 0x26290020  addiu       $t1, $s1, 0x20
    ctx->pc = 0x20ee2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x20ee30: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x20ee30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x20ee34: 0x3c0b0021  lui         $t3, 0x21
    ctx->pc = 0x20ee34u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)33 << 16));
    // 0x20ee38: 0x26480001  addiu       $t0, $s2, 0x1
    ctx->pc = 0x20ee38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x20ee3c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x20ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_20ee40:
    // 0x20ee40: 0x266334e0  addiu       $v1, $s3, 0x34E0
    ctx->pc = 0x20ee40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 13536));
    // 0x20ee44: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x20ee44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20ee48: 0x24c6a250  addiu       $a2, $a2, -0x5DB0
    ctx->pc = 0x20ee48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943312));
    // 0x20ee4c: 0x2407000d  addiu       $a3, $zero, 0xD
    ctx->pc = 0x20ee4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x20ee50: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x20ee50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20ee54: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x20ee54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20ee58: 0xac8a0000  sw          $t2, 0x0($a0)
    ctx->pc = 0x20ee58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 10));
    // 0x20ee5c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x20ee5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ee60: 0xac660010  sw          $a2, 0x10($v1)
    ctx->pc = 0x20ee60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 6));
    // 0x20ee64: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x20ee64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
label_20ee68:
    // 0x20ee68: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x20ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x20ee6c: 0x266334e0  addiu       $v1, $s3, 0x34E0
    ctx->pc = 0x20ee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 13536));
    // 0x20ee70: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x20ee70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20ee74: 0x2564ec10  addiu       $a0, $t3, -0x13F0
    ctx->pc = 0x20ee74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 4294962192));
    // 0x20ee78: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x20ee78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ee7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20ee7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20ee80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20EE80u;
    {
        const bool branch_taken_0x20ee80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE80u;
        // 0x20ee84: 0xac640014  sw          $a0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ee80) {
            ctx->pc = 0x20EE8Cu;
            goto label_20ee8c;
        }
    }
    ctx->pc = 0x20EE88u;
label_20ee88:
    // 0x20ee88: 0x26290020  addiu       $t1, $s1, 0x20
    ctx->pc = 0x20ee88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_20ee8c:
    // 0x20ee8c: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x20ee8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ee90: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x20ee90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x20ee94: 0x96240008  lhu         $a0, 0x8($s1)
    ctx->pc = 0x20ee94u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x20ee98: 0x1482ffa1  bne         $a0, $v0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x20EE98u;
    {
        const bool branch_taken_0x20ee98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20EE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE98u;
        // 0x20ee9c: 0x268299f0  addiu       $v0, $s4, -0x6610 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ee98) {
            ctx->pc = 0x20ED20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ed20;
        }
    }
    ctx->pc = 0x20EEA0u;
    // 0x20eea0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20EEA0u;
    {
        const bool branch_taken_0x20eea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EEA0u;
        // 0x20eea4: 0x26a4a308  addiu       $a0, $s5, -0x5CF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294943496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eea0) {
            ctx->pc = 0x20EEB8u;
            goto label_20eeb8;
        }
    }
    ctx->pc = 0x20EEA8u;
label_20eea8:
    // 0x20eea8: 0x3c150033  lui         $s5, 0x33
    ctx->pc = 0x20eea8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)51 << 16));
    // 0x20eeac: 0x3c140033  lui         $s4, 0x33
    ctx->pc = 0x20eeacu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
    // 0x20eeb0: 0x268299f0  addiu       $v0, $s4, -0x6610
    ctx->pc = 0x20eeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941168));
    // 0x20eeb4: 0x26a4a308  addiu       $a0, $s5, -0x5CF8
    ctx->pc = 0x20eeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294943496));
label_20eeb8:
    // 0x20eeb8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x20eeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x20eebc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x20EEBCu;
    {
        const bool branch_taken_0x20eebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EEBCu;
        // 0x20eec0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eebc) {
            ctx->pc = 0x20EEC8u;
            goto label_20eec8;
        }
    }
    ctx->pc = 0x20EEC4u;
    // 0x20eec4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20eec8:
    // 0x20eec8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x20eec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20eecc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x20eeccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20eed0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x20eed0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20eed4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x20eed4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20eed8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20eed8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20eedc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x20eedcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20eee0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20eee0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20eee4: 0xa4820002  sh          $v0, 0x2($a0)
    ctx->pc = 0x20eee4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x20eee8: 0x3e00008  jr          $ra
    ctx->pc = 0x20EEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EEE8u;
        // 0x20eeec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EEE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20EEF0u;
}
