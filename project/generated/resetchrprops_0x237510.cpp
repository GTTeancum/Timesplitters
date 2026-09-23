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

// Function: resetchrprops
// Address: 0x237510 - 0x237600
void resetchrprops_0x237510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("resetchrprops_0x237510");
#endif

    switch (ctx->pc) {
        case 0x237548u: goto label_237548;
        case 0x237568u: goto label_237568;
        case 0x2375b8u: goto label_2375b8;
        case 0x2375c4u: goto label_2375c4;
        default: break;
    }

    ctx->pc = 0x237510u;

    // 0x237510: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x237510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x237514: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x237514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x237518: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x237518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23751c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23751cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237520: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x237520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x237524: 0x24521238  addiu       $s2, $v0, 0x1238
    ctx->pc = 0x237524u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4664));
    // 0x237528: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x237528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x23752c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x23752cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237530: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x237530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x237534: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x237534u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237538: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x237538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23753c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23753cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x237540: 0x48080  sll         $s0, $a0, 2
    ctx->pc = 0x237540u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x237544: 0x0  nop
    ctx->pc = 0x237544u;
    // NOP
label_237548:
    // 0x237548: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x237548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x23754c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23754cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x237550: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x237550u;
    {
        const bool branch_taken_0x237550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x237554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237550u;
        // 0x237554: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237550) {
            ctx->pc = 0x2375CCu;
            goto label_2375cc;
        }
    }
    ctx->pc = 0x237558u;
    // 0x237558: 0x24910001  addiu       $s1, $a0, 0x1
    ctx->pc = 0x237558u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x23755c: 0x2135021  addu        $t2, $s0, $s3
    ctx->pc = 0x23755cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x237560: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x237560u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237564: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x237564u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_237568:
    // 0x237568: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x237568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23756c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23756Cu;
    {
        const bool branch_taken_0x23756c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23756Cu;
        // 0x237570: 0x25260001  addiu       $a2, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23756c) {
            ctx->pc = 0x237590u;
            goto label_237590;
        }
    }
    ctx->pc = 0x237574u;
    // 0x237574: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x237574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x237578: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x237578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x23757c: 0x8c650020  lw          $a1, 0x20($v1)
    ctx->pc = 0x23757cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x237580: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x237580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x237584: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x237584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x237588: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x237588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x23758c: 0xc2480a  movz        $t1, $a2, $v0
    ctx->pc = 0x23758cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 6));
label_237590:
    // 0x237590: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x237590u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x237594: 0x501fff4  bgez        $t0, . + 4 + (-0xC << 2)
    ctx->pc = 0x237594u;
    {
        const bool branch_taken_0x237594 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x237598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237594u;
        // 0x237598: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237594) {
            ctx->pc = 0x237568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237568;
        }
    }
    ctx->pc = 0x23759Cu;
    // 0x23759c: 0x55340007  bnel        $t1, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x23759Cu;
    {
        const bool branch_taken_0x23759c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 20));
        if (branch_taken_0x23759c) {
            ctx->pc = 0x2375A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23759Cu;
            // 0x2375a0: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2375BCu;
            goto label_2375bc;
        }
    }
    ctx->pc = 0x2375A4u;
    // 0x2375a4: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x2375a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2375a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2375a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2375ac: 0x8c650020  lw          $a1, 0x20($v1)
    ctx->pc = 0x2375acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2375b0: 0xc097b6e  jal         func_25EDB8
    ctx->pc = 0x2375B0u;
    SET_GPR_U32(ctx, 31, 0x2375B8u);
    ctx->pc = 0x2375B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2375B0u;
    // 0x2375b4: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EDB8u, 0x2375B0u, 0x2375B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2375B8u;
label_2375b8:
    // 0x2375b8: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x2375b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_2375bc:
    // 0x2375bc: 0xc09a4d0  jal         func_269340
    ctx->pc = 0x2375BCu;
    SET_GPR_U32(ctx, 31, 0x2375C4u);
    ctx->pc = 0x2375C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2375BCu;
    // 0x2375c0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x2375BCu, 0x2375C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2375C4u;
label_2375c4:
    // 0x2375c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2375C4u;
    {
        const bool branch_taken_0x2375c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2375C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2375C4u;
        // 0x2375c8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2375c4) {
            ctx->pc = 0x2375D0u;
            goto label_2375d0;
        }
    }
    ctx->pc = 0x2375CCu;
label_2375cc:
    // 0x2375cc: 0x24910001  addiu       $s1, $a0, 0x1
    ctx->pc = 0x2375ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2375d0:
    // 0x2375d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2375d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2375d4: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x2375d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2375d8: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x2375D8u;
    {
        const bool branch_taken_0x2375d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2375DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2375D8u;
        // 0x2375dc: 0x48080  sll         $s0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2375d8) {
            ctx->pc = 0x237548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237548;
        }
    }
    ctx->pc = 0x2375E0u;
    // 0x2375e0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2375e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2375e4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2375e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2375e8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2375e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2375ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2375ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2375f0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2375f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2375f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2375f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2375f8: 0x8097ae6  j           func_25EB98
    ctx->pc = 0x2375F8u;
    ctx->pc = 0x2375FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2375F8u;
    // 0x2375fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EB98u;
    obResetTextures_0x25eb98(rdram, ctx, runtime); return;
    ctx->pc = 0x237600u;
}
