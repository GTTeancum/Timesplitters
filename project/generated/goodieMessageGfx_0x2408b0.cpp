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

// Function: goodieMessageGfx
// Address: 0x2408b0 - 0x240c2c
void goodieMessageGfx_0x2408b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("goodieMessageGfx_0x2408b0");
#endif

    switch (ctx->pc) {
        case 0x2408f8u: goto label_2408f8;
        case 0x240904u: goto label_240904;
        case 0x240918u: goto label_240918;
        case 0x240978u: goto label_240978;
        case 0x240988u: goto label_240988;
        case 0x240994u: goto label_240994;
        case 0x2409a4u: goto label_2409a4;
        case 0x2409b0u: goto label_2409b0;
        case 0x2409b8u: goto label_2409b8;
        case 0x240a2cu: goto label_240a2c;
        case 0x240a3cu: goto label_240a3c;
        case 0x240a48u: goto label_240a48;
        case 0x240a58u: goto label_240a58;
        case 0x240a64u: goto label_240a64;
        case 0x240a6cu: goto label_240a6c;
        case 0x240ac8u: goto label_240ac8;
        case 0x240ad8u: goto label_240ad8;
        case 0x240b5cu: goto label_240b5c;
        case 0x240b90u: goto label_240b90;
        case 0x240b9cu: goto label_240b9c;
        case 0x240be0u: goto label_240be0;
        case 0x240bf4u: goto label_240bf4;
        case 0x240bfcu: goto label_240bfc;
        default: break;
    }

    ctx->pc = 0x2408b0u;

    // 0x2408b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2408b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2408b4: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2408b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2408b8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2408b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2408bc: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2408bcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2408c0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2408c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2408c4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2408c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2408c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2408c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2408cc: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2408ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2408d0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2408d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2408d4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2408d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2408d8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2408d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2408dc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2408dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2408e0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2408e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2408e4: 0x120000c5  beqz        $s0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x2408E4u;
    {
        const bool branch_taken_0x2408e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2408E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2408E4u;
        // 0x2408e8: 0x8f95b7c4  lw          $s5, -0x483C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948804)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2408e4) {
            ctx->pc = 0x240BFCu;
            goto label_240bfc;
        }
    }
    ctx->pc = 0x2408ECu;
    // 0x2408ec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2408ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2408f0: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x2408F0u;
    SET_GPR_U32(ctx, 31, 0x2408F8u);
    ctx->pc = 0x2408F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2408F0u;
    // 0x2408f4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x2408F0u, 0x2408F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2408F8u;
label_2408f8:
    // 0x2408f8: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x2408f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x2408fc: 0xc08089c  jal         func_202270
    ctx->pc = 0x2408FCu;
    SET_GPR_U32(ctx, 31, 0x240904u);
    ctx->pc = 0x240900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2408FCu;
    // 0x240900: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x2408FCu, 0x240904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240904u;
label_240904:
    // 0x240904: 0x8f84b7c4  lw          $a0, -0x483C($gp)
    ctx->pc = 0x240904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948804)));
    // 0x240908: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x240908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x24090c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x24090cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x240910: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x240910u;
    {
        const bool branch_taken_0x240910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240910u;
        // 0x240914: 0x2a05003c  slti        $a1, $s0, 0x3C (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)60) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x240910) {
            ctx->pc = 0x24093Cu;
            goto label_24093c;
        }
    }
    ctx->pc = 0x240918u;
label_240918:
    // 0x240918: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x240918u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x24091c: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x24091cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x240920: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x240920u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240924: 0x0  nop
    ctx->pc = 0x240924u;
    // NOP
    // 0x240928: 0x0  nop
    ctx->pc = 0x240928u;
    // NOP
    // 0x24092c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24092Cu;
    {
        const bool branch_taken_0x24092c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24092c) {
            ctx->pc = 0x240918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240918;
        }
    }
    ctx->pc = 0x240934u;
    // 0x240934: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x240934u;
    {
        const bool branch_taken_0x240934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240934u;
        // 0x240938: 0x241400a0  addiu       $s4, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240934) {
            ctx->pc = 0x240940u;
            goto label_240940;
        }
    }
    ctx->pc = 0x24093Cu;
label_24093c:
    // 0x24093c: 0x241400a0  addiu       $s4, $zero, 0xA0
    ctx->pc = 0x24093cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_240940:
    // 0x240940: 0x10a0002c  beqz        $a1, . + 4 + (0x2C << 2)
    ctx->pc = 0x240940u;
    {
        const bool branch_taken_0x240940 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x240944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240940u;
        // 0x240944: 0x2604ff4c  addiu       $a0, $s0, -0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240940) {
            ctx->pc = 0x2409F4u;
            goto label_2409f4;
        }
    }
    ctx->pc = 0x240948u;
    // 0x240948: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x240948u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24094c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24094cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x240950: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x240950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x240954: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x240954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x240958: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x240958u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x24095c: 0x3411ff80  ori         $s1, $zero, 0xFF80
    ctx->pc = 0x24095cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x240960: 0x118bbc  dsll32      $s1, $s1, 14
    ctx->pc = 0x240960u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 14));
    // 0x240964: 0x0  nop
    ctx->pc = 0x240964u;
    // NOP
    // 0x240968: 0x0  nop
    ctx->pc = 0x240968u;
    // NOP
    // 0x24096c: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x24096cu;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[12];
    // 0x240970: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x240970u;
    SET_GPR_U32(ctx, 31, 0x240978u);
    ctx->pc = 0x240974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240970u;
    // 0x240974: 0x26105c60  addiu       $s0, $s0, 0x5C60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x240970u, 0x240978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240978u;
label_240978:
    // 0x240978: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x240978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x24097c: 0xdc251e50  ld          $a1, 0x1E50($at)
    ctx->pc = 0x24097cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A1E50u));
    // 0x240980: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x240980u;
    SET_GPR_U32(ctx, 31, 0x240988u);
    ctx->pc = 0x240984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240980u;
    // 0x240984: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x240980u, 0x240988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240988u;
label_240988:
    // 0x240988: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x240988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24098c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x24098Cu;
    SET_GPR_U32(ctx, 31, 0x240994u);
    ctx->pc = 0x240990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24098Cu;
    // 0x240990: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x24098Cu, 0x240994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240994u;
label_240994:
    // 0x240994: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x240994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x240998: 0xdc251e58  ld          $a1, 0x1E58($at)
    ctx->pc = 0x240998u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A1E58u));
    // 0x24099c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x24099Cu;
    SET_GPR_U32(ctx, 31, 0x2409A4u);
    ctx->pc = 0x2409A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24099Cu;
    // 0x2409a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x24099Cu, 0x2409A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2409A4u;
label_2409a4:
    // 0x2409a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2409a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2409a8: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2409A8u;
    SET_GPR_U32(ctx, 31, 0x2409B0u);
    ctx->pc = 0x2409ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2409A8u;
    // 0x2409ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2409A8u, 0x2409B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2409B0u;
label_2409b0:
    // 0x2409b0: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x2409B0u;
    SET_GPR_U32(ctx, 31, 0x2409B8u);
    ctx->pc = 0x2409B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2409B0u;
    // 0x2409b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x2409B0u, 0x2409B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2409B8u;
label_2409b8:
    // 0x2409b8: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2409b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2409bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2409bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2409c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2409c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2409c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2409c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2409c8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2409c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x2409cc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2409ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2409d0: 0xc46299fc  lwc1        $f2, -0x6604($v1)
    ctx->pc = 0x2409d0u;
    { uint32_t bits = FAST_READ32(0x3299FCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2409d4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2409d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2409d8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2409d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2409dc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2409dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2409e0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2409e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2409e4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2409e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2409e8: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x2409e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
    // 0x2409ec: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2409ECu;
    {
        const bool branch_taken_0x2409ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2409F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2409ECu;
        // 0x2409f0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2409ec) {
            ctx->pc = 0x240AB8u;
            goto label_240ab8;
        }
    }
    ctx->pc = 0x2409F4u;
label_2409f4:
    // 0x2409f4: 0x2c82003c  sltiu       $v0, $a0, 0x3C
    ctx->pc = 0x2409f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x2409f8: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2409F8u;
    {
        const bool branch_taken_0x2409f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2409FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2409F8u;
        // 0x2409fc: 0x3c100037  lui         $s0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2409f8) {
            ctx->pc = 0x240AB0u;
            goto label_240ab0;
        }
    }
    ctx->pc = 0x240A00u;
    // 0x240a00: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x240a00u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x240a04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x240a04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x240a08: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x240a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x240a0c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x240a0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x240a10: 0x3411ff80  ori         $s1, $zero, 0xFF80
    ctx->pc = 0x240a10u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x240a14: 0x118bbc  dsll32      $s1, $s1, 14
    ctx->pc = 0x240a14u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 14));
    // 0x240a18: 0x0  nop
    ctx->pc = 0x240a18u;
    // NOP
    // 0x240a1c: 0x0  nop
    ctx->pc = 0x240a1cu;
    // NOP
    // 0x240a20: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x240a20u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[12];
    // 0x240a24: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x240A24u;
    SET_GPR_U32(ctx, 31, 0x240A2Cu);
    ctx->pc = 0x240A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240A24u;
    // 0x240a28: 0x26105c60  addiu       $s0, $s0, 0x5C60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x240A24u, 0x240A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240A2Cu;
label_240a2c:
    // 0x240a2c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x240a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x240a30: 0xdc251e60  ld          $a1, 0x1E60($at)
    ctx->pc = 0x240a30u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A1E60u));
    // 0x240a34: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x240A34u;
    SET_GPR_U32(ctx, 31, 0x240A3Cu);
    ctx->pc = 0x240A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240A34u;
    // 0x240a38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x240A34u, 0x240A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240A3Cu;
label_240a3c:
    // 0x240a3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x240a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240a40: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x240A40u;
    SET_GPR_U32(ctx, 31, 0x240A48u);
    ctx->pc = 0x240A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240A40u;
    // 0x240a44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x240A40u, 0x240A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240A48u;
label_240a48:
    // 0x240a48: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x240a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x240a4c: 0xdc251e68  ld          $a1, 0x1E68($at)
    ctx->pc = 0x240a4cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A1E68u));
    // 0x240a50: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x240A50u;
    SET_GPR_U32(ctx, 31, 0x240A58u);
    ctx->pc = 0x240A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240A50u;
    // 0x240a54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x240A50u, 0x240A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240A58u;
label_240a58:
    // 0x240a58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x240a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240a5c: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x240A5Cu;
    SET_GPR_U32(ctx, 31, 0x240A64u);
    ctx->pc = 0x240A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240A5Cu;
    // 0x240a60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x240A5Cu, 0x240A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240A64u;
label_240a64:
    // 0x240a64: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x240A64u;
    SET_GPR_U32(ctx, 31, 0x240A6Cu);
    ctx->pc = 0x240A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240A64u;
    // 0x240a68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x240A64u, 0x240A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240A6Cu;
label_240a6c:
    // 0x240a6c: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x240a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x240a70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x240a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x240a74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x240a74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x240a78: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x240a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x240a7c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x240a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x240a80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x240a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x240a84: 0xc46299fc  lwc1        $f2, -0x6604($v1)
    ctx->pc = 0x240a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294941180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x240a88: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x240a88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x240a8c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x240a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x240a90: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x240a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240a94: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x240a94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x240a98: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x240a98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x240a9c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x240a9cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x240aa0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x240aa0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x240aa4: 0x44160800  mfc1        $s6, $f1
    ctx->pc = 0x240aa4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
    // 0x240aa8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x240AA8u;
    {
        const bool branch_taken_0x240aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240AA8u;
        // 0x240aac: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240aa8) {
            ctx->pc = 0x240AB8u;
            goto label_240ab8;
        }
    }
    ctx->pc = 0x240AB0u;
label_240ab0:
    // 0x240ab0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x240ab0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240ab4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x240ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_240ab8:
    // 0x240ab8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x240ab8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240abc: 0x245799f0  addiu       $s7, $v0, -0x6610
    ctx->pc = 0x240abcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941168));
    // 0x240ac0: 0x2b28821  addu        $s1, $s5, $s2
    ctx->pc = 0x240ac0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x240ac4: 0x0  nop
    ctx->pc = 0x240ac4u;
    // NOP
label_240ac8:
    // 0x240ac8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x240ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x240acc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x240accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240ad0: 0xc0b9722  jal         func_2E5C88
    ctx->pc = 0x240AD0u;
    SET_GPR_U32(ctx, 31, 0x240AD8u);
    ctx->pc = 0x240AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240AD0u;
    // 0x240ad4: 0x3c0802d  daddu       $s0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5C88u, 0x240AD0u, 0x240AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240AD8u;
label_240ad8:
    // 0x240ad8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x240ad8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240adc: 0x56600001  bnel        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x240ADCu;
    {
        const bool branch_taken_0x240adc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x240adc) {
            ctx->pc = 0x240AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240ADCu;
            // 0x240ae0: 0xa2600000  sb          $zero, 0x0($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240AE4u;
            goto label_240ae4;
        }
    }
    ctx->pc = 0x240AE4u;
label_240ae4:
    // 0x240ae4: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x240ae4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x240ae8: 0x2402007e  addiu       $v0, $zero, 0x7E
    ctx->pc = 0x240ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x240aec: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x240AECu;
    {
        const bool branch_taken_0x240aec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x240AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240AECu;
        // 0x240af0: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240aec) {
            ctx->pc = 0x240B04u;
            goto label_240b04;
        }
    }
    ctx->pc = 0x240AF4u;
    // 0x240af4: 0x3c104078  lui         $s0, 0x4078
    ctx->pc = 0x240af4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16504 << 16));
    // 0x240af8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x240af8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x240afc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x240AFCu;
    {
        const bool branch_taken_0x240afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240AFCu;
        // 0x240b00: 0x36107880  ori         $s0, $s0, 0x7880 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)30848);
        ctx->in_delay_slot = false;
        if (branch_taken_0x240afc) {
            ctx->pc = 0x240B44u;
            goto label_240b44;
        }
    }
    ctx->pc = 0x240B04u;
label_240b04:
    // 0x240b04: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x240B04u;
    {
        const bool branch_taken_0x240b04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x240b04) {
            ctx->pc = 0x240B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240B04u;
            // 0x240b08: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240B4Cu;
            goto label_240b4c;
        }
    }
    ctx->pc = 0x240B0Cu;
    // 0x240b0c: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x240b0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x240b10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x240b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x240b14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x240B14u;
    {
        const bool branch_taken_0x240b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B14u;
        // 0x240b18: 0x8f829a9c  lw          $v0, -0x6564($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b14) {
            ctx->pc = 0x240B2Cu;
            goto label_240b2c;
        }
    }
    ctx->pc = 0x240B1Cu;
    // 0x240b1c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x240b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x240b20: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x240b20u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x240b24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x240B24u;
    {
        const bool branch_taken_0x240b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B24u;
        // 0x240b28: 0x31843  sra         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b24) {
            ctx->pc = 0x240B34u;
            goto label_240b34;
        }
    }
    ctx->pc = 0x240B2Cu;
label_240b2c:
    // 0x240b2c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x240b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x240b30: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x240b30u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_240b34:
    // 0x240b34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x240b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x240b38: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x240b38u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x240b3c: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x240b3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x240b40: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x240b40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_240b44:
    // 0x240b44: 0x2b28821  addu        $s1, $s5, $s2
    ctx->pc = 0x240b44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x240b48: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x240b48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_240b4c:
    // 0x240b4c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x240B4Cu;
    {
        const bool branch_taken_0x240b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B4Cu;
        // 0x240b50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b4c) {
            ctx->pc = 0x240B94u;
            goto label_240b94;
        }
    }
    ctx->pc = 0x240B54u;
    // 0x240b54: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x240B54u;
    SET_GPR_U32(ctx, 31, 0x240B5Cu);
    ctx->pc = 0x240B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240B54u;
    // 0x240b58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x240B54u, 0x240B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240B5Cu;
label_240b5c:
    // 0x240b5c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x240b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x240b60: 0x8ee60008  lw          $a2, 0x8($s7)
    ctx->pc = 0x240b60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x240b64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x240b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x240b68: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x240b68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240b6c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x240b6cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x240b70: 0xafb40004  sw          $s4, 0x4($sp)
    ctx->pc = 0x240b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 20));
    // 0x240b74: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x240b74u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x240b78: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x240b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240b7c: 0xd63021  addu        $a2, $a2, $s6
    ctx->pc = 0x240b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
    // 0x240b80: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x240b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x240b84: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x240b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x240b88: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x240B88u;
    SET_GPR_U32(ctx, 31, 0x240B90u);
    ctx->pc = 0x240B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240B88u;
    // 0x240b8c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x240B88u, 0x240B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240B90u;
label_240b90:
    // 0x240b90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x240b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_240b94:
    // 0x240b94: 0xc0b981c  jal         func_2E6070
    ctx->pc = 0x240B94u;
    SET_GPR_U32(ctx, 31, 0x240B9Cu);
    ctx->pc = 0x240B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240B94u;
    // 0x240b98: 0x26500001  addiu       $s0, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6070u, 0x240B94u, 0x240B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240B9Cu;
label_240b9c:
    // 0x240b9c: 0x93839ab5  lbu         $v1, -0x654B($gp)
    ctx->pc = 0x240b9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x240ba0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x240ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x240ba4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x240BA4u;
    {
        const bool branch_taken_0x240ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x240BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240BA4u;
        // 0x240ba8: 0x2029021  addu        $s2, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ba4) {
            ctx->pc = 0x240BC0u;
            goto label_240bc0;
        }
    }
    ctx->pc = 0x240BACu;
    // 0x240bac: 0x8f839a9c  lw          $v1, -0x6564($gp)
    ctx->pc = 0x240bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x240bb0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x240bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x240bb4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x240bb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x240bb8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x240BB8u;
    {
        const bool branch_taken_0x240bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240BB8u;
        // 0x240bbc: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240bb8) {
            ctx->pc = 0x240BCCu;
            goto label_240bcc;
        }
    }
    ctx->pc = 0x240BC0u;
label_240bc0:
    // 0x240bc0: 0x8f829a9c  lw          $v0, -0x6564($gp)
    ctx->pc = 0x240bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x240bc4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x240bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x240bc8: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x240bc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_240bcc:
    // 0x240bcc: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x240BCCu;
    {
        const bool branch_taken_0x240bcc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x240BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240BCCu;
        // 0x240bd0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240bcc) {
            ctx->pc = 0x240BD8u;
            goto label_240bd8;
        }
    }
    ctx->pc = 0x240BD4u;
    // 0x240bd4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x240bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_240bd8:
    // 0x240bd8: 0xc0b981c  jal         func_2E6070
    ctx->pc = 0x240BD8u;
    SET_GPR_U32(ctx, 31, 0x240BE0u);
    ctx->pc = 0x240BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240BD8u;
    // 0x240bdc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6070u, 0x240BD8u, 0x240BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240BE0u;
label_240be0:
    // 0x240be0: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x240be0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x240be4: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x240BE4u;
    {
        const bool branch_taken_0x240be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240BE4u;
        // 0x240be8: 0x2b28821  addu        $s1, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240be4) {
            ctx->pc = 0x240AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240ac8;
        }
    }
    ctx->pc = 0x240BECu;
    // 0x240bec: 0xc08089c  jal         func_202270
    ctx->pc = 0x240BECu;
    SET_GPR_U32(ctx, 31, 0x240BF4u);
    ctx->pc = 0x240BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240BECu;
    // 0x240bf0: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x240BECu, 0x240BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240BF4u;
label_240bf4:
    // 0x240bf4: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x240BF4u;
    SET_GPR_U32(ctx, 31, 0x240BFCu);
    ctx->pc = 0x240BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240BF4u;
    // 0x240bf8: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x240BF4u, 0x240BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240BFCu;
label_240bfc:
    // 0x240bfc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x240bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x240c00: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x240c00u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x240c04: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x240c04u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x240c08: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x240c08u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x240c0c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x240c0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x240c10: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x240c10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x240c14: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x240c14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x240c18: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x240c18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x240c1c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x240c1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x240c20: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x240c20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240c24: 0x3e00008  jr          $ra
    ctx->pc = 0x240C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C24u;
        // 0x240c28: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240C2Cu;
}
