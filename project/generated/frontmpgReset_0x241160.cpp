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

// Function: frontmpgReset
// Address: 0x241160 - 0x241538
void frontmpgReset_0x241160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontmpgReset_0x241160");
#endif

    switch (ctx->pc) {
        case 0x2411a4u: goto label_2411a4;
        case 0x2411acu: goto label_2411ac;
        case 0x2411b4u: goto label_2411b4;
        case 0x2411e4u: goto label_2411e4;
        case 0x241208u: goto label_241208;
        case 0x241238u: goto label_241238;
        case 0x24128cu: goto label_24128c;
        case 0x241298u: goto label_241298;
        case 0x2412e8u: goto label_2412e8;
        case 0x241330u: goto label_241330;
        case 0x241350u: goto label_241350;
        case 0x24139cu: goto label_24139c;
        case 0x2413acu: goto label_2413ac;
        case 0x2413bcu: goto label_2413bc;
        case 0x2413e0u: goto label_2413e0;
        case 0x2413f0u: goto label_2413f0;
        case 0x241420u: goto label_241420;
        case 0x24143cu: goto label_24143c;
        case 0x241478u: goto label_241478;
        case 0x2414d0u: goto label_2414d0;
        default: break;
    }

    ctx->pc = 0x241160u;

    // 0x241160: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x241160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x241164: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x241164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x241168: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x241168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x24116c: 0x3c1e003b  lui         $fp, 0x3B
    ctx->pc = 0x24116cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)59 << 16));
    // 0x241170: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x241170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x241174: 0x3c1701fc  lui         $s7, 0x1FC
    ctx->pc = 0x241174u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)508 << 16));
    // 0x241178: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x241178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x24117c: 0x3c1601fc  lui         $s6, 0x1FC
    ctx->pc = 0x24117cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)508 << 16));
    // 0x241180: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x241180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x241184: 0x3c15002f  lui         $s5, 0x2F
    ctx->pc = 0x241184u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)47 << 16));
    // 0x241188: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x241188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24118c: 0x3c1401fc  lui         $s4, 0x1FC
    ctx->pc = 0x24118cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)508 << 16));
    // 0x241190: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x241190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x241194: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x241194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x241198: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x241198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24119c: 0xc08a910  jal         func_22A440
    ctx->pc = 0x24119Cu;
    SET_GPR_U32(ctx, 31, 0x2411A4u);
    ctx->pc = 0x2411A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24119Cu;
    // 0x2411a0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A440u, 0x24119Cu, 0x2411A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2411A4u;
label_2411a4:
    // 0x2411a4: 0xc08b908  jal         func_22E420
    ctx->pc = 0x2411A4u;
    SET_GPR_U32(ctx, 31, 0x2411ACu);
    ctx->pc = 0x2411A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2411A4u;
    // 0x2411a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E420u, 0x2411A4u, 0x2411ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2411ACu;
label_2411ac:
    // 0x2411ac: 0xc08bb3c  jal         func_22ECF0
    ctx->pc = 0x2411ACu;
    SET_GPR_U32(ctx, 31, 0x2411B4u);
    ctx->pc = 0x22ECF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ECF0u, 0x2411ACu, 0x2411B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2411B4u;
label_2411b4:
    // 0x2411b4: 0x3c026464  lui         $v0, 0x6464
    ctx->pc = 0x2411b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25700 << 16));
    // 0x2411b8: 0x3c031414  lui         $v1, 0x1414
    ctx->pc = 0x2411b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5140 << 16));
    // 0x2411bc: 0x34426480  ori         $v0, $v0, 0x6480
    ctx->pc = 0x2411bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25728);
    // 0x2411c0: 0x34631480  ori         $v1, $v1, 0x1480
    ctx->pc = 0x2411c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5248);
    // 0x2411c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2411c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2411c8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2411c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2411cc: 0xaf82a01c  sw          $v0, -0x5FE4($gp)
    ctx->pc = 0x2411ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942748), GPR_U32(ctx, 2));
    // 0x2411d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2411d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2411d4: 0xaf83a020  sw          $v1, -0x5FE0($gp)
    ctx->pc = 0x2411d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942752), GPR_U32(ctx, 3));
    // 0x2411d8: 0xaf85a024  sw          $a1, -0x5FDC($gp)
    ctx->pc = 0x2411d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942756), GPR_U32(ctx, 5));
    // 0x2411dc: 0xc08089c  jal         func_202270
    ctx->pc = 0x2411DCu;
    SET_GPR_U32(ctx, 31, 0x2411E4u);
    ctx->pc = 0x2411E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2411DCu;
    // 0x2411e0: 0xaf86a028  sw          $a2, -0x5FD8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942760), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x2411DCu, 0x2411E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2411E4u;
label_2411e4:
    // 0x2411e4: 0x8f869354  lw          $a2, -0x6CAC($gp)
    ctx->pc = 0x2411e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2411e8: 0x26a42c18  addiu       $a0, $s5, 0x2C18
    ctx->pc = 0x2411e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 11288));
    // 0x2411ec: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2411ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x2411f0: 0xaf80b780  sw          $zero, -0x4880($gp)
    ctx->pc = 0x2411f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948736), GPR_U32(ctx, 0));
    // 0x2411f4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2411f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2411f8: 0x24674088  addiu       $a3, $v1, 0x4088
    ctx->pc = 0x2411f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 16520));
    // 0x2411fc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2411fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x241200: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x241200u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241204: 0x26851960  addiu       $a1, $s4, 0x1960
    ctx->pc = 0x241204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 6496));
label_241208:
    // 0x241208: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x241208u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x24120c: 0xacb10000  sw          $s1, 0x0($a1)
    ctx->pc = 0x24120cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17));
    // 0x241210: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x241210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x241214: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x241214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x241218: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x241218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x24121c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x24121cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x241220: 0x2a240008  slti        $a0, $s1, 0x8
    ctx->pc = 0x241220u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x241224: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x241224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241228: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x241228u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x24122c: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x24122Cu;
    {
        const bool branch_taken_0x24122c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x241230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24122Cu;
        // 0x241230: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24122c) {
            ctx->pc = 0x241208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241208;
        }
    }
    ctx->pc = 0x241234u;
    // 0x241234: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x241234u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241238:
    // 0x241238: 0x26280008  addiu       $t0, $s1, 0x8
    ctx->pc = 0x241238u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x24123c: 0x26851960  addiu       $a1, $s4, 0x1960
    ctx->pc = 0x24123cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 6496));
    // 0x241240: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x241240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x241244: 0x24b30004  addiu       $s3, $a1, 0x4
    ctx->pc = 0x241244u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x241248: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x241248u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x24124c: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x24124cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x241250: 0x118140  sll         $s0, $s1, 5
    ctx->pc = 0x241250u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x241254: 0x24620c98  addiu       $v0, $v1, 0xC98
    ctx->pc = 0x241254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3224));
    // 0x241258: 0x26b22c18  addiu       $s2, $s5, 0x2C18
    ctx->pc = 0x241258u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 11288));
    // 0x24125c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24125cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x241260: 0xf31821  addu        $v1, $a3, $s3
    ctx->pc = 0x241260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x241264: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x241264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x241268: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x241268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24126c: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x24126cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x241270: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x241270u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x241274: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x241274u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x241278: 0x27c4e890  addiu       $a0, $fp, -0x1770
    ctx->pc = 0x241278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961296));
    // 0x24127c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24127cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241280: 0x8c450580  lw          $a1, 0x580($v0)
    ctx->pc = 0x241280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x241284: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x241284u;
    SET_GPR_U32(ctx, 31, 0x24128Cu);
    ctx->pc = 0x241288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241284u;
    // 0x241288: 0xace80000  sw          $t0, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x241284u, 0x24128Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24128Cu;
label_24128c:
    // 0x24128c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24128cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241290: 0xc0b97d7  jal         func_2E5F5C
    ctx->pc = 0x241290u;
    SET_GPR_U32(ctx, 31, 0x241298u);
    ctx->pc = 0x241294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241290u;
    // 0x241294: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5F5Cu, 0x241290u, 0x241298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241298u;
label_241298:
    // 0x241298: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x241298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x24129c: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x24129Cu;
    {
        const bool branch_taken_0x24129c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24129c) {
            ctx->pc = 0x2412A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24129Cu;
            // 0x2412a0: 0x8f869354  lw          $a2, -0x6CAC($gp) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241238;
        }
    }
    ctx->pc = 0x2412A4u;
    // 0x2412a4: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x2412a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2412a8: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x2412a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2412ac: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2412acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2412b0: 0x26c51908  addiu       $a1, $s6, 0x1908
    ctx->pc = 0x2412b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 6408));
    // 0x2412b4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2412b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2412b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2412b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2412bc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2412bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2412c0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2412c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2412c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2412c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2412c8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2412c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2412cc: 0x24474260  addiu       $a3, $v0, 0x4260
    ctx->pc = 0x2412ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16992));
    // 0x2412d0: 0xaec01908  sw          $zero, 0x1908($s6)
    ctx->pc = 0x2412d0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 6408), GPR_U32(ctx, 0));
    // 0x2412d4: 0x8c820584  lw          $v0, 0x584($a0)
    ctx->pc = 0x2412d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1412)));
    // 0x2412d8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2412d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2412dc: 0x24a60008  addiu       $a2, $a1, 0x8
    ctx->pc = 0x2412dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2412e0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2412e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2412e4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2412e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_2412e8:
    // 0x2412e8: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x2412e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2412ec: 0xacd10000  sw          $s1, 0x0($a2)
    ctx->pc = 0x2412ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 17));
    // 0x2412f0: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x2412f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x2412f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2412f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2412f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2412f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2412fc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2412fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x241300: 0x2a24000a  slti        $a0, $s1, 0xA
    ctx->pc = 0x241300u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x241304: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x241304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241308: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x241308u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x24130c: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x24130Cu;
    {
        const bool branch_taken_0x24130c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x241310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24130Cu;
        // 0x241310: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24130c) {
            ctx->pc = 0x2412E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2412e8;
        }
    }
    ctx->pc = 0x241314u;
    // 0x241314: 0x26c21908  addiu       $v0, $s6, 0x1908
    ctx->pc = 0x241314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 6408));
    // 0x241318: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x241318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x24131c: 0x24841238  addiu       $a0, $a0, 0x1238
    ctx->pc = 0x24131cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4664));
    // 0x241320: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x241320u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
    // 0x241324: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x241324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241328: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x241328u;
    SET_GPR_U32(ctx, 31, 0x241330u);
    ctx->pc = 0x24132Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241328u;
    // 0x24132c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x241328u, 0x241330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241330u;
label_241330:
    // 0x241330: 0x26f011f8  addiu       $s0, $s7, 0x11F8
    ctx->pc = 0x241330u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4600));
    // 0x241334: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x241334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x241338: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x241338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x24133c: 0x3404b790  ori         $a0, $zero, 0xB790
    ctx->pc = 0x24133cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46992);
    // 0x241340: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x241340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241344: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x241344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x241348: 0xc0823b0  jal         func_208EC0
    ctx->pc = 0x241348u;
    SET_GPR_U32(ctx, 31, 0x241350u);
    ctx->pc = 0x24134Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241348u;
    // 0x24134c: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208EC0u, 0x241348u, 0x241350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241350u;
label_241350:
    // 0x241350: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x241350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x241354: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x241354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x241358: 0x8ee511f8  lw          $a1, 0x11F8($s7)
    ctx->pc = 0x241358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4600)));
    // 0x24135c: 0xaf82b74c  sw          $v0, -0x48B4($gp)
    ctx->pc = 0x24135cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948684), GPR_U32(ctx, 2));
    // 0x241360: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x241360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x241364: 0x2ca20007  sltiu       $v0, $a1, 0x7
    ctx->pc = 0x241364u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x241368: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x241368u;
    {
        const bool branch_taken_0x241368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241368u;
        // 0x24136c: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241368) {
            ctx->pc = 0x241408u;
            goto label_241408;
        }
    }
    ctx->pc = 0x241370u;
    // 0x241370: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x241370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x241374: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x241374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x241378: 0x24421e70  addiu       $v0, $v0, 0x1E70
    ctx->pc = 0x241378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7792));
    // 0x24137c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24137cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241380: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x241380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x241384: 0x800008  jr          $a0
    ctx->pc = 0x241384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24138Cu: goto label_24138c;
            case 0x2413A4u: goto label_2413a4;
            case 0x2413F8u: goto label_2413f8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241384u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24138Cu;
label_24138c:
    // 0x24138c: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x24138cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x241390: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x241390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241394: 0xc08b3ac  jal         func_22CEB0
    ctx->pc = 0x241394u;
    SET_GPR_U32(ctx, 31, 0x24139Cu);
    ctx->pc = 0x241398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241394u;
    // 0x241398: 0x24a564e0  addiu       $a1, $a1, 0x64E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEB0u, 0x241394u, 0x24139Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24139Cu;
label_24139c:
    // 0x24139c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x24139Cu;
    {
        const bool branch_taken_0x24139c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2413A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24139Cu;
        // 0x2413a0: 0x8f83a004  lw          $v1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24139c) {
            ctx->pc = 0x241424u;
            goto label_241424;
        }
    }
    ctx->pc = 0x2413A4u;
label_2413a4:
    // 0x2413a4: 0xc090156  jal         func_240558
    ctx->pc = 0x2413A4u;
    SET_GPR_U32(ctx, 31, 0x2413ACu);
    ctx->pc = 0x240558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240558u, 0x2413A4u, 0x2413ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2413ACu;
label_2413ac:
    // 0x2413ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2413ACu;
    {
        const bool branch_taken_0x2413ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2413B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2413ACu;
        // 0x2413b0: 0x26e211f8  addiu       $v0, $s7, 0x11F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2413ac) {
            ctx->pc = 0x2413C4u;
            goto label_2413c4;
        }
    }
    ctx->pc = 0x2413B4u;
    // 0x2413b4: 0xc090394  jal         func_240E50
    ctx->pc = 0x2413B4u;
    SET_GPR_U32(ctx, 31, 0x2413BCu);
    ctx->pc = 0x240E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240E50u, 0x2413B4u, 0x2413BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2413BCu;
label_2413bc:
    // 0x2413bc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2413BCu;
    {
        const bool branch_taken_0x2413bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2413C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2413BCu;
        // 0x2413c0: 0x8f83a004  lw          $v1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2413bc) {
            ctx->pc = 0x241424u;
            goto label_241424;
        }
    }
    ctx->pc = 0x2413C4u;
label_2413c4:
    // 0x2413c4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2413c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2413c8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2413c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2413cc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2413ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2413d0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2413D0u;
    {
        const bool branch_taken_0x2413d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2413d0) {
            ctx->pc = 0x2413E8u;
            goto label_2413e8;
        }
    }
    ctx->pc = 0x2413D8u;
    // 0x2413d8: 0xc090000  jal         func_240000
    ctx->pc = 0x2413D8u;
    SET_GPR_U32(ctx, 31, 0x2413E0u);
    ctx->pc = 0x240000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240000u, 0x2413D8u, 0x2413E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2413E0u;
label_2413e0:
    // 0x2413e0: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2413E0u;
    {
        const bool branch_taken_0x2413e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2413e0) {
            ctx->pc = 0x2413E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2413E0u;
            // 0x2413e4: 0x8f83a004  lw          $v1, -0x5FFC($gp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241424u;
            goto label_241424;
        }
    }
    ctx->pc = 0x2413E8u;
label_2413e8:
    // 0x2413e8: 0xc08ffd4  jal         func_23FF50
    ctx->pc = 0x2413E8u;
    SET_GPR_U32(ctx, 31, 0x2413F0u);
    ctx->pc = 0x23FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FF50u, 0x2413E8u, 0x2413F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2413F0u;
label_2413f0:
    // 0x2413f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2413F0u;
    {
        const bool branch_taken_0x2413f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2413F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2413F0u;
        // 0x2413f4: 0x8f83a004  lw          $v1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2413f0) {
            ctx->pc = 0x241424u;
            goto label_241424;
        }
    }
    ctx->pc = 0x2413F8u;
label_2413f8:
    // 0x2413f8: 0x26e311f8  addiu       $v1, $s7, 0x11F8
    ctx->pc = 0x2413f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4600));
    // 0x2413fc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2413fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x241400: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x241400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x241404: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x241404u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_241408:
    // 0x241408: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x241408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24140c: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x24140cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x241410: 0xaf82b73c  sw          $v0, -0x48C4($gp)
    ctx->pc = 0x241410u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948668), GPR_U32(ctx, 2));
    // 0x241414: 0x24a54c98  addiu       $a1, $a1, 0x4C98
    ctx->pc = 0x241414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19608));
    // 0x241418: 0xc08b3ac  jal         func_22CEB0
    ctx->pc = 0x241418u;
    SET_GPR_U32(ctx, 31, 0x241420u);
    ctx->pc = 0x24141Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241418u;
    // 0x24141c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEB0u, 0x241418u, 0x241420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241420u;
label_241420:
    // 0x241420: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x241420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_241424:
    // 0x241424: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x241424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x241428: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x241428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x24142c: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x24142cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x241430: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x241430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x241434: 0xc094e54  jal         func_253950
    ctx->pc = 0x241434u;
    SET_GPR_U32(ctx, 31, 0x24143Cu);
    ctx->pc = 0x241438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241434u;
    // 0x241438: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253950u, 0x241434u, 0x24143Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24143Cu;
label_24143c:
    // 0x24143c: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x24143cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
    // 0x241440: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x241440u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
    // 0x241444: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x241444u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x241448: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x241448u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x24144c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x24144cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x241450: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x241450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x241454: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x241454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x241458: 0x24423730  addiu       $v0, $v0, 0x3730
    ctx->pc = 0x241458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14128));
    // 0x24145c: 0x24633740  addiu       $v1, $v1, 0x3740
    ctx->pc = 0x24145cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14144));
    // 0x241460: 0x24843720  addiu       $a0, $a0, 0x3720
    ctx->pc = 0x241460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14112));
    // 0x241464: 0x24a53710  addiu       $a1, $a1, 0x3710
    ctx->pc = 0x241464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14096));
    // 0x241468: 0x24c63700  addiu       $a2, $a2, 0x3700
    ctx->pc = 0x241468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14080));
    // 0x24146c: 0x24e736f0  addiu       $a3, $a3, 0x36F0
    ctx->pc = 0x24146cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14064));
    // 0x241470: 0x25083750  addiu       $t0, $t0, 0x3750
    ctx->pc = 0x241470u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 14160));
    // 0x241474: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x241474u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_241478:
    // 0x241478: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x241478u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x24147c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x24147cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x241480: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x241480u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x241484: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x241484u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x241488: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x241488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x24148c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x24148cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x241490: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x241490u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x241494: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x241494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x241498: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x241498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x24149c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x24149cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2414a0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2414a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2414a4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2414a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2414a8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2414a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2414ac: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2414acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2414b0: 0x621fff1  bgez        $s1, . + 4 + (-0xF << 2)
    ctx->pc = 0x2414B0u;
    {
        const bool branch_taken_0x2414b0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2414B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2414B0u;
        // 0x2414b4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2414b0) {
            ctx->pc = 0x241478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241478;
        }
    }
    ctx->pc = 0x2414B8u;
    // 0x2414b8: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x2414b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x2414bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2414bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2414c0: 0x244212f8  addiu       $v0, $v0, 0x12F8
    ctx->pc = 0x2414c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4856));
    // 0x2414c4: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x2414c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2414c8: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x2414c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2414cc: 0x0  nop
    ctx->pc = 0x2414ccu;
    // NOP
label_2414d0:
    // 0x2414d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2414d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2414d4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2414d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2414d8: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2414d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2414dc: 0x0  nop
    ctx->pc = 0x2414dcu;
    // NOP
    // 0x2414e0: 0x0  nop
    ctx->pc = 0x2414e0u;
    // NOP
    // 0x2414e4: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2414E4u;
    {
        const bool branch_taken_0x2414e4 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x2414e4) {
            ctx->pc = 0x2414D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2414d0;
        }
    }
    ctx->pc = 0x2414ECu;
    // 0x2414ec: 0x26e211f8  addiu       $v0, $s7, 0x11F8
    ctx->pc = 0x2414ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4600));
    // 0x2414f0: 0x24031518  addiu       $v1, $zero, 0x1518
    ctx->pc = 0x2414f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5400));
    // 0x2414f4: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x2414f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x2414f8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2414f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2414fc: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2414fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x241500: 0x24841898  addiu       $a0, $a0, 0x1898
    ctx->pc = 0x241500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6296));
    // 0x241504: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x241504u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x241508: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x241508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24150c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x24150cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x241510: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x241510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x241514: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x241514u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x241518: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x241518u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24151c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x24151cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x241520: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x241520u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x241524: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x241524u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241528: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x241528u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24152c: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x24152cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x241530: 0x80b9583  j           func_2E560C
    ctx->pc = 0x241530u;
    ctx->pc = 0x241534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241530u;
    // 0x241534: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    memset_0x2e560c(rdram, ctx, runtime); return;
    ctx->pc = 0x241538u;
}
