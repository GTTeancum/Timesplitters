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

// Function: gunCreatePlayerGun
// Address: 0x2941a8 - 0x2943dc
void gunCreatePlayerGun_0x2941a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gunCreatePlayerGun_0x2941a8");
#endif

    switch (ctx->pc) {
        case 0x294208u: goto label_294208;
        case 0x29423cu: goto label_29423c;
        case 0x294264u: goto label_294264;
        case 0x2942a4u: goto label_2942a4;
        case 0x2942c0u: goto label_2942c0;
        case 0x294304u: goto label_294304;
        case 0x294334u: goto label_294334;
        case 0x294340u: goto label_294340;
        case 0x294370u: goto label_294370;
        case 0x29437cu: goto label_29437c;
        default: break;
    }

    ctx->pc = 0x2941a8u;

    // 0x2941a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2941a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2941ac: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x2941acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x2941b0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2941b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2941b4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2941b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2941b8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2941b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2941bc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2941bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2941c0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2941c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2941c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2941c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2941c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2941c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2941cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2941ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2941d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2941d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2941d4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x2941d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x2941d8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2941d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2941dc: 0x24a56218  addiu       $a1, $a1, 0x6218
    ctx->pc = 0x2941dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25112));
    // 0x2941e0: 0x8f87b234  lw          $a3, -0x4DCC($gp)
    ctx->pc = 0x2941e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2941e4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2941e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2941e8: 0x8e280040  lw          $t0, 0x40($s1)
    ctx->pc = 0x2941e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2941ec: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2941ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2941f0: 0x8ce20180  lw          $v0, 0x180($a3)
    ctx->pc = 0x2941f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 384)));
    // 0x2941f4: 0x8c500160  lw          $s0, 0x160($v0)
    ctx->pc = 0x2941f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x2941f8: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2941F8u;
    {
        const bool branch_taken_0x2941f8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2941FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2941F8u;
        // 0x2941fc: 0x65a021  addu        $s4, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2941f8) {
            ctx->pc = 0x29420Cu;
            goto label_29420c;
        }
    }
    ctx->pc = 0x294200u;
    // 0x294200: 0xc09a4d0  jal         func_269340
    ctx->pc = 0x294200u;
    SET_GPR_U32(ctx, 31, 0x294208u);
    ctx->pc = 0x294204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294200u;
    // 0x294204: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x294200u, 0x294208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294208u;
label_294208:
    // 0x294208: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x294208u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
label_29420c:
    // 0x29420c: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x29420Cu;
    {
        const bool branch_taken_0x29420c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x294210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29420Cu;
        // 0x294210: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29420c) {
            ctx->pc = 0x294244u;
            goto label_294244;
        }
    }
    ctx->pc = 0x294214u;
    // 0x294214: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x294214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x294218: 0x244290f8  addiu       $v0, $v0, -0x6F08
    ctx->pc = 0x294218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938872));
    // 0x29421c: 0x8e050178  lw          $a1, 0x178($s0)
    ctx->pc = 0x29421cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x294220: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x294220u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x294224: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x294224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x294228: 0x84430004  lh          $v1, 0x4($v0)
    ctx->pc = 0x294228u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29422c: 0x14a30063  bne         $a1, $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x29422Cu;
    {
        const bool branch_taken_0x29422c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x294230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29422Cu;
        // 0x294230: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29422c) {
            ctx->pc = 0x2943BCu;
            goto label_2943bc;
        }
    }
    ctx->pc = 0x294234u;
    // 0x294234: 0xc0a542e  jal         func_2950B8
    ctx->pc = 0x294234u;
    SET_GPR_U32(ctx, 31, 0x29423Cu);
    ctx->pc = 0x294238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294234u;
    // 0x294238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2950B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2950B8u, 0x294234u, 0x29423Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29423Cu;
label_29423c:
    // 0x29423c: 0x5040005e  beql        $v0, $zero, . + 4 + (0x5E << 2)
    ctx->pc = 0x29423Cu;
    {
        const bool branch_taken_0x29423c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29423c) {
            ctx->pc = 0x294240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29423Cu;
            // 0x294240: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2943B8u;
            goto label_2943b8;
        }
    }
    ctx->pc = 0x294244u;
label_294244:
    // 0x294244: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x294244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x294248: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x294248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x29424c: 0x3c01c2c8  lui         $at, 0xC2C8
    ctx->pc = 0x29424cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49864 << 16));
    // 0x294250: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x294250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x294254: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x294254u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x294258: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x294258u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x29425c: 0xc09a6c4  jal         func_269B10
    ctx->pc = 0x29425Cu;
    SET_GPR_U32(ctx, 31, 0x294264u);
    ctx->pc = 0x294260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29425Cu;
    // 0x294260: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x269B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269B10u, 0x29425Cu, 0x294264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294264u;
label_294264:
    // 0x294264: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x294264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x294268: 0x8f84b234  lw          $a0, -0x4DCC($gp)
    ctx->pc = 0x294268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x29426c: 0xac430088  sw          $v1, 0x88($v0)
    ctx->pc = 0x29426cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 3));
    // 0x294270: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x294270u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
    // 0x294274: 0xac43008c  sw          $v1, 0x8C($v0)
    ctx->pc = 0x294274u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 3));
    // 0x294278: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x294278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29427c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x29427cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x294280: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x294280u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x294284: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x294284u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x294288: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x294288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x29428c: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x29428cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x294290: 0x24c600c9  addiu       $a2, $a2, 0xC9
    ctx->pc = 0x294290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 201));
    // 0x294294: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x294294u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x294298: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x294298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x29429c: 0xc09829e  jal         func_260A78
    ctx->pc = 0x29429Cu;
    SET_GPR_U32(ctx, 31, 0x2942A4u);
    ctx->pc = 0x2942A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29429Cu;
    // 0x2942a0: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x29429Cu, 0x2942A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2942A4u;
label_2942a4:
    // 0x2942a4: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x2942a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2942a8: 0xc78c8c58  lwc1        $f12, -0x73A8($gp)
    ctx->pc = 0x2942a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2942ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2942acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2942b0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2942b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2942b4: 0xc78e8c5c  lwc1        $f14, -0x73A4($gp)
    ctx->pc = 0x2942b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2942b8: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x2942B8u;
    SET_GPR_U32(ctx, 31, 0x2942C0u);
    ctx->pc = 0x2942BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2942B8u;
    // 0x2942bc: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x2942B8u, 0x2942C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2942C0u;
label_2942c0:
    // 0x2942c0: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x2942c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2942c4: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x2942c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x2942c8: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2942C8u;
    {
        const bool branch_taken_0x2942c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2942CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2942C8u;
        // 0x2942cc: 0x8c640180  lw          $a0, 0x180($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2942c8) {
            ctx->pc = 0x2942E0u;
            goto label_2942e0;
        }
    }
    ctx->pc = 0x2942D0u;
    // 0x2942d0: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2942d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2942d4: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x2942d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2942d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2942D8u;
    {
        const bool branch_taken_0x2942d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2942DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2942D8u;
        // 0x2942dc: 0x8c660018  lw          $a2, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2942d8) {
            ctx->pc = 0x2942ECu;
            goto label_2942ec;
        }
    }
    ctx->pc = 0x2942E0u;
label_2942e0:
    // 0x2942e0: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2942e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2942e4: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x2942e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2942e8: 0x8c66001c  lw          $a2, 0x1C($v1)
    ctx->pc = 0x2942e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_2942ec:
    // 0x2942ec: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x2942ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2942f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2942f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2942f4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2942f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2942f8: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x2942f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2942fc: 0xc09c0b6  jal         func_2702D8
    ctx->pc = 0x2942FCu;
    SET_GPR_U32(ctx, 31, 0x294304u);
    ctx->pc = 0x294300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2942FCu;
    // 0x294300: 0x53380a  movz        $a3, $v0, $s3 (Delay Slot)
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2702D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2702D8u, 0x2942FCu, 0x294304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294304u;
label_294304:
    // 0x294304: 0x8f86b234  lw          $a2, -0x4DCC($gp)
    ctx->pc = 0x294304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x294308: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x294308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29430c: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x29430cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x294310: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x294310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294314: 0x8cc20180  lw          $v0, 0x180($a2)
    ctx->pc = 0x294314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 384)));
    // 0x294318: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x294318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29431c: 0xe4600234  swc1        $f0, 0x234($v1)
    ctx->pc = 0x29431cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 564), bits); }
    // 0x294320: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x294320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294324: 0xe4610238  swc1        $f1, 0x238($v1)
    ctx->pc = 0x294324u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 568), bits); }
    // 0x294328: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x294328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29432c: 0xc0a444e  jal         func_291138
    ctx->pc = 0x29432Cu;
    SET_GPR_U32(ctx, 31, 0x294334u);
    ctx->pc = 0x294330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29432Cu;
    // 0x294330: 0xe460023c  swc1        $f0, 0x23C($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 572), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x291138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291138u, 0x29432Cu, 0x294334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294334u;
label_294334:
    // 0x294334: 0x8f84b234  lw          $a0, -0x4DCC($gp)
    ctx->pc = 0x294334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x294338: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x294338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x29433c: 0x2622003c  addiu       $v0, $s1, 0x3C
    ctx->pc = 0x29433cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
label_294340:
    // 0x294340: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x294340u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x294344: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x294344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x294348: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x294348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x29434c: 0x0  nop
    ctx->pc = 0x29434cu;
    // NOP
    // 0x294350: 0x0  nop
    ctx->pc = 0x294350u;
    // NOP
    // 0x294354: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x294354u;
    {
        const bool branch_taken_0x294354 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x294354) {
            ctx->pc = 0x294340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294340;
        }
    }
    ctx->pc = 0x29435Cu;
    // 0x29435c: 0x8c820180  lw          $v0, 0x180($a0)
    ctx->pc = 0x29435cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x294360: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x294360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294364: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x294364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294368: 0xc0a36c6  jal         func_28DB18
    ctx->pc = 0x294368u;
    SET_GPR_U32(ctx, 31, 0x294370u);
    ctx->pc = 0x29436Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294368u;
    // 0x29436c: 0x8c440160  lw          $a0, 0x160($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB18u, 0x294368u, 0x294370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294370u;
label_294370:
    // 0x294370: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x294370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294374: 0xc0a441c  jal         func_291070
    ctx->pc = 0x294374u;
    SET_GPR_U32(ctx, 31, 0x29437Cu);
    ctx->pc = 0x294378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294374u;
    // 0x294378: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291070u, 0x294374u, 0x29437Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29437Cu;
label_29437c:
    // 0x29437c: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x29437cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x294380: 0xc681002c  lwc1        $f1, 0x2C($s4)
    ctx->pc = 0x294380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294384: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x294384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x294388: 0xe461010c  swc1        $f1, 0x10C($v1)
    ctx->pc = 0x294388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
    // 0x29438c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x29438cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x294390: 0xc6800030  lwc1        $f0, 0x30($s4)
    ctx->pc = 0x294390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294394: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x294394u;
    {
        const bool branch_taken_0x294394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294394u;
        // 0x294398: 0xe4600110  swc1        $f0, 0x110($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x294394) {
            ctx->pc = 0x2943A4u;
            goto label_2943a4;
        }
    }
    ctx->pc = 0x29439Cu;
    // 0x29439c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29439Cu;
    {
        const bool branch_taken_0x29439c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2943A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29439Cu;
        // 0x2943a0: 0xe4610108  swc1        $f1, 0x108($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 264), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29439c) {
            ctx->pc = 0x2943B8u;
            goto label_2943b8;
        }
    }
    ctx->pc = 0x2943A4u;
label_2943a4:
    // 0x2943a4: 0xc4600108  lwc1        $f0, 0x108($v1)
    ctx->pc = 0x2943a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2943a8: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2943a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2943ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2943acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2943b0: 0xe460010c  swc1        $f0, 0x10C($v1)
    ctx->pc = 0x2943b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
    // 0x2943b4: 0xe4610108  swc1        $f1, 0x108($v1)
    ctx->pc = 0x2943b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 264), bits); }
label_2943b8:
    // 0x2943b8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2943b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2943bc:
    // 0x2943bc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2943bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2943c0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2943c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2943c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2943c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2943c8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2943c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2943cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2943ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2943d0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2943d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2943d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2943D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2943D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2943D4u;
        // 0x2943d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2943D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2943DCu;
}
