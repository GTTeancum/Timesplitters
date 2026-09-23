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

// Function: testmap_pageTick
// Address: 0x24cfd8 - 0x24d1ec
void testmap_pageTick_0x24cfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("testmap_pageTick_0x24cfd8");
#endif

    switch (ctx->pc) {
        case 0x24cffcu: goto label_24cffc;
        case 0x24d040u: goto label_24d040;
        case 0x24d090u: goto label_24d090;
        case 0x24d0a4u: goto label_24d0a4;
        case 0x24d0b4u: goto label_24d0b4;
        case 0x24d0ecu: goto label_24d0ec;
        case 0x24d104u: goto label_24d104;
        case 0x24d18cu: goto label_24d18c;
        case 0x24d1b0u: goto label_24d1b0;
        case 0x24d1c4u: goto label_24d1c4;
        case 0x24d1d0u: goto label_24d1d0;
        default: break;
    }

    ctx->pc = 0x24cfd8u;

    // 0x24cfd8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x24cfd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x24cfdc: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x24cfdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x24cfe0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24cfe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cfe4: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x24cfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x24cfe8: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x24cfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x24cfec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24cfecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cff0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x24cff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x24cff4: 0xc091e80  jal         func_247A00
    ctx->pc = 0x24CFF4u;
    SET_GPR_U32(ctx, 31, 0x24CFFCu);
    ctx->pc = 0x24CFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CFF4u;
    // 0x24cff8: 0x3c120035  lui         $s2, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)53 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247A00u, 0x24CFF4u, 0x24CFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CFFCu;
label_24cffc:
    // 0x24cffc: 0x2790b850  addiu       $s0, $gp, -0x47B0
    ctx->pc = 0x24cffcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948944));
    // 0x24d000: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x24d000u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d004: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x24d004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x24d008: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x24d008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x24d00c: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x24d00cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x24d010: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x24d010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x24d014: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24d014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24d018: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24d018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24d01c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x24d01cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x24d020: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x24d020u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24d024: 0x264d6970  addiu       $t5, $s2, 0x6970
    ctx->pc = 0x24d024u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 18), 26992));
    // 0x24d028: 0x240c000c  addiu       $t4, $zero, 0xC
    ctx->pc = 0x24d028u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x24d02c: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x24d02cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d030: 0x248ec3a8  addiu       $t6, $a0, -0x3C58
    ctx->pc = 0x24d030u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951848));
    // 0x24d034: 0x24a869a8  addiu       $t0, $a1, 0x69A8
    ctx->pc = 0x24d034u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 27048));
    // 0x24d038: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24d038u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d03c: 0x0  nop
    ctx->pc = 0x24d03cu;
    // NOP
label_24d040:
    // 0x24d040: 0xed1021  addu        $v0, $a3, $t5
    ctx->pc = 0x24d040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x24d044: 0x8d04000c  lw          $a0, 0xC($t0)
    ctx->pc = 0x24d044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x24d048: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x24d048u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24d04c: 0xeb3021  addu        $a2, $a3, $t3
    ctx->pc = 0x24d04cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x24d050: 0x1442024  and         $a0, $t2, $a0
    ctx->pc = 0x24d050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & GPR_U64(ctx, 4));
    // 0x24d054: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x24d054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x24d058: 0x6c1018  mult        $v0, $v1, $t4
    ctx->pc = 0x24d058u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x24d05c: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x24d05cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x24d060: 0x2ce50004  sltiu       $a1, $a3, 0x4
    ctx->pc = 0x24d060u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x24d064: 0x4e1821  addu        $v1, $v0, $t6
    ctx->pc = 0x24d064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x24d068: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x24d068u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24d06c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24d06cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24d070: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x24d070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x24d074: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24d074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24d078: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x24d078u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x24d07c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x24d07cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x24d080: 0x14a0ffef  bnez        $a1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x24D080u;
    {
        const bool branch_taken_0x24d080 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D080u;
        // 0x24d084: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d080) {
            ctx->pc = 0x24D040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24d040;
        }
    }
    ctx->pc = 0x24D088u;
    // 0x24d088: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x24D088u;
    SET_GPR_U32(ctx, 31, 0x24D090u);
    ctx->pc = 0x24D08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D088u;
    // 0x24d08c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x24D088u, 0x24D090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D090u;
label_24d090:
    // 0x24d090: 0x30420900  andi        $v0, $v0, 0x900
    ctx->pc = 0x24d090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2304);
    // 0x24d094: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24D094u;
    {
        const bool branch_taken_0x24d094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d094) {
            ctx->pc = 0x24D0ACu;
            goto label_24d0ac;
        }
    }
    ctx->pc = 0x24D09Cu;
    // 0x24d09c: 0xc092e82  jal         func_24BA08
    ctx->pc = 0x24D09Cu;
    SET_GPR_U32(ctx, 31, 0x24D0A4u);
    ctx->pc = 0x24D0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D09Cu;
    // 0x24d0a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BA08u, 0x24D09Cu, 0x24D0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D0A4u;
label_24d0a4:
    // 0x24d0a4: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x24D0A4u;
    {
        const bool branch_taken_0x24d0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D0A4u;
        // 0x24d0a8: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d0a4) {
            ctx->pc = 0x24D1D8u;
            goto label_24d1d8;
        }
    }
    ctx->pc = 0x24D0ACu;
label_24d0ac:
    // 0x24d0ac: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x24D0ACu;
    SET_GPR_U32(ctx, 31, 0x24D0B4u);
    ctx->pc = 0x24D0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D0ACu;
    // 0x24d0b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x24D0ACu, 0x24D0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D0B4u;
label_24d0b4:
    // 0x24d0b4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x24d0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x24d0b8: 0x5040003e  beql        $v0, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x24D0B8u;
    {
        const bool branch_taken_0x24d0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d0b8) {
            ctx->pc = 0x24D0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D0B8u;
            // 0x24d0bc: 0x3c100035  lui         $s0, 0x35 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D1B4u;
            goto label_24d1b4;
        }
    }
    ctx->pc = 0x24D0C0u;
    // 0x24d0c0: 0x96240004  lhu         $a0, 0x4($s1)
    ctx->pc = 0x24d0c0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24d0c4: 0x2483fffe  addiu       $v1, $a0, -0x2
    ctx->pc = 0x24d0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x24d0c8: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x24d0c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x24d0cc: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x24D0CCu;
    {
        const bool branch_taken_0x24d0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D0CCu;
        // 0x24d0d0: 0x701021  addu        $v0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d0cc) {
            ctx->pc = 0x24D1B0u;
            goto label_24d1b0;
        }
    }
    ctx->pc = 0x24D0D4u;
    // 0x24d0d4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x24d0d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24d0d8: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x24D0D8u;
    {
        const bool branch_taken_0x24d0d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D0D8u;
        // 0x24d0dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d0d8) {
            ctx->pc = 0x24D194u;
            goto label_24d194;
        }
    }
    ctx->pc = 0x24D0E0u;
    // 0x24d0e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24d0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d0e4: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x24D0E4u;
    SET_GPR_U32(ctx, 31, 0x24D0ECu);
    ctx->pc = 0x24D0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D0E4u;
    // 0x24d0e8: 0x24060070  addiu       $a2, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x24D0E4u, 0x24D0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D0ECu;
label_24d0ec:
    // 0x24d0ec: 0x8f83a0d8  lw          $v1, -0x5F28($gp)
    ctx->pc = 0x24d0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x24d0f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24d0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d0f4: 0x8f84a0d0  lw          $a0, -0x5F30($gp)
    ctx->pc = 0x24d0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
    // 0x24d0f8: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x24d0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x24d0fc: 0xc091f1e  jal         func_247C78
    ctx->pc = 0x24D0FCu;
    SET_GPR_U32(ctx, 31, 0x24D104u);
    ctx->pc = 0x24D100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D0FCu;
    // 0x24d100: 0xaf83a0d8  sw          $v1, -0x5F28($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247C78u, 0x24D0FCu, 0x24D104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D104u;
label_24d104:
    // 0x24d104: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x24d104u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24d108: 0x26446970  addiu       $a0, $s2, 0x6970
    ctx->pc = 0x24d108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 26992));
    // 0x24d10c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x24d10cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x24d110: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24d110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d114: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24d114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24d118: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x24d118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x24d11c: 0x9044fffe  lbu         $a0, -0x2($v0)
    ctx->pc = 0x24d11cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967294)));
    // 0x24d120: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x24d120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x24d124: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x24d124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24d128: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x24d128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x24d12c: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x24d12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x24d130: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x24d130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x24d134: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x24d134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x24d138: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x24d138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x24d13c: 0xafa6004c  sw          $a2, 0x4C($sp)
    ctx->pc = 0x24d13cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 6));
    // 0x24d140: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x24d140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x24d144: 0x10870004  beq         $a0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x24D144u;
    {
        const bool branch_taken_0x24d144 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x24D148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D144u;
        // 0x24d148: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d144) {
            ctx->pc = 0x24D158u;
            goto label_24d158;
        }
    }
    ctx->pc = 0x24D14Cu;
    // 0x24d14c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x24d14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24d150: 0x1482000c  bne         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24D150u;
    {
        const bool branch_taken_0x24d150 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x24d150) {
            ctx->pc = 0x24D184u;
            goto label_24d184;
        }
    }
    ctx->pc = 0x24D158u;
label_24d158:
    // 0x24d158: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x24d158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x24d15c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x24d15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24d160: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x24d160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x24d164: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24d164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24d168: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x24d168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x24d16c: 0xa3a70011  sb          $a3, 0x11($sp)
    ctx->pc = 0x24d16cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 7));
    // 0x24d170: 0xa3a30012  sb          $v1, 0x12($sp)
    ctx->pc = 0x24d170u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x24d174: 0xa3a40013  sb          $a0, 0x13($sp)
    ctx->pc = 0x24d174u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 4));
    // 0x24d178: 0xa3a60023  sb          $a2, 0x23($sp)
    ctx->pc = 0x24d178u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 35), (uint8_t)GPR_U32(ctx, 6));
    // 0x24d17c: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x24d17cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x24d180: 0xa3a60010  sb          $a2, 0x10($sp)
    ctx->pc = 0x24d180u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 6));
label_24d184:
    // 0x24d184: 0xc0879ea  jal         func_21E7A8
    ctx->pc = 0x24D184u;
    SET_GPR_U32(ctx, 31, 0x24D18Cu);
    ctx->pc = 0x24D188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D184u;
    // 0x24d188: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E7A8u, 0x24D184u, 0x24D18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D18Cu;
label_24d18c:
    // 0x24d18c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x24D18Cu;
    {
        const bool branch_taken_0x24d18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D18Cu;
        // 0x24d190: 0x3c100035  lui         $s0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d18c) {
            ctx->pc = 0x24D1B4u;
            goto label_24d1b4;
        }
    }
    ctx->pc = 0x24D194u;
label_24d194:
    // 0x24d194: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x24d194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x24d198: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x24d198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x24d19c: 0x24426988  addiu       $v0, $v0, 0x6988
    ctx->pc = 0x24d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27016));
    // 0x24d1a0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x24d1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x24d1a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24d1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24d1a8: 0xc091e80  jal         func_247A00
    ctx->pc = 0x24D1A8u;
    SET_GPR_U32(ctx, 31, 0x24D1B0u);
    ctx->pc = 0x24D1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D1A8u;
    // 0x24d1ac: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247A00u, 0x24D1A8u, 0x24D1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D1B0u;
label_24d1b0:
    // 0x24d1b0: 0x3c100035  lui         $s0, 0x35
    ctx->pc = 0x24d1b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
label_24d1b4:
    // 0x24d1b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24d1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d1b8: 0x26106978  addiu       $s0, $s0, 0x6978
    ctx->pc = 0x24d1b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27000));
    // 0x24d1bc: 0xc0930ea  jal         func_24C3A8
    ctx->pc = 0x24D1BCu;
    SET_GPR_U32(ctx, 31, 0x24D1C4u);
    ctx->pc = 0x24D1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D1BCu;
    // 0x24d1c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C3A8u, 0x24D1BCu, 0x24D1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D1C4u;
label_24d1c4:
    // 0x24d1c4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x24d1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x24d1c8: 0xc09309c  jal         func_24C270
    ctx->pc = 0x24D1C8u;
    SET_GPR_U32(ctx, 31, 0x24D1D0u);
    ctx->pc = 0x24D1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D1C8u;
    // 0x24d1cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C270u, 0x24D1C8u, 0x24D1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D1D0u;
label_24d1d0:
    // 0x24d1d0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x24d1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x24d1d4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x24d1d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_24d1d8:
    // 0x24d1d8: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x24d1d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24d1dc: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x24d1dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24d1e0: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x24d1e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24d1e4: 0x3e00008  jr          $ra
    ctx->pc = 0x24D1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D1E4u;
        // 0x24d1e8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D1E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D1ECu;
}
