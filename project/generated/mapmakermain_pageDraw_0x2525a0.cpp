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

// Function: mapmakermain_pageDraw
// Address: 0x2525a0 - 0x252b68
void mapmakermain_pageDraw_0x2525a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapmakermain_pageDraw_0x2525a0");
#endif

    switch (ctx->pc) {
        case 0x252614u: goto label_252614;
        case 0x252640u: goto label_252640;
        case 0x252678u: goto label_252678;
        case 0x2526a0u: goto label_2526a0;
        case 0x2526c8u: goto label_2526c8;
        case 0x2526d0u: goto label_2526d0;
        case 0x2526e8u: goto label_2526e8;
        case 0x252710u: goto label_252710;
        case 0x252718u: goto label_252718;
        case 0x25272cu: goto label_25272c;
        case 0x25277cu: goto label_25277c;
        case 0x252798u: goto label_252798;
        case 0x2527a4u: goto label_2527a4;
        case 0x2527c0u: goto label_2527c0;
        case 0x2527c8u: goto label_2527c8;
        case 0x2527e0u: goto label_2527e0;
        case 0x252830u: goto label_252830;
        case 0x252838u: goto label_252838;
        case 0x252854u: goto label_252854;
        case 0x252868u: goto label_252868;
        case 0x2528a4u: goto label_2528a4;
        case 0x2528f0u: goto label_2528f0;
        case 0x2528fcu: goto label_2528fc;
        case 0x252930u: goto label_252930;
        case 0x252944u: goto label_252944;
        case 0x25295cu: goto label_25295c;
        case 0x25297cu: goto label_25297c;
        case 0x252984u: goto label_252984;
        case 0x252990u: goto label_252990;
        case 0x2529c4u: goto label_2529c4;
        case 0x2529dcu: goto label_2529dc;
        case 0x2529f8u: goto label_2529f8;
        case 0x252a18u: goto label_252a18;
        case 0x252a20u: goto label_252a20;
        case 0x252a4cu: goto label_252a4c;
        case 0x252a8cu: goto label_252a8c;
        case 0x252a94u: goto label_252a94;
        case 0x252ac0u: goto label_252ac0;
        case 0x252ad4u: goto label_252ad4;
        case 0x252aecu: goto label_252aec;
        case 0x252b08u: goto label_252b08;
        default: break;
    }

    ctx->pc = 0x2525a0u;

    // 0x2525a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2525a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2525a4: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x2525a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2525a8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2525a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2525ac: 0x3c071f1f  lui         $a3, 0x1F1F
    ctx->pc = 0x2525acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)7967 << 16));
    // 0x2525b0: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2525b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2525b4: 0x3c097f7f  lui         $t1, 0x7F7F
    ctx->pc = 0x2525b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32639 << 16));
    // 0x2525b8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2525b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2525bc: 0x34e71f7f  ori         $a3, $a3, 0x1F7F
    ctx->pc = 0x2525bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8063);
    // 0x2525c0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2525c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2525c4: 0x35297f7f  ori         $t1, $t1, 0x7F7F
    ctx->pc = 0x2525c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32639);
    // 0x2525c8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2525c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2525cc: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2525ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2525d0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2525d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2525d4: 0x24082864  addiu       $t0, $zero, 0x2864
    ctx->pc = 0x2525d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10340));
    // 0x2525d8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2525d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2525dc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2525dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2525e0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2525e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2525e4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2525e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2525e8: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2525e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2525ec: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2525ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2525f0: 0x861023  subu        $v0, $a0, $a2
    ctx->pc = 0x2525f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2525f4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2525f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2525f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2525f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2525fc: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2525fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x252600: 0x24060251  addiu       $a2, $zero, 0x251
    ctx->pc = 0x252600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 593));
    // 0x252604: 0xe2480b  movn        $t1, $a3, $v0
    ctx->pc = 0x252604u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 7));
    // 0x252608: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x252608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x25260c: 0xc08bb46  jal         func_22ED18
    ctx->pc = 0x25260Cu;
    SET_GPR_U32(ctx, 31, 0x252614u);
    ctx->pc = 0x252610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25260Cu;
    // 0x252610: 0x240700c6  addiu       $a3, $zero, 0xC6 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ED18u, 0x25260Cu, 0x252614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252614u;
label_252614:
    // 0x252614: 0x8f83a0d4  lw          $v1, -0x5F2C($gp)
    ctx->pc = 0x252614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942932)));
    // 0x252618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x252618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25261c: 0x14620147  bne         $v1, $v0, . + 4 + (0x147 << 2)
    ctx->pc = 0x25261Cu;
    {
        const bool branch_taken_0x25261c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x252620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25261Cu;
        // 0x252620: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25261c) {
            ctx->pc = 0x252B3Cu;
            goto label_252b3c;
        }
    }
    ctx->pc = 0x252624u;
    // 0x252624: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x252624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x252628: 0x8f84a028  lw          $a0, -0x5FD8($gp)
    ctx->pc = 0x252628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942760)));
    // 0x25262c: 0x8f92a01c  lw          $s2, -0x5FE4($gp)
    ctx->pc = 0x25262cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x252630: 0x24502c18  addiu       $s0, $v0, 0x2C18
    ctx->pc = 0x252630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x252634: 0x8f91a020  lw          $s1, -0x5FE0($gp)
    ctx->pc = 0x252634u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x252638: 0xc08089c  jal         func_202270
    ctx->pc = 0x252638u;
    SET_GPR_U32(ctx, 31, 0x252640u);
    ctx->pc = 0x25263Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252638u;
    // 0x25263c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x252638u, 0x252640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252640u;
label_252640:
    // 0x252640: 0x24130047  addiu       $s3, $zero, 0x47
    ctx->pc = 0x252640u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x252644: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x252644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x252648: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x252648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x25264c: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x25264cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x252650: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x252650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x252654: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x252654u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252658: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x252658u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25265c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25265cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x252660: 0x3c1e003b  lui         $fp, 0x3B
    ctx->pc = 0x252660u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)59 << 16));
    // 0x252664: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x252664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x252668: 0x3c17003b  lui         $s7, 0x3B
    ctx->pc = 0x252668u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)59 << 16));
    // 0x25266c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25266cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252670: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x252670u;
    SET_GPR_U32(ctx, 31, 0x252678u);
    ctx->pc = 0x252674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252670u;
    // 0x252674: 0x8c660dbc  lw          $a2, 0xDBC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3516)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x252670u, 0x252678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252678u;
label_252678:
    // 0x252678: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x252678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x25267c: 0x240400c6  addiu       $a0, $zero, 0xC6
    ctx->pc = 0x25267cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
    // 0x252680: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x252680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x252684: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x252684u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252688: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x252688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25268c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x25268cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252690: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x252690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x252694: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x252694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252698: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x252698u;
    SET_GPR_U32(ctx, 31, 0x2526A0u);
    ctx->pc = 0x25269Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252698u;
    // 0x25269c: 0x8c460dc0  lw          $a2, 0xDC0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3520)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x252698u, 0x2526A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2526A0u;
label_2526a0:
    // 0x2526a0: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x2526a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2526a4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2526a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2526a8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2526a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2526ac: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x2526acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2526b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2526b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2526b4: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x2526b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2526b8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2526b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2526bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2526bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2526c0: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x2526C0u;
    SET_GPR_U32(ctx, 31, 0x2526C8u);
    ctx->pc = 0x2526C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2526C0u;
    // 0x2526c4: 0x8c460dc4  lw          $a2, 0xDC4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x2526C0u, 0x2526C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2526C8u;
label_2526c8:
    // 0x2526c8: 0xc08089c  jal         func_202270
    ctx->pc = 0x2526C8u;
    SET_GPR_U32(ctx, 31, 0x2526D0u);
    ctx->pc = 0x2526CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2526C8u;
    // 0x2526cc: 0x8f84a024  lw          $a0, -0x5FDC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942756)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x2526C8u, 0x2526D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2526D0u;
label_2526d0:
    // 0x2526d0: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2526d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x2526d4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2526d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2526d8: 0x2463c378  addiu       $v1, $v1, -0x3C88
    ctx->pc = 0x2526d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951800));
    // 0x2526dc: 0x24426f08  addiu       $v0, $v0, 0x6F08
    ctx->pc = 0x2526dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28424));
    // 0x2526e0: 0x24560004  addiu       $s6, $v0, 0x4
    ctx->pc = 0x2526e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2526e4: 0x24750004  addiu       $s5, $v1, 0x4
    ctx->pc = 0x2526e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2526e8:
    // 0x2526e8: 0x1a800009  blez        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x2526E8u;
    {
        const bool branch_taken_0x2526e8 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2526ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2526E8u;
        // 0x2526ec: 0x26720001  addiu       $s2, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2526e8) {
            ctx->pc = 0x252710u;
            goto label_252710;
        }
    }
    ctx->pc = 0x2526F0u;
    // 0x2526f0: 0x8ea80000  lw          $t0, 0x0($s5)
    ctx->pc = 0x2526f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2526f4: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x2526f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x2526f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2526f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2526fc: 0x24060106  addiu       $a2, $zero, 0x106
    ctx->pc = 0x2526fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    // 0x252700: 0x2667000b  addiu       $a3, $s3, 0xB
    ctx->pc = 0x252700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 11));
    // 0x252704: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x252704u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x252708: 0xc08b9ec  jal         func_22E7B0
    ctx->pc = 0x252708u;
    SET_GPR_U32(ctx, 31, 0x252710u);
    ctx->pc = 0x25270Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252708u;
    // 0x25270c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7B0u, 0x252708u, 0x252710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252710u;
label_252710:
    // 0x252710: 0xc092334  jal         func_248CD0
    ctx->pc = 0x252710u;
    SET_GPR_U32(ctx, 31, 0x252718u);
    ctx->pc = 0x252714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252710u;
    // 0x252714: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248CD0u, 0x252710u, 0x252718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252718u;
label_252718:
    // 0x252718: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x252718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25271c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25271Cu;
    {
        const bool branch_taken_0x25271c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x252720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25271Cu;
        // 0x252720: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25271c) {
            ctx->pc = 0x252734u;
            goto label_252734;
        }
    }
    ctx->pc = 0x252724u;
    // 0x252724: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x252724u;
    SET_GPR_U32(ctx, 31, 0x25272Cu);
    ctx->pc = 0x252728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252724u;
    // 0x252728: 0x27c4e9d8  addiu       $a0, $fp, -0x1628 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x252724u, 0x25272Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25272Cu;
label_25272c:
    // 0x25272c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25272Cu;
    {
        const bool branch_taken_0x25272c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25272Cu;
        // 0x252730: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25272c) {
            ctx->pc = 0x252738u;
            goto label_252738;
        }
    }
    ctx->pc = 0x252734u;
label_252734:
    // 0x252734: 0x26f1e9e0  addiu       $s1, $s7, -0x1620
    ctx->pc = 0x252734u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961632));
label_252738:
    // 0x252738: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x252738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x25273c: 0x28c204de  slti        $v0, $a2, 0x4DE
    ctx->pc = 0x25273cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1246) ? 1 : 0);
    // 0x252740: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x252740u;
    {
        const bool branch_taken_0x252740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252740u;
        // 0x252744: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252740) {
            ctx->pc = 0x252784u;
            goto label_252784;
        }
    }
    ctx->pc = 0x252748u;
    // 0x252748: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x252748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x25274c: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x25274cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x252750: 0x64880  sll         $t1, $a2, 2
    ctx->pc = 0x252750u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x252754: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x252754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x252758: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x252758u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x25275c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25275cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x252760: 0x8f88a020  lw          $t0, -0x5FE0($gp)
    ctx->pc = 0x252760u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x252764: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x252764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252768: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x252768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x25276c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25276cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252770: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x252770u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x252774: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x252774u;
    SET_GPR_U32(ctx, 31, 0x25277Cu);
    ctx->pc = 0x252778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252774u;
    // 0x252778: 0x8d260000  lw          $a2, 0x0($t1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x252774u, 0x25277Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25277Cu;
label_25277c:
    // 0x25277c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25277Cu;
    {
        const bool branch_taken_0x25277c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25277Cu;
        // 0x252780: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25277c) {
            ctx->pc = 0x25279Cu;
            goto label_25279c;
        }
    }
    ctx->pc = 0x252784u;
label_252784:
    // 0x252784: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x252784u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x252788: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x252788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x25278c: 0x8f88a020  lw          $t0, -0x5FE0($gp)
    ctx->pc = 0x25278cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x252790: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x252790u;
    SET_GPR_U32(ctx, 31, 0x252798u);
    ctx->pc = 0x252794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252790u;
    // 0x252794: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x252790u, 0x252798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252798u;
label_252798:
    // 0x252798: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x252798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25279c:
    // 0x25279c: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x25279Cu;
    SET_GPR_U32(ctx, 31, 0x2527A4u);
    ctx->pc = 0x2527A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25279Cu;
    // 0x2527a0: 0x26900009  addiu       $s0, $s4, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x25279Cu, 0x2527A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2527A4u;
label_2527a4:
    // 0x2527a4: 0x240500c6  addiu       $a1, $zero, 0xC6
    ctx->pc = 0x2527a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
    // 0x2527a8: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x2527a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x2527ac: 0xa22023  subu        $a0, $a1, $v0
    ctx->pc = 0x2527acu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2527b0: 0x8f88a020  lw          $t0, -0x5FE0($gp)
    ctx->pc = 0x2527b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x2527b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2527b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2527b8: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x2527B8u;
    SET_GPR_U32(ctx, 31, 0x2527C0u);
    ctx->pc = 0x2527BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2527B8u;
    // 0x2527bc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x2527B8u, 0x2527C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2527C0u;
label_2527c0:
    // 0x2527c0: 0xc092334  jal         func_248CD0
    ctx->pc = 0x2527C0u;
    SET_GPR_U32(ctx, 31, 0x2527C8u);
    ctx->pc = 0x2527C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2527C0u;
    // 0x2527c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248CD0u, 0x2527C0u, 0x2527C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2527C8u;
label_2527c8:
    // 0x2527c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2527c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2527cc: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2527CCu;
    {
        const bool branch_taken_0x2527cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2527cc) {
            ctx->pc = 0x2527D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2527CCu;
            // 0x2527d0: 0x26f1e9e0  addiu       $s1, $s7, -0x1620 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961632));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2527E4u;
            goto label_2527e4;
        }
    }
    ctx->pc = 0x2527D4u;
    // 0x2527d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2527d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2527d8: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x2527D8u;
    SET_GPR_U32(ctx, 31, 0x2527E0u);
    ctx->pc = 0x2527DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2527D8u;
    // 0x2527dc: 0x27c4e9d8  addiu       $a0, $fp, -0x1628 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x2527D8u, 0x2527E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2527E0u;
label_2527e0:
    // 0x2527e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2527e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2527e4:
    // 0x2527e4: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x2527e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2527e8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x2527e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x2527ec: 0x24848320  addiu       $a0, $a0, -0x7CE0
    ctx->pc = 0x2527ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935328));
    // 0x2527f0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2527f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2527f4: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x2527f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x2527f8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2527f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2527fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2527fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x252800: 0x24a52c18  addiu       $a1, $a1, 0x2C18
    ctx->pc = 0x252800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11288));
    // 0x252804: 0x84490000  lh          $t1, 0x0($v0)
    ctx->pc = 0x252804u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252808: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x252808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x25280c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25280cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252810: 0x24040150  addiu       $a0, $zero, 0x150
    ctx->pc = 0x252810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x252814: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x252814u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x252818: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x252818u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x25281c: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x25281cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x252820: 0x8f88a020  lw          $t0, -0x5FE0($gp)
    ctx->pc = 0x252820u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x252824: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x252824u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x252828: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x252828u;
    SET_GPR_U32(ctx, 31, 0x252830u);
    ctx->pc = 0x25282Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252828u;
    // 0x25282c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x252828u, 0x252830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252830u;
label_252830:
    // 0x252830: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x252830u;
    SET_GPR_U32(ctx, 31, 0x252838u);
    ctx->pc = 0x252834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252830u;
    // 0x252834: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x252830u, 0x252838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252838u;
label_252838:
    // 0x252838: 0x2403023a  addiu       $v1, $zero, 0x23A
    ctx->pc = 0x252838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 570));
    // 0x25283c: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x25283cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x252840: 0x8f88a020  lw          $t0, -0x5FE0($gp)
    ctx->pc = 0x252840u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x252844: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x252844u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x252848: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x252848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25284c: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x25284Cu;
    SET_GPR_U32(ctx, 31, 0x252854u);
    ctx->pc = 0x252850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25284Cu;
    // 0x252850: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x25284Cu, 0x252854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252854u;
label_252854:
    // 0x252854: 0x1a800014  blez        $s4, . + 4 + (0x14 << 2)
    ctx->pc = 0x252854u;
    {
        const bool branch_taken_0x252854 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x252858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252854u;
        // 0x252858: 0x93829ab5  lbu         $v0, -0x654B($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252854) {
            ctx->pc = 0x2528A8u;
            goto label_2528a8;
        }
    }
    ctx->pc = 0x25285Cu;
    // 0x25285c: 0x26840004  addiu       $a0, $s4, 0x4
    ctx->pc = 0x25285cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x252860: 0xc092334  jal         func_248CD0
    ctx->pc = 0x252860u;
    SET_GPR_U32(ctx, 31, 0x252868u);
    ctx->pc = 0x252864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252860u;
    // 0x252864: 0x24110013  addiu       $s1, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248CD0u, 0x252860u, 0x252868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252868u;
label_252868:
    // 0x252868: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x252868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x25286c: 0x26640002  addiu       $a0, $s3, 0x2
    ctx->pc = 0x25286cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x252870: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x252870u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x252874: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x252874u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x252878: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x252878u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x25287c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x25287cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x252880: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x252880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x252884: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x252884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x252888: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x252888u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x25288c: 0x3a230012  xori        $v1, $s1, 0x12
    ctx->pc = 0x25288cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)18);
    // 0x252890: 0x3c014366  lui         $at, 0x4366
    ctx->pc = 0x252890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17254 << 16));
    // 0x252894: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x252894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x252898: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x252898u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x25289c: 0xc08b952  jal         func_22E548
    ctx->pc = 0x25289Cu;
    SET_GPR_U32(ctx, 31, 0x2528A4u);
    ctx->pc = 0x2528A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25289Cu;
    // 0x2528a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x25289Cu, 0x2528A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2528A4u;
label_2528a4:
    // 0x2528a4: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x2528a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
label_2528a8:
    // 0x2528a8: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x2528a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x2528ac: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x2528acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x2528b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2528b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2528b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2528B4u;
    {
        const bool branch_taken_0x2528b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2528B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2528B4u;
        // 0x2528b8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2528b4) {
            ctx->pc = 0x2528D0u;
            goto label_2528d0;
        }
    }
    ctx->pc = 0x2528BCu;
    // 0x2528bc: 0x8f839a9c  lw          $v1, -0x6564($gp)
    ctx->pc = 0x2528bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x2528c0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2528c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2528c4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2528c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2528c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2528C8u;
    {
        const bool branch_taken_0x2528c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2528CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2528C8u;
        // 0x2528cc: 0x2429821  addu        $s3, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2528c8) {
            ctx->pc = 0x2528DCu;
            goto label_2528dc;
        }
    }
    ctx->pc = 0x2528D0u;
label_2528d0:
    // 0x2528d0: 0x8f829a9c  lw          $v0, -0x6564($gp)
    ctx->pc = 0x2528d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x2528d4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2528d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2528d8: 0x2439821  addu        $s3, $s2, $v1
    ctx->pc = 0x2528d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_2528dc:
    // 0x2528dc: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x2528dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2528e0: 0x1440ff81  bnez        $v0, . + 4 + (-0x7F << 2)
    ctx->pc = 0x2528E0u;
    {
        const bool branch_taken_0x2528e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2528e0) {
            ctx->pc = 0x2526E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2526e8;
        }
    }
    ctx->pc = 0x2528E8u;
    // 0x2528e8: 0xc092334  jal         func_248CD0
    ctx->pc = 0x2528E8u;
    SET_GPR_U32(ctx, 31, 0x2528F0u);
    ctx->pc = 0x2528ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2528E8u;
    // 0x2528ec: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248CD0u, 0x2528E8u, 0x2528F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2528F0u;
label_2528f0:
    // 0x2528f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2528f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2528f4: 0xc092334  jal         func_248CD0
    ctx->pc = 0x2528F4u;
    SET_GPR_U32(ctx, 31, 0x2528FCu);
    ctx->pc = 0x2528F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2528F4u;
    // 0x2528f8: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248CD0u, 0x2528F4u, 0x2528FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2528FCu;
label_2528fc:
    // 0x2528fc: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x2528fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x252900: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x252900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x252904: 0x24a42c18  addiu       $a0, $a1, 0x2C18
    ctx->pc = 0x252904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 11288));
    // 0x252908: 0x2028821  addu        $s1, $s0, $v0
    ctx->pc = 0x252908u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25290c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25290cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x252910: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x252910u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x252914: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x252914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x252918: 0x8f88a020  lw          $t0, -0x5FE0($gp)
    ctx->pc = 0x252918u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x25291c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25291cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252920: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x252920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x252924: 0x24050091  addiu       $a1, $zero, 0x91
    ctx->pc = 0x252924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x252928: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x252928u;
    SET_GPR_U32(ctx, 31, 0x252930u);
    ctx->pc = 0x25292Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252928u;
    // 0x25292c: 0x8c460dc8  lw          $a2, 0xDC8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x252928u, 0x252930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252930u;
label_252930:
    // 0x252930: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x252930u;
    {
        const bool branch_taken_0x252930 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x252934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252930u;
        // 0x252934: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252930) {
            ctx->pc = 0x25294Cu;
            goto label_25294c;
        }
    }
    ctx->pc = 0x252938u;
    // 0x252938: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x252938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x25293c: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x25293Cu;
    SET_GPR_U32(ctx, 31, 0x252944u);
    ctx->pc = 0x252940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25293Cu;
    // 0x252940: 0x2484e9d8  addiu       $a0, $a0, -0x1628 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x25293Cu, 0x252944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252944u;
label_252944:
    // 0x252944: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x252944u;
    {
        const bool branch_taken_0x252944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252944u;
        // 0x252948: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252944) {
            ctx->pc = 0x252954u;
            goto label_252954;
        }
    }
    ctx->pc = 0x25294Cu;
label_25294c:
    // 0x25294c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x25294cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x252950: 0x2451e9e0  addiu       $s1, $v0, -0x1620
    ctx->pc = 0x252950u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961632));
label_252954:
    // 0x252954: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x252954u;
    SET_GPR_U32(ctx, 31, 0x25295Cu);
    ctx->pc = 0x252958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252954u;
    // 0x252958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x252954u, 0x25295Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25295Cu;
label_25295c:
    // 0x25295c: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x25295cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x252960: 0x240300c6  addiu       $v1, $zero, 0xC6
    ctx->pc = 0x252960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
    // 0x252964: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x252964u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x252968: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x252968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25296c: 0x8f88a020  lw          $t0, -0x5FE0($gp)
    ctx->pc = 0x25296cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x252970: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x252970u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x252974: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x252974u;
    SET_GPR_U32(ctx, 31, 0x25297Cu);
    ctx->pc = 0x252978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252974u;
    // 0x252978: 0x24050091  addiu       $a1, $zero, 0x91 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x252974u, 0x25297Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25297Cu;
label_25297c:
    // 0x25297c: 0xc092334  jal         func_248CD0
    ctx->pc = 0x25297Cu;
    SET_GPR_U32(ctx, 31, 0x252984u);
    ctx->pc = 0x252980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25297Cu;
    // 0x252980: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248CD0u, 0x25297Cu, 0x252984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252984u;
label_252984:
    // 0x252984: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x252984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252988: 0xc092334  jal         func_248CD0
    ctx->pc = 0x252988u;
    SET_GPR_U32(ctx, 31, 0x252990u);
    ctx->pc = 0x25298Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252988u;
    // 0x25298c: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248CD0u, 0x252988u, 0x252990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252990u;
label_252990:
    // 0x252990: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x252990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x252994: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x252994u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x252998: 0x24a42c18  addiu       $a0, $a1, 0x2C18
    ctx->pc = 0x252998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 11288));
    // 0x25299c: 0x2028821  addu        $s1, $s0, $v0
    ctx->pc = 0x25299cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2529a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2529a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2529a4: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x2529a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x2529a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2529a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2529ac: 0x8f88a020  lw          $t0, -0x5FE0($gp)
    ctx->pc = 0x2529acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x2529b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2529b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2529b4: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x2529b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x2529b8: 0x2405009f  addiu       $a1, $zero, 0x9F
    ctx->pc = 0x2529b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
    // 0x2529bc: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x2529BCu;
    SET_GPR_U32(ctx, 31, 0x2529C4u);
    ctx->pc = 0x2529C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2529BCu;
    // 0x2529c0: 0x8c460dcc  lw          $a2, 0xDCC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3532)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x2529BCu, 0x2529C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2529C4u;
label_2529c4:
    // 0x2529c4: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2529C4u;
    {
        const bool branch_taken_0x2529c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2529C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529C4u;
        // 0x2529c8: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2529c4) {
            ctx->pc = 0x2529E4u;
            goto label_2529e4;
        }
    }
    ctx->pc = 0x2529CCu;
    // 0x2529cc: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2529ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2529d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2529d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2529d4: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x2529D4u;
    SET_GPR_U32(ctx, 31, 0x2529DCu);
    ctx->pc = 0x2529D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2529D4u;
    // 0x2529d8: 0x2484e9d8  addiu       $a0, $a0, -0x1628 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x2529D4u, 0x2529DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2529DCu;
label_2529dc:
    // 0x2529dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2529DCu;
    {
        const bool branch_taken_0x2529dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2529E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529DCu;
        // 0x2529e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2529dc) {
            ctx->pc = 0x2529E8u;
            goto label_2529e8;
        }
    }
    ctx->pc = 0x2529E4u;
label_2529e4:
    // 0x2529e4: 0x2451e9e0  addiu       $s1, $v0, -0x1620
    ctx->pc = 0x2529e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961632));
label_2529e8:
    // 0x2529e8: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2529e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x2529ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2529ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2529f0: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x2529F0u;
    SET_GPR_U32(ctx, 31, 0x2529F8u);
    ctx->pc = 0x2529F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2529F0u;
    // 0x2529f4: 0x24502c18  addiu       $s0, $v0, 0x2C18 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x2529F0u, 0x2529F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2529F8u;
label_2529f8:
    // 0x2529f8: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x2529f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x2529fc: 0x240300c6  addiu       $v1, $zero, 0xC6
    ctx->pc = 0x2529fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
    // 0x252a00: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x252a00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x252a04: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x252a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252a08: 0x8f88a020  lw          $t0, -0x5FE0($gp)
    ctx->pc = 0x252a08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x252a0c: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x252a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x252a10: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x252A10u;
    SET_GPR_U32(ctx, 31, 0x252A18u);
    ctx->pc = 0x252A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252A10u;
    // 0x252a14: 0x2405009f  addiu       $a1, $zero, 0x9F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x252A10u, 0x252A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252A18u;
label_252a18:
    // 0x252a18: 0xc092334  jal         func_248CD0
    ctx->pc = 0x252A18u;
    SET_GPR_U32(ctx, 31, 0x252A20u);
    ctx->pc = 0x252A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252A18u;
    // 0x252a1c: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248CD0u, 0x252A18u, 0x252A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252A20u;
label_252a20:
    // 0x252a20: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x252a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x252a24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x252a24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252a28: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x252a28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x252a2c: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x252a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x252a30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x252a30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x252a34: 0x8f88a020  lw          $t0, -0x5FE0($gp)
    ctx->pc = 0x252a34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x252a38: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x252a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x252a3c: 0x24050091  addiu       $a1, $zero, 0x91
    ctx->pc = 0x252a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x252a40: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x252a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252a44: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x252A44u;
    SET_GPR_U32(ctx, 31, 0x252A4Cu);
    ctx->pc = 0x252A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252A44u;
    // 0x252a48: 0x8c460dd0  lw          $a2, 0xDD0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x252A44u, 0x252A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252A4Cu;
label_252a4c:
    // 0x252a4c: 0x2a250001  slti        $a1, $s1, 0x1
    ctx->pc = 0x252a4cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x252a50: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x252a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x252a54: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x252a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x252a58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x252a58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252a5c: 0x85880b  movn        $s1, $a0, $a1
    ctx->pc = 0x252a5cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
    // 0x252a60: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x252a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x252a64: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x252a64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x252a68: 0x3a220012  xori        $v0, $s1, 0x12
    ctx->pc = 0x252a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)18);
    // 0x252a6c: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x252a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x252a70: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x252a70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x252a74: 0xc78c82ac  lwc1        $f12, -0x7D54($gp)
    ctx->pc = 0x252a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x252a78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x252a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252a7c: 0x3c014313  lui         $at, 0x4313
    ctx->pc = 0x252a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17171 << 16));
    // 0x252a80: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x252a80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x252a84: 0xc08b952  jal         func_22E548
    ctx->pc = 0x252A84u;
    SET_GPR_U32(ctx, 31, 0x252A8Cu);
    ctx->pc = 0x252A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252A84u;
    // 0x252a88: 0x62280b  movn        $a1, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x252A84u, 0x252A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252A8Cu;
label_252a8c:
    // 0x252a8c: 0xc092334  jal         func_248CD0
    ctx->pc = 0x252A8Cu;
    SET_GPR_U32(ctx, 31, 0x252A94u);
    ctx->pc = 0x252A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252A8Cu;
    // 0x252a90: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248CD0u, 0x252A8Cu, 0x252A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252A94u;
label_252a94:
    // 0x252a94: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x252a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x252a98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x252a98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252a9c: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x252a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x252aa0: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x252aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x252aa4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x252aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x252aa8: 0x8f88a020  lw          $t0, -0x5FE0($gp)
    ctx->pc = 0x252aa8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x252aac: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x252aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x252ab0: 0x2405009f  addiu       $a1, $zero, 0x9F
    ctx->pc = 0x252ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
    // 0x252ab4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x252ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252ab8: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x252AB8u;
    SET_GPR_U32(ctx, 31, 0x252AC0u);
    ctx->pc = 0x252ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252AB8u;
    // 0x252abc: 0x8c460dd4  lw          $a2, 0xDD4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x252AB8u, 0x252AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252AC0u;
label_252ac0:
    // 0x252ac0: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x252AC0u;
    {
        const bool branch_taken_0x252ac0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x252AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252AC0u;
        // 0x252ac4: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252ac0) {
            ctx->pc = 0x252ADCu;
            goto label_252adc;
        }
    }
    ctx->pc = 0x252AC8u;
    // 0x252ac8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x252ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252acc: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x252ACCu;
    SET_GPR_U32(ctx, 31, 0x252AD4u);
    ctx->pc = 0x252AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252ACCu;
    // 0x252ad0: 0x2484e9d8  addiu       $a0, $a0, -0x1628 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x252ACCu, 0x252AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252AD4u;
label_252ad4:
    // 0x252ad4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x252AD4u;
    {
        const bool branch_taken_0x252ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252AD4u;
        // 0x252ad8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252ad4) {
            ctx->pc = 0x252AE4u;
            goto label_252ae4;
        }
    }
    ctx->pc = 0x252ADCu;
label_252adc:
    // 0x252adc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x252adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x252ae0: 0x2451e9e0  addiu       $s1, $v0, -0x1620
    ctx->pc = 0x252ae0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961632));
label_252ae4:
    // 0x252ae4: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x252AE4u;
    SET_GPR_U32(ctx, 31, 0x252AECu);
    ctx->pc = 0x252AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252AE4u;
    // 0x252ae8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x252AE4u, 0x252AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252AECu;
label_252aec:
    // 0x252aec: 0x2405023a  addiu       $a1, $zero, 0x23A
    ctx->pc = 0x252aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 570));
    // 0x252af0: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x252af0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x252af4: 0xa22023  subu        $a0, $a1, $v0
    ctx->pc = 0x252af4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x252af8: 0x8f88a020  lw          $t0, -0x5FE0($gp)
    ctx->pc = 0x252af8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x252afc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x252afcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252b00: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x252B00u;
    SET_GPR_U32(ctx, 31, 0x252B08u);
    ctx->pc = 0x252B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252B00u;
    // 0x252b04: 0x2405009f  addiu       $a1, $zero, 0x9F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x252B00u, 0x252B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252B08u;
label_252b08:
    // 0x252b08: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x252b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252b0c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x252b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x252b10: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x252b10u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x252b14: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x252b14u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x252b18: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x252b18u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x252b1c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x252b1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x252b20: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x252b20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x252b24: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x252b24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x252b28: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x252b28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252b2c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x252b2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252b30: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x252b30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252b34: 0x808089c  j           func_202270
    ctx->pc = 0x252B34u;
    ctx->pc = 0x252B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252B34u;
    // 0x252b38: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    textSelect_0x202270(rdram, ctx, runtime); return;
    ctx->pc = 0x252B3Cu;
label_252b3c:
    // 0x252b3c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x252b3cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x252b40: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x252b40u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x252b44: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x252b44u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x252b48: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x252b48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x252b4c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x252b4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x252b50: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x252b50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x252b54: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x252b54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252b58: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x252b58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252b5c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x252b5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252b60: 0x3e00008  jr          $ra
    ctx->pc = 0x252B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252B60u;
        // 0x252b64: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252B68u;
}
