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

// Function: drawTeamPlayers
// Address: 0x235998 - 0x235b00
void drawTeamPlayers_0x235998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("drawTeamPlayers_0x235998");
#endif

    switch (ctx->pc) {
        case 0x2359e0u: goto label_2359e0;
        case 0x235a34u: goto label_235a34;
        case 0x235a8cu: goto label_235a8c;
        case 0x235aacu: goto label_235aac;
        default: break;
    }

    ctx->pc = 0x235998u;

    // 0x235998: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x235998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x23599c: 0x8f87b730  lw          $a3, -0x48D0($gp)
    ctx->pc = 0x23599cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x2359a0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2359a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2359a4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2359a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2359a8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2359a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2359ac: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2359acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2359b0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2359b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2359b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2359b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2359b8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2359b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2359bc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2359bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2359c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2359c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2359c4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2359c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2359c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2359c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2359cc: 0x18e00042  blez        $a3, . + 4 + (0x42 << 2)
    ctx->pc = 0x2359CCu;
    {
        const bool branch_taken_0x2359cc = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2359D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2359CCu;
        // 0x2359d0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2359cc) {
            ctx->pc = 0x235AD8u;
            goto label_235ad8;
        }
    }
    ctx->pc = 0x2359D4u;
    // 0x2359d4: 0x3c150035  lui         $s5, 0x35
    ctx->pc = 0x2359d4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)53 << 16));
    // 0x2359d8: 0x8ea23838  lw          $v0, 0x3838($s5)
    ctx->pc = 0x2359d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x353838u));
    // 0x2359dc: 0x0  nop
    ctx->pc = 0x2359dcu;
    // NOP
label_2359e0:
    // 0x2359e0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2359E0u;
    {
        const bool branch_taken_0x2359e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2359E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2359E0u;
        // 0x2359e4: 0x3c0201fc  lui         $v0, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2359e0) {
            ctx->pc = 0x235A04u;
            goto label_235a04;
        }
    }
    ctx->pc = 0x2359E8u;
    // 0x2359e8: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x2359e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2359ec: 0x24422c88  addiu       $v0, $v0, 0x2C88
    ctx->pc = 0x2359ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11400));
    // 0x2359f0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2359f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2359f4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2359f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2359f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2359f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2359fc: 0x54760033  bnel        $v1, $s6, . + 4 + (0x33 << 2)
    ctx->pc = 0x2359FCu;
    {
        const bool branch_taken_0x2359fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        if (branch_taken_0x2359fc) {
            ctx->pc = 0x235A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2359FCu;
            // 0x235a00: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235ACCu;
            goto label_235acc;
        }
    }
    ctx->pc = 0x235A04u;
label_235a04:
    // 0x235a04: 0x2782b738  addiu       $v0, $gp, -0x48C8
    ctx->pc = 0x235a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948664));
    // 0x235a08: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x235a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x235a0c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x235a0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x235a10: 0x2c630004  sltiu       $v1, $v1, 0x4
    ctx->pc = 0x235a10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x235a14: 0x5460002d  bnel        $v1, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x235A14u;
    {
        const bool branch_taken_0x235a14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x235a14) {
            ctx->pc = 0x235A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235A14u;
            // 0x235a18: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235ACCu;
            goto label_235acc;
        }
    }
    ctx->pc = 0x235A1Cu;
    // 0x235a1c: 0x6800026  bltz        $s4, . + 4 + (0x26 << 2)
    ctx->pc = 0x235A1Cu;
    {
        const bool branch_taken_0x235a1c = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x235A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235A1Cu;
        // 0x235a20: 0x3c100036  lui         $s0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235a1c) {
            ctx->pc = 0x235AB8u;
            goto label_235ab8;
        }
    }
    ctx->pc = 0x235A24u;
    // 0x235a24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x235a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235a28: 0x261050e0  addiu       $s0, $s0, 0x50E0
    ctx->pc = 0x235a28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20704));
    // 0x235a2c: 0xc08828c  jal         func_220A30
    ctx->pc = 0x235A2Cu;
    SET_GPR_U32(ctx, 31, 0x235A34u);
    ctx->pc = 0x235A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235A2Cu;
    // 0x235a30: 0x24110016  addiu       $s1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220A30u, 0x235A2Cu, 0x235A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235A34u;
label_235a34:
    // 0x235a34: 0x24030b78  addiu       $v1, $zero, 0xB78
    ctx->pc = 0x235a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2936));
    // 0x235a38: 0x8f869dd8  lw          $a2, -0x6228($gp)
    ctx->pc = 0x235a38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x235a3c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x235a3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x235a40: 0x2407002c  addiu       $a3, $zero, 0x2C
    ctx->pc = 0x235a40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x235a44: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x235a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x235a48: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x235a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x235a4c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x235a4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x235a50: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x235a50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x235a54: 0x24080017  addiu       $t0, $zero, 0x17
    ctx->pc = 0x235a54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x235a58: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x235a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x235a5c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x235a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x235a60: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x235a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x235a64: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x235a64u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x235a68: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x235a68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x235a6c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x235a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x235a70: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x235a70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x235a74: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x235a74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x235a78: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x235a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x235a7c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x235a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x235a80: 0x102880a  movz        $s1, $t0, $v0
    ctx->pc = 0x235a80u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 8));
    // 0x235a84: 0xc08b952  jal         func_22E548
    ctx->pc = 0x235A84u;
    SET_GPR_U32(ctx, 31, 0x235A8Cu);
    ctx->pc = 0x235A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235A84u;
    // 0x235a88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x235A84u, 0x235A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235A8Cu;
label_235a8c:
    // 0x235a8c: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x235a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x235a90: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x235a90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x235a94: 0x3c058080  lui         $a1, 0x8080
    ctx->pc = 0x235a94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32896 << 16));
    // 0x235a98: 0x44946800  mtc1        $s4, $f13
    ctx->pc = 0x235a98u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x235a9c: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x235a9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x235aa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x235aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235aa4: 0xc08b952  jal         func_22E548
    ctx->pc = 0x235AA4u;
    SET_GPR_U32(ctx, 31, 0x235AACu);
    ctx->pc = 0x235AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235AA4u;
    // 0x235aa8: 0x34a50080  ori         $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x235AA4u, 0x235AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235AACu;
label_235aac:
    // 0x235aac: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x235aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x235ab0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x235AB0u;
    {
        const bool branch_taken_0x235ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235AB0u;
        // 0x235ab4: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235ab0) {
            ctx->pc = 0x235AC0u;
            goto label_235ac0;
        }
    }
    ctx->pc = 0x235AB8u;
label_235ab8:
    // 0x235ab8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x235ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x235abc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x235abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_235ac0:
    // 0x235ac0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x235ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x235ac4: 0x8f87b730  lw          $a3, -0x48D0($gp)
    ctx->pc = 0x235ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x235ac8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x235ac8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_235acc:
    // 0x235acc: 0x247102a  slt         $v0, $s2, $a3
    ctx->pc = 0x235accu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x235ad0: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x235AD0u;
    {
        const bool branch_taken_0x235ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235AD0u;
        // 0x235ad4: 0x8ea23838  lw          $v0, 0x3838($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 14392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235ad0) {
            ctx->pc = 0x2359E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2359e0;
        }
    }
    ctx->pc = 0x235AD8u;
label_235ad8:
    // 0x235ad8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x235ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x235adc: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x235adcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x235ae0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x235ae0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x235ae4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x235ae4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x235ae8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x235ae8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x235aec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x235aecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235af0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x235af0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235af4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235af4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235af8: 0x3e00008  jr          $ra
    ctx->pc = 0x235AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235AF8u;
        // 0x235afc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235B00u;
}
