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

// Function: propEditSave
// Address: 0x269078 - 0x2692ec
void propEditSave_0x269078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propEditSave_0x269078");
#endif

    switch (ctx->pc) {
        case 0x2690c0u: goto label_2690c0;
        case 0x2690ccu: goto label_2690cc;
        case 0x2690f8u: goto label_2690f8;
        case 0x26914cu: goto label_26914c;
        case 0x269158u: goto label_269158;
        case 0x269168u: goto label_269168;
        case 0x269170u: goto label_269170;
        case 0x269188u: goto label_269188;
        case 0x269190u: goto label_269190;
        case 0x2691a0u: goto label_2691a0;
        case 0x2691a8u: goto label_2691a8;
        case 0x2691b8u: goto label_2691b8;
        case 0x2691ecu: goto label_2691ec;
        case 0x2691f8u: goto label_2691f8;
        case 0x269204u: goto label_269204;
        case 0x269210u: goto label_269210;
        case 0x269238u: goto label_269238;
        case 0x269240u: goto label_269240;
        case 0x26926cu: goto label_26926c;
        case 0x269274u: goto label_269274;
        case 0x269284u: goto label_269284;
        case 0x269294u: goto label_269294;
        case 0x2692acu: goto label_2692ac;
        case 0x2692b4u: goto label_2692b4;
        case 0x2692bcu: goto label_2692bc;
        default: break;
    }

    ctx->pc = 0x269078u;

    // 0x269078: 0x27bdfb20  addiu       $sp, $sp, -0x4E0
    ctx->pc = 0x269078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966048));
    // 0x26907c: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x26907cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x269080: 0x8f869f70  lw          $a2, -0x6090($gp)
    ctx->pc = 0x269080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x269084: 0x24a57b00  addiu       $a1, $a1, 0x7B00
    ctx->pc = 0x269084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31488));
    // 0x269088: 0xffb704b0  sd          $s7, 0x4B0($sp)
    ctx->pc = 0x269088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1200), GPR_U64(ctx, 23));
    // 0x26908c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26908cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269090: 0xffb604a0  sd          $s6, 0x4A0($sp)
    ctx->pc = 0x269090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1184), GPR_U64(ctx, 22));
    // 0x269094: 0xffb00440  sd          $s0, 0x440($sp)
    ctx->pc = 0x269094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 16));
    // 0x269098: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x269098u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26909c: 0xffbf04d0  sd          $ra, 0x4D0($sp)
    ctx->pc = 0x26909cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1232), GPR_U64(ctx, 31));
    // 0x2690a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2690a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2690a4: 0xffbe04c0  sd          $fp, 0x4C0($sp)
    ctx->pc = 0x2690a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1216), GPR_U64(ctx, 30));
    // 0x2690a8: 0xffb50490  sd          $s5, 0x490($sp)
    ctx->pc = 0x2690a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1168), GPR_U64(ctx, 21));
    // 0x2690ac: 0xffb40480  sd          $s4, 0x480($sp)
    ctx->pc = 0x2690acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 20));
    // 0x2690b0: 0xffb30470  sd          $s3, 0x470($sp)
    ctx->pc = 0x2690b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 19));
    // 0x2690b4: 0xffb20460  sd          $s2, 0x460($sp)
    ctx->pc = 0x2690b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 18));
    // 0x2690b8: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x2690B8u;
    SET_GPR_U32(ctx, 31, 0x2690C0u);
    ctx->pc = 0x2690BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2690B8u;
    // 0x2690bc: 0xffb10450  sd          $s1, 0x450($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x2690B8u, 0x2690C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2690C0u;
label_2690c0:
    // 0x2690c0: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x2690c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
    // 0x2690c4: 0xc0b9294  jal         func_2E4A50
    ctx->pc = 0x2690C4u;
    SET_GPR_U32(ctx, 31, 0x2690CCu);
    ctx->pc = 0x2690C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2690C4u;
    // 0x2690c8: 0x34844240  ori         $a0, $a0, 0x4240 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16960);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4A50u, 0x2690C4u, 0x2690CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2690CCu;
label_2690cc:
    // 0x2690cc: 0x8f87b15c  lw          $a3, -0x4EA4($gp)
    ctx->pc = 0x2690ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
    // 0x2690d0: 0x18e00015  blez        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x2690D0u;
    {
        const bool branch_taken_0x2690d0 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2690D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2690D0u;
        // 0x2690d4: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2690d0) {
            ctx->pc = 0x269128u;
            goto label_269128;
        }
    }
    ctx->pc = 0x2690D8u;
    // 0x2690d8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2690d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2690dc: 0x8f86b07c  lw          $a2, -0x4F84($gp)
    ctx->pc = 0x2690dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946940)));
    // 0x2690e0: 0xafa20430  sw          $v0, 0x430($sp)
    ctx->pc = 0x2690e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1072), GPR_U32(ctx, 2));
    // 0x2690e4: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x2690e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x2690e8: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x2690e8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x2690ec: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x2690ecu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
    // 0x2690f0: 0x3c13003a  lui         $s3, 0x3A
    ctx->pc = 0x2690f0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
    // 0x2690f4: 0x0  nop
    ctx->pc = 0x2690f4u;
    // NOP
label_2690f8:
    // 0x2690f8: 0x24030250  addiu       $v1, $zero, 0x250
    ctx->pc = 0x2690f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    // 0x2690fc: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x2690fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x269100: 0x2c31018  mult        $v0, $s6, $v1
    ctx->pc = 0x269100u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x269104: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x269104u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x269108: 0x2c7202a  slt         $a0, $s6, $a3
    ctx->pc = 0x269108u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x26910c: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x26910cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x269110: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x269110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x269114: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x269114u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x269118: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x269118u;
    {
        const bool branch_taken_0x269118 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x26911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269118u;
        // 0x26911c: 0xa2800b  movn        $s0, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269118) {
            ctx->pc = 0x2690F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2690f8;
        }
    }
    ctx->pc = 0x269120u;
    // 0x269120: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x269120u;
    {
        const bool branch_taken_0x269120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269120u;
        // 0x269124: 0x25057b28  addiu       $a1, $t0, 0x7B28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 31528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269120) {
            ctx->pc = 0x269144u;
            goto label_269144;
        }
    }
    ctx->pc = 0x269128u;
label_269128:
    // 0x269128: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x269128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26912c: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x26912cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x269130: 0xafa20430  sw          $v0, 0x430($sp)
    ctx->pc = 0x269130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1072), GPR_U32(ctx, 2));
    // 0x269134: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x269134u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x269138: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x269138u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
    // 0x26913c: 0x3c13003a  lui         $s3, 0x3A
    ctx->pc = 0x26913cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
    // 0x269140: 0x25057b28  addiu       $a1, $t0, 0x7B28
    ctx->pc = 0x269140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 31528));
label_269144:
    // 0x269144: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x269144u;
    SET_GPR_U32(ctx, 31, 0x26914Cu);
    ctx->pc = 0x269148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269144u;
    // 0x269148: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x269144u, 0x26914Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26914Cu;
label_26914c:
    // 0x26914c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x26914cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269150: 0xc0b981c  jal         func_2E6070
    ctx->pc = 0x269150u;
    SET_GPR_U32(ctx, 31, 0x269158u);
    ctx->pc = 0x269154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269150u;
    // 0x269154: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6070u, 0x269150u, 0x269158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269158u;
label_269158:
    // 0x269158: 0x2e2a821  addu        $s5, $s7, $v0
    ctx->pc = 0x269158u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x26915c: 0x26257b68  addiu       $a1, $s1, 0x7B68
    ctx->pc = 0x26915cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 31592));
    // 0x269160: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x269160u;
    SET_GPR_U32(ctx, 31, 0x269168u);
    ctx->pc = 0x269164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269160u;
    // 0x269164: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x269160u, 0x269168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269168u;
label_269168:
    // 0x269168: 0xc0b981c  jal         func_2E6070
    ctx->pc = 0x269168u;
    SET_GPR_U32(ctx, 31, 0x269170u);
    ctx->pc = 0x26916Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269168u;
    // 0x26916c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6070u, 0x269168u, 0x269170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269170u;
label_269170:
    // 0x269170: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x269170u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x269174: 0x26457b90  addiu       $a1, $s2, 0x7B90
    ctx->pc = 0x269174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 31632));
    // 0x269178: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x269178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26917c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x26917cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269180: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x269180u;
    SET_GPR_U32(ctx, 31, 0x269188u);
    ctx->pc = 0x269184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269180u;
    // 0x269184: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x269180u, 0x269188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269188u;
label_269188:
    // 0x269188: 0xc0b981c  jal         func_2E6070
    ctx->pc = 0x269188u;
    SET_GPR_U32(ctx, 31, 0x269190u);
    ctx->pc = 0x26918Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269188u;
    // 0x26918c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6070u, 0x269188u, 0x269190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269190u;
label_269190:
    // 0x269190: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x269190u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x269194: 0x26657bc0  addiu       $a1, $s3, 0x7BC0
    ctx->pc = 0x269194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 31680));
    // 0x269198: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x269198u;
    SET_GPR_U32(ctx, 31, 0x2691A0u);
    ctx->pc = 0x26919Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269198u;
    // 0x26919c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x269198u, 0x2691A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2691A0u;
label_2691a0:
    // 0x2691a0: 0xc0b981c  jal         func_2E6070
    ctx->pc = 0x2691A0u;
    SET_GPR_U32(ctx, 31, 0x2691A8u);
    ctx->pc = 0x2691A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2691A0u;
    // 0x2691a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6070u, 0x2691A0u, 0x2691A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2691A8u;
label_2691a8:
    // 0x2691a8: 0x8f84b15c  lw          $a0, -0x4EA4($gp)
    ctx->pc = 0x2691a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
    // 0x2691ac: 0x1880002a  blez        $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2691ACu;
    {
        const bool branch_taken_0x2691ac = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2691B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2691ACu;
        // 0x2691b0: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2691ac) {
            ctx->pc = 0x269258u;
            goto label_269258;
        }
    }
    ctx->pc = 0x2691B4u;
    // 0x2691b4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2691b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2691b8:
    // 0x2691b8: 0x8f82b07c  lw          $v0, -0x4F84($gp)
    ctx->pc = 0x2691b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946940)));
    // 0x2691bc: 0x5ea021  addu        $s4, $v0, $fp
    ctx->pc = 0x2691bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2691c0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2691c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2691c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2691c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2691c8: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2691C8u;
    {
        const bool branch_taken_0x2691c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2691CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2691C8u;
        // 0x2691cc: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2691c8) {
            ctx->pc = 0x269248u;
            goto label_269248;
        }
    }
    ctx->pc = 0x2691D0u;
    // 0x2691d0: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x2691d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2691d4: 0x244290c8  addiu       $v0, $v0, -0x6F38
    ctx->pc = 0x2691d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938824));
    // 0x2691d8: 0xc68c0030  lwc1        $f12, 0x30($s4)
    ctx->pc = 0x2691d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2691dc: 0x400013  mtlo        $v0
    ctx->pc = 0x2691dcu;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x2691e0: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2691e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2691e4: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2691E4u;
    SET_GPR_U32(ctx, 31, 0x2691ECu);
    ctx->pc = 0x2691E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2691E4u;
    // 0x2691e8: 0x72429000  madd        $s2, $s2, $v0 (Delay Slot)
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 18, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2691E4u, 0x2691ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2691ECu;
label_2691ec:
    // 0x2691ec: 0xc68c0034  lwc1        $f12, 0x34($s4)
    ctx->pc = 0x2691ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2691f0: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2691F0u;
    SET_GPR_U32(ctx, 31, 0x2691F8u);
    ctx->pc = 0x2691F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2691F0u;
    // 0x2691f4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2691F0u, 0x2691F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2691F8u;
label_2691f8:
    // 0x2691f8: 0xc68c0038  lwc1        $f12, 0x38($s4)
    ctx->pc = 0x2691f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2691fc: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2691FCu;
    SET_GPR_U32(ctx, 31, 0x269204u);
    ctx->pc = 0x269200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2691FCu;
    // 0x269200: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2691FCu, 0x269204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269204u;
label_269204:
    // 0x269204: 0xc68c004c  lwc1        $f12, 0x4C($s4)
    ctx->pc = 0x269204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x269208: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x269208u;
    SET_GPR_U32(ctx, 31, 0x269210u);
    ctx->pc = 0x26920Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269208u;
    // 0x26920c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x269208u, 0x269210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269210u;
label_269210:
    // 0x269210: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x269210u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269214: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x269214u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x269218: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x269218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x26921c: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x26921cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x269220: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x269220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269224: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x269224u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269228: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x269228u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26922c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x26922cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269230: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x269230u;
    SET_GPR_U32(ctx, 31, 0x269238u);
    ctx->pc = 0x269234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269230u;
    // 0x269234: 0x24457be0  addiu       $a1, $v0, 0x7BE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 31712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x269230u, 0x269238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269238u;
label_269238:
    // 0x269238: 0xc0b981c  jal         func_2E6070
    ctx->pc = 0x269238u;
    SET_GPR_U32(ctx, 31, 0x269240u);
    ctx->pc = 0x26923Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269238u;
    // 0x26923c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6070u, 0x269238u, 0x269240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269240u;
label_269240:
    // 0x269240: 0x8f84b15c  lw          $a0, -0x4EA4($gp)
    ctx->pc = 0x269240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
    // 0x269244: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x269244u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_269248:
    // 0x269248: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x269248u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x26924c: 0x2c4102a  slt         $v0, $s6, $a0
    ctx->pc = 0x26924cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x269250: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x269250u;
    {
        const bool branch_taken_0x269250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269250u;
        // 0x269254: 0x27de0250  addiu       $fp, $fp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269250) {
            ctx->pc = 0x2691B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2691b8;
        }
    }
    ctx->pc = 0x269258u;
label_269258:
    // 0x269258: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x269258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x26925c: 0x8fa40430  lw          $a0, 0x430($sp)
    ctx->pc = 0x26925cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x269260: 0x2445f918  addiu       $a1, $v0, -0x6E8
    ctx->pc = 0x269260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965528));
    // 0x269264: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x269264u;
    SET_GPR_U32(ctx, 31, 0x26926Cu);
    ctx->pc = 0x269268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269264u;
    // 0x269268: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x269264u, 0x26926Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26926Cu;
label_26926c:
    // 0x26926c: 0xc0868ce  jal         func_21A338
    ctx->pc = 0x26926Cu;
    SET_GPR_U32(ctx, 31, 0x269274u);
    ctx->pc = 0x269270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26926Cu;
    // 0x269270: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A338u, 0x26926Cu, 0x269274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269274u;
label_269274:
    // 0x269274: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x269274u;
    {
        const bool branch_taken_0x269274 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x269278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269274u;
        // 0x269278: 0x8fa50430  lw          $a1, 0x430($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269274) {
            ctx->pc = 0x26929Cu;
            goto label_26929c;
        }
    }
    ctx->pc = 0x26927Cu;
    // 0x26927c: 0xc08697e  jal         func_21A5F8
    ctx->pc = 0x26927Cu;
    SET_GPR_U32(ctx, 31, 0x269284u);
    ctx->pc = 0x269280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26927Cu;
    // 0x269280: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5F8u, 0x26927Cu, 0x269284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269284u;
label_269284:
    // 0x269284: 0x2b73023  subu        $a2, $s5, $s7
    ctx->pc = 0x269284u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
    // 0x269288: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x269288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26928c: 0xc086966  jal         func_21A598
    ctx->pc = 0x26928Cu;
    SET_GPR_U32(ctx, 31, 0x269294u);
    ctx->pc = 0x269290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26928Cu;
    // 0x269290: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A598u, 0x26928Cu, 0x269294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269294u;
label_269294:
    // 0x269294: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x269294u;
    {
        const bool branch_taken_0x269294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269294) {
            ctx->pc = 0x2692ACu;
            goto label_2692ac;
        }
    }
    ctx->pc = 0x26929Cu;
label_26929c:
    // 0x26929c: 0x2b73023  subu        $a2, $s5, $s7
    ctx->pc = 0x26929cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
    // 0x2692a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2692a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2692a4: 0xc086966  jal         func_21A598
    ctx->pc = 0x2692A4u;
    SET_GPR_U32(ctx, 31, 0x2692ACu);
    ctx->pc = 0x2692A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2692A4u;
    // 0x2692a8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A598u, 0x2692A4u, 0x2692ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2692ACu;
label_2692ac:
    // 0x2692ac: 0xc0b929e  jal         func_2E4A78
    ctx->pc = 0x2692ACu;
    SET_GPR_U32(ctx, 31, 0x2692B4u);
    ctx->pc = 0x2692B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2692ACu;
    // 0x2692b0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4A78u, 0x2692ACu, 0x2692B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2692B4u;
label_2692b4:
    // 0x2692b4: 0xc09a3dc  jal         func_268F70
    ctx->pc = 0x2692B4u;
    SET_GPR_U32(ctx, 31, 0x2692BCu);
    ctx->pc = 0x268F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268F70u, 0x2692B4u, 0x2692BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2692BCu;
label_2692bc:
    // 0x2692bc: 0xdfbf04d0  ld          $ra, 0x4D0($sp)
    ctx->pc = 0x2692bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1232)));
    // 0x2692c0: 0xdfbe04c0  ld          $fp, 0x4C0($sp)
    ctx->pc = 0x2692c0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x2692c4: 0xdfb704b0  ld          $s7, 0x4B0($sp)
    ctx->pc = 0x2692c4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x2692c8: 0xdfb604a0  ld          $s6, 0x4A0($sp)
    ctx->pc = 0x2692c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x2692cc: 0xdfb50490  ld          $s5, 0x490($sp)
    ctx->pc = 0x2692ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x2692d0: 0xdfb40480  ld          $s4, 0x480($sp)
    ctx->pc = 0x2692d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x2692d4: 0xdfb30470  ld          $s3, 0x470($sp)
    ctx->pc = 0x2692d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x2692d8: 0xdfb20460  ld          $s2, 0x460($sp)
    ctx->pc = 0x2692d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x2692dc: 0xdfb10450  ld          $s1, 0x450($sp)
    ctx->pc = 0x2692dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x2692e0: 0xdfb00440  ld          $s0, 0x440($sp)
    ctx->pc = 0x2692e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x2692e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2692E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2692E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2692E4u;
        // 0x2692e8: 0x27bd04e0  addiu       $sp, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2692E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2692ECu;
}
