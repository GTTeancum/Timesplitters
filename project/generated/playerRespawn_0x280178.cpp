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

// Function: playerRespawn
// Address: 0x280178 - 0x2803c4
void playerRespawn_0x280178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("playerRespawn_0x280178");
#endif

    switch (ctx->pc) {
        case 0x2801d8u: goto label_2801d8;
        case 0x280224u: goto label_280224;
        case 0x280230u: goto label_280230;
        case 0x280240u: goto label_280240;
        case 0x280250u: goto label_280250;
        case 0x280258u: goto label_280258;
        case 0x280260u: goto label_280260;
        case 0x280268u: goto label_280268;
        case 0x280298u: goto label_280298;
        case 0x280304u: goto label_280304;
        case 0x28031cu: goto label_28031c;
        default: break;
    }

    ctx->pc = 0x280178u;

    // 0x280178: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x280178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28017c: 0x8f86b234  lw          $a2, -0x4DCC($gp)
    ctx->pc = 0x28017cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x280180: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x280180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x280184: 0x24070160  addiu       $a3, $zero, 0x160
    ctx->pc = 0x280184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x280188: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x280188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28018c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x28018cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x280190: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x280190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x280194: 0x24a5f838  addiu       $a1, $a1, -0x7C8
    ctx->pc = 0x280194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965304));
    // 0x280198: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x280198u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x28019c: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x28019cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2801a0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2801a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2801a4: 0xacc00128  sw          $zero, 0x128($a2)
    ctx->pc = 0x2801a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 296), GPR_U32(ctx, 0));
    // 0x2801a8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2801a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2801ac: 0x8cc20180  lw          $v0, 0x180($a2)
    ctx->pc = 0x2801acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 384)));
    // 0x2801b0: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x2801b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2801b4: 0x8c500160  lw          $s0, 0x160($v0)
    ctx->pc = 0x2801b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x2801b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2801b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2801bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2801bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2801c0: 0xac60010c  sw          $zero, 0x10C($v1)
    ctx->pc = 0x2801c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 268), GPR_U32(ctx, 0));
    // 0x2801c4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2801c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2801c8: 0x471818  mult        $v1, $v0, $a3
    ctx->pc = 0x2801c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2801cc: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x2801ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2801d0: 0xc0a1ff0  jal         func_287FC0
    ctx->pc = 0x2801D0u;
    SET_GPR_U32(ctx, 31, 0x2801D8u);
    ctx->pc = 0x2801D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2801D0u;
    // 0x2801d4: 0xac400110  sw          $zero, 0x110($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287FC0u, 0x2801D0u, 0x2801D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2801D8u;
label_2801d8:
    // 0x2801d8: 0x8f87b234  lw          $a3, -0x4DCC($gp)
    ctx->pc = 0x2801d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2801dc: 0x2408fffc  addiu       $t0, $zero, -0x4
    ctx->pc = 0x2801dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x2801e0: 0x2409002c  addiu       $t1, $zero, 0x2C
    ctx->pc = 0x2801e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2801e4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x2801e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x2801e8: 0x8ce60180  lw          $a2, 0x180($a3)
    ctx->pc = 0x2801e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 384)));
    // 0x2801ec: 0x24a550e0  addiu       $a1, $a1, 0x50E0
    ctx->pc = 0x2801ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20704));
    // 0x2801f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2801f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2801f4: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x2801f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2801f8: 0x34420121  ori         $v0, $v0, 0x121
    ctx->pc = 0x2801f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)289);
    // 0x2801fc: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x2801fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
    // 0x280200: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x280200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x280204: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x280204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x280208: 0xace30014  sw          $v1, 0x14($a3)
    ctx->pc = 0x280208u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 3));
    // 0x28020c: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x28020cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x280210: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x280210u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x280214: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x280214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x280218: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x280218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28021c: 0xc0a2246  jal         func_288918
    ctx->pc = 0x28021Cu;
    SET_GPR_U32(ctx, 31, 0x280224u);
    ctx->pc = 0x280220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28021Cu;
    // 0x280220: 0xe4e00070  swc1        $f0, 0x70($a3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x288918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288918u, 0x28021Cu, 0x280224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280224u;
label_280224:
    // 0x280224: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x280224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x280228: 0xc080030  jal         func_2000C0
    ctx->pc = 0x280228u;
    SET_GPR_U32(ctx, 31, 0x280230u);
    ctx->pc = 0x28022Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280228u;
    // 0x28022c: 0x248487e0  addiu       $a0, $a0, -0x7820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2000C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2000C0u, 0x280228u, 0x280230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280230u;
label_280230:
    // 0x280230: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x280230u;
    {
        const bool branch_taken_0x280230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280230) {
            ctx->pc = 0x280248u;
            goto label_280248;
        }
    }
    ctx->pc = 0x280238u;
    // 0x280238: 0xc09f8c4  jal         func_27E310
    ctx->pc = 0x280238u;
    SET_GPR_U32(ctx, 31, 0x280240u);
    ctx->pc = 0x28023Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280238u;
    // 0x28023c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E310u, 0x280238u, 0x280240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280240u;
label_280240:
    // 0x280240: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x280240u;
    {
        const bool branch_taken_0x280240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x280240) {
            ctx->pc = 0x280250u;
            goto label_280250;
        }
    }
    ctx->pc = 0x280248u;
label_280248:
    // 0x280248: 0xc09f8c4  jal         func_27E310
    ctx->pc = 0x280248u;
    SET_GPR_U32(ctx, 31, 0x280250u);
    ctx->pc = 0x28024Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280248u;
    // 0x28024c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E310u, 0x280248u, 0x280250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280250u;
label_280250:
    // 0x280250: 0xc0a224a  jal         func_288928
    ctx->pc = 0x280250u;
    SET_GPR_U32(ctx, 31, 0x280258u);
    ctx->pc = 0x280254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280250u;
    // 0x280254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288928u, 0x280250u, 0x280258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280258u;
label_280258:
    // 0x280258: 0xc0a0006  jal         func_280018
    ctx->pc = 0x280258u;
    SET_GPR_U32(ctx, 31, 0x280260u);
    ctx->pc = 0x28025Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280258u;
    // 0x28025c: 0x8f84b234  lw          $a0, -0x4DCC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280018u, 0x280258u, 0x280260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280260u;
label_280260:
    // 0x280260: 0xc09fc4e  jal         func_27F138
    ctx->pc = 0x280260u;
    SET_GPR_U32(ctx, 31, 0x280268u);
    ctx->pc = 0x280264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280260u;
    // 0x280264: 0x8f84b234  lw          $a0, -0x4DCC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F138u, 0x280260u, 0x280268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280268u;
label_280268:
    // 0x280268: 0x8f86b234  lw          $a2, -0x4DCC($gp)
    ctx->pc = 0x280268u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x28026c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28026cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280270: 0x8f839f74  lw          $v1, -0x608C($gp)
    ctx->pc = 0x280270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x280274: 0x8f82b59c  lw          $v0, -0x4A64($gp)
    ctx->pc = 0x280274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x280278: 0xacc00324  sw          $zero, 0x324($a2)
    ctx->pc = 0x280278u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 804), GPR_U32(ctx, 0));
    // 0x28027c: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x28027cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x280280: 0xacc00328  sw          $zero, 0x328($a2)
    ctx->pc = 0x280280u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 808), GPR_U32(ctx, 0));
    // 0x280284: 0xacc0032c  sw          $zero, 0x32C($a2)
    ctx->pc = 0x280284u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 812), GPR_U32(ctx, 0));
    // 0x280288: 0x18e0000d  blez        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x280288u;
    {
        const bool branch_taken_0x280288 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x28028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280288u;
        // 0x28028c: 0xacc00330  sw          $zero, 0x330($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 816), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280288) {
            ctx->pc = 0x2802C0u;
            goto label_2802c0;
        }
    }
    ctx->pc = 0x280290u;
    // 0x280290: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x280290u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x280294: 0x0  nop
    ctx->pc = 0x280294u;
    // NOP
label_280298:
    // 0x280298: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x280298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x28029c: 0x8cc40334  lw          $a0, 0x334($a2)
    ctx->pc = 0x28029cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 820)));
    // 0x2802a0: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x2802a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2802a4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2802a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2802a8: 0xa7182a  slt         $v1, $a1, $a3
    ctx->pc = 0x2802a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2802ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2802acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2802b0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2802B0u;
    {
        const bool branch_taken_0x2802b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2802B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2802B0u;
        // 0x2802b4: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2802b0) {
            ctx->pc = 0x280298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_280298;
        }
    }
    ctx->pc = 0x2802B8u;
    // 0x2802b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2802B8u;
    {
        const bool branch_taken_0x2802b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2802b8) {
            ctx->pc = 0x2802C4u;
            goto label_2802c4;
        }
    }
    ctx->pc = 0x2802C0u;
label_2802c0:
    // 0x2802c0: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x2802c0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
label_2802c4:
    // 0x2802c4: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2802c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2802c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2802c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2802cc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2802ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2802d0: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x2802d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2802d4: 0x8cc20180  lw          $v0, 0x180($a2)
    ctx->pc = 0x2802d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 384)));
    // 0x2802d8: 0xe4c00110  swc1        $f0, 0x110($a2)
    ctx->pc = 0x2802d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 272), bits); }
    // 0x2802dc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2802dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2802e0: 0xe4c00104  swc1        $f0, 0x104($a2)
    ctx->pc = 0x2802e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 260), bits); }
    // 0x2802e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2802e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2802e8: 0xe4c00108  swc1        $f0, 0x108($a2)
    ctx->pc = 0x2802e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 264), bits); }
    // 0x2802ec: 0xe4c0010c  swc1        $f0, 0x10C($a2)
    ctx->pc = 0x2802ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 268), bits); }
    // 0x2802f0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2802f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2802f4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2802f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2802f8: 0xc4550034  lwc1        $f21, 0x34($v0)
    ctx->pc = 0x2802f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2802fc: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2802FCu;
    SET_GPR_U32(ctx, 31, 0x280304u);
    ctx->pc = 0x280300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2802FCu;
    // 0x280300: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2802FCu, 0x280304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280304u;
label_280304:
    // 0x280304: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x280304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x280308: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x280308u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x28030c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x28030cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x280310: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x280310u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x280314: 0xc08535a  jal         func_214D68
    ctx->pc = 0x280314u;
    SET_GPR_U32(ctx, 31, 0x28031Cu);
    ctx->pc = 0x280318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280314u;
    // 0x280318: 0x8c440180  lw          $a0, 0x180($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x280314u, 0x28031Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28031Cu;
label_28031c:
    // 0x28031c: 0x8f86b234  lw          $a2, -0x4DCC($gp)
    ctx->pc = 0x28031cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x280320: 0x2622c4a8  addiu       $v0, $s1, -0x3B58
    ctx->pc = 0x280320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952104));
    // 0x280324: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x280324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x280328: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x280328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x28032c: 0x8cc30180  lw          $v1, 0x180($a2)
    ctx->pc = 0x28032cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 384)));
    // 0x280330: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x280330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x280334: 0xe4750034  swc1        $f21, 0x34($v1)
    ctx->pc = 0x280334u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x280338: 0xe4560080  swc1        $f22, 0x80($v0)
    ctx->pc = 0x280338u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x28033c: 0xe4560084  swc1        $f22, 0x84($v0)
    ctx->pc = 0x28033cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x280340: 0xe4560088  swc1        $f22, 0x88($v0)
    ctx->pc = 0x280340u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x280344: 0xc4c0008c  lwc1        $f0, 0x8C($a2)
    ctx->pc = 0x280344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280348: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x280348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x28034c: 0xc4c10090  lwc1        $f1, 0x90($a2)
    ctx->pc = 0x28034cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280350: 0xe441006c  swc1        $f1, 0x6C($v0)
    ctx->pc = 0x280350u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
    // 0x280354: 0xc4c00094  lwc1        $f0, 0x94($a2)
    ctx->pc = 0x280354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280358: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x280358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x28035c: 0xc4c1008c  lwc1        $f1, 0x8C($a2)
    ctx->pc = 0x28035cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280360: 0xe4410074  swc1        $f1, 0x74($v0)
    ctx->pc = 0x280360u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x280364: 0xc4c00090  lwc1        $f0, 0x90($a2)
    ctx->pc = 0x280364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280368: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x280368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x28036c: 0xc4c10094  lwc1        $f1, 0x94($a2)
    ctx->pc = 0x28036cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280370: 0xe441007c  swc1        $f1, 0x7C($v0)
    ctx->pc = 0x280370u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x280374: 0xe4d606f0  swc1        $f22, 0x6F0($a2)
    ctx->pc = 0x280374u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 1776), bits); }
    // 0x280378: 0xe4d606f4  swc1        $f22, 0x6F4($a2)
    ctx->pc = 0x280378u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 1780), bits); }
    // 0x28037c: 0x14a40002  bne         $a1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x28037Cu;
    {
        const bool branch_taken_0x28037c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x280380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28037Cu;
        // 0x280380: 0xe4d60080  swc1        $f22, 0x80($a2) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28037c) {
            ctx->pc = 0x280388u;
            goto label_280388;
        }
    }
    ctx->pc = 0x280384u;
    // 0x280384: 0xe6160b54  swc1        $f22, 0xB54($s0)
    ctx->pc = 0x280384u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2900), bits); }
label_280388:
    // 0x280388: 0xc4c0008c  lwc1        $f0, 0x8C($a2)
    ctx->pc = 0x280388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28038c: 0xc4c10090  lwc1        $f1, 0x90($a2)
    ctx->pc = 0x28038cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280390: 0xc4c20094  lwc1        $f2, 0x94($a2)
    ctx->pc = 0x280390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x280394: 0xe4d60370  swc1        $f22, 0x370($a2)
    ctx->pc = 0x280394u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 880), bits); }
    // 0x280398: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x280398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28039c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28039cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2803a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2803a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2803a4: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x2803a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2803a8: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x2803a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2803ac: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2803acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2803b0: 0xe4c00374  swc1        $f0, 0x374($a2)
    ctx->pc = 0x2803b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 884), bits); }
    // 0x2803b4: 0xe4c10378  swc1        $f1, 0x378($a2)
    ctx->pc = 0x2803b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 888), bits); }
    // 0x2803b8: 0xe4c2037c  swc1        $f2, 0x37C($a2)
    ctx->pc = 0x2803b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 892), bits); }
    // 0x2803bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2803BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2803C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2803BCu;
        // 0x2803c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2803BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2803C4u;
}
