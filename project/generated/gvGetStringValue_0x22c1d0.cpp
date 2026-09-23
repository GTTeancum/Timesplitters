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

// Function: gvGetStringValue
// Address: 0x22c1d0 - 0x22c304
void gvGetStringValue_0x22c1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gvGetStringValue_0x22c1d0");
#endif

    switch (ctx->pc) {
        case 0x22c208u: goto label_22c208;
        case 0x22c268u: goto label_22c268;
        case 0x22c278u: goto label_22c278;
        case 0x22c28cu: goto label_22c28c;
        case 0x22c298u: goto label_22c298;
        case 0x22c2b8u: goto label_22c2b8;
        case 0x22c2f0u: goto label_22c2f0;
        default: break;
    }

    ctx->pc = 0x22c1d0u;

    // 0x22c1d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22c1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22c1d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22c1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22c1d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22c1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22c1dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22c1dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c1e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22c1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22c1e4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x22c1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x22c1e8: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x22C1E8u;
    {
        const bool branch_taken_0x22c1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c1e8) {
            ctx->pc = 0x22C1ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C1E8u;
            // 0x22c1ec: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C234u;
            goto label_22c234;
        }
    }
    ctx->pc = 0x22C1F0u;
    // 0x22c1f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x22c1f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c1f4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x22c1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22c1f8: 0x50a0000e  beql        $a1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x22C1F8u;
    {
        const bool branch_taken_0x22c1f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c1f8) {
            ctx->pc = 0x22C1FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C1F8u;
            // 0x22c1fc: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C234u;
            goto label_22c234;
        }
    }
    ctx->pc = 0x22C200u;
    // 0x22c200: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x22c200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22c204: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22c204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22c208:
    // 0x22c208: 0x54440006  bnel        $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22C208u;
    {
        const bool branch_taken_0x22c208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x22c208) {
            ctx->pc = 0x22C20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C208u;
            // 0x22c20c: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C224u;
            goto label_22c224;
        }
    }
    ctx->pc = 0x22C210u;
    // 0x22c210: 0x28a204de  slti        $v0, $a1, 0x4DE
    ctx->pc = 0x22c210u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1246) ? 1 : 0);
    // 0x22c214: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x22C214u;
    {
        const bool branch_taken_0x22c214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C214u;
        // 0x22c218: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c214) {
            ctx->pc = 0x22C2C0u;
            goto label_22c2c0;
        }
    }
    ctx->pc = 0x22C21Cu;
    // 0x22c21c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x22C21Cu;
    {
        const bool branch_taken_0x22c21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C21Cu;
        // 0x22c220: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c21c) {
            ctx->pc = 0x22C2F0u;
            goto label_22c2f0;
        }
    }
    ctx->pc = 0x22C224u;
label_22c224:
    // 0x22c224: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x22c224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x22c228: 0x54a0fff7  bnel        $a1, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x22C228u;
    {
        const bool branch_taken_0x22c228 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c228) {
            ctx->pc = 0x22C22Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C228u;
            // 0x22c22c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c208;
        }
    }
    ctx->pc = 0x22C230u;
    // 0x22c230: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x22c230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_22c234:
    // 0x22c234: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x22c234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x22c238: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x22C238u;
    {
        const bool branch_taken_0x22c238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c238) {
            ctx->pc = 0x22C23Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C238u;
            // 0x22c23c: 0x8e260018  lw          $a2, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C2A0u;
            goto label_22c2a0;
        }
    }
    ctx->pc = 0x22C240u;
    // 0x22c240: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x22c240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c244: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22c244u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22c248: 0x3c013780  lui         $at, 0x3780
    ctx->pc = 0x22c248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14208 << 16));
    // 0x22c24c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22c24cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22c250: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x22c250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x22c254: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22C254u;
    {
        const bool branch_taken_0x22c254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C254u;
        // 0x22c258: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c254) {
            ctx->pc = 0x22C280u;
            goto label_22c280;
        }
    }
    ctx->pc = 0x22C25Cu;
    // 0x22c25c: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x22c25cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x22c260: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x22C260u;
    SET_GPR_U32(ctx, 31, 0x22C268u);
    ctx->pc = 0x22C264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C260u;
    // 0x22c264: 0x2610e7d8  addiu       $s0, $s0, -0x1828 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x22C260u, 0x22C268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C268u;
label_22c268:
    // 0x22c268: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x22c268u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x22c26c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c270: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x22C270u;
    SET_GPR_U32(ctx, 31, 0x22C278u);
    ctx->pc = 0x22C274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C270u;
    // 0x22c274: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x22C270u, 0x22C278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C278u;
label_22c278:
    // 0x22c278: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x22C278u;
    {
        const bool branch_taken_0x22c278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C278u;
        // 0x22c27c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c278) {
            ctx->pc = 0x22C2F4u;
            goto label_22c2f4;
        }
    }
    ctx->pc = 0x22C280u;
label_22c280:
    // 0x22c280: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x22c280u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x22c284: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x22C284u;
    SET_GPR_U32(ctx, 31, 0x22C28Cu);
    ctx->pc = 0x22C288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C284u;
    // 0x22c288: 0x2610e7e0  addiu       $s0, $s0, -0x1820 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x22C284u, 0x22C28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C28Cu;
label_22c28c:
    // 0x22c28c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c290: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x22C290u;
    SET_GPR_U32(ctx, 31, 0x22C298u);
    ctx->pc = 0x22C294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C290u;
    // 0x22c294: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x22C290u, 0x22C298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C298u;
label_22c298:
    // 0x22c298: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x22C298u;
    {
        const bool branch_taken_0x22c298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C298u;
        // 0x22c29c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c298) {
            ctx->pc = 0x22C2F4u;
            goto label_22c2f4;
        }
    }
    ctx->pc = 0x22C2A0u;
label_22c2a0:
    // 0x22c2a0: 0x50c00010  beql        $a2, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x22C2A0u;
    {
        const bool branch_taken_0x22c2a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c2a0) {
            ctx->pc = 0x22C2A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C2A0u;
            // 0x22c2a4: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C2E4u;
            goto label_22c2e4;
        }
    }
    ctx->pc = 0x22C2A8u;
    // 0x22c2a8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x22c2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x22c2ac: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x22c2acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22c2b0: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x22C2B0u;
    SET_GPR_U32(ctx, 31, 0x22C2B8u);
    ctx->pc = 0x22C2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C2B0u;
    // 0x22c2b4: 0x2484e7e8  addiu       $a0, $a0, -0x1818 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x22C2B0u, 0x22C2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C2B8u;
label_22c2b8:
    // 0x22c2b8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x22C2B8u;
    {
        const bool branch_taken_0x22c2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2B8u;
        // 0x22c2bc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c2b8) {
            ctx->pc = 0x22C2F4u;
            goto label_22c2f4;
        }
    }
    ctx->pc = 0x22C2C0u;
label_22c2c0:
    // 0x22c2c0: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x22c2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x22c2c4: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x22c2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x22c2c8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x22c2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x22c2cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22c2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22c2d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22c2d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x22c2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22c2d8: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x22c2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x22c2dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22C2DCu;
    {
        const bool branch_taken_0x22c2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2DCu;
        // 0x22c2e0: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c2dc) {
            ctx->pc = 0x22C2F0u;
            goto label_22c2f0;
        }
    }
    ctx->pc = 0x22C2E4u;
label_22c2e4:
    // 0x22c2e4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x22c2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22c2e8: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x22C2E8u;
    SET_GPR_U32(ctx, 31, 0x22C2F0u);
    ctx->pc = 0x22C2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C2E8u;
    // 0x22c2ec: 0x2484e7f0  addiu       $a0, $a0, -0x1810 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x22C2E8u, 0x22C2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C2F0u;
label_22c2f0:
    // 0x22c2f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22c2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22c2f4:
    // 0x22c2f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22c2f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c2f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22c2f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c2fc: 0x3e00008  jr          $ra
    ctx->pc = 0x22C2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2FCu;
        // 0x22c300: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C2FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C304u;
}
