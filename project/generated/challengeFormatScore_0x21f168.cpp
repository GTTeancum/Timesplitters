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

// Function: challengeFormatScore
// Address: 0x21f168 - 0x21f2ac
void challengeFormatScore_0x21f168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("challengeFormatScore_0x21f168");
#endif

    switch (ctx->pc) {
        case 0x21f180u: goto label_21f180;
        case 0x21f1ccu: goto label_21f1cc;
        case 0x21f200u: goto label_21f200;
        case 0x21f24cu: goto label_21f24c;
        case 0x21f25cu: goto label_21f25c;
        case 0x21f288u: goto label_21f288;
        case 0x21f298u: goto label_21f298;
        default: break;
    }

    ctx->pc = 0x21f168u;

    // 0x21f168: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21f168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21f16c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21f16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21f170: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21f170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21f174: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21f174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f178: 0xc087cac  jal         func_21F2B0
    ctx->pc = 0x21F178u;
    SET_GPR_U32(ctx, 31, 0x21F180u);
    ctx->pc = 0x21F17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F178u;
    // 0x21f17c: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F2B0u, 0x21F178u, 0x21F180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F180u;
label_21f180:
    // 0x21f180: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x21f180u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x21f184: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21f184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21f188: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x21F188u;
    {
        const bool branch_taken_0x21f188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21F18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F188u;
        // 0x21f18c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f188) {
            ctx->pc = 0x21F1D4u;
            goto label_21f1d4;
        }
    }
    ctx->pc = 0x21F190u;
    // 0x21f190: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F190u;
    {
        const bool branch_taken_0x21f190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F190u;
        // 0x21f194: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f190) {
            ctx->pc = 0x21F1A8u;
            goto label_21f1a8;
        }
    }
    ctx->pc = 0x21F198u;
    // 0x21f198: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21F198u;
    {
        const bool branch_taken_0x21f198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21F19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F198u;
        // 0x21f19c: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f198) {
            ctx->pc = 0x21F1C4u;
            goto label_21f1c4;
        }
    }
    ctx->pc = 0x21F1A0u;
    // 0x21f1a0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x21F1A0u;
    {
        const bool branch_taken_0x21f1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1A0u;
        // 0x21f1a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f1a0) {
            ctx->pc = 0x21F290u;
            goto label_21f290;
        }
    }
    ctx->pc = 0x21F1A8u;
label_21f1a8:
    // 0x21f1a8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x21f1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21f1ac: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x21F1ACu;
    {
        const bool branch_taken_0x21f1ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1ACu;
        // 0x21f1b0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f1ac) {
            ctx->pc = 0x21F208u;
            goto label_21f208;
        }
    }
    ctx->pc = 0x21F1B4u;
    // 0x21f1b4: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x21F1B4u;
    {
        const bool branch_taken_0x21f1b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21F1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1B4u;
        // 0x21f1b8: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f1b4) {
            ctx->pc = 0x21F264u;
            goto label_21f264;
        }
    }
    ctx->pc = 0x21F1BCu;
    // 0x21f1bc: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x21F1BCu;
    {
        const bool branch_taken_0x21f1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1BCu;
        // 0x21f1c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f1bc) {
            ctx->pc = 0x21F290u;
            goto label_21f290;
        }
    }
    ctx->pc = 0x21F1C4u;
label_21f1c4:
    // 0x21f1c4: 0xc0872ac  jal         func_21CAB0
    ctx->pc = 0x21F1C4u;
    SET_GPR_U32(ctx, 31, 0x21F1CCu);
    ctx->pc = 0x21F1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F1C4u;
    // 0x21f1c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CAB0u, 0x21F1C4u, 0x21F1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F1CCu;
label_21f1cc:
    // 0x21f1cc: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x21F1CCu;
    {
        const bool branch_taken_0x21f1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1CCu;
        // 0x21f1d0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f1cc) {
            ctx->pc = 0x21F29Cu;
            goto label_21f29c;
        }
    }
    ctx->pc = 0x21F1D4u;
label_21f1d4:
    // 0x21f1d4: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x21f1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x21f1d8: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x21f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x21f1dc: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x21f1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x21f1e0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x21f1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x21f1e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21f1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21f1e8: 0x2484e5a8  addiu       $a0, $a0, -0x1A58
    ctx->pc = 0x21f1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960552));
    // 0x21f1ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21f1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21f1f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21f1f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f1f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21f1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21f1f8: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x21F1F8u;
    SET_GPR_U32(ctx, 31, 0x21F200u);
    ctx->pc = 0x21F1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F1F8u;
    // 0x21f1fc: 0x8c460a4c  lw          $a2, 0xA4C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2636)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x21F1F8u, 0x21F200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F200u;
label_21f200:
    // 0x21f200: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x21F200u;
    {
        const bool branch_taken_0x21f200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F200u;
        // 0x21f204: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f200) {
            ctx->pc = 0x21F29Cu;
            goto label_21f29c;
        }
    }
    ctx->pc = 0x21F208u;
label_21f208:
    // 0x21f208: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x21f208u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21f20c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x21f20cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x21f210: 0x3c013780  lui         $at, 0x3780
    ctx->pc = 0x21f210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14208 << 16));
    // 0x21f214: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21f214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f218: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x21f218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x21f21c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21f21cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21f220: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x21f220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x21f224: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x21f224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x21f228: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x21f228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x21f22c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x21f22cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x21f230: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x21f230u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x21f234: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21f234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21f238: 0x26100928  addiu       $s0, $s0, 0x928
    ctx->pc = 0x21f238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2344));
    // 0x21f23c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21f23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21f240: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x21f240u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x21f244: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x21F244u;
    SET_GPR_U32(ctx, 31, 0x21F24Cu);
    ctx->pc = 0x21F248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F244u;
    // 0x21f248: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x21F244u, 0x21F24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F24Cu;
label_21f24c:
    // 0x21f24c: 0x8e250a50  lw          $a1, 0xA50($s1)
    ctx->pc = 0x21f24cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2640)));
    // 0x21f250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f254: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x21F254u;
    SET_GPR_U32(ctx, 31, 0x21F25Cu);
    ctx->pc = 0x21F258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F254u;
    // 0x21f258: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x21F254u, 0x21F25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F25Cu;
label_21f25c:
    // 0x21f25c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x21F25Cu;
    {
        const bool branch_taken_0x21f25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F25Cu;
        // 0x21f260: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f25c) {
            ctx->pc = 0x21F29Cu;
            goto label_21f29c;
        }
    }
    ctx->pc = 0x21F264u;
label_21f264:
    // 0x21f264: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x21f264u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f268: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21f268u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x21f26c: 0x3c013780  lui         $at, 0x3780
    ctx->pc = 0x21f26cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14208 << 16));
    // 0x21f270: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21f270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21f274: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x21f274u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21f278: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x21f278u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x21f27c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x21f27cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x21f280: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x21F280u;
    SET_GPR_U32(ctx, 31, 0x21F288u);
    ctx->pc = 0x21F284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F280u;
    // 0x21f284: 0x2484e5b0  addiu       $a0, $a0, -0x1A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x21F280u, 0x21F288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F288u;
label_21f288:
    // 0x21f288: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21F288u;
    {
        const bool branch_taken_0x21f288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F288u;
        // 0x21f28c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f288) {
            ctx->pc = 0x21F29Cu;
            goto label_21f29c;
        }
    }
    ctx->pc = 0x21F290u;
label_21f290:
    // 0x21f290: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x21F290u;
    SET_GPR_U32(ctx, 31, 0x21F298u);
    ctx->pc = 0x21F294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F290u;
    // 0x21f294: 0x2484e5b0  addiu       $a0, $a0, -0x1A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x21F290u, 0x21F298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F298u;
label_21f298:
    // 0x21f298: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21f298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_21f29c:
    // 0x21f29c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21f29cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f2a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f2a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x21F2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F2A4u;
        // 0x21f2a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F2A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F2ACu;
}
