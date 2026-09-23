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

// Function: padReset
// Address: 0x264248 - 0x26459c
void padReset_0x264248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("padReset_0x264248");
#endif

    switch (ctx->pc) {
        case 0x264268u: goto label_264268;
        case 0x264278u: goto label_264278;
        case 0x264280u: goto label_264280;
        case 0x2642a8u: goto label_2642a8;
        case 0x2642b0u: goto label_2642b0;
        case 0x2642e0u: goto label_2642e0;
        case 0x264358u: goto label_264358;
        case 0x264390u: goto label_264390;
        case 0x2643c8u: goto label_2643c8;
        case 0x264438u: goto label_264438;
        case 0x2644d0u: goto label_2644d0;
        case 0x26457cu: goto label_26457c;
        default: break;
    }

    ctx->pc = 0x264248u;

    // 0x264248: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x264248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26424c: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x26424cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x264250: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x264250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x264254: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x264254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x264258: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x264258u;
    {
        const bool branch_taken_0x264258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26425Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264258u;
        // 0x26425c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264258) {
            ctx->pc = 0x264270u;
            goto label_264270;
        }
    }
    ctx->pc = 0x264260u;
    // 0x264260: 0xc0993f4  jal         func_264FD0
    ctx->pc = 0x264260u;
    SET_GPR_U32(ctx, 31, 0x264268u);
    ctx->pc = 0x264FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264FD0u, 0x264260u, 0x264268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264268u;
label_264268:
    // 0x264268: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x264268u;
    {
        const bool branch_taken_0x264268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264268u;
        // 0x26426c: 0x8f82a348  lw          $v0, -0x5CB8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264268) {
            ctx->pc = 0x264284u;
            goto label_264284;
        }
    }
    ctx->pc = 0x264270u;
label_264270:
    // 0x264270: 0xc099016  jal         func_264058
    ctx->pc = 0x264270u;
    SET_GPR_U32(ctx, 31, 0x264278u);
    ctx->pc = 0x264058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264058u, 0x264270u, 0x264278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264278u;
label_264278:
    // 0x264278: 0xc099556  jal         func_265558
    ctx->pc = 0x264278u;
    SET_GPR_U32(ctx, 31, 0x264280u);
    ctx->pc = 0x26427Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264278u;
    // 0x26427c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265558u, 0x264278u, 0x264280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264280u;
label_264280:
    // 0x264280: 0x8f82a348  lw          $v0, -0x5CB8($gp)
    ctx->pc = 0x264280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
label_264284:
    // 0x264284: 0x184000c1  blez        $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x264284u;
    {
        const bool branch_taken_0x264284 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x264288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264284u;
        // 0x264288: 0x28420961  slti        $v0, $v0, 0x961 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2401) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x264284) {
            ctx->pc = 0x26458Cu;
            goto label_26458c;
        }
    }
    ctx->pc = 0x26428Cu;
    // 0x26428c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26428Cu;
    {
        const bool branch_taken_0x26428c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26428Cu;
        // 0x264290: 0x8f82a34c  lw          $v0, -0x5CB4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26428c) {
            ctx->pc = 0x2642A0u;
            goto label_2642a0;
        }
    }
    ctx->pc = 0x264294u;
    // 0x264294: 0x28421131  slti        $v0, $v0, 0x1131
    ctx->pc = 0x264294u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4401) ? 1 : 0);
    // 0x264298: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x264298u;
    {
        const bool branch_taken_0x264298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264298) {
            ctx->pc = 0x2642A8u;
            goto label_2642a8;
        }
    }
    ctx->pc = 0x2642A0u;
label_2642a0:
    // 0x2642a0: 0xc0b8690  jal         func_2E1A40
    ctx->pc = 0x2642A0u;
    SET_GPR_U32(ctx, 31, 0x2642A8u);
    ctx->pc = 0x2642A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2642A0u;
    // 0x2642a4: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A40u, 0x2642A0u, 0x2642A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2642A8u;
label_2642a8:
    // 0x2642a8: 0xc09960a  jal         func_265828
    ctx->pc = 0x2642A8u;
    SET_GPR_U32(ctx, 31, 0x2642B0u);
    ctx->pc = 0x265828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265828u, 0x2642A8u, 0x2642B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2642B0u;
label_2642b0:
    // 0x2642b0: 0x8f84a348  lw          $a0, -0x5CB8($gp)
    ctx->pc = 0x2642b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
    // 0x2642b4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2642b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2642b8: 0xaf80a354  sw          $zero, -0x5CAC($gp)
    ctx->pc = 0x2642b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943572), GPR_U32(ctx, 0));
    // 0x2642bc: 0x18800015  blez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2642BCu;
    {
        const bool branch_taken_0x2642bc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2642C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2642BCu;
        // 0x2642c0: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2642bc) {
            ctx->pc = 0x264314u;
            goto label_264314;
        }
    }
    ctx->pc = 0x2642C4u;
    // 0x2642c4: 0x8f87a2ec  lw          $a3, -0x5D14($gp)
    ctx->pc = 0x2642c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2642c8: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x2642c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2642cc: 0x8f85b8b4  lw          $a1, -0x474C($gp)
    ctx->pc = 0x2642ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949044)));
    // 0x2642d0: 0x8f88b8b8  lw          $t0, -0x4748($gp)
    ctx->pc = 0x2642d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949048)));
    // 0x2642d4: 0x8f84b8b0  lw          $a0, -0x4750($gp)
    ctx->pc = 0x2642d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949040)));
    // 0x2642d8: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2642d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2642dc: 0x0  nop
    ctx->pc = 0x2642dcu;
    // NOP
label_2642e0:
    // 0x2642e0: 0x1421818  mult        $v1, $t2, $v0
    ctx->pc = 0x2642e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2642e4: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x2642e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2642e8: 0x84420008  lh          $v0, 0x8($v0)
    ctx->pc = 0x2642e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2642ec: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x2642ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2642f0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2642F0u;
    {
        const bool branch_taken_0x2642f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2642F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2642F0u;
        // 0x2642f4: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2642f0) {
            ctx->pc = 0x264300u;
            goto label_264300;
        }
    }
    ctx->pc = 0x2642F8u;
    // 0x2642f8: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x2642f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2642fc: 0xaf86a354  sw          $a2, -0x5CAC($gp)
    ctx->pc = 0x2642fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943572), GPR_U32(ctx, 6));
label_264300:
    // 0x264300: 0x149102a  slt         $v0, $t2, $t1
    ctx->pc = 0x264300u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x264304: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x264304u;
    {
        const bool branch_taken_0x264304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264304u;
        // 0x264308: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264304) {
            ctx->pc = 0x2642E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2642e0;
        }
    }
    ctx->pc = 0x26430Cu;
    // 0x26430c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26430Cu;
    {
        const bool branch_taken_0x26430c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26430Cu;
        // 0x264310: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26430c) {
            ctx->pc = 0x264328u;
            goto label_264328;
        }
    }
    ctx->pc = 0x264314u;
label_264314:
    // 0x264314: 0x8f85b8b4  lw          $a1, -0x474C($gp)
    ctx->pc = 0x264314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949044)));
    // 0x264318: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x264318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26431c: 0x8f88b8b8  lw          $t0, -0x4748($gp)
    ctx->pc = 0x26431cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949048)));
    // 0x264320: 0x8f84b8b0  lw          $a0, -0x4750($gp)
    ctx->pc = 0x264320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949040)));
    // 0x264324: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x264324u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_264328:
    // 0x264328: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x264328u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26432c: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x26432cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x264330: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x264330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x264334: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x264334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x264338: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x264338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26433c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26433cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x264340: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x264340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x264344: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x264344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x264348: 0x3484fff0  ori         $a0, $a0, 0xFFF0
    ctx->pc = 0x264348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65520);
    // 0x26434c: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x26434cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x264350: 0xc08070e  jal         func_201C38
    ctx->pc = 0x264350u;
    SET_GPR_U32(ctx, 31, 0x264358u);
    ctx->pc = 0x264354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264350u;
    // 0x264354: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x264350u, 0x264358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264358u;
label_264358:
    // 0x264358: 0x8f84a354  lw          $a0, -0x5CAC($gp)
    ctx->pc = 0x264358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943572)));
    // 0x26435c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x26435cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264360: 0xaf83a350  sw          $v1, -0x5CB0($gp)
    ctx->pc = 0x264360u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943568), GPR_U32(ctx, 3));
    // 0x264364: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x264364u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264368: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x264368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26436c: 0x18800081  blez        $a0, . + 4 + (0x81 << 2)
    ctx->pc = 0x26436Cu;
    {
        const bool branch_taken_0x26436c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x264370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26436Cu;
        // 0x264370: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26436c) {
            ctx->pc = 0x264574u;
            goto label_264574;
        }
    }
    ctx->pc = 0x264374u;
    // 0x264374: 0x8f99a2f0  lw          $t9, -0x5D10($gp)
    ctx->pc = 0x264374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943472)));
    // 0x264378: 0x60c02d  daddu       $t8, $v1, $zero
    ctx->pc = 0x264378u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26437c: 0x8f90a2ec  lw          $s0, -0x5D14($gp)
    ctx->pc = 0x26437cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x264380: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x264380u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264384: 0x240c001c  addiu       $t4, $zero, 0x1C
    ctx->pc = 0x264384u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x264388: 0x240e0014  addiu       $t6, $zero, 0x14
    ctx->pc = 0x264388u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26438c: 0x0  nop
    ctx->pc = 0x26438cu;
    // NOP
label_264390:
    // 0x264390: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x264390u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x264394: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x264394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x264398: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x264398u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x26439c: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x26439cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x2643a0: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x2643a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x2643a4: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2643a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2643a8: 0x8f84a348  lw          $a0, -0x5CB8($gp)
    ctx->pc = 0x2643a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
    // 0x2643ac: 0x1880001b  blez        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2643ACu;
    {
        const bool branch_taken_0x2643ac = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2643B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2643ACu;
        // 0x2643b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2643ac) {
            ctx->pc = 0x26441Cu;
            goto label_26441c;
        }
    }
    ctx->pc = 0x2643B4u;
    // 0x2643b4: 0x8f87a2ec  lw          $a3, -0x5D14($gp)
    ctx->pc = 0x2643b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2643b8: 0x254d0001  addiu       $t5, $t2, 0x1
    ctx->pc = 0x2643b8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2643bc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2643bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2643c0: 0xac1018  mult        $v0, $a1, $t4
    ctx->pc = 0x2643c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2643c4: 0x0  nop
    ctx->pc = 0x2643c4u;
    // NOP
label_2643c8:
    // 0x2643c8: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x2643c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2643cc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2643ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2643d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2643d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2643d4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2643D4u;
    {
        const bool branch_taken_0x2643d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2643d4) {
            ctx->pc = 0x2643D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2643D4u;
            // 0x2643d8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264408u;
            goto label_264408;
        }
    }
    ctx->pc = 0x2643DCu;
    // 0x2643dc: 0x84620008  lh          $v0, 0x8($v1)
    ctx->pc = 0x2643dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2643e0: 0x544a0009  bnel        $v0, $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2643E0u;
    {
        const bool branch_taken_0x2643e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        if (branch_taken_0x2643e0) {
            ctx->pc = 0x2643E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2643E0u;
            // 0x2643e4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264408u;
            goto label_264408;
        }
    }
    ctx->pc = 0x2643E8u;
    // 0x2643e8: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x2643e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x2643ec: 0x25630001  addiu       $v1, $t3, 0x1
    ctx->pc = 0x2643ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x2643f0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2643f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2643f4: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x2643f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2643f8: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x2643f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x2643fc: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2643fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x264400: 0x8f84a348  lw          $a0, -0x5CB8($gp)
    ctx->pc = 0x264400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
    // 0x264404: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x264404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_264408:
    // 0x264408: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x264408u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26440c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x26440Cu;
    {
        const bool branch_taken_0x26440c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26440Cu;
        // 0x264410: 0xac1018  mult        $v0, $a1, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26440c) {
            ctx->pc = 0x2643C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2643c8;
        }
    }
    ctx->pc = 0x264414u;
    // 0x264414: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x264414u;
    {
        const bool branch_taken_0x264414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264414u;
        // 0x264418: 0x8f89a34c  lw          $t1, -0x5CB4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264414) {
            ctx->pc = 0x264428u;
            goto label_264428;
        }
    }
    ctx->pc = 0x26441Cu;
label_26441c:
    // 0x26441c: 0x254d0001  addiu       $t5, $t2, 0x1
    ctx->pc = 0x26441cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x264420: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x264420u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264424: 0x8f89a34c  lw          $t1, -0x5CB4($gp)
    ctx->pc = 0x264424u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943564)));
label_264428:
    // 0x264428: 0x19200025  blez        $t1, . + 4 + (0x25 << 2)
    ctx->pc = 0x264428u;
    {
        const bool branch_taken_0x264428 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x26442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264428u;
        // 0x26442c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264428) {
            ctx->pc = 0x2644C0u;
            goto label_2644c0;
        }
    }
    ctx->pc = 0x264430u;
    // 0x264430: 0x8cc80004  lw          $t0, 0x4($a2)
    ctx->pc = 0x264430u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x264434: 0xae1018  mult        $v0, $a1, $t6
    ctx->pc = 0x264434u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_264438:
    // 0x264438: 0x591821  addu        $v1, $v0, $t9
    ctx->pc = 0x264438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x26443c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26443cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264440: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x264440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x264444: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x264444u;
    {
        const bool branch_taken_0x264444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264444) {
            ctx->pc = 0x264448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264444u;
            // 0x264448: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2644ACu;
            goto label_2644ac;
        }
    }
    ctx->pc = 0x26444Cu;
    // 0x26444c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x26444cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x264450: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x264450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x264454: 0x4c2018  mult        $a0, $v0, $t4
    ctx->pc = 0x264454u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x264458: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x264458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x26445c: 0x6c2018  mult        $a0, $v1, $t4
    ctx->pc = 0x26445cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x264460: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x264460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x264464: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x264464u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x264468: 0x84620008  lh          $v0, 0x8($v1)
    ctx->pc = 0x264468u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x26446c: 0x5044000f  beql        $v0, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x26446Cu;
    {
        const bool branch_taken_0x26446c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x26446c) {
            ctx->pc = 0x264470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26446Cu;
            // 0x264470: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2644ACu;
            goto label_2644ac;
        }
    }
    ctx->pc = 0x264474u;
    // 0x264474: 0x104a0004  beq         $v0, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x264474u;
    {
        const bool branch_taken_0x264474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x264478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264474u;
        // 0x264478: 0x1681021  addu        $v0, $t3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264474) {
            ctx->pc = 0x264488u;
            goto label_264488;
        }
    }
    ctx->pc = 0x26447Cu;
    // 0x26447c: 0x548a000b  bnel        $a0, $t2, . + 4 + (0xB << 2)
    ctx->pc = 0x26447Cu;
    {
        const bool branch_taken_0x26447c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 10));
        if (branch_taken_0x26447c) {
            ctx->pc = 0x264480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26447Cu;
            // 0x264480: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2644ACu;
            goto label_2644ac;
        }
    }
    ctx->pc = 0x264484u;
    // 0x264484: 0x1681021  addu        $v0, $t3, $t0
    ctx->pc = 0x264484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
label_264488:
    // 0x264488: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x264488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x26448c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26448cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x264490: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x264490u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264494: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x264494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x264498: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x264498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x26449c: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x26449cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x2644a0: 0x8ccb0000  lw          $t3, 0x0($a2)
    ctx->pc = 0x2644a0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2644a4: 0x8f89a34c  lw          $t1, -0x5CB4($gp)
    ctx->pc = 0x2644a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943564)));
    // 0x2644a8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2644a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2644ac:
    // 0x2644ac: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x2644acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2644b0: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2644B0u;
    {
        const bool branch_taken_0x2644b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2644B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2644B0u;
        // 0x2644b4: 0xae1018  mult        $v0, $a1, $t6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2644b0) {
            ctx->pc = 0x264438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264438;
        }
    }
    ctx->pc = 0x2644B8u;
    // 0x2644b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2644B8u;
    {
        const bool branch_taken_0x2644b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2644BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2644B8u;
        // 0x2644bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2644b8) {
            ctx->pc = 0x2644C4u;
            goto label_2644c4;
        }
    }
    ctx->pc = 0x2644C0u;
label_2644c0:
    // 0x2644c0: 0x8cc80004  lw          $t0, 0x4($a2)
    ctx->pc = 0x2644c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2644c4:
    // 0x2644c4: 0x19200023  blez        $t1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2644C4u;
    {
        const bool branch_taken_0x2644c4 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x2644C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2644C4u;
        // 0x2644c8: 0x8cc70008  lw          $a3, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2644c4) {
            ctx->pc = 0x264554u;
            goto label_264554;
        }
    }
    ctx->pc = 0x2644CCu;
    // 0x2644cc: 0xae1018  mult        $v0, $a1, $t6
    ctx->pc = 0x2644ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2644d0:
    // 0x2644d0: 0x591821  addu        $v1, $v0, $t9
    ctx->pc = 0x2644d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x2644d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2644d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2644d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2644d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2644dc: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2644DCu;
    {
        const bool branch_taken_0x2644dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2644dc) {
            ctx->pc = 0x2644E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2644DCu;
            // 0x2644e0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264540u;
            goto label_264540;
        }
    }
    ctx->pc = 0x2644E4u;
    // 0x2644e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2644e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2644e8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2644e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2644ec: 0x4c2018  mult        $a0, $v0, $t4
    ctx->pc = 0x2644ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2644f0: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x2644f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2644f4: 0x6c2018  mult        $a0, $v1, $t4
    ctx->pc = 0x2644f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2644f8: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x2644f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2644fc: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x2644fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x264500: 0x148a000e  bne         $a0, $t2, . + 4 + (0xE << 2)
    ctx->pc = 0x264500u;
    {
        const bool branch_taken_0x264500 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 10));
        ctx->pc = 0x264504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264500u;
        // 0x264504: 0x84620008  lh          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264500) {
            ctx->pc = 0x26453Cu;
            goto label_26453c;
        }
    }
    ctx->pc = 0x264508u;
    // 0x264508: 0x5542000d  bnel        $t2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x264508u;
    {
        const bool branch_taken_0x264508 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        if (branch_taken_0x264508) {
            ctx->pc = 0x26450Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264508u;
            // 0x26450c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264540u;
            goto label_264540;
        }
    }
    ctx->pc = 0x264510u;
    // 0x264510: 0x1681021  addu        $v0, $t3, $t0
    ctx->pc = 0x264510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x264514: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x264514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x264518: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x264518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x26451c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26451cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x264520: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x264520u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264524: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x264524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x264528: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x264528u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x26452c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x26452cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x264530: 0x8ccb0000  lw          $t3, 0x0($a2)
    ctx->pc = 0x264530u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x264534: 0x8f89a34c  lw          $t1, -0x5CB4($gp)
    ctx->pc = 0x264534u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943564)));
    // 0x264538: 0x8cc80004  lw          $t0, 0x4($a2)
    ctx->pc = 0x264538u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_26453c:
    // 0x26453c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x26453cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_264540:
    // 0x264540: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x264540u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x264544: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x264544u;
    {
        const bool branch_taken_0x264544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264544u;
        // 0x264548: 0xae1018  mult        $v0, $a1, $t6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x264544) {
            ctx->pc = 0x2644D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2644d0;
        }
    }
    ctx->pc = 0x26454Cu;
    // 0x26454c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26454Cu;
    {
        const bool branch_taken_0x26454c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26454Cu;
        // 0x264550: 0x1681021  addu        $v0, $t3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26454c) {
            ctx->pc = 0x264558u;
            goto label_264558;
        }
    }
    ctx->pc = 0x264554u;
label_264554:
    // 0x264554: 0x1681021  addu        $v0, $t3, $t0
    ctx->pc = 0x264554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
label_264558:
    // 0x264558: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x264558u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26455c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x26455cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x264560: 0x14f182a  slt         $v1, $t2, $t7
    ctx->pc = 0x264560u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x264564: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x264564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x264568: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x264568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x26456c: 0x1460ff88  bnez        $v1, . + 4 + (-0x78 << 2)
    ctx->pc = 0x26456Cu;
    {
        const bool branch_taken_0x26456c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x264570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26456Cu;
        // 0x264570: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26456c) {
            ctx->pc = 0x264390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264390;
        }
    }
    ctx->pc = 0x264574u;
label_264574:
    // 0x264574: 0xc0995e4  jal         func_265790
    ctx->pc = 0x264574u;
    SET_GPR_U32(ctx, 31, 0x26457Cu);
    ctx->pc = 0x265790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265790u, 0x264574u, 0x26457Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26457Cu;
label_26457c:
    // 0x26457c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26457cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264580: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x264580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264584: 0x8099080  j           func_264200
    ctx->pc = 0x264584u;
    ctx->pc = 0x264588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264584u;
    // 0x264588: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264200u;
    padRestart_0x264200(rdram, ctx, runtime); return;
    ctx->pc = 0x26458Cu;
label_26458c:
    // 0x26458c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26458cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264590: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x264590u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264594: 0x3e00008  jr          $ra
    ctx->pc = 0x264594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264594u;
        // 0x264598: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26459Cu;
}
