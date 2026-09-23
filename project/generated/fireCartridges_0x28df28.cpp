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

// Function: fireCartridges
// Address: 0x28df28 - 0x28e344
void fireCartridges_0x28df28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fireCartridges_0x28df28");
#endif

    switch (ctx->pc) {
        case 0x28df80u: goto label_28df80;
        case 0x28e03cu: goto label_28e03c;
        case 0x28e054u: goto label_28e054;
        case 0x28e068u: goto label_28e068;
        case 0x28e078u: goto label_28e078;
        case 0x28e0b8u: goto label_28e0b8;
        case 0x28e0ccu: goto label_28e0cc;
        case 0x28e0e0u: goto label_28e0e0;
        case 0x28e0f0u: goto label_28e0f0;
        case 0x28e1a0u: goto label_28e1a0;
        case 0x28e1b0u: goto label_28e1b0;
        case 0x28e1f0u: goto label_28e1f0;
        case 0x28e288u: goto label_28e288;
        case 0x28e294u: goto label_28e294;
        case 0x28e2d4u: goto label_28e2d4;
        case 0x28e30cu: goto label_28e30c;
        default: break;
    }

    ctx->pc = 0x28df28u;

    // 0x28df28: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x28df28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x28df2c: 0xffb70130  sd          $s7, 0x130($sp)
    ctx->pc = 0x28df2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 23));
    // 0x28df30: 0xffb60120  sd          $s6, 0x120($sp)
    ctx->pc = 0x28df30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 22));
    // 0x28df34: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x28df34u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28df38: 0xffb50110  sd          $s5, 0x110($sp)
    ctx->pc = 0x28df38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 21));
    // 0x28df3c: 0x27b600a0  addiu       $s6, $sp, 0xA0
    ctx->pc = 0x28df3cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x28df40: 0xffb300f0  sd          $s3, 0xF0($sp)
    ctx->pc = 0x28df40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 19));
    // 0x28df44: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x28df44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28df48: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28df48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28df4c: 0xffbf0150  sd          $ra, 0x150($sp)
    ctx->pc = 0x28df4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 31));
    // 0x28df50: 0xffbe0140  sd          $fp, 0x140($sp)
    ctx->pc = 0x28df50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 30));
    // 0x28df54: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28df54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28df58: 0xffb40100  sd          $s4, 0x100($sp)
    ctx->pc = 0x28df58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 20));
    // 0x28df5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28df5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28df60: 0xffb200e0  sd          $s2, 0xE0($sp)
    ctx->pc = 0x28df60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 18));
    // 0x28df64: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x28df64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x28df68: 0xffb100d0  sd          $s1, 0xD0($sp)
    ctx->pc = 0x28df68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 17));
    // 0x28df6c: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x28df6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x28df70: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x28df70u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x28df74: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x28df74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x28df78: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x28DF78u;
    SET_GPR_U32(ctx, 31, 0x28DF80u);
    ctx->pc = 0x28DF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DF78u;
    // 0x28df7c: 0xafa700b0  sw          $a3, 0xB0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x28DF78u, 0x28DF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DF80u;
label_28df80:
    // 0x28df80: 0x126000e3  beqz        $s3, . + 4 + (0xE3 << 2)
    ctx->pc = 0x28DF80u;
    {
        const bool branch_taken_0x28df80 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DF80u;
        // 0x28df84: 0xdfbf0150  ld          $ra, 0x150($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28df80) {
            ctx->pc = 0x28E310u;
            goto label_28e310;
        }
    }
    ctx->pc = 0x28DF88u;
    // 0x28df88: 0x8e6200ac  lw          $v0, 0xAC($s3)
    ctx->pc = 0x28df88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 172)));
    // 0x28df8c: 0x504000e1  beql        $v0, $zero, . + 4 + (0xE1 << 2)
    ctx->pc = 0x28DF8Cu;
    {
        const bool branch_taken_0x28df8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28df8c) {
            ctx->pc = 0x28DF90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DF8Cu;
            // 0x28df90: 0xdfbe0140  ld          $fp, 0x140($sp) (Delay Slot)
            SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E314u;
            goto label_28e314;
        }
    }
    ctx->pc = 0x28DF94u;
    // 0x28df94: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x28df94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x28df98: 0x504000de  beql        $v0, $zero, . + 4 + (0xDE << 2)
    ctx->pc = 0x28DF98u;
    {
        const bool branch_taken_0x28df98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28df98) {
            ctx->pc = 0x28DF9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DF98u;
            // 0x28df9c: 0xdfbe0140  ld          $fp, 0x140($sp) (Delay Slot)
            SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E314u;
            goto label_28e314;
        }
    }
    ctx->pc = 0x28DFA0u;
    // 0x28dfa0: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x28dfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x28dfa4: 0x104000db  beqz        $v0, . + 4 + (0xDB << 2)
    ctx->pc = 0x28DFA4u;
    {
        const bool branch_taken_0x28dfa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DFA4u;
        // 0x28dfa8: 0xdfbe0140  ld          $fp, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dfa4) {
            ctx->pc = 0x28E314u;
            goto label_28e314;
        }
    }
    ctx->pc = 0x28DFACu;
    // 0x28dfac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x28dfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28dfb0: 0x104000d8  beqz        $v0, . + 4 + (0xD8 << 2)
    ctx->pc = 0x28DFB0u;
    {
        const bool branch_taken_0x28dfb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dfb0) {
            ctx->pc = 0x28E314u;
            goto label_28e314;
        }
    }
    ctx->pc = 0x28DFB8u;
    // 0x28dfb8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x28dfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x28dfbc: 0x504000d6  beql        $v0, $zero, . + 4 + (0xD6 << 2)
    ctx->pc = 0x28DFBCu;
    {
        const bool branch_taken_0x28dfbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dfbc) {
            ctx->pc = 0x28DFC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DFBCu;
            // 0x28dfc0: 0xdfb70130  ld          $s7, 0x130($sp) (Delay Slot)
            SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E318u;
            goto label_28e318;
        }
    }
    ctx->pc = 0x28DFC4u;
    // 0x28dfc4: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x28dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x28dfc8: 0x104000d2  beqz        $v0, . + 4 + (0xD2 << 2)
    ctx->pc = 0x28DFC8u;
    {
        const bool branch_taken_0x28dfc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DFC8u;
        // 0x28dfcc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dfc8) {
            ctx->pc = 0x28E314u;
            goto label_28e314;
        }
    }
    ctx->pc = 0x28DFD0u;
    // 0x28dfd0: 0x8eb20040  lw          $s2, 0x40($s5)
    ctx->pc = 0x28dfd0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x28dfd4: 0xc6600044  lwc1        $f0, 0x44($s3)
    ctx->pc = 0x28dfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28dfd8: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x28dfd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dfdc: 0xc64c0030  lwc1        $f12, 0x30($s2)
    ctx->pc = 0x28dfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28dfe0: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x28dfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28dfe4: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x28dfe4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x28dfe8: 0xc662004c  lwc1        $f2, 0x4C($s3)
    ctx->pc = 0x28dfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28dfec: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x28dfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x28dff0: 0xc7948ab8  lwc1        $f20, -0x7548($gp)
    ctx->pc = 0x28dff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28dff4: 0xe7ac0090  swc1        $f12, 0x90($sp)
    ctx->pc = 0x28dff4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x28dff8: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x28dff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x28dffc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x28dffcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x28e000: 0xc64d0034  lwc1        $f13, 0x34($s2)
    ctx->pc = 0x28e000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28e004: 0x8c430180  lw          $v1, 0x180($v0)
    ctx->pc = 0x28e004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
    // 0x28e008: 0x46016b40  add.s       $f13, $f13, $f1
    ctx->pc = 0x28e008u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
    // 0x28e00c: 0x8c7e0160  lw          $fp, 0x160($v1)
    ctx->pc = 0x28e00cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x28e010: 0xe7ad0094  swc1        $f13, 0x94($sp)
    ctx->pc = 0x28e010u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x28e014: 0xc64e0038  lwc1        $f14, 0x38($s2)
    ctx->pc = 0x28e014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x28e018: 0x46027380  add.s       $f14, $f14, $f2
    ctx->pc = 0x28e018u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[2]);
    // 0x28e01c: 0xe7ae0098  swc1        $f14, 0x98($sp)
    ctx->pc = 0x28e01cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x28e020: 0xc64f004c  lwc1        $f15, 0x4C($s2)
    ctx->pc = 0x28e020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x28e024: 0x46147bc2  mul.s       $f15, $f15, $f20
    ctx->pc = 0x28e024u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[20]);
    // 0x28e028: 0x0  nop
    ctx->pc = 0x28e028u;
    // NOP
    // 0x28e02c: 0x0  nop
    ctx->pc = 0x28e02cu;
    // NOP
    // 0x28e030: 0x46157bc3  div.s       $f15, $f15, $f21
    ctx->pc = 0x28e030u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[21];
    // 0x28e034: 0xc0ad314  jal         func_2B4C50
    ctx->pc = 0x28E034u;
    SET_GPR_U32(ctx, 31, 0x28E03Cu);
    ctx->pc = 0x28E038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E034u;
    // 0x28e038: 0x24110050  addiu       $s1, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C50u, 0x28E034u, 0x28E03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E03Cu;
label_28e03c:
    // 0x28e03c: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x28e03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x28e040: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x28e040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28e044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e048: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28e048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e04c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x28E04Cu;
    SET_GPR_U32(ctx, 31, 0x28E054u);
    ctx->pc = 0x28E050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E04Cu;
    // 0x28e050: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x28E04Cu, 0x28E054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E054u;
label_28e054:
    // 0x28e054: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x28e054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28e058: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28e058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e05c: 0xc68d0004  lwc1        $f13, 0x4($s4)
    ctx->pc = 0x28e05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28e060: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x28E060u;
    SET_GPR_U32(ctx, 31, 0x28E068u);
    ctx->pc = 0x28E064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E060u;
    // 0x28e064: 0xc68e0008  lwc1        $f14, 0x8($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x28E060u, 0x28E068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E068u;
label_28e068:
    // 0x28e068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e06c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e06cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e070: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x28E070u;
    SET_GPR_U32(ctx, 31, 0x28E078u);
    ctx->pc = 0x28E074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E070u;
    // 0x28e074: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x28E070u, 0x28E078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E078u;
label_28e078:
    // 0x28e078: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x28e078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28e07c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28e07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e080: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x28e080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e084: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x28e084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e088: 0xe6a20054  swc1        $f2, 0x54($s5)
    ctx->pc = 0x28e088u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 84), bits); }
    // 0x28e08c: 0xe6a00058  swc1        $f0, 0x58($s5)
    ctx->pc = 0x28e08cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 88), bits); }
    // 0x28e090: 0xe6a1005c  swc1        $f1, 0x5C($s5)
    ctx->pc = 0x28e090u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 92), bits); }
    // 0x28e094: 0xc64f004c  lwc1        $f15, 0x4C($s2)
    ctx->pc = 0x28e094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x28e098: 0xc7ac0090  lwc1        $f12, 0x90($sp)
    ctx->pc = 0x28e098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28e09c: 0x46147bc2  mul.s       $f15, $f15, $f20
    ctx->pc = 0x28e09cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[20]);
    // 0x28e0a0: 0xc7ad0094  lwc1        $f13, 0x94($sp)
    ctx->pc = 0x28e0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28e0a4: 0x0  nop
    ctx->pc = 0x28e0a4u;
    // NOP
    // 0x28e0a8: 0x0  nop
    ctx->pc = 0x28e0a8u;
    // NOP
    // 0x28e0ac: 0x46157bc3  div.s       $f15, $f15, $f21
    ctx->pc = 0x28e0acu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[21];
    // 0x28e0b0: 0xc0ad314  jal         func_2B4C50
    ctx->pc = 0x28E0B0u;
    SET_GPR_U32(ctx, 31, 0x28E0B8u);
    ctx->pc = 0x28E0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E0B0u;
    // 0x28e0b4: 0xc7ae0098  lwc1        $f14, 0x98($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C50u, 0x28E0B0u, 0x28E0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E0B8u;
label_28e0b8:
    // 0x28e0b8: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x28e0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x28e0bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e0c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28e0c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e0c4: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x28E0C4u;
    SET_GPR_U32(ctx, 31, 0x28E0CCu);
    ctx->pc = 0x28E0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E0C4u;
    // 0x28e0c8: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x28E0C4u, 0x28E0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E0CCu;
label_28e0cc:
    // 0x28e0cc: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x28e0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28e0d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28e0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e0d4: 0xc68d0004  lwc1        $f13, 0x4($s4)
    ctx->pc = 0x28e0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28e0d8: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x28E0D8u;
    SET_GPR_U32(ctx, 31, 0x28E0E0u);
    ctx->pc = 0x28E0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E0D8u;
    // 0x28e0dc: 0xc68e0008  lwc1        $f14, 0x8($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x28E0D8u, 0x28E0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E0E0u;
label_28e0e0:
    // 0x28e0e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e0e4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x28e0e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e0e8: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x28E0E8u;
    SET_GPR_U32(ctx, 31, 0x28E0F0u);
    ctx->pc = 0x28E0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E0E8u;
    // 0x28e0ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x28E0E8u, 0x28E0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E0F0u;
label_28e0f0:
    // 0x28e0f0: 0x8e72000c  lw          $s2, 0xC($s3)
    ctx->pc = 0x28e0f0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x28e0f4: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x28e0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e0f8: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x28e0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x28e0fc: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x28e0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28e100: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28e100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28e104: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x28e104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e108: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x28e108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28e10c: 0x8ee40158  lw          $a0, 0x158($s7)
    ctx->pc = 0x28e10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 344)));
    // 0x28e110: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x28e110u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28e114: 0xe6a10060  swc1        $f1, 0x60($s5)
    ctx->pc = 0x28e114u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 96), bits); }
    // 0x28e118: 0xe6a20064  swc1        $f2, 0x64($s5)
    ctx->pc = 0x28e118u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 100), bits); }
    // 0x28e11c: 0xe6a00068  swc1        $f0, 0x68($s5)
    ctx->pc = 0x28e11cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 104), bits); }
    // 0x28e120: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28E120u;
    {
        const bool branch_taken_0x28e120 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x28E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E120u;
        // 0x28e124: 0x628023  subu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e120) {
            ctx->pc = 0x28E138u;
            goto label_28e138;
        }
    }
    ctx->pc = 0x28E128u;
    // 0x28e128: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x28e128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x28e12c: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x28e12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x28e130: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x28e130u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28e134: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x28e134u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28e138:
    // 0x28e138: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x28e138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e13c: 0xc7ac0090  lwc1        $f12, 0x90($sp)
    ctx->pc = 0x28e13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28e140: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x28e140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x28e144: 0xc7ad0094  lwc1        $f13, 0x94($sp)
    ctx->pc = 0x28e144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28e148: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x28e148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e14c: 0xc7ae0098  lwc1        $f14, 0x98($sp)
    ctx->pc = 0x28e14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x28e150: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x28e150u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x28e154: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x28e154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e158: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x28e158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x28e15c: 0xc64f0048  lwc1        $f15, 0x48($s2)
    ctx->pc = 0x28e15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x28e160: 0xc650004c  lwc1        $f16, 0x4C($s2)
    ctx->pc = 0x28e160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x28e164: 0xc6510058  lwc1        $f17, 0x58($s2)
    ctx->pc = 0x28e164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x28e168: 0x46147bc2  mul.s       $f15, $f15, $f20
    ctx->pc = 0x28e168u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[20]);
    // 0x28e16c: 0x46148402  mul.s       $f16, $f16, $f20
    ctx->pc = 0x28e16cu;
    ctx->f[16] = FPU_MUL_S(ctx->f[16], ctx->f[20]);
    // 0x28e170: 0x46148c42  mul.s       $f17, $f17, $f20
    ctx->pc = 0x28e170u;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[20]);
    // 0x28e174: 0x0  nop
    ctx->pc = 0x28e174u;
    // NOP
    // 0x28e178: 0x0  nop
    ctx->pc = 0x28e178u;
    // NOP
    // 0x28e17c: 0x46157bc3  div.s       $f15, $f15, $f21
    ctx->pc = 0x28e17cu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[21];
    // 0x28e180: 0x0  nop
    ctx->pc = 0x28e180u;
    // NOP
    // 0x28e184: 0x0  nop
    ctx->pc = 0x28e184u;
    // NOP
    // 0x28e188: 0x46158403  div.s       $f16, $f16, $f21
    ctx->pc = 0x28e188u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[16] = copysignf(INFINITY, ctx->f[16] * 0.0f); } else ctx->f[16] = ctx->f[16] / ctx->f[21];
    // 0x28e18c: 0x0  nop
    ctx->pc = 0x28e18cu;
    // NOP
    // 0x28e190: 0x0  nop
    ctx->pc = 0x28e190u;
    // NOP
    // 0x28e194: 0x46158c43  div.s       $f17, $f17, $f21
    ctx->pc = 0x28e194u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[17] = copysignf(INFINITY, ctx->f[17] * 0.0f); } else ctx->f[17] = ctx->f[17] / ctx->f[21];
    // 0x28e198: 0xc0ad338  jal         func_2B4CE0
    ctx->pc = 0x28E198u;
    SET_GPR_U32(ctx, 31, 0x28E1A0u);
    ctx->pc = 0x28E19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E198u;
    // 0x28e19c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4CE0u, 0x28E198u, 0x28E1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E1A0u;
label_28e1a0:
    // 0x28e1a0: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x28e1a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x28e1a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28e1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e1a8: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x28E1A8u;
    SET_GPR_U32(ctx, 31, 0x28E1B0u);
    ctx->pc = 0x28E1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E1A8u;
    // 0x28e1ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x28E1A8u, 0x28E1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E1B0u;
label_28e1b0:
    // 0x28e1b0: 0xc6430030  lwc1        $f3, 0x30($s2)
    ctx->pc = 0x28e1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28e1b4: 0x2665001c  addiu       $a1, $s3, 0x1C
    ctx->pc = 0x28e1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x28e1b8: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x28e1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e1bc: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x28e1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e1c0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x28e1c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x28e1c4: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x28e1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28e1c8: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x28e1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x28e1cc: 0xe660001c  swc1        $f0, 0x1C($s3)
    ctx->pc = 0x28e1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
    // 0x28e1d0: 0x8c4406ec  lw          $a0, 0x6EC($v0)
    ctx->pc = 0x28e1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1772)));
    // 0x28e1d4: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x28e1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e1d8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x28e1d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28e1dc: 0xe6610020  swc1        $f1, 0x20($s3)
    ctx->pc = 0x28e1dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
    // 0x28e1e0: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x28e1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e1e4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x28e1e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x28e1e8: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x28E1E8u;
    SET_GPR_U32(ctx, 31, 0x28E1F0u);
    ctx->pc = 0x28E1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E1E8u;
    // 0x28e1ec: 0xe6620024  swc1        $f2, 0x24($s3) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x28E1E8u, 0x28E1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E1F0u;
label_28e1f0:
    // 0x28e1f0: 0x8ee4015c  lw          $a0, 0x15C($s7)
    ctx->pc = 0x28e1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 348)));
    // 0x28e1f4: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28E1F4u;
    {
        const bool branch_taken_0x28e1f4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x28E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E1F4u;
        // 0x28e1f8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e1f4) {
            ctx->pc = 0x28E20Cu;
            goto label_28e20c;
        }
    }
    ctx->pc = 0x28E1FCu;
    // 0x28e1fc: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x28e1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x28e200: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x28e200u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28e204: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28E204u;
    {
        const bool branch_taken_0x28e204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E204u;
        // 0x28e208: 0x62a021  addu        $s4, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e204) {
            ctx->pc = 0x28E210u;
            goto label_28e210;
        }
    }
    ctx->pc = 0x28E20Cu;
label_28e20c:
    // 0x28e20c: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x28e20cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_28e210:
    // 0x28e210: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x28e210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e214: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28e214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e218: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x28e218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x28e21c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x28e21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x28e220: 0xc7818abc  lwc1        $f1, -0x7544($gp)
    ctx->pc = 0x28e220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e224: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x28e224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e228: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x28e228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x28e22c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28e22cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28e230: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x28e230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x28e234: 0xc7ac0090  lwc1        $f12, 0x90($sp)
    ctx->pc = 0x28e234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28e238: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x28e238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e23c: 0xc7ad0094  lwc1        $f13, 0x94($sp)
    ctx->pc = 0x28e23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28e240: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x28e240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x28e244: 0xc4510058  lwc1        $f17, 0x58($v0)
    ctx->pc = 0x28e244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x28e248: 0xc44f0048  lwc1        $f15, 0x48($v0)
    ctx->pc = 0x28e248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x28e24c: 0xc450004c  lwc1        $f16, 0x4C($v0)
    ctx->pc = 0x28e24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x28e250: 0x46018c42  mul.s       $f17, $f17, $f1
    ctx->pc = 0x28e250u;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[1]);
    // 0x28e254: 0x46017bc2  mul.s       $f15, $f15, $f1
    ctx->pc = 0x28e254u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[1]);
    // 0x28e258: 0x46018402  mul.s       $f16, $f16, $f1
    ctx->pc = 0x28e258u;
    ctx->f[16] = FPU_MUL_S(ctx->f[16], ctx->f[1]);
    // 0x28e25c: 0x0  nop
    ctx->pc = 0x28e25cu;
    // NOP
    // 0x28e260: 0x0  nop
    ctx->pc = 0x28e260u;
    // NOP
    // 0x28e264: 0x46028c43  div.s       $f17, $f17, $f2
    ctx->pc = 0x28e264u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[17] = copysignf(INFINITY, ctx->f[17] * 0.0f); } else ctx->f[17] = ctx->f[17] / ctx->f[2];
    // 0x28e268: 0x0  nop
    ctx->pc = 0x28e268u;
    // NOP
    // 0x28e26c: 0x0  nop
    ctx->pc = 0x28e26cu;
    // NOP
    // 0x28e270: 0x46027bc3  div.s       $f15, $f15, $f2
    ctx->pc = 0x28e270u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[2];
    // 0x28e274: 0x0  nop
    ctx->pc = 0x28e274u;
    // NOP
    // 0x28e278: 0x0  nop
    ctx->pc = 0x28e278u;
    // NOP
    // 0x28e27c: 0x46028403  div.s       $f16, $f16, $f2
    ctx->pc = 0x28e27cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[16] = copysignf(INFINITY, ctx->f[16] * 0.0f); } else ctx->f[16] = ctx->f[16] / ctx->f[2];
    // 0x28e280: 0xc0ad338  jal         func_2B4CE0
    ctx->pc = 0x28E280u;
    SET_GPR_U32(ctx, 31, 0x28E288u);
    ctx->pc = 0x28E284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E280u;
    // 0x28e284: 0xc7ae0098  lwc1        $f14, 0x98($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4CE0u, 0x28E280u, 0x28E288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E288u;
label_28e288:
    // 0x28e288: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28e288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e28c: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x28E28Cu;
    SET_GPR_U32(ctx, 31, 0x28E294u);
    ctx->pc = 0x28E290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E28Cu;
    // 0x28e290: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x28E28Cu, 0x28E294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E294u;
label_28e294:
    // 0x28e294: 0xc6430030  lwc1        $f3, 0x30($s2)
    ctx->pc = 0x28e294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28e298: 0x26650028  addiu       $a1, $s3, 0x28
    ctx->pc = 0x28e298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    // 0x28e29c: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x28e29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e2a0: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x28e2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e2a4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x28e2a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x28e2a8: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x28e2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28e2ac: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x28e2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x28e2b0: 0xe6600028  swc1        $f0, 0x28($s3)
    ctx->pc = 0x28e2b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
    // 0x28e2b4: 0x8c4406ec  lw          $a0, 0x6EC($v0)
    ctx->pc = 0x28e2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1772)));
    // 0x28e2b8: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x28e2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e2bc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x28e2bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28e2c0: 0xe661002c  swc1        $f1, 0x2C($s3)
    ctx->pc = 0x28e2c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
    // 0x28e2c4: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x28e2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e2c8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x28e2c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x28e2cc: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x28E2CCu;
    SET_GPR_U32(ctx, 31, 0x28E2D4u);
    ctx->pc = 0x28E2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E2CCu;
    // 0x28e2d0: 0xe6620030  swc1        $f2, 0x30($s3) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x28E2CCu, 0x28E2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E2D4u;
label_28e2d4:
    // 0x28e2d4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x28e2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28e2d8: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x28e2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28e2dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28e2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28e2e0: 0x10c2000b  beq         $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28E2E0u;
    {
        const bool branch_taken_0x28e2e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x28E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2E0u;
        // 0x28e2e4: 0xdfbf0150  ld          $ra, 0x150($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e2e0) {
            ctx->pc = 0x28E310u;
            goto label_28e310;
        }
    }
    ctx->pc = 0x28E2E8u;
    // 0x28e2e8: 0x8ee20158  lw          $v0, 0x158($s7)
    ctx->pc = 0x28e2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 344)));
    // 0x28e2ec: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28E2ECu;
    {
        const bool branch_taken_0x28e2ec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28E2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2ECu;
        // 0x28e2f0: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e2ec) {
            ctx->pc = 0x28E310u;
            goto label_28e310;
        }
    }
    ctx->pc = 0x28E2F4u;
    // 0x28e2f4: 0x8e6400b4  lw          $a0, 0xB4($s3)
    ctx->pc = 0x28e2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x28e2f8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x28e2f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e2fc: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x28e2fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e300: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x28e300u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e304: 0xc0a54c6  jal         func_295318
    ctx->pc = 0x28E304u;
    SET_GPR_U32(ctx, 31, 0x28E30Cu);
    ctx->pc = 0x28E308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E304u;
    // 0x28e308: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295318u, 0x28E304u, 0x28E30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E30Cu;
label_28e30c:
    // 0x28e30c: 0xdfbf0150  ld          $ra, 0x150($sp)
    ctx->pc = 0x28e30cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_28e310:
    // 0x28e310: 0xdfbe0140  ld          $fp, 0x140($sp)
    ctx->pc = 0x28e310u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_28e314:
    // 0x28e314: 0xdfb70130  ld          $s7, 0x130($sp)
    ctx->pc = 0x28e314u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_28e318:
    // 0x28e318: 0xdfb60120  ld          $s6, 0x120($sp)
    ctx->pc = 0x28e318u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x28e31c: 0xdfb50110  ld          $s5, 0x110($sp)
    ctx->pc = 0x28e31cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x28e320: 0xdfb40100  ld          $s4, 0x100($sp)
    ctx->pc = 0x28e320u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x28e324: 0xdfb300f0  ld          $s3, 0xF0($sp)
    ctx->pc = 0x28e324u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x28e328: 0xdfb200e0  ld          $s2, 0xE0($sp)
    ctx->pc = 0x28e328u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x28e32c: 0xdfb100d0  ld          $s1, 0xD0($sp)
    ctx->pc = 0x28e32cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x28e330: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x28e330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28e334: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x28e334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x28e338: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x28e338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28e33c: 0x3e00008  jr          $ra
    ctx->pc = 0x28E33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E33Cu;
        // 0x28e340: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E344u;
}
