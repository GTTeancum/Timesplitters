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

// Function: mcardTick
// Address: 0x207ad0 - 0x208be8
void mcardTick_0x207ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcardTick_0x207ad0");
#endif

    switch (ctx->pc) {
        case 0x207b40u: goto label_207b40;
        case 0x207b9cu: goto label_207b9c;
        case 0x207bd0u: goto label_207bd0;
        case 0x207c04u: goto label_207c04;
        case 0x207d58u: goto label_207d58;
        case 0x207da8u: goto label_207da8;
        case 0x207dccu: goto label_207dcc;
        case 0x207e00u: goto label_207e00;
        case 0x207e24u: goto label_207e24;
        case 0x207e60u: goto label_207e60;
        case 0x207e84u: goto label_207e84;
        case 0x207f08u: goto label_207f08;
        case 0x207f2cu: goto label_207f2c;
        case 0x207fa4u: goto label_207fa4;
        case 0x207fc8u: goto label_207fc8;
        case 0x20805cu: goto label_20805c;
        case 0x20807cu: goto label_20807c;
        case 0x2080a0u: goto label_2080a0;
        case 0x2080c0u: goto label_2080c0;
        case 0x2080f0u: goto label_2080f0;
        case 0x208104u: goto label_208104;
        case 0x208148u: goto label_208148;
        case 0x208214u: goto label_208214;
        case 0x208238u: goto label_208238;
        case 0x20825cu: goto label_20825c;
        case 0x2082c0u: goto label_2082c0;
        case 0x2082e4u: goto label_2082e4;
        case 0x208340u: goto label_208340;
        case 0x208364u: goto label_208364;
        case 0x2083e0u: goto label_2083e0;
        case 0x208400u: goto label_208400;
        case 0x208424u: goto label_208424;
        case 0x2084a0u: goto label_2084a0;
        case 0x2084c4u: goto label_2084c4;
        case 0x208530u: goto label_208530;
        case 0x208554u: goto label_208554;
        case 0x2085ccu: goto label_2085cc;
        case 0x2085f0u: goto label_2085f0;
        case 0x208614u: goto label_208614;
        case 0x208674u: goto label_208674;
        case 0x208698u: goto label_208698;
        case 0x20872cu: goto label_20872c;
        case 0x208750u: goto label_208750;
        case 0x2087acu: goto label_2087ac;
        case 0x2087d0u: goto label_2087d0;
        case 0x208844u: goto label_208844;
        case 0x208868u: goto label_208868;
        case 0x20890cu: goto label_20890c;
        case 0x208930u: goto label_208930;
        case 0x2089acu: goto label_2089ac;
        case 0x2089d0u: goto label_2089d0;
        case 0x208a2cu: goto label_208a2c;
        case 0x208a50u: goto label_208a50;
        case 0x208abcu: goto label_208abc;
        case 0x208ae0u: goto label_208ae0;
        case 0x208b3cu: goto label_208b3c;
        case 0x208b60u: goto label_208b60;
        default: break;
    }

    ctx->pc = 0x207ad0u;

    // 0x207ad0: 0x8f839bec  lw          $v1, -0x6414($gp)
    ctx->pc = 0x207ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941676)));
    // 0x207ad4: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x207ad4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x207ad8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x207ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x207adc: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x207adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x207ae0: 0x2c620032  sltiu       $v0, $v1, 0x32
    ctx->pc = 0x207ae0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
    // 0x207ae4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x207ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x207ae8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x207ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x207aec: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x207aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x207af0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x207af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x207af4: 0x10400433  beqz        $v0, . + 4 + (0x433 << 2)
    ctx->pc = 0x207AF4u;
    {
        const bool branch_taken_0x207af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207AF4u;
        // 0x207af8: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207af4) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x207AFCu;
    // 0x207afc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x207afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x207b00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x207b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x207b04: 0x24429cc0  addiu       $v0, $v0, -0x6340
    ctx->pc = 0x207b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941888));
    // 0x207b08: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x207b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x207b0c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x207b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x207b10: 0x800008  jr          $a0
    ctx->pc = 0x207B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207B18u: goto label_207b18;
            case 0x207B8Cu: goto label_207b8c;
            case 0x207BB0u: goto label_207bb0;
            case 0x207BF4u: goto label_207bf4;
            case 0x207D38u: goto label_207d38;
            case 0x207D9Cu: goto label_207d9c;
            case 0x207DBCu: goto label_207dbc;
            case 0x207DF0u: goto label_207df0;
            case 0x207E14u: goto label_207e14;
            case 0x207E48u: goto label_207e48;
            case 0x207E74u: goto label_207e74;
            case 0x207F00u: goto label_207f00;
            case 0x207F1Cu: goto label_207f1c;
            case 0x207F90u: goto label_207f90;
            case 0x207FB8u: goto label_207fb8;
            case 0x20803Cu: goto label_20803c;
            case 0x208090u: goto label_208090;
            case 0x2081DCu: goto label_2081dc;
            case 0x20824Cu: goto label_20824c;
            case 0x2082ACu: goto label_2082ac;
            case 0x2082D4u: goto label_2082d4;
            case 0x208338u: goto label_208338;
            case 0x208354u: goto label_208354;
            case 0x2083A8u: goto label_2083a8;
            case 0x208414u: goto label_208414;
            case 0x208478u: goto label_208478;
            case 0x2084B4u: goto label_2084b4;
            case 0x208528u: goto label_208528;
            case 0x208544u: goto label_208544;
            case 0x208598u: goto label_208598;
            case 0x208604u: goto label_208604;
            case 0x20865Cu: goto label_20865c;
            case 0x208688u: goto label_208688;
            case 0x20871Cu: goto label_20871c;
            case 0x208740u: goto label_208740;
            case 0x20879Cu: goto label_20879c;
            case 0x2087C0u: goto label_2087c0;
            case 0x20883Cu: goto label_20883c;
            case 0x208858u: goto label_208858;
            case 0x2088E8u: goto label_2088e8;
            case 0x208920u: goto label_208920;
            case 0x20899Cu: goto label_20899c;
            case 0x2089C0u: goto label_2089c0;
            case 0x208A1Cu: goto label_208a1c;
            case 0x208A40u: goto label_208a40;
            case 0x208AB4u: goto label_208ab4;
            case 0x208AD0u: goto label_208ad0;
            case 0x208B28u: goto label_208b28;
            case 0x208B50u: goto label_208b50;
            case 0x208BC4u: goto label_208bc4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207B10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x207B18u;
label_207b18:
    // 0x207b18: 0x8f87b648  lw          $a3, -0x49B8($gp)
    ctx->pc = 0x207b18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948424)));
    // 0x207b1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x207b1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207b20: 0xaf809bf8  sw          $zero, -0x6408($gp)
    ctx->pc = 0x207b20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941688), GPR_U32(ctx, 0));
    // 0x207b24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207b28: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x207b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x207b2c: 0x10430098  beq         $v0, $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x207B2Cu;
    {
        const bool branch_taken_0x207b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x207B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B2Cu;
        // 0x207b30: 0xaf809bfc  sw          $zero, -0x6404($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941692), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b2c) {
            ctx->pc = 0x207D90u;
            goto label_207d90;
        }
    }
    ctx->pc = 0x207B34u;
    // 0x207b34: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x207b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207b38: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x207b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x207b3c: 0x0  nop
    ctx->pc = 0x207b3cu;
    // NOP
label_207b40:
    // 0x207b40: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x207b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x207b44: 0x14c20007  bne         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x207B44u;
    {
        const bool branch_taken_0x207b44 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x207B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B44u;
        // 0x207b48: 0xaf869bfc  sw          $a2, -0x6404($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941692), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b44) {
            ctx->pc = 0x207B64u;
            goto label_207b64;
        }
    }
    ctx->pc = 0x207B4Cu;
    // 0x207b4c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x207b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x207b50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x207b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207b54: 0xaf809bfc  sw          $zero, -0x6404($gp)
    ctx->pc = 0x207b54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941692), GPR_U32(ctx, 0));
    // 0x207b58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x207b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x207b5c: 0x10a20412  beq         $a1, $v0, . + 4 + (0x412 << 2)
    ctx->pc = 0x207B5Cu;
    {
        const bool branch_taken_0x207b5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x207B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B5Cu;
        // 0x207b60: 0xaf859bf8  sw          $a1, -0x6408($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941688), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b5c) {
            ctx->pc = 0x208BA8u;
            goto label_208ba8;
        }
    }
    ctx->pc = 0x207B64u;
label_207b64:
    // 0x207b64: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x207b64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x207b68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x207b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207b6c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x207b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x207b70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x207b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x207b74: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x207b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x207b78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x207b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x207b7c: 0x1464fff0  bne         $v1, $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x207B7Cu;
    {
        const bool branch_taken_0x207b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x207B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B7Cu;
        // 0x207b80: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b7c) {
            ctx->pc = 0x207B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207b40;
        }
    }
    ctx->pc = 0x207B84u;
    // 0x207b84: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x207B84u;
    {
        const bool branch_taken_0x207b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B84u;
        // 0x207b88: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b84) {
            ctx->pc = 0x207D94u;
            goto label_207d94;
        }
    }
    ctx->pc = 0x207B8Cu;
label_207b8c:
    // 0x207b8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x207b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207b90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x207b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207b94: 0xc0b7392  jal         func_2DCE48
    ctx->pc = 0x207B94u;
    SET_GPR_U32(ctx, 31, 0x207B9Cu);
    ctx->pc = 0x207B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207B94u;
    // 0x207b98: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCE48u, 0x207B94u, 0x207B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207B9Cu;
label_207b9c:
    // 0x207b9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207ba0: 0x14430409  bne         $v0, $v1, . + 4 + (0x409 << 2)
    ctx->pc = 0x207BA0u;
    {
        const bool branch_taken_0x207ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x207BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207BA0u;
        // 0x207ba4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ba0) {
            ctx->pc = 0x208BC8u;
            goto label_208bc8;
        }
    }
    ctx->pc = 0x207BA8u;
    // 0x207ba8: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x207BA8u;
    {
        const bool branch_taken_0x207ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207BA8u;
        // 0x207bac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ba8) {
            ctx->pc = 0x207D94u;
            goto label_207d94;
        }
    }
    ctx->pc = 0x207BB0u;
label_207bb0:
    // 0x207bb0: 0x8f82b64c  lw          $v0, -0x49B4($gp)
    ctx->pc = 0x207bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948428)));
    // 0x207bb4: 0x27879c04  addiu       $a3, $gp, -0x63FC
    ctx->pc = 0x207bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941700));
    // 0x207bb8: 0x8f849bf8  lw          $a0, -0x6408($gp)
    ctx->pc = 0x207bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941688)));
    // 0x207bbc: 0x27869c00  addiu       $a2, $gp, -0x6400
    ctx->pc = 0x207bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941696));
    // 0x207bc0: 0x8f859bfc  lw          $a1, -0x6404($gp)
    ctx->pc = 0x207bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941692)));
    // 0x207bc4: 0x27889c08  addiu       $t0, $gp, -0x63F8
    ctx->pc = 0x207bc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941704));
    // 0x207bc8: 0xc0b73e4  jal         func_2DCF90
    ctx->pc = 0x207BC8u;
    SET_GPR_U32(ctx, 31, 0x207BD0u);
    ctx->pc = 0x207BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207BC8u;
    // 0x207bcc: 0x2380a  movz        $a3, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCF90u, 0x207BC8u, 0x207BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207BD0u;
label_207bd0:
    // 0x207bd0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x207bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207bd4: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x207BD4u;
    {
        const bool branch_taken_0x207bd4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x207BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207BD4u;
        // 0x207bd8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207bd4) {
            ctx->pc = 0x207BE4u;
            goto label_207be4;
        }
    }
    ctx->pc = 0x207BDCu;
    // 0x207bdc: 0x100003f9  b           . + 4 + (0x3F9 << 2)
    ctx->pc = 0x207BDCu;
    {
        const bool branch_taken_0x207bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207BDCu;
        // 0x207be0: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207bdc) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x207BE4u;
label_207be4:
    // 0x207be4: 0x18c003f4  blez        $a2, . + 4 + (0x3F4 << 2)
    ctx->pc = 0x207BE4u;
    {
        const bool branch_taken_0x207be4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x207BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207BE4u;
        // 0x207be8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207be4) {
            ctx->pc = 0x208BB8u;
            goto label_208bb8;
        }
    }
    ctx->pc = 0x207BECu;
    // 0x207bec: 0x100003f5  b           . + 4 + (0x3F5 << 2)
    ctx->pc = 0x207BECu;
    {
        const bool branch_taken_0x207bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207BECu;
        // 0x207bf0: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207bec) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x207BF4u;
label_207bf4:
    // 0x207bf4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x207bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207bf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x207bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207bfc: 0xc0b7392  jal         func_2DCE48
    ctx->pc = 0x207BFCu;
    SET_GPR_U32(ctx, 31, 0x207C04u);
    ctx->pc = 0x207C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207BFCu;
    // 0x207c00: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCE48u, 0x207BFCu, 0x207C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207C04u;
label_207c04:
    // 0x207c04: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x207c04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207c08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x207c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207c0c: 0x14c203ee  bne         $a2, $v0, . + 4 + (0x3EE << 2)
    ctx->pc = 0x207C0Cu;
    {
        const bool branch_taken_0x207c0c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x207C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C0Cu;
        // 0x207c10: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c0c) {
            ctx->pc = 0x208BC8u;
            goto label_208bc8;
        }
    }
    ctx->pc = 0x207C14u;
    // 0x207c14: 0x8f87b650  lw          $a3, -0x49B0($gp)
    ctx->pc = 0x207c14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948432)));
    // 0x207c18: 0x10e00017  beqz        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x207C18u;
    {
        const bool branch_taken_0x207c18 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x207C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C18u;
        // 0x207c1c: 0x8f829bf8  lw          $v0, -0x6408($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c18) {
            ctx->pc = 0x207C78u;
            goto label_207c78;
        }
    }
    ctx->pc = 0x207C20u;
    // 0x207c20: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x207c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x207c24: 0x8f839bfc  lw          $v1, -0x6404($gp)
    ctx->pc = 0x207c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941692)));
    // 0x207c28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x207c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x207c2c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x207c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207c30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x207c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x207c34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x207c34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x207c38: 0x10a4000b  beq         $a1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x207C38u;
    {
        const bool branch_taken_0x207c38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x207C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C38u;
        // 0x207c3c: 0xe21821  addu        $v1, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c38) {
            ctx->pc = 0x207C68u;
            goto label_207c68;
        }
    }
    ctx->pc = 0x207C40u;
    // 0x207c40: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x207C40u;
    {
        const bool branch_taken_0x207c40 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x207C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C40u;
        // 0x207c44: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c40) {
            ctx->pc = 0x207C58u;
            goto label_207c58;
        }
    }
    ctx->pc = 0x207C48u;
    // 0x207c48: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x207C48u;
    {
        const bool branch_taken_0x207c48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x207C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C48u;
        // 0x207c4c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c48) {
            ctx->pc = 0x207C70u;
            goto label_207c70;
        }
    }
    ctx->pc = 0x207C50u;
    // 0x207c50: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x207C50u;
    {
        const bool branch_taken_0x207c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C50u;
        // 0x207c54: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c50) {
            ctx->pc = 0x207C78u;
            goto label_207c78;
        }
    }
    ctx->pc = 0x207C58u;
label_207c58:
    // 0x207c58: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x207C58u;
    {
        const bool branch_taken_0x207c58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x207C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C58u;
        // 0x207c5c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c58) {
            ctx->pc = 0x207C74u;
            goto label_207c74;
        }
    }
    ctx->pc = 0x207C60u;
    // 0x207c60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x207C60u;
    {
        const bool branch_taken_0x207c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C60u;
        // 0x207c64: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c60) {
            ctx->pc = 0x207C78u;
            goto label_207c78;
        }
    }
    ctx->pc = 0x207C68u;
label_207c68:
    // 0x207c68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x207C68u;
    {
        const bool branch_taken_0x207c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C68u;
        // 0x207c6c: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c68) {
            ctx->pc = 0x207C78u;
            goto label_207c78;
        }
    }
    ctx->pc = 0x207C70u;
label_207c70:
    // 0x207c70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x207c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_207c74:
    // 0x207c74: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x207c74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_207c78:
    // 0x207c78: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x207c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207c7c: 0x2402fff6  addiu       $v0, $zero, -0xA
    ctx->pc = 0x207c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x207c80: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x207C80u;
    {
        const bool branch_taken_0x207c80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x207C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C80u;
        // 0x207c84: 0x2862fff6  slti        $v0, $v1, -0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967286) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c80) {
            ctx->pc = 0x207D08u;
            goto label_207d08;
        }
    }
    ctx->pc = 0x207C88u;
    // 0x207c88: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x207C88u;
    {
        const bool branch_taken_0x207c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C88u;
        // 0x207c8c: 0x8f829bf8  lw          $v0, -0x6408($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c88) {
            ctx->pc = 0x207D0Cu;
            goto label_207d0c;
        }
    }
    ctx->pc = 0x207C90u;
    // 0x207c90: 0x1c60001f  bgtz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x207C90u;
    {
        const bool branch_taken_0x207c90 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x207C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C90u;
        // 0x207c94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c90) {
            ctx->pc = 0x207D10u;
            goto label_207d10;
        }
    }
    ctx->pc = 0x207C98u;
    // 0x207c98: 0x2862fffe  slti        $v0, $v1, -0x2
    ctx->pc = 0x207c98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967294) ? 1 : 0);
    // 0x207c9c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x207C9Cu;
    {
        const bool branch_taken_0x207c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C9Cu;
        // 0x207ca0: 0x8f829bf8  lw          $v0, -0x6408($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c9c) {
            ctx->pc = 0x207D10u;
            goto label_207d10;
        }
    }
    ctx->pc = 0x207CA4u;
    // 0x207ca4: 0x8f839c00  lw          $v1, -0x6400($gp)
    ctx->pc = 0x207ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941696)));
    // 0x207ca8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x207ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x207cac: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x207CACu;
    {
        const bool branch_taken_0x207cac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x207CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207CACu;
        // 0x207cb0: 0x8f829bf8  lw          $v0, -0x6408($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207cac) {
            ctx->pc = 0x207D00u;
            goto label_207d00;
        }
    }
    ctx->pc = 0x207CB4u;
    // 0x207cb4: 0x8f829c08  lw          $v0, -0x63F8($gp)
    ctx->pc = 0x207cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941704)));
    // 0x207cb8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x207CB8u;
    {
        const bool branch_taken_0x207cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207CB8u;
        // 0x207cbc: 0x8f829bf8  lw          $v0, -0x6408($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207cb8) {
            ctx->pc = 0x207CF8u;
            goto label_207cf8;
        }
    }
    ctx->pc = 0x207CC0u;
    // 0x207cc0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x207cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x207cc4: 0x8f849bfc  lw          $a0, -0x6404($gp)
    ctx->pc = 0x207cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941692)));
    // 0x207cc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x207cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x207ccc: 0x8f83b648  lw          $v1, -0x49B8($gp)
    ctx->pc = 0x207cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948424)));
    // 0x207cd0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x207cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x207cd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x207cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x207cd8: 0x8f84b64c  lw          $a0, -0x49B4($gp)
    ctx->pc = 0x207cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948428)));
    // 0x207cdc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x207cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x207ce0: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x207CE0u;
    {
        const bool branch_taken_0x207ce0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x207CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207CE0u;
        // 0x207ce4: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ce0) {
            ctx->pc = 0x207D2Cu;
            goto label_207d2c;
        }
    }
    ctx->pc = 0x207CE8u;
    // 0x207ce8: 0x8f839c04  lw          $v1, -0x63FC($gp)
    ctx->pc = 0x207ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941700)));
    // 0x207cec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x207cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x207cf0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x207CF0u;
    {
        const bool branch_taken_0x207cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207CF0u;
        // 0x207cf4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207cf0) {
            ctx->pc = 0x207D2Cu;
            goto label_207d2c;
        }
    }
    ctx->pc = 0x207CF8u;
label_207cf8:
    // 0x207cf8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x207CF8u;
    {
        const bool branch_taken_0x207cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207CF8u;
        // 0x207cfc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207cf8) {
            ctx->pc = 0x207D10u;
            goto label_207d10;
        }
    }
    ctx->pc = 0x207D00u;
label_207d00:
    // 0x207d00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x207D00u;
    {
        const bool branch_taken_0x207d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D00u;
        // 0x207d04: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207d00) {
            ctx->pc = 0x207D10u;
            goto label_207d10;
        }
    }
    ctx->pc = 0x207D08u;
label_207d08:
    // 0x207d08: 0x8f829bf8  lw          $v0, -0x6408($gp)
    ctx->pc = 0x207d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941688)));
label_207d0c:
    // 0x207d0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x207d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207d10:
    // 0x207d10: 0x8f839bfc  lw          $v1, -0x6404($gp)
    ctx->pc = 0x207d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941692)));
    // 0x207d14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x207d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x207d18: 0x8f84b648  lw          $a0, -0x49B8($gp)
    ctx->pc = 0x207d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948424)));
    // 0x207d1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x207d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x207d20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x207d20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x207d24: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x207d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x207d28: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x207d28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_207d2c:
    // 0x207d2c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x207d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x207d30: 0x100003a4  b           . + 4 + (0x3A4 << 2)
    ctx->pc = 0x207D30u;
    {
        const bool branch_taken_0x207d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D30u;
        // 0x207d34: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207d30) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x207D38u;
label_207d38:
    // 0x207d38: 0x8f869bfc  lw          $a2, -0x6404($gp)
    ctx->pc = 0x207d38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941692)));
    // 0x207d3c: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x207d3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x207d40: 0x8f859bf8  lw          $a1, -0x6408($gp)
    ctx->pc = 0x207d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941688)));
    // 0x207d44: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x207d44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x207d48: 0x8f84b648  lw          $a0, -0x49B8($gp)
    ctx->pc = 0x207d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948424)));
    // 0x207d4c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x207d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207d50: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x207d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x207d54: 0x0  nop
    ctx->pc = 0x207d54u;
    // NOP
label_207d58:
    // 0x207d58: 0x14c90006  bne         $a2, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x207D58u;
    {
        const bool branch_taken_0x207d58 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 9));
        ctx->pc = 0x207D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D58u;
        // 0x207d5c: 0xaf869bfc  sw          $a2, -0x6404($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941692), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207d58) {
            ctx->pc = 0x207D74u;
            goto label_207d74;
        }
    }
    ctx->pc = 0x207D60u;
    // 0x207d60: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x207d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x207d64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x207d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207d68: 0xaf809bfc  sw          $zero, -0x6404($gp)
    ctx->pc = 0x207d68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941692), GPR_U32(ctx, 0));
    // 0x207d6c: 0x10a80390  beq         $a1, $t0, . + 4 + (0x390 << 2)
    ctx->pc = 0x207D6Cu;
    {
        const bool branch_taken_0x207d6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 8));
        ctx->pc = 0x207D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D6Cu;
        // 0x207d70: 0xaf859bf8  sw          $a1, -0x6408($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941688), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207d6c) {
            ctx->pc = 0x208BB0u;
            goto label_208bb0;
        }
    }
    ctx->pc = 0x207D74u;
label_207d74:
    // 0x207d74: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x207d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x207d78: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x207d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x207d7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x207d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x207d80: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x207d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x207d84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x207d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x207d88: 0x1467fff3  bne         $v1, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x207D88u;
    {
        const bool branch_taken_0x207d88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x207D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D88u;
        // 0x207d8c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207d88) {
            ctx->pc = 0x207D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207d58;
        }
    }
    ctx->pc = 0x207D90u;
label_207d90:
    // 0x207d90: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x207d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_207d94:
    // 0x207d94: 0x1000038b  b           . + 4 + (0x38B << 2)
    ctx->pc = 0x207D94u;
    {
        const bool branch_taken_0x207d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D94u;
        // 0x207d98: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207d94) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x207D9Cu;
label_207d9c:
    // 0x207d9c: 0x8f849bf0  lw          $a0, -0x6410($gp)
    ctx->pc = 0x207d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941680)));
    // 0x207da0: 0xc0b74cc  jal         func_2DD330
    ctx->pc = 0x207DA0u;
    SET_GPR_U32(ctx, 31, 0x207DA8u);
    ctx->pc = 0x207DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207DA0u;
    // 0x207da4: 0x8f859bf4  lw          $a1, -0x640C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941684)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD330u, 0x207DA0u, 0x207DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207DA8u;
label_207da8:
    // 0x207da8: 0x14400384  bnez        $v0, . + 4 + (0x384 << 2)
    ctx->pc = 0x207DA8u;
    {
        const bool branch_taken_0x207da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207DA8u;
        // 0x207dac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207da8) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x207DB0u;
    // 0x207db0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x207db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x207db4: 0x10000383  b           . + 4 + (0x383 << 2)
    ctx->pc = 0x207DB4u;
    {
        const bool branch_taken_0x207db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207DB4u;
        // 0x207db8: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207db4) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x207DBCu;
label_207dbc:
    // 0x207dbc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x207dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207dc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x207dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207dc4: 0xc0b7392  jal         func_2DCE48
    ctx->pc = 0x207DC4u;
    SET_GPR_U32(ctx, 31, 0x207DCCu);
    ctx->pc = 0x207DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207DC4u;
    // 0x207dc8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCE48u, 0x207DC4u, 0x207DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207DCCu;
label_207dcc:
    // 0x207dcc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x207dccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207dd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x207dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207dd4: 0x14c2037c  bne         $a2, $v0, . + 4 + (0x37C << 2)
    ctx->pc = 0x207DD4u;
    {
        const bool branch_taken_0x207dd4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x207DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207DD4u;
        // 0x207dd8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207dd4) {
            ctx->pc = 0x208BC8u;
            goto label_208bc8;
        }
    }
    ctx->pc = 0x207DDCu;
    // 0x207ddc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x207ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207de0: 0x1040021b  beqz        $v0, . + 4 + (0x21B << 2)
    ctx->pc = 0x207DE0u;
    {
        const bool branch_taken_0x207de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207DE0u;
        // 0x207de4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207de0) {
            ctx->pc = 0x208650u;
            goto label_208650;
        }
    }
    ctx->pc = 0x207DE8u;
    // 0x207de8: 0x10000375  b           . + 4 + (0x375 << 2)
    ctx->pc = 0x207DE8u;
    {
        const bool branch_taken_0x207de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207DE8u;
        // 0x207dec: 0xaf809bec  sw          $zero, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207de8) {
            ctx->pc = 0x208BC0u;
            goto label_208bc0;
        }
    }
    ctx->pc = 0x207DF0u;
label_207df0:
    // 0x207df0: 0x8f849bf0  lw          $a0, -0x6410($gp)
    ctx->pc = 0x207df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941680)));
    // 0x207df4: 0x8f859bf4  lw          $a1, -0x640C($gp)
    ctx->pc = 0x207df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941684)));
    // 0x207df8: 0xc0b7604  jal         func_2DD810
    ctx->pc = 0x207DF8u;
    SET_GPR_U32(ctx, 31, 0x207E00u);
    ctx->pc = 0x207DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207DF8u;
    // 0x207dfc: 0x8f86b654  lw          $a2, -0x49AC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948436)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD810u, 0x207DF8u, 0x207E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207E00u;
label_207e00:
    // 0x207e00: 0x1440036e  bnez        $v0, . + 4 + (0x36E << 2)
    ctx->pc = 0x207E00u;
    {
        const bool branch_taken_0x207e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E00u;
        // 0x207e04: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e00) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x207E08u;
    // 0x207e08: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x207e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x207e0c: 0x1000036d  b           . + 4 + (0x36D << 2)
    ctx->pc = 0x207E0Cu;
    {
        const bool branch_taken_0x207e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E0Cu;
        // 0x207e10: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e0c) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x207E14u;
label_207e14:
    // 0x207e14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x207e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207e18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x207e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207e1c: 0xc0b7392  jal         func_2DCE48
    ctx->pc = 0x207E1Cu;
    SET_GPR_U32(ctx, 31, 0x207E24u);
    ctx->pc = 0x207E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207E1Cu;
    // 0x207e20: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCE48u, 0x207E1Cu, 0x207E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207E24u;
label_207e24:
    // 0x207e24: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x207e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207e28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x207e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207e2c: 0x14c20366  bne         $a2, $v0, . + 4 + (0x366 << 2)
    ctx->pc = 0x207E2Cu;
    {
        const bool branch_taken_0x207e2c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x207E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E2Cu;
        // 0x207e30: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e2c) {
            ctx->pc = 0x208BC8u;
            goto label_208bc8;
        }
    }
    ctx->pc = 0x207E34u;
    // 0x207e34: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x207e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207e38: 0x460035f  bltz        $v1, . + 4 + (0x35F << 2)
    ctx->pc = 0x207E38u;
    {
        const bool branch_taken_0x207e38 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x207E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E38u;
        // 0x207e3c: 0x8f82b658  lw          $v0, -0x49A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e38) {
            ctx->pc = 0x208BB8u;
            goto label_208bb8;
        }
    }
    ctx->pc = 0x207E40u;
    // 0x207e40: 0x10000203  b           . + 4 + (0x203 << 2)
    ctx->pc = 0x207E40u;
    {
        const bool branch_taken_0x207e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E40u;
        // 0x207e44: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e40) {
            ctx->pc = 0x208650u;
            goto label_208650;
        }
    }
    ctx->pc = 0x207E48u;
label_207e48:
    // 0x207e48: 0x3c0601fb  lui         $a2, 0x1FB
    ctx->pc = 0x207e48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)507 << 16));
    // 0x207e4c: 0x8f849bf0  lw          $a0, -0x6410($gp)
    ctx->pc = 0x207e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941680)));
    // 0x207e50: 0x8f859bf4  lw          $a1, -0x640C($gp)
    ctx->pc = 0x207e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941684)));
    // 0x207e54: 0x24c63140  addiu       $a2, $a2, 0x3140
    ctx->pc = 0x207e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12608));
    // 0x207e58: 0xc0b725a  jal         func_2DC968
    ctx->pc = 0x207E58u;
    SET_GPR_U32(ctx, 31, 0x207E60u);
    ctx->pc = 0x207E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207E58u;
    // 0x207e5c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC968u, 0x207E58u, 0x207E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207E60u;
label_207e60:
    // 0x207e60: 0x14400356  bnez        $v0, . + 4 + (0x356 << 2)
    ctx->pc = 0x207E60u;
    {
        const bool branch_taken_0x207e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E60u;
        // 0x207e64: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e60) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x207E68u;
    // 0x207e68: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x207e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x207e6c: 0x10000355  b           . + 4 + (0x355 << 2)
    ctx->pc = 0x207E6Cu;
    {
        const bool branch_taken_0x207e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E6Cu;
        // 0x207e70: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e6c) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x207E74u;
label_207e74:
    // 0x207e74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x207e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207e78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x207e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207e7c: 0xc0b7392  jal         func_2DCE48
    ctx->pc = 0x207E7Cu;
    SET_GPR_U32(ctx, 31, 0x207E84u);
    ctx->pc = 0x207E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207E7Cu;
    // 0x207e80: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCE48u, 0x207E7Cu, 0x207E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207E84u;
label_207e84:
    // 0x207e84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207e88: 0x1443034f  bne         $v0, $v1, . + 4 + (0x34F << 2)
    ctx->pc = 0x207E88u;
    {
        const bool branch_taken_0x207e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x207E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E88u;
        // 0x207e8c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e88) {
            ctx->pc = 0x208BC8u;
            goto label_208bc8;
        }
    }
    ctx->pc = 0x207E90u;
    // 0x207e90: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x207e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207e94: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x207E94u;
    {
        const bool branch_taken_0x207e94 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x207E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E94u;
        // 0x207e98: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e94) {
            ctx->pc = 0x207EACu;
            goto label_207eac;
        }
    }
    ctx->pc = 0x207E9Cu;
    // 0x207e9c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x207e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x207ea0: 0xaf859c14  sw          $a1, -0x63EC($gp)
    ctx->pc = 0x207ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941716), GPR_U32(ctx, 5));
    // 0x207ea4: 0x10000348  b           . + 4 + (0x348 << 2)
    ctx->pc = 0x207EA4u;
    {
        const bool branch_taken_0x207ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207EA4u;
        // 0x207ea8: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ea4) {
            ctx->pc = 0x208BC8u;
            goto label_208bc8;
        }
    }
    ctx->pc = 0x207EACu;
label_207eac:
    // 0x207eac: 0x24a3000a  addiu       $v1, $a1, 0xA
    ctx->pc = 0x207eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
    // 0x207eb0: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x207eb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x207eb4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x207EB4u;
    {
        const bool branch_taken_0x207eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207EB4u;
        // 0x207eb8: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207eb4) {
            ctx->pc = 0x207EE4u;
            goto label_207ee4;
        }
    }
    ctx->pc = 0x207EBCu;
    // 0x207ebc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x207ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x207ec0: 0x24429d90  addiu       $v0, $v0, -0x6270
    ctx->pc = 0x207ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942096));
    // 0x207ec4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x207ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x207ec8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x207ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x207ecc: 0x800008  jr          $a0
    ctx->pc = 0x207ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207ED4u: goto label_207ed4;
            case 0x207EDCu: goto label_207edc;
            case 0x207EE4u: goto label_207ee4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207ECCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x207ED4u;
label_207ed4:
    // 0x207ed4: 0x10000339  b           . + 4 + (0x339 << 2)
    ctx->pc = 0x207ED4u;
    {
        const bool branch_taken_0x207ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207ED4u;
        // 0x207ed8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ed4) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x207EDCu;
label_207edc:
    // 0x207edc: 0x10000337  b           . + 4 + (0x337 << 2)
    ctx->pc = 0x207EDCu;
    {
        const bool branch_taken_0x207edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207EDCu;
        // 0x207ee0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207edc) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x207EE4u;
label_207ee4:
    // 0x207ee4: 0x28c2fff7  slti        $v0, $a2, -0x9
    ctx->pc = 0x207ee4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967287) ? 1 : 0);
    // 0x207ee8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x207EE8u;
    {
        const bool branch_taken_0x207ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207EE8u;
        // 0x207eec: 0xaf809bec  sw          $zero, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ee8) {
            ctx->pc = 0x207EF8u;
            goto label_207ef8;
        }
    }
    ctx->pc = 0x207EF0u;
    // 0x207ef0: 0x10000333  b           . + 4 + (0x333 << 2)
    ctx->pc = 0x207EF0u;
    {
        const bool branch_taken_0x207ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207EF0u;
        // 0x207ef4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ef0) {
            ctx->pc = 0x208BC0u;
            goto label_208bc0;
        }
    }
    ctx->pc = 0x207EF8u;
label_207ef8:
    // 0x207ef8: 0x10000331  b           . + 4 + (0x331 << 2)
    ctx->pc = 0x207EF8u;
    {
        const bool branch_taken_0x207ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207EF8u;
        // 0x207efc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ef8) {
            ctx->pc = 0x208BC0u;
            goto label_208bc0;
        }
    }
    ctx->pc = 0x207F00u;
label_207f00:
    // 0x207f00: 0xc0b72a2  jal         func_2DCA88
    ctx->pc = 0x207F00u;
    SET_GPR_U32(ctx, 31, 0x207F08u);
    ctx->pc = 0x207F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207F00u;
    // 0x207f04: 0x8f849c14  lw          $a0, -0x63EC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941716)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCA88u, 0x207F00u, 0x207F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207F08u;
label_207f08:
    // 0x207f08: 0x1440032c  bnez        $v0, . + 4 + (0x32C << 2)
    ctx->pc = 0x207F08u;
    {
        const bool branch_taken_0x207f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F08u;
        // 0x207f0c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f08) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x207F10u;
    // 0x207f10: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x207f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x207f14: 0x1000032b  b           . + 4 + (0x32B << 2)
    ctx->pc = 0x207F14u;
    {
        const bool branch_taken_0x207f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F14u;
        // 0x207f18: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f14) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x207F1Cu;
label_207f1c:
    // 0x207f1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x207f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207f20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x207f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207f24: 0xc0b7392  jal         func_2DCE48
    ctx->pc = 0x207F24u;
    SET_GPR_U32(ctx, 31, 0x207F2Cu);
    ctx->pc = 0x207F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207F24u;
    // 0x207f28: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCE48u, 0x207F24u, 0x207F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207F2Cu;
label_207f2c:
    // 0x207f2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207f30: 0x14430325  bne         $v0, $v1, . + 4 + (0x325 << 2)
    ctx->pc = 0x207F30u;
    {
        const bool branch_taken_0x207f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x207F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F30u;
        // 0x207f34: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f30) {
            ctx->pc = 0x208BC8u;
            goto label_208bc8;
        }
    }
    ctx->pc = 0x207F38u;
    // 0x207f38: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x207f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207f3c: 0x24a3000a  addiu       $v1, $a1, 0xA
    ctx->pc = 0x207f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
    // 0x207f40: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x207f40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x207f44: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x207F44u;
    {
        const bool branch_taken_0x207f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F44u;
        // 0x207f48: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f44) {
            ctx->pc = 0x207F74u;
            goto label_207f74;
        }
    }
    ctx->pc = 0x207F4Cu;
    // 0x207f4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x207f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x207f50: 0x24429dc0  addiu       $v0, $v0, -0x6240
    ctx->pc = 0x207f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942144));
    // 0x207f54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x207f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x207f58: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x207f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x207f5c: 0x800008  jr          $a0
    ctx->pc = 0x207F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207F64u: goto label_207f64;
            case 0x207F6Cu: goto label_207f6c;
            case 0x207F74u: goto label_207f74;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207F5Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x207F64u;
label_207f64:
    // 0x207f64: 0x10000315  b           . + 4 + (0x315 << 2)
    ctx->pc = 0x207F64u;
    {
        const bool branch_taken_0x207f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F64u;
        // 0x207f68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f64) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x207F6Cu;
label_207f6c:
    // 0x207f6c: 0x10000313  b           . + 4 + (0x313 << 2)
    ctx->pc = 0x207F6Cu;
    {
        const bool branch_taken_0x207f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F6Cu;
        // 0x207f70: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f6c) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x207F74u;
label_207f74:
    // 0x207f74: 0x28a2fff7  slti        $v0, $a1, -0x9
    ctx->pc = 0x207f74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967287) ? 1 : 0);
    // 0x207f78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x207F78u;
    {
        const bool branch_taken_0x207f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F78u;
        // 0x207f7c: 0xaf809bec  sw          $zero, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f78) {
            ctx->pc = 0x207F88u;
            goto label_207f88;
        }
    }
    ctx->pc = 0x207F80u;
    // 0x207f80: 0x1000030f  b           . + 4 + (0x30F << 2)
    ctx->pc = 0x207F80u;
    {
        const bool branch_taken_0x207f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F80u;
        // 0x207f84: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f80) {
            ctx->pc = 0x208BC0u;
            goto label_208bc0;
        }
    }
    ctx->pc = 0x207F88u;
label_207f88:
    // 0x207f88: 0x1000030d  b           . + 4 + (0x30D << 2)
    ctx->pc = 0x207F88u;
    {
        const bool branch_taken_0x207f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F88u;
        // 0x207f8c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f88) {
            ctx->pc = 0x208BC0u;
            goto label_208bc0;
        }
    }
    ctx->pc = 0x207F90u;
label_207f90:
    // 0x207f90: 0x3c0601fb  lui         $a2, 0x1FB
    ctx->pc = 0x207f90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)507 << 16));
    // 0x207f94: 0x8f849bf0  lw          $a0, -0x6410($gp)
    ctx->pc = 0x207f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941680)));
    // 0x207f98: 0x8f859bf4  lw          $a1, -0x640C($gp)
    ctx->pc = 0x207f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941684)));
    // 0x207f9c: 0xc0b7294  jal         func_2DCA50
    ctx->pc = 0x207F9Cu;
    SET_GPR_U32(ctx, 31, 0x207FA4u);
    ctx->pc = 0x207FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207F9Cu;
    // 0x207fa0: 0x24c62940  addiu       $a2, $a2, 0x2940 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCA50u, 0x207F9Cu, 0x207FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207FA4u;
label_207fa4:
    // 0x207fa4: 0x14400305  bnez        $v0, . + 4 + (0x305 << 2)
    ctx->pc = 0x207FA4u;
    {
        const bool branch_taken_0x207fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207FA4u;
        // 0x207fa8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207fa4) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x207FACu;
    // 0x207fac: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x207facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x207fb0: 0x10000304  b           . + 4 + (0x304 << 2)
    ctx->pc = 0x207FB0u;
    {
        const bool branch_taken_0x207fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207FB0u;
        // 0x207fb4: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207fb0) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x207FB8u;
label_207fb8:
    // 0x207fb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x207fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207fbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x207fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207fc0: 0xc0b7392  jal         func_2DCE48
    ctx->pc = 0x207FC0u;
    SET_GPR_U32(ctx, 31, 0x207FC8u);
    ctx->pc = 0x207FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207FC0u;
    // 0x207fc4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCE48u, 0x207FC0u, 0x207FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207FC8u;
label_207fc8:
    // 0x207fc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207fcc: 0x144302fe  bne         $v0, $v1, . + 4 + (0x2FE << 2)
    ctx->pc = 0x207FCCu;
    {
        const bool branch_taken_0x207fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x207FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207FCCu;
        // 0x207fd0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207fcc) {
            ctx->pc = 0x208BC8u;
            goto label_208bc8;
        }
    }
    ctx->pc = 0x207FD4u;
    // 0x207fd4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x207fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207fd8: 0x2444000a  addiu       $a0, $v0, 0xA
    ctx->pc = 0x207fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x207fdc: 0x2c83000b  sltiu       $v1, $a0, 0xB
    ctx->pc = 0x207fdcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x207fe0: 0x106002f5  beqz        $v1, . + 4 + (0x2F5 << 2)
    ctx->pc = 0x207FE0u;
    {
        const bool branch_taken_0x207fe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x207FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207FE0u;
        // 0x207fe4: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207fe0) {
            ctx->pc = 0x208BB8u;
            goto label_208bb8;
        }
    }
    ctx->pc = 0x207FE8u;
    // 0x207fe8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x207fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x207fec: 0x24429df0  addiu       $v0, $v0, -0x6210
    ctx->pc = 0x207fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942192));
    // 0x207ff0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x207ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x207ff4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x207ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x207ff8: 0x800008  jr          $a0
    ctx->pc = 0x207FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x208000u: goto label_208000;
            case 0x208018u: goto label_208018;
            case 0x20802Cu: goto label_20802c;
            case 0x208034u: goto label_208034;
            case 0x208BB8u: goto label_208bb8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207FF8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x208000u;
label_208000:
    // 0x208000: 0x8f82b678  lw          $v0, -0x4988($gp)
    ctx->pc = 0x208000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948472)));
    // 0x208004: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x208004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x208008: 0xaf839bec  sw          $v1, -0x6414($gp)
    ctx->pc = 0x208008u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 3));
    // 0x20800c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x20800cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x208010: 0x100002ec  b           . + 4 + (0x2EC << 2)
    ctx->pc = 0x208010u;
    {
        const bool branch_taken_0x208010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208010u;
        // 0x208014: 0xaf82b678  sw          $v0, -0x4988($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948472), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208010) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x208018u;
label_208018:
    // 0x208018: 0x8f829c0c  lw          $v0, -0x63F4($gp)
    ctx->pc = 0x208018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941708)));
    // 0x20801c: 0x104002e6  beqz        $v0, . + 4 + (0x2E6 << 2)
    ctx->pc = 0x20801Cu;
    {
        const bool branch_taken_0x20801c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20801Cu;
        // 0x208020: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20801c) {
            ctx->pc = 0x208BB8u;
            goto label_208bb8;
        }
    }
    ctx->pc = 0x208024u;
    // 0x208024: 0x100002e7  b           . + 4 + (0x2E7 << 2)
    ctx->pc = 0x208024u;
    {
        const bool branch_taken_0x208024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208024u;
        // 0x208028: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208024) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x20802Cu;
label_20802c:
    // 0x20802c: 0x100002e3  b           . + 4 + (0x2E3 << 2)
    ctx->pc = 0x20802Cu;
    {
        const bool branch_taken_0x20802c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20802Cu;
        // 0x208030: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20802c) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x208034u;
label_208034:
    // 0x208034: 0x100002e1  b           . + 4 + (0x2E1 << 2)
    ctx->pc = 0x208034u;
    {
        const bool branch_taken_0x208034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208034u;
        // 0x208038: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208034) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x20803Cu;
label_20803c:
    // 0x20803c: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x20803cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x208040: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x208040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x208044: 0x26109720  addiu       $s0, $s0, -0x68E0
    ctx->pc = 0x208044u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294940448));
    // 0x208048: 0x3c0601fb  lui         $a2, 0x1FB
    ctx->pc = 0x208048u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)507 << 16));
    // 0x20804c: 0x24a5e430  addiu       $a1, $a1, -0x1BD0
    ctx->pc = 0x20804cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960176));
    // 0x208050: 0x24c62940  addiu       $a2, $a2, 0x2940
    ctx->pc = 0x208050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10560));
    // 0x208054: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x208054u;
    SET_GPR_U32(ctx, 31, 0x20805Cu);
    ctx->pc = 0x208058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208054u;
    // 0x208058: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x208054u, 0x20805Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20805Cu;
label_20805c:
    // 0x20805c: 0x3c0901fb  lui         $t1, 0x1FB
    ctx->pc = 0x20805cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)507 << 16));
    // 0x208060: 0x8f849bf0  lw          $a0, -0x6410($gp)
    ctx->pc = 0x208060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941680)));
    // 0x208064: 0x8f859bf4  lw          $a1, -0x640C($gp)
    ctx->pc = 0x208064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941684)));
    // 0x208068: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x208068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20806c: 0x25292e00  addiu       $t1, $t1, 0x2E00
    ctx->pc = 0x20806cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11776));
    // 0x208070: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x208070u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208074: 0xc0b7436  jal         func_2DD0D8
    ctx->pc = 0x208074u;
    SET_GPR_U32(ctx, 31, 0x20807Cu);
    ctx->pc = 0x208078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208074u;
    // 0x208078: 0x24080007  addiu       $t0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD0D8u, 0x208074u, 0x20807Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20807Cu;
label_20807c:
    // 0x20807c: 0x144002cf  bnez        $v0, . + 4 + (0x2CF << 2)
    ctx->pc = 0x20807Cu;
    {
        const bool branch_taken_0x20807c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20807Cu;
        // 0x208080: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20807c) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x208084u;
    // 0x208084: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x208084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x208088: 0x100002ce  b           . + 4 + (0x2CE << 2)
    ctx->pc = 0x208088u;
    {
        const bool branch_taken_0x208088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208088u;
        // 0x20808c: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208088) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x208090u;
label_208090:
    // 0x208090: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x208090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208094: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x208094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208098: 0xc0b7392  jal         func_2DCE48
    ctx->pc = 0x208098u;
    SET_GPR_U32(ctx, 31, 0x2080A0u);
    ctx->pc = 0x20809Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208098u;
    // 0x20809c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCE48u, 0x208098u, 0x2080A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2080A0u;
label_2080a0:
    // 0x2080a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2080a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2080a4: 0x144302c8  bne         $v0, $v1, . + 4 + (0x2C8 << 2)
    ctx->pc = 0x2080A4u;
    {
        const bool branch_taken_0x2080a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2080A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2080A4u;
        // 0x2080a8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2080a4) {
            ctx->pc = 0x208BC8u;
            goto label_208bc8;
        }
    }
    ctx->pc = 0x2080ACu;
    // 0x2080ac: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2080acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2080b0: 0x4a0003e  bltz        $a1, . + 4 + (0x3E << 2)
    ctx->pc = 0x2080B0u;
    {
        const bool branch_taken_0x2080b0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2080B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2080B0u;
        // 0x2080b4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2080b0) {
            ctx->pc = 0x2081ACu;
            goto label_2081ac;
        }
    }
    ctx->pc = 0x2080B8u;
    // 0x2080b8: 0x18a00008  blez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2080B8u;
    {
        const bool branch_taken_0x2080b8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2080BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2080B8u;
        // 0x2080bc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2080b8) {
            ctx->pc = 0x2080DCu;
            goto label_2080dc;
        }
    }
    ctx->pc = 0x2080C0u;
label_2080c0:
    // 0x2080c0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2080c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2080c4: 0x0  nop
    ctx->pc = 0x2080c4u;
    // NOP
    // 0x2080c8: 0x0  nop
    ctx->pc = 0x2080c8u;
    // NOP
    // 0x2080cc: 0x0  nop
    ctx->pc = 0x2080ccu;
    // NOP
    // 0x2080d0: 0x0  nop
    ctx->pc = 0x2080d0u;
    // NOP
    // 0x2080d4: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2080D4u;
    {
        const bool branch_taken_0x2080d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2080d4) {
            ctx->pc = 0x2080C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2080c0;
        }
    }
    ctx->pc = 0x2080DCu;
label_2080dc:
    // 0x2080dc: 0x18400030  blez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2080DCu;
    {
        const bool branch_taken_0x2080dc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2080E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2080DCu;
        // 0x2080e0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2080dc) {
            ctx->pc = 0x2081A0u;
            goto label_2081a0;
        }
    }
    ctx->pc = 0x2080E4u;
    // 0x2080e4: 0x3c1501fb  lui         $s5, 0x1FB
    ctx->pc = 0x2080e4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)507 << 16));
    // 0x2080e8: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x2080e8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x2080ec: 0x119180  sll         $s2, $s1, 6
    ctx->pc = 0x2080ecu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
label_2080f0:
    // 0x2080f0: 0x26b32e20  addiu       $s3, $s5, 0x2E20
    ctx->pc = 0x2080f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 11808));
    // 0x2080f4: 0x2538021  addu        $s0, $s2, $s3
    ctx->pc = 0x2080f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x2080f8: 0x26859ca8  addiu       $a1, $s4, -0x6358
    ctx->pc = 0x2080f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941864));
    // 0x2080fc: 0xc0b9786  jal         func_2E5E18
    ctx->pc = 0x2080FCu;
    SET_GPR_U32(ctx, 31, 0x208104u);
    ctx->pc = 0x208100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2080FCu;
    // 0x208100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5E18u, 0x2080FCu, 0x208104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208104u;
label_208104:
    // 0x208104: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x208104u;
    {
        const bool branch_taken_0x208104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208104u;
        // 0x208108: 0x8f82b65c  lw          $v0, -0x49A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208104) {
            ctx->pc = 0x208130u;
            goto label_208130;
        }
    }
    ctx->pc = 0x20810Cu;
    // 0x20810c: 0x8f85b678  lw          $a1, -0x4988($gp)
    ctx->pc = 0x20810cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948472)));
    // 0x208110: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x208110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x208114: 0x8c44fff0  lw          $a0, -0x10($v0)
    ctx->pc = 0x208114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967280)));
    // 0x208118: 0x240303c4  addiu       $v1, $zero, 0x3C4
    ctx->pc = 0x208118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    // 0x20811c: 0x34a20001  ori         $v0, $a1, 0x1
    ctx->pc = 0x20811cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x208120: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x208120u;
    {
        const bool branch_taken_0x208120 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x208124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208120u;
        // 0x208124: 0xaf82b678  sw          $v0, -0x4988($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948472), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208120) {
            ctx->pc = 0x208184u;
            goto label_208184;
        }
    }
    ctx->pc = 0x208128u;
    // 0x208128: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x208128u;
    {
        const bool branch_taken_0x208128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208128u;
        // 0x20812c: 0x34a20011  ori         $v0, $a1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)17);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208128) {
            ctx->pc = 0x208180u;
            goto label_208180;
        }
    }
    ctx->pc = 0x208130u;
label_208130:
    // 0x208130: 0x2783b660  addiu       $v1, $gp, -0x49A0
    ctx->pc = 0x208130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948448));
    // 0x208134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208138: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x208138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20813c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20813cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x208140: 0xc0b9786  jal         func_2E5E18
    ctx->pc = 0x208140u;
    SET_GPR_U32(ctx, 31, 0x208148u);
    ctx->pc = 0x208144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208140u;
    // 0x208144: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5E18u, 0x208140u, 0x208148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208148u;
label_208148:
    // 0x208148: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x208148u;
    {
        const bool branch_taken_0x208148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208148) {
            ctx->pc = 0x20814Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208148u;
            // 0x20814c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208188u;
            goto label_208188;
        }
    }
    ctx->pc = 0x208150u;
    // 0x208150: 0x8f82b65c  lw          $v0, -0x49A4($gp)
    ctx->pc = 0x208150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948444)));
    // 0x208154: 0x2784b670  addiu       $a0, $gp, -0x4990
    ctx->pc = 0x208154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948464));
    // 0x208158: 0x8f86b678  lw          $a2, -0x4988($gp)
    ctx->pc = 0x208158u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948472)));
    // 0x20815c: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x20815cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x208160: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x208160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x208164: 0x8c65fff0  lw          $a1, -0x10($v1)
    ctx->pc = 0x208164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x208168: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x208168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20816c: 0x34c30002  ori         $v1, $a2, 0x2
    ctx->pc = 0x20816cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
    // 0x208170: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x208170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x208174: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x208174u;
    {
        const bool branch_taken_0x208174 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x208178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208174u;
        // 0x208178: 0xaf83b678  sw          $v1, -0x4988($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948472), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208174) {
            ctx->pc = 0x208184u;
            goto label_208184;
        }
    }
    ctx->pc = 0x20817Cu;
    // 0x20817c: 0x34c20022  ori         $v0, $a2, 0x22
    ctx->pc = 0x20817cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)34);
label_208180:
    // 0x208180: 0xaf82b678  sw          $v0, -0x4988($gp)
    ctx->pc = 0x208180u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948472), GPR_U32(ctx, 2));
label_208184:
    // 0x208184: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x208184u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_208188:
    // 0x208188: 0x2a220007  slti        $v0, $s1, 0x7
    ctx->pc = 0x208188u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x20818c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20818Cu;
    {
        const bool branch_taken_0x20818c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20818Cu;
        // 0x208190: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20818c) {
            ctx->pc = 0x2081A0u;
            goto label_2081a0;
        }
    }
    ctx->pc = 0x208194u;
    // 0x208194: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x208194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x208198: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x208198u;
    {
        const bool branch_taken_0x208198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208198u;
        // 0x20819c: 0x119180  sll         $s2, $s1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208198) {
            ctx->pc = 0x2080F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2080f0;
        }
    }
    ctx->pc = 0x2081A0u;
label_2081a0:
    // 0x2081a0: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2081a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2081a4: 0x10000287  b           . + 4 + (0x287 << 2)
    ctx->pc = 0x2081A4u;
    {
        const bool branch_taken_0x2081a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2081A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2081A4u;
        // 0x2081a8: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2081a4) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x2081ACu;
label_2081ac:
    // 0x2081ac: 0x24a3000a  addiu       $v1, $a1, 0xA
    ctx->pc = 0x2081acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
    // 0x2081b0: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x2081b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2081b4: 0x10400280  beqz        $v0, . + 4 + (0x280 << 2)
    ctx->pc = 0x2081B4u;
    {
        const bool branch_taken_0x2081b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2081B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2081B4u;
        // 0x2081b8: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2081b4) {
            ctx->pc = 0x208BB8u;
            goto label_208bb8;
        }
    }
    ctx->pc = 0x2081BCu;
    // 0x2081bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2081bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2081c0: 0x24429e20  addiu       $v0, $v0, -0x61E0
    ctx->pc = 0x2081c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942240));
    // 0x2081c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2081c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2081c8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2081c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2081cc: 0x800008  jr          $a0
    ctx->pc = 0x2081CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2081D4u: goto label_2081d4;
            case 0x208BB8u: goto label_208bb8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2081CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2081D4u;
label_2081d4:
    // 0x2081d4: 0x10000279  b           . + 4 + (0x279 << 2)
    ctx->pc = 0x2081D4u;
    {
        const bool branch_taken_0x2081d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2081D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2081D4u;
        // 0x2081d8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2081d4) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x2081DCu;
label_2081dc:
    // 0x2081dc: 0x8f82b678  lw          $v0, -0x4988($gp)
    ctx->pc = 0x2081dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948472)));
    // 0x2081e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2081e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2081e4: 0x30420011  andi        $v0, $v0, 0x11
    ctx->pc = 0x2081e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)17);
    // 0x2081e8: 0x1043006c  beq         $v0, $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x2081E8u;
    {
        const bool branch_taken_0x2081e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2081ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2081E8u;
        // 0x2081ec: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2081e8) {
            ctx->pc = 0x20839Cu;
            goto label_20839c;
        }
    }
    ctx->pc = 0x2081F0u;
    // 0x2081f0: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2081f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2081f4: 0x26109720  addiu       $s0, $s0, -0x68E0
    ctx->pc = 0x2081f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294940448));
    // 0x2081f8: 0x3c0601fb  lui         $a2, 0x1FB
    ctx->pc = 0x2081f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)507 << 16));
    // 0x2081fc: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x2081fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x208200: 0x24a5e438  addiu       $a1, $a1, -0x1BC8
    ctx->pc = 0x208200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960184));
    // 0x208204: 0x24c62940  addiu       $a2, $a2, 0x2940
    ctx->pc = 0x208204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10560));
    // 0x208208: 0x24e79ca8  addiu       $a3, $a3, -0x6358
    ctx->pc = 0x208208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941864));
    // 0x20820c: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x20820Cu;
    SET_GPR_U32(ctx, 31, 0x208214u);
    ctx->pc = 0x208210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20820Cu;
    // 0x208210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x20820Cu, 0x208214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208214u;
label_208214:
    // 0x208214: 0x8f83b678  lw          $v1, -0x4988($gp)
    ctx->pc = 0x208214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948472)));
    // 0x208218: 0x24020202  addiu       $v0, $zero, 0x202
    ctx->pc = 0x208218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
    // 0x20821c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x20821cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x208220: 0x8f849bf0  lw          $a0, -0x6410($gp)
    ctx->pc = 0x208220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941680)));
    // 0x208224: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x208224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x208228: 0x8f859bf4  lw          $a1, -0x640C($gp)
    ctx->pc = 0x208228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941684)));
    // 0x20822c: 0x43380a  movz        $a3, $v0, $v1
    ctx->pc = 0x20822cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x208230: 0xc0b725a  jal         func_2DC968
    ctx->pc = 0x208230u;
    SET_GPR_U32(ctx, 31, 0x208238u);
    ctx->pc = 0x208234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208230u;
    // 0x208234: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC968u, 0x208230u, 0x208238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208238u;
label_208238:
    // 0x208238: 0x14400260  bnez        $v0, . + 4 + (0x260 << 2)
    ctx->pc = 0x208238u;
    {
        const bool branch_taken_0x208238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208238u;
        // 0x20823c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208238) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x208240u;
    // 0x208240: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x208240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x208244: 0x1000025f  b           . + 4 + (0x25F << 2)
    ctx->pc = 0x208244u;
    {
        const bool branch_taken_0x208244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208244u;
        // 0x208248: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208244) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x20824Cu;
label_20824c:
    // 0x20824c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20824cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208250: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x208250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208254: 0xc0b7392  jal         func_2DCE48
    ctx->pc = 0x208254u;
    SET_GPR_U32(ctx, 31, 0x20825Cu);
    ctx->pc = 0x208258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208254u;
    // 0x208258: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCE48u, 0x208254u, 0x20825Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20825Cu;
label_20825c:
    // 0x20825c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20825cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208260: 0x14430259  bne         $v0, $v1, . + 4 + (0x259 << 2)
    ctx->pc = 0x208260u;
    {
        const bool branch_taken_0x208260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x208264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208260u;
        // 0x208264: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208260) {
            ctx->pc = 0x208BC8u;
            goto label_208bc8;
        }
    }
    ctx->pc = 0x208268u;
    // 0x208268: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x208268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20826c: 0x4610073  bgez        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x20826Cu;
    {
        const bool branch_taken_0x20826c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x208270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20826Cu;
        // 0x208270: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20826c) {
            ctx->pc = 0x20843Cu;
            goto label_20843c;
        }
    }
    ctx->pc = 0x208274u;
    // 0x208274: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x208274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x208278: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x208278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x20827c: 0x1040024e  beqz        $v0, . + 4 + (0x24E << 2)
    ctx->pc = 0x20827Cu;
    {
        const bool branch_taken_0x20827c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20827Cu;
        // 0x208280: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20827c) {
            ctx->pc = 0x208BB8u;
            goto label_208bb8;
        }
    }
    ctx->pc = 0x208284u;
    // 0x208284: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x208284u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x208288: 0x24429e50  addiu       $v0, $v0, -0x61B0
    ctx->pc = 0x208288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942288));
    // 0x20828c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20828cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x208290: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x208290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x208294: 0x800008  jr          $a0
    ctx->pc = 0x208294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20829Cu: goto label_20829c;
            case 0x2082A4u: goto label_2082a4;
            case 0x208BB8u: goto label_208bb8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208294u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20829Cu;
label_20829c:
    // 0x20829c: 0x10000247  b           . + 4 + (0x247 << 2)
    ctx->pc = 0x20829Cu;
    {
        const bool branch_taken_0x20829c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2082A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20829Cu;
        // 0x2082a0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20829c) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x2082A4u;
label_2082a4:
    // 0x2082a4: 0x10000245  b           . + 4 + (0x245 << 2)
    ctx->pc = 0x2082A4u;
    {
        const bool branch_taken_0x2082a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2082A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082A4u;
        // 0x2082a8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2082a4) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x2082ACu;
label_2082ac:
    // 0x2082ac: 0x3c0501fb  lui         $a1, 0x1FB
    ctx->pc = 0x2082acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)507 << 16));
    // 0x2082b0: 0x8f849c14  lw          $a0, -0x63EC($gp)
    ctx->pc = 0x2082b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941716)));
    // 0x2082b4: 0x24a529c0  addiu       $a1, $a1, 0x29C0
    ctx->pc = 0x2082b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10688));
    // 0x2082b8: 0xc0b7344  jal         func_2DCD10
    ctx->pc = 0x2082B8u;
    SET_GPR_U32(ctx, 31, 0x2082C0u);
    ctx->pc = 0x2082BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2082B8u;
    // 0x2082bc: 0x240603c4  addiu       $a2, $zero, 0x3C4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCD10u, 0x2082B8u, 0x2082C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2082C0u;
label_2082c0:
    // 0x2082c0: 0x1440023e  bnez        $v0, . + 4 + (0x23E << 2)
    ctx->pc = 0x2082C0u;
    {
        const bool branch_taken_0x2082c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2082C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082C0u;
        // 0x2082c4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2082c0) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x2082C8u;
    // 0x2082c8: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x2082c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2082cc: 0x1000023d  b           . + 4 + (0x23D << 2)
    ctx->pc = 0x2082CCu;
    {
        const bool branch_taken_0x2082cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2082D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082CCu;
        // 0x2082d0: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2082cc) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x2082D4u;
label_2082d4:
    // 0x2082d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2082d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2082d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2082d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2082dc: 0xc0b7392  jal         func_2DCE48
    ctx->pc = 0x2082DCu;
    SET_GPR_U32(ctx, 31, 0x2082E4u);
    ctx->pc = 0x2082E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2082DCu;
    // 0x2082e0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCE48u, 0x2082DCu, 0x2082E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2082E4u;
label_2082e4:
    // 0x2082e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2082e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2082e8: 0x14430237  bne         $v0, $v1, . + 4 + (0x237 << 2)
    ctx->pc = 0x2082E8u;
    {
        const bool branch_taken_0x2082e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2082ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082E8u;
        // 0x2082ec: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2082e8) {
            ctx->pc = 0x208BC8u;
            goto label_208bc8;
        }
    }
    ctx->pc = 0x2082F0u;
    // 0x2082f0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2082f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2082f4: 0x240203c4  addiu       $v0, $zero, 0x3C4
    ctx->pc = 0x2082f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    // 0x2082f8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2082F8u;
    {
        const bool branch_taken_0x2082f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2082FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082F8u;
        // 0x2082fc: 0x2463000a  addiu       $v1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2082f8) {
            ctx->pc = 0x20830Cu;
            goto label_20830c;
        }
    }
    ctx->pc = 0x208300u;
    // 0x208300: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x208300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x208304: 0x10000230  b           . + 4 + (0x230 << 2)
    ctx->pc = 0x208304u;
    {
        const bool branch_taken_0x208304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208304u;
        // 0x208308: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208304) {
            ctx->pc = 0x208BC8u;
            goto label_208bc8;
        }
    }
    ctx->pc = 0x20830Cu;
label_20830c:
    // 0x20830c: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x20830cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x208310: 0x10400229  beqz        $v0, . + 4 + (0x229 << 2)
    ctx->pc = 0x208310u;
    {
        const bool branch_taken_0x208310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208310u;
        // 0x208314: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208310) {
            ctx->pc = 0x208BB8u;
            goto label_208bb8;
        }
    }
    ctx->pc = 0x208318u;
    // 0x208318: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x208318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20831c: 0x24429e80  addiu       $v0, $v0, -0x6180
    ctx->pc = 0x20831cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942336));
    // 0x208320: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x208320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x208324: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x208324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x208328: 0x800008  jr          $a0
    ctx->pc = 0x208328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x208330u: goto label_208330;
            case 0x208BB8u: goto label_208bb8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208328u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x208330u;
label_208330:
    // 0x208330: 0x10000222  b           . + 4 + (0x222 << 2)
    ctx->pc = 0x208330u;
    {
        const bool branch_taken_0x208330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208330u;
        // 0x208334: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208330) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x208338u;
label_208338:
    // 0x208338: 0xc0b72a2  jal         func_2DCA88
    ctx->pc = 0x208338u;
    SET_GPR_U32(ctx, 31, 0x208340u);
    ctx->pc = 0x20833Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208338u;
    // 0x20833c: 0x8f849c14  lw          $a0, -0x63EC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941716)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCA88u, 0x208338u, 0x208340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208340u;
label_208340:
    // 0x208340: 0x1440021e  bnez        $v0, . + 4 + (0x21E << 2)
    ctx->pc = 0x208340u;
    {
        const bool branch_taken_0x208340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208340u;
        // 0x208344: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208340) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x208348u;
    // 0x208348: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x208348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x20834c: 0x1000021d  b           . + 4 + (0x21D << 2)
    ctx->pc = 0x20834Cu;
    {
        const bool branch_taken_0x20834c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20834Cu;
        // 0x208350: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20834c) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x208354u;
label_208354:
    // 0x208354: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x208354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208358: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x208358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20835c: 0xc0b7392  jal         func_2DCE48
    ctx->pc = 0x20835Cu;
    SET_GPR_U32(ctx, 31, 0x208364u);
    ctx->pc = 0x208360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20835Cu;
    // 0x208360: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCE48u, 0x20835Cu, 0x208364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208364u;
label_208364:
    // 0x208364: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x208364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208368: 0x14430217  bne         $v0, $v1, . + 4 + (0x217 << 2)
    ctx->pc = 0x208368u;
    {
        const bool branch_taken_0x208368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x20836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208368u;
        // 0x20836c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208368) {
            ctx->pc = 0x208BC8u;
            goto label_208bc8;
        }
    }
    ctx->pc = 0x208370u;
    // 0x208370: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x208370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208374: 0x2444000a  addiu       $a0, $v0, 0xA
    ctx->pc = 0x208374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x208378: 0x2c83000b  sltiu       $v1, $a0, 0xB
    ctx->pc = 0x208378u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x20837c: 0x1060020e  beqz        $v1, . + 4 + (0x20E << 2)
    ctx->pc = 0x20837Cu;
    {
        const bool branch_taken_0x20837c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x208380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20837Cu;
        // 0x208380: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20837c) {
            ctx->pc = 0x208BB8u;
            goto label_208bb8;
        }
    }
    ctx->pc = 0x208384u;
    // 0x208384: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x208384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x208388: 0x24429eb0  addiu       $v0, $v0, -0x6150
    ctx->pc = 0x208388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942384));
    // 0x20838c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20838cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x208390: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x208390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x208394: 0x800008  jr          $a0
    ctx->pc = 0x208394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20839Cu: goto label_20839c;
            case 0x208BB8u: goto label_208bb8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208394u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20839Cu;
label_20839c:
    // 0x20839c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x20839cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2083a0: 0x10000208  b           . + 4 + (0x208 << 2)
    ctx->pc = 0x2083A0u;
    {
        const bool branch_taken_0x2083a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2083A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083A0u;
        // 0x2083a4: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083a0) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x2083A8u;
label_2083a8:
    // 0x2083a8: 0x8f82b678  lw          $v0, -0x4988($gp)
    ctx->pc = 0x2083a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948472)));
    // 0x2083ac: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2083acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2083b0: 0x30420022  andi        $v0, $v0, 0x22
    ctx->pc = 0x2083b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)34);
    // 0x2083b4: 0x10510075  beq         $v0, $s1, . + 4 + (0x75 << 2)
    ctx->pc = 0x2083B4u;
    {
        const bool branch_taken_0x2083b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2083B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083B4u;
        // 0x2083b8: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083b4) {
            ctx->pc = 0x20858Cu;
            goto label_20858c;
        }
    }
    ctx->pc = 0x2083BCu;
    // 0x2083bc: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2083bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2083c0: 0x26109720  addiu       $s0, $s0, -0x68E0
    ctx->pc = 0x2083c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294940448));
    // 0x2083c4: 0x3c0601fb  lui         $a2, 0x1FB
    ctx->pc = 0x2083c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)507 << 16));
    // 0x2083c8: 0x3c0701fb  lui         $a3, 0x1FB
    ctx->pc = 0x2083c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)507 << 16));
    // 0x2083cc: 0x24a5e438  addiu       $a1, $a1, -0x1BC8
    ctx->pc = 0x2083ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960184));
    // 0x2083d0: 0x24c62940  addiu       $a2, $a2, 0x2940
    ctx->pc = 0x2083d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10560));
    // 0x2083d4: 0x24e72ac4  addiu       $a3, $a3, 0x2AC4
    ctx->pc = 0x2083d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10948));
    // 0x2083d8: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x2083D8u;
    SET_GPR_U32(ctx, 31, 0x2083E0u);
    ctx->pc = 0x2083DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2083D8u;
    // 0x2083dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x2083D8u, 0x2083E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2083E0u;
label_2083e0:
    // 0x2083e0: 0x8f83b678  lw          $v1, -0x4988($gp)
    ctx->pc = 0x2083e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948472)));
    // 0x2083e4: 0x24070202  addiu       $a3, $zero, 0x202
    ctx->pc = 0x2083e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
    // 0x2083e8: 0x8f849bf0  lw          $a0, -0x6410($gp)
    ctx->pc = 0x2083e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941680)));
    // 0x2083ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2083ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2083f0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2083f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2083f4: 0x8f859bf4  lw          $a1, -0x640C($gp)
    ctx->pc = 0x2083f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941684)));
    // 0x2083f8: 0xc0b725a  jal         func_2DC968
    ctx->pc = 0x2083F8u;
    SET_GPR_U32(ctx, 31, 0x208400u);
    ctx->pc = 0x2083FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2083F8u;
    // 0x2083fc: 0x223380b  movn        $a3, $s1, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC968u, 0x2083F8u, 0x208400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208400u;
label_208400:
    // 0x208400: 0x144001ee  bnez        $v0, . + 4 + (0x1EE << 2)
    ctx->pc = 0x208400u;
    {
        const bool branch_taken_0x208400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208400u;
        // 0x208404: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208400) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x208408u;
    // 0x208408: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x208408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x20840c: 0x100001ed  b           . + 4 + (0x1ED << 2)
    ctx->pc = 0x20840Cu;
    {
        const bool branch_taken_0x20840c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20840Cu;
        // 0x208410: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20840c) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x208414u;
label_208414:
    // 0x208414: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x208414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208418: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x208418u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x20841c: 0xc0b7392  jal         func_2DCE48
    ctx->pc = 0x20841Cu;
    SET_GPR_U32(ctx, 31, 0x208424u);
    ctx->pc = 0x208420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20841Cu;
    // 0x208420: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCE48u, 0x20841Cu, 0x208424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208424u;
label_208424:
    // 0x208424: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x208424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208428: 0x144301e7  bne         $v0, $v1, . + 4 + (0x1E7 << 2)
    ctx->pc = 0x208428u;
    {
        const bool branch_taken_0x208428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x20842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208428u;
        // 0x20842c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208428) {
            ctx->pc = 0x208BC8u;
            goto label_208bc8;
        }
    }
    ctx->pc = 0x208430u;
    // 0x208430: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x208430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208434: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x208434u;
    {
        const bool branch_taken_0x208434 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x208438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208434u;
        // 0x208438: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208434) {
            ctx->pc = 0x208448u;
            goto label_208448;
        }
    }
    ctx->pc = 0x20843Cu;
label_20843c:
    // 0x20843c: 0xaf839c14  sw          $v1, -0x63EC($gp)
    ctx->pc = 0x20843cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941716), GPR_U32(ctx, 3));
    // 0x208440: 0x100001e0  b           . + 4 + (0x1E0 << 2)
    ctx->pc = 0x208440u;
    {
        const bool branch_taken_0x208440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208440u;
        // 0x208444: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208440) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x208448u;
label_208448:
    // 0x208448: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x208448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x20844c: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x20844cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x208450: 0x104001d9  beqz        $v0, . + 4 + (0x1D9 << 2)
    ctx->pc = 0x208450u;
    {
        const bool branch_taken_0x208450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208450u;
        // 0x208454: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208450) {
            ctx->pc = 0x208BB8u;
            goto label_208bb8;
        }
    }
    ctx->pc = 0x208458u;
    // 0x208458: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x208458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20845c: 0x24429ee0  addiu       $v0, $v0, -0x6120
    ctx->pc = 0x20845cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942432));
    // 0x208460: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x208460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x208464: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x208464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x208468: 0x800008  jr          $a0
    ctx->pc = 0x208468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x208470u: goto label_208470;
            case 0x208BB8u: goto label_208bb8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208468u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x208470u;
label_208470:
    // 0x208470: 0x100001d2  b           . + 4 + (0x1D2 << 2)
    ctx->pc = 0x208470u;
    {
        const bool branch_taken_0x208470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208470u;
        // 0x208474: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208470) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x208478u;
label_208478:
    // 0x208478: 0x8f82b65c  lw          $v0, -0x49A4($gp)
    ctx->pc = 0x208478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948444)));
    // 0x20847c: 0x2783b670  addiu       $v1, $gp, -0x4990
    ctx->pc = 0x20847cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948464));
    // 0x208480: 0x2785b668  addiu       $a1, $gp, -0x4998
    ctx->pc = 0x208480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948456));
    // 0x208484: 0x8f849c14  lw          $a0, -0x63EC($gp)
    ctx->pc = 0x208484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941716)));
    // 0x208488: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x208488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20848c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x20848cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x208490: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x208490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x208494: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x208494u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x208498: 0xc0b7344  jal         func_2DCD10
    ctx->pc = 0x208498u;
    SET_GPR_U32(ctx, 31, 0x2084A0u);
    ctx->pc = 0x20849Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208498u;
    // 0x20849c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCD10u, 0x208498u, 0x2084A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2084A0u;
label_2084a0:
    // 0x2084a0: 0x144001c6  bnez        $v0, . + 4 + (0x1C6 << 2)
    ctx->pc = 0x2084A0u;
    {
        const bool branch_taken_0x2084a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2084A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2084A0u;
        // 0x2084a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2084a0) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x2084A8u;
    // 0x2084a8: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x2084a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2084ac: 0x100001c5  b           . + 4 + (0x1C5 << 2)
    ctx->pc = 0x2084ACu;
    {
        const bool branch_taken_0x2084ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2084B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2084ACu;
        // 0x2084b0: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2084ac) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x2084B4u;
label_2084b4:
    // 0x2084b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2084b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2084b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2084b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2084bc: 0xc0b7392  jal         func_2DCE48
    ctx->pc = 0x2084BCu;
    SET_GPR_U32(ctx, 31, 0x2084C4u);
    ctx->pc = 0x2084C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2084BCu;
    // 0x2084c0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCE48u, 0x2084BCu, 0x2084C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2084C4u;
label_2084c4:
    // 0x2084c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2084c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2084c8: 0x144301bf  bne         $v0, $v1, . + 4 + (0x1BF << 2)
    ctx->pc = 0x2084C8u;
    {
        const bool branch_taken_0x2084c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2084CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2084C8u;
        // 0x2084cc: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2084c8) {
            ctx->pc = 0x208BC8u;
            goto label_208bc8;
        }
    }
    ctx->pc = 0x2084D0u;
    // 0x2084d0: 0x8f82b65c  lw          $v0, -0x49A4($gp)
    ctx->pc = 0x2084d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948444)));
    // 0x2084d4: 0x2784b670  addiu       $a0, $gp, -0x4990
    ctx->pc = 0x2084d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948464));
    // 0x2084d8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2084d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2084dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2084dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2084e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2084e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2084e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2084e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2084e8: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2084E8u;
    {
        const bool branch_taken_0x2084e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2084ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2084E8u;
        // 0x2084ec: 0x24a3000a  addiu       $v1, $a1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2084e8) {
            ctx->pc = 0x2084FCu;
            goto label_2084fc;
        }
    }
    ctx->pc = 0x2084F0u;
    // 0x2084f0: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2084f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2084f4: 0x100001b4  b           . + 4 + (0x1B4 << 2)
    ctx->pc = 0x2084F4u;
    {
        const bool branch_taken_0x2084f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2084F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2084F4u;
        // 0x2084f8: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2084f4) {
            ctx->pc = 0x208BC8u;
            goto label_208bc8;
        }
    }
    ctx->pc = 0x2084FCu;
label_2084fc:
    // 0x2084fc: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x2084fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x208500: 0x104001ad  beqz        $v0, . + 4 + (0x1AD << 2)
    ctx->pc = 0x208500u;
    {
        const bool branch_taken_0x208500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208500u;
        // 0x208504: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208500) {
            ctx->pc = 0x208BB8u;
            goto label_208bb8;
        }
    }
    ctx->pc = 0x208508u;
    // 0x208508: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x208508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20850c: 0x24429f10  addiu       $v0, $v0, -0x60F0
    ctx->pc = 0x20850cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942480));
    // 0x208510: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x208510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x208514: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x208514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x208518: 0x800008  jr          $a0
    ctx->pc = 0x208518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x208520u: goto label_208520;
            case 0x208BB8u: goto label_208bb8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208518u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x208520u;
label_208520:
    // 0x208520: 0x100001a6  b           . + 4 + (0x1A6 << 2)
    ctx->pc = 0x208520u;
    {
        const bool branch_taken_0x208520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208520u;
        // 0x208524: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208520) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x208528u;
label_208528:
    // 0x208528: 0xc0b72a2  jal         func_2DCA88
    ctx->pc = 0x208528u;
    SET_GPR_U32(ctx, 31, 0x208530u);
    ctx->pc = 0x20852Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208528u;
    // 0x20852c: 0x8f849c14  lw          $a0, -0x63EC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941716)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCA88u, 0x208528u, 0x208530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208530u;
label_208530:
    // 0x208530: 0x144001a2  bnez        $v0, . + 4 + (0x1A2 << 2)
    ctx->pc = 0x208530u;
    {
        const bool branch_taken_0x208530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208530u;
        // 0x208534: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208530) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x208538u;
    // 0x208538: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x208538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x20853c: 0x100001a1  b           . + 4 + (0x1A1 << 2)
    ctx->pc = 0x20853Cu;
    {
        const bool branch_taken_0x20853c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20853Cu;
        // 0x208540: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20853c) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x208544u;
label_208544:
    // 0x208544: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x208544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208548: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x208548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20854c: 0xc0b7392  jal         func_2DCE48
    ctx->pc = 0x20854Cu;
    SET_GPR_U32(ctx, 31, 0x208554u);
    ctx->pc = 0x208550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20854Cu;
    // 0x208550: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCE48u, 0x20854Cu, 0x208554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208554u;
label_208554:
    // 0x208554: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x208554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208558: 0x1443019b  bne         $v0, $v1, . + 4 + (0x19B << 2)
    ctx->pc = 0x208558u;
    {
        const bool branch_taken_0x208558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x20855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208558u;
        // 0x20855c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208558) {
            ctx->pc = 0x208BC8u;
            goto label_208bc8;
        }
    }
    ctx->pc = 0x208560u;
    // 0x208560: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x208560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208564: 0x2444000a  addiu       $a0, $v0, 0xA
    ctx->pc = 0x208564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x208568: 0x2c83000b  sltiu       $v1, $a0, 0xB
    ctx->pc = 0x208568u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x20856c: 0x10600192  beqz        $v1, . + 4 + (0x192 << 2)
    ctx->pc = 0x20856Cu;
    {
        const bool branch_taken_0x20856c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x208570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20856Cu;
        // 0x208570: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20856c) {
            ctx->pc = 0x208BB8u;
            goto label_208bb8;
        }
    }
    ctx->pc = 0x208574u;
    // 0x208574: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x208574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x208578: 0x24429f40  addiu       $v0, $v0, -0x60C0
    ctx->pc = 0x208578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942528));
    // 0x20857c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20857cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x208580: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x208580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x208584: 0x800008  jr          $a0
    ctx->pc = 0x208584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20858Cu: goto label_20858c;
            case 0x208BB8u: goto label_208bb8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208584u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20858Cu;
label_20858c:
    // 0x20858c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x20858cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x208590: 0x1000018c  b           . + 4 + (0x18C << 2)
    ctx->pc = 0x208590u;
    {
        const bool branch_taken_0x208590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208590u;
        // 0x208594: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208590) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x208598u;
label_208598:
    // 0x208598: 0x8f82b678  lw          $v0, -0x4988($gp)
    ctx->pc = 0x208598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948472)));
    // 0x20859c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x20859cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2085a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2085A0u;
    {
        const bool branch_taken_0x2085a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2085A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2085A0u;
        // 0x2085a4: 0x8f829c10  lw          $v0, -0x63F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2085a0) {
            ctx->pc = 0x2085B0u;
            goto label_2085b0;
        }
    }
    ctx->pc = 0x2085A8u;
    // 0x2085a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2085A8u;
    {
        const bool branch_taken_0x2085a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2085ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2085A8u;
        // 0x2085ac: 0x3c1001fb  lui         $s0, 0x1FB (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)507 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2085a8) {
            ctx->pc = 0x2085B8u;
            goto label_2085b8;
        }
    }
    ctx->pc = 0x2085B0u;
label_2085b0:
    // 0x2085b0: 0x10000182  b           . + 4 + (0x182 << 2)
    ctx->pc = 0x2085B0u;
    {
        const bool branch_taken_0x2085b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2085B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2085B0u;
        // 0x2085b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2085b0) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x2085B8u;
label_2085b8:
    // 0x2085b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2085b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2085bc: 0x26102dc0  addiu       $s0, $s0, 0x2DC0
    ctx->pc = 0x2085bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11712));
    // 0x2085c0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2085c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2085c4: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2085C4u;
    SET_GPR_U32(ctx, 31, 0x2085CCu);
    ctx->pc = 0x2085C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2085C4u;
    // 0x2085c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2085C4u, 0x2085CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2085CCu;
label_2085cc:
    // 0x2085cc: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x2085ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x2085d0: 0x3c0601fb  lui         $a2, 0x1FB
    ctx->pc = 0x2085d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)507 << 16));
    // 0x2085d4: 0x8f849bf0  lw          $a0, -0x6410($gp)
    ctx->pc = 0x2085d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941680)));
    // 0x2085d8: 0x24c62940  addiu       $a2, $a2, 0x2940
    ctx->pc = 0x2085d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10560));
    // 0x2085dc: 0x8f859bf4  lw          $a1, -0x640C($gp)
    ctx->pc = 0x2085dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941684)));
    // 0x2085e0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2085e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2085e4: 0xa6030014  sh          $v1, 0x14($s0)
    ctx->pc = 0x2085e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x2085e8: 0xc0b754a  jal         func_2DD528
    ctx->pc = 0x2085E8u;
    SET_GPR_U32(ctx, 31, 0x2085F0u);
    ctx->pc = 0x2085ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2085E8u;
    // 0x2085ec: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD528u, 0x2085E8u, 0x2085F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2085F0u;
label_2085f0:
    // 0x2085f0: 0x14400172  bnez        $v0, . + 4 + (0x172 << 2)
    ctx->pc = 0x2085F0u;
    {
        const bool branch_taken_0x2085f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2085F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2085F0u;
        // 0x2085f4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2085f0) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x2085F8u;
    // 0x2085f8: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x2085f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2085fc: 0x10000171  b           . + 4 + (0x171 << 2)
    ctx->pc = 0x2085FCu;
    {
        const bool branch_taken_0x2085fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2085FCu;
        // 0x208600: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2085fc) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x208604u;
label_208604:
    // 0x208604: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x208604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208608: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x208608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20860c: 0xc0b7392  jal         func_2DCE48
    ctx->pc = 0x20860Cu;
    SET_GPR_U32(ctx, 31, 0x208614u);
    ctx->pc = 0x208610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20860Cu;
    // 0x208610: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCE48u, 0x20860Cu, 0x208614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208614u;
label_208614:
    // 0x208614: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x208614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x208618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20861c: 0x14c2016a  bne         $a2, $v0, . + 4 + (0x16A << 2)
    ctx->pc = 0x20861Cu;
    {
        const bool branch_taken_0x20861c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x208620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20861Cu;
        // 0x208620: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20861c) {
            ctx->pc = 0x208BC8u;
            goto label_208bc8;
        }
    }
    ctx->pc = 0x208624u;
    // 0x208624: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x208624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208628: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x208628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x20862c: 0x10620162  beq         $v1, $v0, . + 4 + (0x162 << 2)
    ctx->pc = 0x20862Cu;
    {
        const bool branch_taken_0x20862c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x208630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20862Cu;
        // 0x208630: 0x2862fffd  slti        $v0, $v1, -0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967293) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20862c) {
            ctx->pc = 0x208BB8u;
            goto label_208bb8;
        }
    }
    ctx->pc = 0x208634u;
    // 0x208634: 0x14400161  bnez        $v0, . + 4 + (0x161 << 2)
    ctx->pc = 0x208634u;
    {
        const bool branch_taken_0x208634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208634u;
        // 0x208638: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208634) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x20863Cu;
    // 0x20863c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x20863cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x208640: 0x5062015e  beql        $v1, $v0, . + 4 + (0x15E << 2)
    ctx->pc = 0x208640u;
    {
        const bool branch_taken_0x208640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x208640) {
            ctx->pc = 0x208644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208640u;
            // 0x208644: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x208648u;
    // 0x208648: 0x1460015c  bnez        $v1, . + 4 + (0x15C << 2)
    ctx->pc = 0x208648u;
    {
        const bool branch_taken_0x208648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20864Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208648u;
        // 0x20864c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208648) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x208650u;
label_208650:
    // 0x208650: 0xaf869be8  sw          $a2, -0x6418($gp)
    ctx->pc = 0x208650u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941672), GPR_U32(ctx, 6));
    // 0x208654: 0x1000015b  b           . + 4 + (0x15B << 2)
    ctx->pc = 0x208654u;
    {
        const bool branch_taken_0x208654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208654u;
        // 0x208658: 0xaf809bec  sw          $zero, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208654) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x20865Cu;
label_20865c:
    // 0x20865c: 0x3c0601fb  lui         $a2, 0x1FB
    ctx->pc = 0x20865cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)507 << 16));
    // 0x208660: 0x8f849bf0  lw          $a0, -0x6410($gp)
    ctx->pc = 0x208660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941680)));
    // 0x208664: 0x8f859bf4  lw          $a1, -0x640C($gp)
    ctx->pc = 0x208664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941684)));
    // 0x208668: 0x24c62fc0  addiu       $a2, $a2, 0x2FC0
    ctx->pc = 0x208668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12224));
    // 0x20866c: 0xc0b725a  jal         func_2DC968
    ctx->pc = 0x20866Cu;
    SET_GPR_U32(ctx, 31, 0x208674u);
    ctx->pc = 0x208670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20866Cu;
    // 0x208670: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC968u, 0x20866Cu, 0x208674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208674u;
label_208674:
    // 0x208674: 0x14400151  bnez        $v0, . + 4 + (0x151 << 2)
    ctx->pc = 0x208674u;
    {
        const bool branch_taken_0x208674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208674u;
        // 0x208678: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208674) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x20867Cu;
    // 0x20867c: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x20867cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x208680: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x208680u;
    {
        const bool branch_taken_0x208680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208680u;
        // 0x208684: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208680) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x208688u;
label_208688:
    // 0x208688: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x208688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20868c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20868cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208690: 0xc0b7392  jal         func_2DCE48
    ctx->pc = 0x208690u;
    SET_GPR_U32(ctx, 31, 0x208698u);
    ctx->pc = 0x208694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208690u;
    // 0x208694: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCE48u, 0x208690u, 0x208698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208698u;
label_208698:
    // 0x208698: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x208698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20869c: 0x1443014a  bne         $v0, $v1, . + 4 + (0x14A << 2)
    ctx->pc = 0x20869Cu;
    {
        const bool branch_taken_0x20869c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2086A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20869Cu;
        // 0x2086a0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20869c) {
            ctx->pc = 0x208BC8u;
            goto label_208bc8;
        }
    }
    ctx->pc = 0x2086A4u;
    // 0x2086a4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2086a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2086a8: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2086A8u;
    {
        const bool branch_taken_0x2086a8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2086ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2086A8u;
        // 0x2086ac: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2086a8) {
            ctx->pc = 0x2086C8u;
            goto label_2086c8;
        }
    }
    ctx->pc = 0x2086B0u;
    // 0x2086b0: 0x8f82b680  lw          $v0, -0x4980($gp)
    ctx->pc = 0x2086b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948480)));
    // 0x2086b4: 0x1840002d  blez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2086B4u;
    {
        const bool branch_taken_0x2086b4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2086B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2086B4u;
        // 0x2086b8: 0xaf859c20  sw          $a1, -0x63E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941728), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2086b4) {
            ctx->pc = 0x20876Cu;
            goto label_20876c;
        }
    }
    ctx->pc = 0x2086BCu;
    // 0x2086bc: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x2086bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2086c0: 0x10000141  b           . + 4 + (0x141 << 2)
    ctx->pc = 0x2086C0u;
    {
        const bool branch_taken_0x2086c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2086C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2086C0u;
        // 0x2086c4: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2086c0) {
            ctx->pc = 0x208BC8u;
            goto label_208bc8;
        }
    }
    ctx->pc = 0x2086C8u;
label_2086c8:
    // 0x2086c8: 0x24a3000a  addiu       $v1, $a1, 0xA
    ctx->pc = 0x2086c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
    // 0x2086cc: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x2086ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2086d0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2086D0u;
    {
        const bool branch_taken_0x2086d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2086D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2086D0u;
        // 0x2086d4: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2086d0) {
            ctx->pc = 0x2086F8u;
            goto label_2086f8;
        }
    }
    ctx->pc = 0x2086D8u;
    // 0x2086d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2086d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2086dc: 0x24429f70  addiu       $v0, $v0, -0x6090
    ctx->pc = 0x2086dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942576));
    // 0x2086e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2086e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2086e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2086e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2086e8: 0x800008  jr          $a0
    ctx->pc = 0x2086E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2086F0u: goto label_2086f0;
            case 0x2086F8u: goto label_2086f8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2086E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2086F0u;
label_2086f0:
    // 0x2086f0: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x2086F0u;
    {
        const bool branch_taken_0x2086f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2086F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2086F0u;
        // 0x2086f4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2086f0) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x2086F8u;
label_2086f8:
    // 0x2086f8: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x2086f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x2086fc: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2086FCu;
    {
        const bool branch_taken_0x2086fc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x208700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2086FCu;
        // 0x208700: 0x28a2fff7  slti        $v0, $a1, -0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967287) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2086fc) {
            ctx->pc = 0x20870Cu;
            goto label_20870c;
        }
    }
    ctx->pc = 0x208704u;
    // 0x208704: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x208704u;
    {
        const bool branch_taken_0x208704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208704u;
        // 0x208708: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208704) {
            ctx->pc = 0x2088DCu;
            goto label_2088dc;
        }
    }
    ctx->pc = 0x20870Cu;
label_20870c:
    // 0x20870c: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x20870Cu;
    {
        const bool branch_taken_0x20870c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20870Cu;
        // 0x208710: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20870c) {
            ctx->pc = 0x2088D8u;
            goto label_2088d8;
        }
    }
    ctx->pc = 0x208714u;
    // 0x208714: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x208714u;
    {
        const bool branch_taken_0x208714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208714u;
        // 0x208718: 0xaf829be8  sw          $v0, -0x6418($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941672), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208714) {
            ctx->pc = 0x2088E0u;
            goto label_2088e0;
        }
    }
    ctx->pc = 0x20871Cu;
label_20871c:
    // 0x20871c: 0x8f849c20  lw          $a0, -0x63E0($gp)
    ctx->pc = 0x20871cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941728)));
    // 0x208720: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x208720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208724: 0xc0b72c6  jal         func_2DCB18
    ctx->pc = 0x208724u;
    SET_GPR_U32(ctx, 31, 0x20872Cu);
    ctx->pc = 0x208728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208724u;
    // 0x208728: 0x8f85b680  lw          $a1, -0x4980($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948480)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCB18u, 0x208724u, 0x20872Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20872Cu;
label_20872c:
    // 0x20872c: 0x14400123  bnez        $v0, . + 4 + (0x123 << 2)
    ctx->pc = 0x20872Cu;
    {
        const bool branch_taken_0x20872c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20872Cu;
        // 0x208730: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20872c) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x208734u;
    // 0x208734: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x208734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x208738: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x208738u;
    {
        const bool branch_taken_0x208738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208738u;
        // 0x20873c: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208738) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x208740u;
label_208740:
    // 0x208740: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x208740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208744: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x208744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208748: 0xc0b7392  jal         func_2DCE48
    ctx->pc = 0x208748u;
    SET_GPR_U32(ctx, 31, 0x208750u);
    ctx->pc = 0x20874Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208748u;
    // 0x20874c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCE48u, 0x208748u, 0x208750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208750u;
label_208750:
    // 0x208750: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x208750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208754: 0x1443011c  bne         $v0, $v1, . + 4 + (0x11C << 2)
    ctx->pc = 0x208754u;
    {
        const bool branch_taken_0x208754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x208758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208754u;
        // 0x208758: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208754) {
            ctx->pc = 0x208BC8u;
            goto label_208bc8;
        }
    }
    ctx->pc = 0x20875Cu;
    // 0x20875c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20875cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208760: 0x8f82b680  lw          $v0, -0x4980($gp)
    ctx->pc = 0x208760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948480)));
    // 0x208764: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x208764u;
    {
        const bool branch_taken_0x208764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x208768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208764u;
        // 0x208768: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208764) {
            ctx->pc = 0x208778u;
            goto label_208778;
        }
    }
    ctx->pc = 0x20876Cu;
label_20876c:
    // 0x20876c: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x20876cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x208770: 0x10000114  b           . + 4 + (0x114 << 2)
    ctx->pc = 0x208770u;
    {
        const bool branch_taken_0x208770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208770u;
        // 0x208774: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208770) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x208778u;
label_208778:
    // 0x208778: 0x1062010f  beq         $v1, $v0, . + 4 + (0x10F << 2)
    ctx->pc = 0x208778u;
    {
        const bool branch_taken_0x208778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208778u;
        // 0x20877c: 0x2862fffd  slti        $v0, $v1, -0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967293) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208778) {
            ctx->pc = 0x208BB8u;
            goto label_208bb8;
        }
    }
    ctx->pc = 0x208780u;
    // 0x208780: 0x1440010e  bnez        $v0, . + 4 + (0x10E << 2)
    ctx->pc = 0x208780u;
    {
        const bool branch_taken_0x208780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208780u;
        // 0x208784: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208780) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x208788u;
    // 0x208788: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x208788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x20878c: 0x1462010b  bne         $v1, $v0, . + 4 + (0x10B << 2)
    ctx->pc = 0x20878Cu;
    {
        const bool branch_taken_0x20878c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x208790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20878Cu;
        // 0x208790: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20878c) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x208794u;
    // 0x208794: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x208794u;
    {
        const bool branch_taken_0x208794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208794u;
        // 0x208798: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208794) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x20879Cu;
label_20879c:
    // 0x20879c: 0x8f849c20  lw          $a0, -0x63E0($gp)
    ctx->pc = 0x20879cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941728)));
    // 0x2087a0: 0x8f859c18  lw          $a1, -0x63E8($gp)
    ctx->pc = 0x2087a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941720)));
    // 0x2087a4: 0xc0b730e  jal         func_2DCC38
    ctx->pc = 0x2087A4u;
    SET_GPR_U32(ctx, 31, 0x2087ACu);
    ctx->pc = 0x2087A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2087A4u;
    // 0x2087a8: 0x8f869c1c  lw          $a2, -0x63E4($gp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941724)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCC38u, 0x2087A4u, 0x2087ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2087ACu;
label_2087ac:
    // 0x2087ac: 0x14400103  bnez        $v0, . + 4 + (0x103 << 2)
    ctx->pc = 0x2087ACu;
    {
        const bool branch_taken_0x2087ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2087B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2087ACu;
        // 0x2087b0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2087ac) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x2087B4u;
    // 0x2087b4: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x2087b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x2087b8: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x2087B8u;
    {
        const bool branch_taken_0x2087b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2087BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2087B8u;
        // 0x2087bc: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2087b8) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x2087C0u;
label_2087c0:
    // 0x2087c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2087c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2087c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2087c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2087c8: 0xc0b7392  jal         func_2DCE48
    ctx->pc = 0x2087C8u;
    SET_GPR_U32(ctx, 31, 0x2087D0u);
    ctx->pc = 0x2087CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2087C8u;
    // 0x2087cc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCE48u, 0x2087C8u, 0x2087D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2087D0u;
label_2087d0:
    // 0x2087d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2087d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2087d4: 0x144300fc  bne         $v0, $v1, . + 4 + (0xFC << 2)
    ctx->pc = 0x2087D4u;
    {
        const bool branch_taken_0x2087d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2087D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2087D4u;
        // 0x2087d8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2087d4) {
            ctx->pc = 0x208BC8u;
            goto label_208bc8;
        }
    }
    ctx->pc = 0x2087DCu;
    // 0x2087dc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2087dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2087e0: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2087E0u;
    {
        const bool branch_taken_0x2087e0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2087E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2087E0u;
        // 0x2087e4: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2087e0) {
            ctx->pc = 0x2087F8u;
            goto label_2087f8;
        }
    }
    ctx->pc = 0x2087E8u;
    // 0x2087e8: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x2087e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2087ec: 0xaf85b67c  sw          $a1, -0x4984($gp)
    ctx->pc = 0x2087ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948476), GPR_U32(ctx, 5));
    // 0x2087f0: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x2087F0u;
    {
        const bool branch_taken_0x2087f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2087F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2087F0u;
        // 0x2087f4: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2087f0) {
            ctx->pc = 0x208BC8u;
            goto label_208bc8;
        }
    }
    ctx->pc = 0x2087F8u;
label_2087f8:
    // 0x2087f8: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x2087f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x2087fc: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2087FCu;
    {
        const bool branch_taken_0x2087fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x208800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2087FCu;
        // 0x208800: 0x28a2fffd  slti        $v0, $a1, -0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967293) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2087fc) {
            ctx->pc = 0x208828u;
            goto label_208828;
        }
    }
    ctx->pc = 0x208804u;
    // 0x208804: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x208804u;
    {
        const bool branch_taken_0x208804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208804u;
        // 0x208808: 0x2862fff7  slti        $v0, $v1, -0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967287) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208804) {
            ctx->pc = 0x20882Cu;
            goto label_20882c;
        }
    }
    ctx->pc = 0x20880Cu;
    // 0x20880c: 0x4a10007  bgez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x20880Cu;
    {
        const bool branch_taken_0x20880c = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x20880c) {
            ctx->pc = 0x20882Cu;
            goto label_20882c;
        }
    }
    ctx->pc = 0x208814u;
    // 0x208814: 0x28a2fffe  slti        $v0, $a1, -0x2
    ctx->pc = 0x208814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967294) ? 1 : 0);
    // 0x208818: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x208818u;
    {
        const bool branch_taken_0x208818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20881Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208818u;
        // 0x20881c: 0x2862fff7  slti        $v0, $v1, -0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967287) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208818) {
            ctx->pc = 0x20882Cu;
            goto label_20882c;
        }
    }
    ctx->pc = 0x208820u;
    // 0x208820: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x208820u;
    {
        const bool branch_taken_0x208820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208820u;
        // 0x208824: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208820) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x208828u;
label_208828:
    // 0x208828: 0x2862fff7  slti        $v0, $v1, -0x9
    ctx->pc = 0x208828u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967287) ? 1 : 0);
label_20882c:
    // 0x20882c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x20882Cu;
    {
        const bool branch_taken_0x20882c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20882Cu;
        // 0x208830: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20882c) {
            ctx->pc = 0x2088D8u;
            goto label_2088d8;
        }
    }
    ctx->pc = 0x208834u;
    // 0x208834: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x208834u;
    {
        const bool branch_taken_0x208834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208834u;
        // 0x208838: 0xaf829be8  sw          $v0, -0x6418($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941672), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208834) {
            ctx->pc = 0x2088E0u;
            goto label_2088e0;
        }
    }
    ctx->pc = 0x20883Cu;
label_20883c:
    // 0x20883c: 0xc0b72a2  jal         func_2DCA88
    ctx->pc = 0x20883Cu;
    SET_GPR_U32(ctx, 31, 0x208844u);
    ctx->pc = 0x208840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20883Cu;
    // 0x208840: 0x8f849c20  lw          $a0, -0x63E0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941728)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCA88u, 0x20883Cu, 0x208844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208844u;
label_208844:
    // 0x208844: 0x144000dd  bnez        $v0, . + 4 + (0xDD << 2)
    ctx->pc = 0x208844u;
    {
        const bool branch_taken_0x208844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208844u;
        // 0x208848: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208844) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x20884Cu;
    // 0x20884c: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x20884cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x208850: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x208850u;
    {
        const bool branch_taken_0x208850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208850u;
        // 0x208854: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208850) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x208858u;
label_208858:
    // 0x208858: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x208858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20885c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20885cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208860: 0xc0b7392  jal         func_2DCE48
    ctx->pc = 0x208860u;
    SET_GPR_U32(ctx, 31, 0x208868u);
    ctx->pc = 0x208864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208860u;
    // 0x208864: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCE48u, 0x208860u, 0x208868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208868u;
label_208868:
    // 0x208868: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x208868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20886c: 0x144300d6  bne         $v0, $v1, . + 4 + (0xD6 << 2)
    ctx->pc = 0x20886Cu;
    {
        const bool branch_taken_0x20886c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x208870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20886Cu;
        // 0x208870: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20886c) {
            ctx->pc = 0x208BC8u;
            goto label_208bc8;
        }
    }
    ctx->pc = 0x208874u;
    // 0x208874: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x208874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208878: 0x24a3000a  addiu       $v1, $a1, 0xA
    ctx->pc = 0x208878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
    // 0x20887c: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x20887cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x208880: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x208880u;
    {
        const bool branch_taken_0x208880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208880u;
        // 0x208884: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208880) {
            ctx->pc = 0x2088CCu;
            goto label_2088cc;
        }
    }
    ctx->pc = 0x208888u;
    // 0x208888: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x208888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20888c: 0x24429fa0  addiu       $v0, $v0, -0x6060
    ctx->pc = 0x20888cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942624));
    // 0x208890: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x208890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x208894: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x208894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x208898: 0x800008  jr          $a0
    ctx->pc = 0x208898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2088A0u: goto label_2088a0;
            case 0x2088C4u: goto label_2088c4;
            case 0x2088CCu: goto label_2088cc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208898u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2088A0u;
label_2088a0:
    // 0x2088a0: 0x8f82b67c  lw          $v0, -0x4984($gp)
    ctx->pc = 0x2088a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948476)));
    // 0x2088a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2088a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2088a8: 0x8f849c1c  lw          $a0, -0x63E4($gp)
    ctx->pc = 0x2088a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941724)));
    // 0x2088ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2088acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2088b0: 0xaf809bec  sw          $zero, -0x6414($gp)
    ctx->pc = 0x2088b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 0));
    // 0x2088b4: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x2088b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x2088b8: 0xa2180a  movz        $v1, $a1, $v0
    ctx->pc = 0x2088b8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x2088bc: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x2088BCu;
    {
        const bool branch_taken_0x2088bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2088C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2088BCu;
        // 0x2088c0: 0xaf839be8  sw          $v1, -0x6418($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941672), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2088bc) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x2088C4u;
label_2088c4:
    // 0x2088c4: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x2088C4u;
    {
        const bool branch_taken_0x2088c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2088C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2088C4u;
        // 0x2088c8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2088c4) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x2088CCu;
label_2088cc:
    // 0x2088cc: 0x28a2fff7  slti        $v0, $a1, -0x9
    ctx->pc = 0x2088ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967287) ? 1 : 0);
    // 0x2088d0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2088D0u;
    {
        const bool branch_taken_0x2088d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2088D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2088D0u;
        // 0x2088d4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2088d0) {
            ctx->pc = 0x2088DCu;
            goto label_2088dc;
        }
    }
    ctx->pc = 0x2088D8u;
label_2088d8:
    // 0x2088d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2088d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2088dc:
    // 0x2088dc: 0xaf829be8  sw          $v0, -0x6418($gp)
    ctx->pc = 0x2088dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941672), GPR_U32(ctx, 2));
label_2088e0:
    // 0x2088e0: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x2088E0u;
    {
        const bool branch_taken_0x2088e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2088E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2088E0u;
        // 0x2088e4: 0xaf809bec  sw          $zero, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2088e0) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x2088E8u;
label_2088e8:
    // 0x2088e8: 0x8f839c2c  lw          $v1, -0x63D4($gp)
    ctx->pc = 0x2088e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941740)));
    // 0x2088ec: 0x3c0601fb  lui         $a2, 0x1FB
    ctx->pc = 0x2088ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)507 << 16));
    // 0x2088f0: 0x24020202  addiu       $v0, $zero, 0x202
    ctx->pc = 0x2088f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
    // 0x2088f4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2088f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2088f8: 0x8f849bf0  lw          $a0, -0x6410($gp)
    ctx->pc = 0x2088f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941680)));
    // 0x2088fc: 0x43380a  movz        $a3, $v0, $v1
    ctx->pc = 0x2088fcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x208900: 0x8f859bf4  lw          $a1, -0x640C($gp)
    ctx->pc = 0x208900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941684)));
    // 0x208904: 0xc0b725a  jal         func_2DC968
    ctx->pc = 0x208904u;
    SET_GPR_U32(ctx, 31, 0x20890Cu);
    ctx->pc = 0x208908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208904u;
    // 0x208908: 0x24c63040  addiu       $a2, $a2, 0x3040 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC968u, 0x208904u, 0x20890Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20890Cu;
label_20890c:
    // 0x20890c: 0x144000ab  bnez        $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x20890Cu;
    {
        const bool branch_taken_0x20890c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20890Cu;
        // 0x208910: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20890c) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x208914u;
    // 0x208914: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x208914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x208918: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x208918u;
    {
        const bool branch_taken_0x208918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208918u;
        // 0x20891c: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208918) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x208920u;
label_208920:
    // 0x208920: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x208920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208924: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x208924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208928: 0xc0b7392  jal         func_2DCE48
    ctx->pc = 0x208928u;
    SET_GPR_U32(ctx, 31, 0x208930u);
    ctx->pc = 0x20892Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208928u;
    // 0x20892c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCE48u, 0x208928u, 0x208930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208930u;
label_208930:
    // 0x208930: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x208930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208934: 0x144300a4  bne         $v0, $v1, . + 4 + (0xA4 << 2)
    ctx->pc = 0x208934u;
    {
        const bool branch_taken_0x208934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x208938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208934u;
        // 0x208938: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208934) {
            ctx->pc = 0x208BC8u;
            goto label_208bc8;
        }
    }
    ctx->pc = 0x20893Cu;
    // 0x20893c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20893cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208940: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x208940u;
    {
        const bool branch_taken_0x208940 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x208944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208940u;
        // 0x208944: 0x8f82b684  lw          $v0, -0x497C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208940) {
            ctx->pc = 0x20895Cu;
            goto label_20895c;
        }
    }
    ctx->pc = 0x208948u;
    // 0x208948: 0x18400028  blez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x208948u;
    {
        const bool branch_taken_0x208948 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x20894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208948u;
        // 0x20894c: 0xaf839c30  sw          $v1, -0x63D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941744), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208948) {
            ctx->pc = 0x2089ECu;
            goto label_2089ec;
        }
    }
    ctx->pc = 0x208950u;
    // 0x208950: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x208950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x208954: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x208954u;
    {
        const bool branch_taken_0x208954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208954u;
        // 0x208958: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208954) {
            ctx->pc = 0x208BC8u;
            goto label_208bc8;
        }
    }
    ctx->pc = 0x20895Cu;
label_20895c:
    // 0x20895c: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x20895cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x208960: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x208960u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x208964: 0x10400094  beqz        $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x208964u;
    {
        const bool branch_taken_0x208964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208964u;
        // 0x208968: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208964) {
            ctx->pc = 0x208BB8u;
            goto label_208bb8;
        }
    }
    ctx->pc = 0x20896Cu;
    // 0x20896c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20896cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x208970: 0x24429fd0  addiu       $v0, $v0, -0x6030
    ctx->pc = 0x208970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942672));
    // 0x208974: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x208974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x208978: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x208978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20897c: 0x800008  jr          $a0
    ctx->pc = 0x20897Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x208984u: goto label_208984;
            case 0x20898Cu: goto label_20898c;
            case 0x208994u: goto label_208994;
            case 0x208BB8u: goto label_208bb8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20897Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x208984u;
label_208984:
    // 0x208984: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x208984u;
    {
        const bool branch_taken_0x208984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208984u;
        // 0x208988: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208984) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x20898Cu;
label_20898c:
    // 0x20898c: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x20898Cu;
    {
        const bool branch_taken_0x20898c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20898Cu;
        // 0x208990: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20898c) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x208994u;
label_208994:
    // 0x208994: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x208994u;
    {
        const bool branch_taken_0x208994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208994u;
        // 0x208998: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208994) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x20899Cu;
label_20899c:
    // 0x20899c: 0x8f849c30  lw          $a0, -0x63D0($gp)
    ctx->pc = 0x20899cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941744)));
    // 0x2089a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2089a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2089a4: 0xc0b72c6  jal         func_2DCB18
    ctx->pc = 0x2089A4u;
    SET_GPR_U32(ctx, 31, 0x2089ACu);
    ctx->pc = 0x2089A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2089A4u;
    // 0x2089a8: 0x8f85b684  lw          $a1, -0x497C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948484)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCB18u, 0x2089A4u, 0x2089ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2089ACu;
label_2089ac:
    // 0x2089ac: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x2089ACu;
    {
        const bool branch_taken_0x2089ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2089B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2089ACu;
        // 0x2089b0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2089ac) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x2089B4u;
    // 0x2089b4: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x2089b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x2089b8: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x2089B8u;
    {
        const bool branch_taken_0x2089b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2089BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2089B8u;
        // 0x2089bc: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2089b8) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x2089C0u;
label_2089c0:
    // 0x2089c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2089c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2089c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2089c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2089c8: 0xc0b7392  jal         func_2DCE48
    ctx->pc = 0x2089C8u;
    SET_GPR_U32(ctx, 31, 0x2089D0u);
    ctx->pc = 0x2089CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2089C8u;
    // 0x2089cc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCE48u, 0x2089C8u, 0x2089D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2089D0u;
label_2089d0:
    // 0x2089d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2089d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2089d4: 0x1443007c  bne         $v0, $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x2089D4u;
    {
        const bool branch_taken_0x2089d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2089D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2089D4u;
        // 0x2089d8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2089d4) {
            ctx->pc = 0x208BC8u;
            goto label_208bc8;
        }
    }
    ctx->pc = 0x2089DCu;
    // 0x2089dc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2089dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2089e0: 0x8f82b684  lw          $v0, -0x497C($gp)
    ctx->pc = 0x2089e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948484)));
    // 0x2089e4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2089E4u;
    {
        const bool branch_taken_0x2089e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2089E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2089E4u;
        // 0x2089e8: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2089e4) {
            ctx->pc = 0x2089F8u;
            goto label_2089f8;
        }
    }
    ctx->pc = 0x2089ECu;
label_2089ec:
    // 0x2089ec: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x2089ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2089f0: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x2089F0u;
    {
        const bool branch_taken_0x2089f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2089F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2089F0u;
        // 0x2089f4: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2089f0) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x2089F8u;
label_2089f8:
    // 0x2089f8: 0x1062006f  beq         $v1, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x2089F8u;
    {
        const bool branch_taken_0x2089f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2089FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2089F8u;
        // 0x2089fc: 0x2862fffd  slti        $v0, $v1, -0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967293) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2089f8) {
            ctx->pc = 0x208BB8u;
            goto label_208bb8;
        }
    }
    ctx->pc = 0x208A00u;
    // 0x208a00: 0x1440006e  bnez        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x208A00u;
    {
        const bool branch_taken_0x208a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A00u;
        // 0x208a04: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208a00) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x208A08u;
    // 0x208a08: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x208a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x208a0c: 0x1462006b  bne         $v1, $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x208A0Cu;
    {
        const bool branch_taken_0x208a0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x208A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A0Cu;
        // 0x208a10: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208a0c) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x208A14u;
    // 0x208a14: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x208A14u;
    {
        const bool branch_taken_0x208a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A14u;
        // 0x208a18: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208a14) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x208A1Cu;
label_208a1c:
    // 0x208a1c: 0x8f849c30  lw          $a0, -0x63D0($gp)
    ctx->pc = 0x208a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941744)));
    // 0x208a20: 0x8f859c24  lw          $a1, -0x63DC($gp)
    ctx->pc = 0x208a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941732)));
    // 0x208a24: 0xc0b7344  jal         func_2DCD10
    ctx->pc = 0x208A24u;
    SET_GPR_U32(ctx, 31, 0x208A2Cu);
    ctx->pc = 0x208A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208A24u;
    // 0x208a28: 0x8f869c28  lw          $a2, -0x63D8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941736)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCD10u, 0x208A24u, 0x208A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208A2Cu;
label_208a2c:
    // 0x208a2c: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x208A2Cu;
    {
        const bool branch_taken_0x208a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A2Cu;
        // 0x208a30: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208a2c) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x208A34u;
    // 0x208a34: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x208a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x208a38: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x208A38u;
    {
        const bool branch_taken_0x208a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A38u;
        // 0x208a3c: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208a38) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x208A40u;
label_208a40:
    // 0x208a40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x208a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208a44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x208a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208a48: 0xc0b7392  jal         func_2DCE48
    ctx->pc = 0x208A48u;
    SET_GPR_U32(ctx, 31, 0x208A50u);
    ctx->pc = 0x208A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208A48u;
    // 0x208a4c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCE48u, 0x208A48u, 0x208A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208A50u;
label_208a50:
    // 0x208a50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x208a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208a54: 0x1443005c  bne         $v0, $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x208A54u;
    {
        const bool branch_taken_0x208a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x208A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A54u;
        // 0x208a58: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208a54) {
            ctx->pc = 0x208BC8u;
            goto label_208bc8;
        }
    }
    ctx->pc = 0x208A5Cu;
    // 0x208a5c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x208a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208a60: 0x8f829c28  lw          $v0, -0x63D8($gp)
    ctx->pc = 0x208a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941736)));
    // 0x208a64: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x208A64u;
    {
        const bool branch_taken_0x208a64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x208A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A64u;
        // 0x208a68: 0x2463000a  addiu       $v1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208a64) {
            ctx->pc = 0x208A78u;
            goto label_208a78;
        }
    }
    ctx->pc = 0x208A6Cu;
    // 0x208a6c: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x208a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x208a70: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x208A70u;
    {
        const bool branch_taken_0x208a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A70u;
        // 0x208a74: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208a70) {
            ctx->pc = 0x208BC8u;
            goto label_208bc8;
        }
    }
    ctx->pc = 0x208A78u;
label_208a78:
    // 0x208a78: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x208a78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x208a7c: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x208A7Cu;
    {
        const bool branch_taken_0x208a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A7Cu;
        // 0x208a80: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208a7c) {
            ctx->pc = 0x208BB8u;
            goto label_208bb8;
        }
    }
    ctx->pc = 0x208A84u;
    // 0x208a84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x208a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x208a88: 0x2442a000  addiu       $v0, $v0, -0x6000
    ctx->pc = 0x208a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942720));
    // 0x208a8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x208a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x208a90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x208a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x208a94: 0x800008  jr          $a0
    ctx->pc = 0x208A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x208A9Cu: goto label_208a9c;
            case 0x208AA4u: goto label_208aa4;
            case 0x208AACu: goto label_208aac;
            case 0x208BB8u: goto label_208bb8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208A94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x208A9Cu;
label_208a9c:
    // 0x208a9c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x208A9Cu;
    {
        const bool branch_taken_0x208a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A9Cu;
        // 0x208aa0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208a9c) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x208AA4u;
label_208aa4:
    // 0x208aa4: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x208AA4u;
    {
        const bool branch_taken_0x208aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AA4u;
        // 0x208aa8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208aa4) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x208AACu;
label_208aac:
    // 0x208aac: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x208AACu;
    {
        const bool branch_taken_0x208aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AACu;
        // 0x208ab0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208aac) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x208AB4u;
label_208ab4:
    // 0x208ab4: 0xc0b72a2  jal         func_2DCA88
    ctx->pc = 0x208AB4u;
    SET_GPR_U32(ctx, 31, 0x208ABCu);
    ctx->pc = 0x208AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208AB4u;
    // 0x208ab8: 0x8f849c30  lw          $a0, -0x63D0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941744)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCA88u, 0x208AB4u, 0x208ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208ABCu;
label_208abc:
    // 0x208abc: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x208ABCu;
    {
        const bool branch_taken_0x208abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208ABCu;
        // 0x208ac0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208abc) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x208AC4u;
    // 0x208ac4: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x208ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x208ac8: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x208AC8u;
    {
        const bool branch_taken_0x208ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AC8u;
        // 0x208acc: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ac8) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x208AD0u;
label_208ad0:
    // 0x208ad0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x208ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208ad4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x208ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ad8: 0xc0b7392  jal         func_2DCE48
    ctx->pc = 0x208AD8u;
    SET_GPR_U32(ctx, 31, 0x208AE0u);
    ctx->pc = 0x208ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208AD8u;
    // 0x208adc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCE48u, 0x208AD8u, 0x208AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208AE0u;
label_208ae0:
    // 0x208ae0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x208ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208ae4: 0x14430038  bne         $v0, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x208AE4u;
    {
        const bool branch_taken_0x208ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x208AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AE4u;
        // 0x208ae8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ae4) {
            ctx->pc = 0x208BC8u;
            goto label_208bc8;
        }
    }
    ctx->pc = 0x208AECu;
    // 0x208aec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x208aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208af0: 0x2444000a  addiu       $a0, $v0, 0xA
    ctx->pc = 0x208af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x208af4: 0x2c83000b  sltiu       $v1, $a0, 0xB
    ctx->pc = 0x208af4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x208af8: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x208AF8u;
    {
        const bool branch_taken_0x208af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x208AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AF8u;
        // 0x208afc: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208af8) {
            ctx->pc = 0x208BB8u;
            goto label_208bb8;
        }
    }
    ctx->pc = 0x208B00u;
    // 0x208b00: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x208b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x208b04: 0x2442a030  addiu       $v0, $v0, -0x5FD0
    ctx->pc = 0x208b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942768));
    // 0x208b08: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x208b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x208b0c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x208b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x208b10: 0x800008  jr          $a0
    ctx->pc = 0x208B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x208B18u: goto label_208b18;
            case 0x208B20u: goto label_208b20;
            case 0x208BB8u: goto label_208bb8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208B10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x208B18u;
label_208b18:
    // 0x208b18: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x208B18u;
    {
        const bool branch_taken_0x208b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B18u;
        // 0x208b1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208b18) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x208B20u;
label_208b20:
    // 0x208b20: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x208B20u;
    {
        const bool branch_taken_0x208b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B20u;
        // 0x208b24: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208b20) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x208B28u;
label_208b28:
    // 0x208b28: 0x3c0601fb  lui         $a2, 0x1FB
    ctx->pc = 0x208b28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)507 << 16));
    // 0x208b2c: 0x8f849bf0  lw          $a0, -0x6410($gp)
    ctx->pc = 0x208b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941680)));
    // 0x208b30: 0x8f859bf4  lw          $a1, -0x640C($gp)
    ctx->pc = 0x208b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941684)));
    // 0x208b34: 0xc0b74f0  jal         func_2DD3C0
    ctx->pc = 0x208B34u;
    SET_GPR_U32(ctx, 31, 0x208B3Cu);
    ctx->pc = 0x208B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208B34u;
    // 0x208b38: 0x24c630c0  addiu       $a2, $a2, 0x30C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD3C0u, 0x208B34u, 0x208B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208B3Cu;
label_208b3c:
    // 0x208b3c: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x208B3Cu;
    {
        const bool branch_taken_0x208b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B3Cu;
        // 0x208b40: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208b3c) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x208B44u;
    // 0x208b44: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x208b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x208b48: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x208B48u;
    {
        const bool branch_taken_0x208b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B48u;
        // 0x208b4c: 0xaf829bec  sw          $v0, -0x6414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208b48) {
            ctx->pc = 0x208BC4u;
            goto label_208bc4;
        }
    }
    ctx->pc = 0x208B50u;
label_208b50:
    // 0x208b50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x208b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208b54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x208b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208b58: 0xc0b7392  jal         func_2DCE48
    ctx->pc = 0x208B58u;
    SET_GPR_U32(ctx, 31, 0x208B60u);
    ctx->pc = 0x208B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208B58u;
    // 0x208b5c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCE48u, 0x208B58u, 0x208B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208B60u;
label_208b60:
    // 0x208b60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x208b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208b64: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x208B64u;
    {
        const bool branch_taken_0x208b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x208B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B64u;
        // 0x208b68: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208b64) {
            ctx->pc = 0x208BC8u;
            goto label_208bc8;
        }
    }
    ctx->pc = 0x208B6Cu;
    // 0x208b6c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x208b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208b70: 0x2444000a  addiu       $a0, $v0, 0xA
    ctx->pc = 0x208b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x208b74: 0x2c83000b  sltiu       $v1, $a0, 0xB
    ctx->pc = 0x208b74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x208b78: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x208B78u;
    {
        const bool branch_taken_0x208b78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x208B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B78u;
        // 0x208b7c: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208b78) {
            ctx->pc = 0x208BB8u;
            goto label_208bb8;
        }
    }
    ctx->pc = 0x208B80u;
    // 0x208b80: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x208b80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x208b84: 0x2442a060  addiu       $v0, $v0, -0x5FA0
    ctx->pc = 0x208b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942816));
    // 0x208b88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x208b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x208b8c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x208b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x208b90: 0x800008  jr          $a0
    ctx->pc = 0x208B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x208B98u: goto label_208b98;
            case 0x208BA0u: goto label_208ba0;
            case 0x208BB8u: goto label_208bb8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208B90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x208B98u;
label_208b98:
    // 0x208b98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x208B98u;
    {
        const bool branch_taken_0x208b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B98u;
        // 0x208b9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208b98) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x208BA0u;
label_208ba0:
    // 0x208ba0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x208BA0u;
    {
        const bool branch_taken_0x208ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BA0u;
        // 0x208ba4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ba0) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x208BA8u;
label_208ba8:
    // 0x208ba8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x208BA8u;
    {
        const bool branch_taken_0x208ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BA8u;
        // 0x208bac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ba8) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x208BB0u;
label_208bb0:
    // 0x208bb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x208BB0u;
    {
        const bool branch_taken_0x208bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BB0u;
        // 0x208bb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208bb0) {
            ctx->pc = 0x208BBCu;
            goto label_208bbc;
        }
    }
    ctx->pc = 0x208BB8u;
label_208bb8:
    // 0x208bb8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x208bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_208bbc:
    // 0x208bbc: 0xaf809bec  sw          $zero, -0x6414($gp)
    ctx->pc = 0x208bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 0));
label_208bc0:
    // 0x208bc0: 0xaf829be8  sw          $v0, -0x6418($gp)
    ctx->pc = 0x208bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941672), GPR_U32(ctx, 2));
label_208bc4:
    // 0x208bc4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x208bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_208bc8:
    // 0x208bc8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x208bc8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x208bcc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x208bccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x208bd0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x208bd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x208bd4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x208bd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x208bd8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x208bd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x208bdc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x208bdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208be0: 0x3e00008  jr          $ra
    ctx->pc = 0x208BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BE0u;
        // 0x208be4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208BE8u;
}
