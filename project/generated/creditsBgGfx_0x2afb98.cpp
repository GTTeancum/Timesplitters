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

// Function: creditsBgGfx
// Address: 0x2afb98 - 0x2aff0c
void creditsBgGfx_0x2afb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("creditsBgGfx_0x2afb98");
#endif

    switch (ctx->pc) {
        case 0x2afbd0u: goto label_2afbd0;
        case 0x2afc00u: goto label_2afc00;
        case 0x2afc30u: goto label_2afc30;
        case 0x2afc40u: goto label_2afc40;
        case 0x2afc5cu: goto label_2afc5c;
        case 0x2afc6cu: goto label_2afc6c;
        case 0x2afc74u: goto label_2afc74;
        case 0x2afc80u: goto label_2afc80;
        case 0x2afc90u: goto label_2afc90;
        case 0x2afca0u: goto label_2afca0;
        case 0x2afcb0u: goto label_2afcb0;
        case 0x2afd28u: goto label_2afd28;
        default: break;
    }

    ctx->pc = 0x2afb98u;

    // 0x2afb98: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2afb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x2afb9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2afb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2afba0: 0xffb300c0  sd          $s3, 0xC0($sp)
    ctx->pc = 0x2afba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 19));
    // 0x2afba4: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x2afba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x2afba8: 0xffb100a0  sd          $s1, 0xA0($sp)
    ctx->pc = 0x2afba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 17));
    // 0x2afbac: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x2afbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x2afbb0: 0x8f93b348  lw          $s3, -0x4CB8($gp)
    ctx->pc = 0x2afbb0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947656)));
    // 0x2afbb4: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x2afbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x2afbb8: 0xffbe0110  sd          $fp, 0x110($sp)
    ctx->pc = 0x2afbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 30));
    // 0x2afbbc: 0xffb70100  sd          $s7, 0x100($sp)
    ctx->pc = 0x2afbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 23));
    // 0x2afbc0: 0xffb600f0  sd          $s6, 0xF0($sp)
    ctx->pc = 0x2afbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 22));
    // 0x2afbc4: 0xffb500e0  sd          $s5, 0xE0($sp)
    ctx->pc = 0x2afbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 21));
    // 0x2afbc8: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x2AFBC8u;
    SET_GPR_U32(ctx, 31, 0x2AFBD0u);
    ctx->pc = 0x2AFBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFBC8u;
    // 0x2afbcc: 0xffb400d0  sd          $s4, 0xD0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x2AFBC8u, 0x2AFBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFBD0u;
label_2afbd0:
    // 0x2afbd0: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2afbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2afbd4: 0x8f85b230  lw          $a1, -0x4DD0($gp)
    ctx->pc = 0x2afbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2afbd8: 0x2462ec88  addiu       $v0, $v1, -0x1378
    ctx->pc = 0x2afbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962312));
    // 0x2afbdc: 0xc461ec88  lwc1        $f1, -0x1378($v1)
    ctx->pc = 0x2afbdcu;
    { uint32_t bits = FAST_READ32(0x36EC88u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2afbe0: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2afbe0u;
    { uint32_t bits = FAST_READ32(0x36EC90u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2afbe4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2afbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2afbe8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2afbe8u;
    { uint32_t bits = FAST_READ32(0x36EC8Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2afbec: 0x8cb206e0  lw          $s2, 0x6E0($a1)
    ctx->pc = 0x2afbecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1760)));
    // 0x2afbf0: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x2afbf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2afbf4: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2afbf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2afbf8: 0xc0807de  jal         func_201F78
    ctx->pc = 0x2AFBF8u;
    SET_GPR_U32(ctx, 31, 0x2AFC00u);
    ctx->pc = 0x2AFBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFBF8u;
    // 0x2afbfc: 0xe7a20088  swc1        $f2, 0x88($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x2AFBF8u, 0x2AFC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFC00u;
label_2afc00:
    // 0x2afc00: 0xc78cb370  lwc1        $f12, -0x4C90($gp)
    ctx->pc = 0x2afc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2afc04: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x2afc04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2afc08: 0xc7808f8c  lwc1        $f0, -0x7074($gp)
    ctx->pc = 0x2afc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2afc0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2afc0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afc10: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2afc10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2afc14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2afc14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2afc18: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x2afc18u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2afc1c: 0x0  nop
    ctx->pc = 0x2afc1cu;
    // NOP
    // 0x2afc20: 0x0  nop
    ctx->pc = 0x2afc20u;
    // NOP
    // 0x2afc24: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x2afc24u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x2afc28: 0xc0ad2ae  jal         func_2B4AB8
    ctx->pc = 0x2AFC28u;
    SET_GPR_U32(ctx, 31, 0x2AFC30u);
    ctx->pc = 0x2AFC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFC28u;
    // 0x2afc2c: 0xaf82b374  sw          $v0, -0x4C8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947700), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4AB8u, 0x2AFC28u, 0x2AFC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFC30u;
label_2afc30:
    // 0x2afc30: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x2afc30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2afc34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2afc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afc38: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x2AFC38u;
    SET_GPR_U32(ctx, 31, 0x2AFC40u);
    ctx->pc = 0x2AFC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFC38u;
    // 0x2afc3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x2AFC38u, 0x2AFC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFC40u;
label_2afc40:
    // 0x2afc40: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2afc40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2afc44: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2afc44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x2afc48: 0x8f84b374  lw          $a0, -0x4C8C($gp)
    ctx->pc = 0x2afc48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947700)));
    // 0x2afc4c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2afc4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afc50: 0x24a5f718  addiu       $a1, $a1, -0x8E8
    ctx->pc = 0x2afc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965016));
    // 0x2afc54: 0xc0ad482  jal         func_2B5208
    ctx->pc = 0x2AFC54u;
    SET_GPR_U32(ctx, 31, 0x2AFC5Cu);
    ctx->pc = 0x2AFC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFC54u;
    // 0x2afc58: 0x24c6f730  addiu       $a2, $a2, -0x8D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5208u, 0x2AFC54u, 0x2AFC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFC5Cu;
label_2afc5c:
    // 0x2afc5c: 0x8f86b374  lw          $a2, -0x4C8C($gp)
    ctx->pc = 0x2afc5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947700)));
    // 0x2afc60: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2afc60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afc64: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2AFC64u;
    SET_GPR_U32(ctx, 31, 0x2AFC6Cu);
    ctx->pc = 0x2AFC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFC64u;
    // 0x2afc68: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2AFC64u, 0x2AFC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFC6Cu;
label_2afc6c:
    // 0x2afc6c: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x2AFC6Cu;
    SET_GPR_U32(ctx, 31, 0x2AFC74u);
    ctx->pc = 0x2AFC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFC6Cu;
    // 0x2afc70: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x2AFC6Cu, 0x2AFC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFC74u;
label_2afc74:
    // 0x2afc74: 0x1260009a  beqz        $s3, . + 4 + (0x9A << 2)
    ctx->pc = 0x2AFC74u;
    {
        const bool branch_taken_0x2afc74 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFC74u;
        // 0x2afc78: 0xdfbf0120  ld          $ra, 0x120($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afc74) {
            ctx->pc = 0x2AFEE0u;
            goto label_2afee0;
        }
    }
    ctx->pc = 0x2AFC7Cu;
    // 0x2afc7c: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x2afc7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2afc80:
    // 0x2afc80: 0x26721200  addiu       $s2, $s3, 0x1200
    ctx->pc = 0x2afc80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4608));
    // 0x2afc84: 0x26710900  addiu       $s1, $s3, 0x900
    ctx->pc = 0x2afc84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 2304));
    // 0x2afc88: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x2afc88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2afc8c: 0x0  nop
    ctx->pc = 0x2afc8cu;
    // NOP
label_2afc90:
    // 0x2afc90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AFC90u;
    {
        const bool branch_taken_0x2afc90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2afc90) {
            ctx->pc = 0x2AFCA8u;
            goto label_2afca8;
        }
    }
    ctx->pc = 0x2AFC98u;
    // 0x2afc98: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x2AFC98u;
    SET_GPR_U32(ctx, 31, 0x2AFCA0u);
    ctx->pc = 0x2AFC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFC98u;
    // 0x2afc9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x2AFC98u, 0x2AFCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFCA0u;
label_2afca0:
    // 0x2afca0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2AFCA0u;
    {
        const bool branch_taken_0x2afca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFCA0u;
        // 0x2afca4: 0x24020300  addiu       $v0, $zero, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afca0) {
            ctx->pc = 0x2AFCB4u;
            goto label_2afcb4;
        }
    }
    ctx->pc = 0x2AFCA8u;
label_2afca8:
    // 0x2afca8: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x2AFCA8u;
    SET_GPR_U32(ctx, 31, 0x2AFCB0u);
    ctx->pc = 0x2AFCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFCA8u;
    // 0x2afcac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x2AFCA8u, 0x2AFCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFCB0u;
label_2afcb0:
    // 0x2afcb0: 0x24020300  addiu       $v0, $zero, 0x300
    ctx->pc = 0x2afcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
label_2afcb4:
    // 0x2afcb4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2afcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2afcb8: 0x2022018  mult        $a0, $s0, $v0
    ctx->pc = 0x2afcb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2afcbc: 0x24a5f6c8  addiu       $a1, $a1, -0x938
    ctx->pc = 0x2afcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964936));
    // 0x2afcc0: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x2afcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2afcc4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2afcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2afcc8: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x2afcc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2afccc: 0x2477f790  addiu       $s7, $v1, -0x870
    ctx->pc = 0x2afcccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965136));
    // 0x2afcd0: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2afcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2afcd4: 0x260fffff  addiu       $t7, $s0, -0x1
    ctx->pc = 0x2afcd4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2afcd8: 0x2475f7b0  addiu       $s5, $v1, -0x850
    ctx->pc = 0x2afcd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965168));
    // 0x2afcdc: 0x935021  addu        $t2, $a0, $s3
    ctx->pc = 0x2afcdcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2afce0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2afce0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afce4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2afce4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2afce8: 0x526021  addu        $t4, $v0, $s2
    ctx->pc = 0x2afce8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2afcec: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x2afcecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2afcf0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2afcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2afcf4: 0x240d0004  addiu       $t5, $zero, 0x4
    ctx->pc = 0x2afcf4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2afcf8: 0x457021  addu        $t6, $v0, $a1
    ctx->pc = 0x2afcf8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2afcfc: 0x24190008  addiu       $t9, $zero, 0x8
    ctx->pc = 0x2afcfcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2afd00: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2afd00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2afd04: 0x914821  addu        $t1, $a0, $s1
    ctx->pc = 0x2afd04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2afd08: 0x245ef750  addiu       $fp, $v0, -0x8B0
    ctx->pc = 0x2afd08u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965072));
    // 0x2afd0c: 0x2418ffff  addiu       $t8, $zero, -0x1
    ctx->pc = 0x2afd0cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2afd10: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2afd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2afd14: 0x24100028  addiu       $s0, $zero, 0x28
    ctx->pc = 0x2afd14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2afd18: 0x2456f7a0  addiu       $s6, $v0, -0x860
    ctx->pc = 0x2afd18u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965152));
    // 0x2afd1c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2afd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2afd20: 0x24540470  addiu       $s4, $v0, 0x470
    ctx->pc = 0x2afd20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1136));
    // 0x2afd24: 0x0  nop
    ctx->pc = 0x2afd24u;
    // NOP
label_2afd28:
    // 0x2afd28: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x2afd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2afd2c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2afd2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x2afd30: 0x24c6f760  addiu       $a2, $a2, -0x8A0
    ctx->pc = 0x2afd30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965088));
    // 0x2afd34: 0x29650002  slti        $a1, $t3, 0x2
    ctx->pc = 0x2afd34u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2afd38: 0xa0670003  sb          $a3, 0x3($v1)
    ctx->pc = 0x2afd38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x2afd3c: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2afd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2afd40: 0x8f84b374  lw          $a0, -0x4C8C($gp)
    ctx->pc = 0x2afd40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947700)));
    // 0x2afd44: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2afd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2afd48: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x2afd48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x2afd4c: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x2afd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x2afd50: 0xa4480000  sh          $t0, 0x0($v0)
    ctx->pc = 0x2afd50u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x2afd54: 0xa0670003  sb          $a3, 0x3($v1)
    ctx->pc = 0x2afd54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x2afd58: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2afd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2afd5c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2afd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2afd60: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x2afd60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x2afd64: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x2afd64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x2afd68: 0xa44d0000  sh          $t5, 0x0($v0)
    ctx->pc = 0x2afd68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x2afd6c: 0xa0670003  sb          $a3, 0x3($v1)
    ctx->pc = 0x2afd6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x2afd70: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2afd70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2afd74: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2afd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2afd78: 0x2463f770  addiu       $v1, $v1, -0x890
    ctx->pc = 0x2afd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965104));
    // 0x2afd7c: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x2afd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2afd80: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2afd80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2afd84: 0xa4480000  sh          $t0, 0x0($v0)
    ctx->pc = 0x2afd84u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x2afd88: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x2AFD88u;
    {
        const bool branch_taken_0x2afd88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFD88u;
        // 0x2afd8c: 0xaf8693a0  sw          $a2, -0x6C60($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afd88) {
            ctx->pc = 0x2AFDC8u;
            goto label_2afdc8;
        }
    }
    ctx->pc = 0x2AFD90u;
    // 0x2afd90: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x2afd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x2afd94: 0x8f85b498  lw          $a1, -0x4B68($gp)
    ctx->pc = 0x2afd94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
    // 0x2afd98: 0x302182a  slt         $v1, $t8, $v0
    ctx->pc = 0x2afd98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2afd9c: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x2afd9cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2afda0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2afda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2afda4: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x2afda4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2afda8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2afda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2afdac: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x2afdacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2afdb0: 0xa0c70003  sb          $a3, 0x3($a2)
    ctx->pc = 0x2afdb0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x2afdb4: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2afdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2afdb8: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2afdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2afdbc: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x2afdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x2afdc0: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x2afdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x2afdc4: 0xa4590000  sh          $t9, 0x0($v0)
    ctx->pc = 0x2afdc4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 25));
label_2afdc8:
    // 0x2afdc8: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x2afdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2afdcc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2afdccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2afdd0: 0x24a5f780  addiu       $a1, $a1, -0x880
    ctx->pc = 0x2afdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965120));
    // 0x2afdd4: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x2afdd4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x2afdd8: 0xa0670003  sb          $a3, 0x3($v1)
    ctx->pc = 0x2afdd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x2afddc: 0x2964000c  slti        $a0, $t3, 0xC
    ctx->pc = 0x2afddcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2afde0: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2afde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2afde4: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2afde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2afde8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x2afde8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x2afdec: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x2afdecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x2afdf0: 0xa4480000  sh          $t0, 0x0($v0)
    ctx->pc = 0x2afdf0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x2afdf4: 0xa0670003  sb          $a3, 0x3($v1)
    ctx->pc = 0x2afdf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x2afdf8: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2afdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2afdfc: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2afdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2afe00: 0xac5e0004  sw          $fp, 0x4($v0)
    ctx->pc = 0x2afe00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 30));
    // 0x2afe04: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x2afe04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x2afe08: 0xa4480000  sh          $t0, 0x0($v0)
    ctx->pc = 0x2afe08u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x2afe0c: 0xa0670003  sb          $a3, 0x3($v1)
    ctx->pc = 0x2afe0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x2afe10: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2afe10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2afe14: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2afe14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2afe18: 0xac570004  sw          $s7, 0x4($v0)
    ctx->pc = 0x2afe18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 23));
    // 0x2afe1c: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x2afe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x2afe20: 0xa4480000  sh          $t0, 0x0($v0)
    ctx->pc = 0x2afe20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x2afe24: 0xa0670003  sb          $a3, 0x3($v1)
    ctx->pc = 0x2afe24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x2afe28: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2afe28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2afe2c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2afe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2afe30: 0xac4a0004  sw          $t2, 0x4($v0)
    ctx->pc = 0x2afe30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 10));
    // 0x2afe34: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x2afe34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x2afe38: 0x254a0040  addiu       $t2, $t2, 0x40
    ctx->pc = 0x2afe38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 64));
    // 0x2afe3c: 0xa44d0000  sh          $t5, 0x0($v0)
    ctx->pc = 0x2afe3cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x2afe40: 0xa0670003  sb          $a3, 0x3($v1)
    ctx->pc = 0x2afe40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x2afe44: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2afe44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2afe48: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2afe48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2afe4c: 0xac560004  sw          $s6, 0x4($v0)
    ctx->pc = 0x2afe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 22));
    // 0x2afe50: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x2afe50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x2afe54: 0xa4480000  sh          $t0, 0x0($v0)
    ctx->pc = 0x2afe54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x2afe58: 0xa0670003  sb          $a3, 0x3($v1)
    ctx->pc = 0x2afe58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x2afe5c: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2afe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2afe60: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2afe60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2afe64: 0xac490004  sw          $t1, 0x4($v0)
    ctx->pc = 0x2afe64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 9));
    // 0x2afe68: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x2afe68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x2afe6c: 0x25290040  addiu       $t1, $t1, 0x40
    ctx->pc = 0x2afe6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
    // 0x2afe70: 0xa44d0000  sh          $t5, 0x0($v0)
    ctx->pc = 0x2afe70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x2afe74: 0xa0670003  sb          $a3, 0x3($v1)
    ctx->pc = 0x2afe74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x2afe78: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2afe78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2afe7c: 0xac550004  sw          $s5, 0x4($v0)
    ctx->pc = 0x2afe7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 21));
    // 0x2afe80: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2afe80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2afe84: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x2afe84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x2afe88: 0xa4480000  sh          $t0, 0x0($v0)
    ctx->pc = 0x2afe88u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x2afe8c: 0xa0670003  sb          $a3, 0x3($v1)
    ctx->pc = 0x2afe8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x2afe90: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2afe90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2afe94: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2afe94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2afe98: 0xac4c0004  sw          $t4, 0x4($v0)
    ctx->pc = 0x2afe98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 12));
    // 0x2afe9c: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x2afe9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x2afea0: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x2afea0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x2afea4: 0xa4480000  sh          $t0, 0x0($v0)
    ctx->pc = 0x2afea4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x2afea8: 0xa0670003  sb          $a3, 0x3($v1)
    ctx->pc = 0x2afea8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x2afeac: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2afeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2afeb0: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2afeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2afeb4: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x2afeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x2afeb8: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x2afeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x2afebc: 0x1480ff9a  bnez        $a0, . + 4 + (-0x66 << 2)
    ctx->pc = 0x2AFEBCu;
    {
        const bool branch_taken_0x2afebc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AFEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFEBCu;
        // 0x2afec0: 0xa4480000  sh          $t0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afebc) {
            ctx->pc = 0x2AFD28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2afd28;
        }
    }
    ctx->pc = 0x2AFEC4u;
    // 0x2afec4: 0x1e0802d  daddu       $s0, $t7, $zero
    ctx->pc = 0x2afec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afec8: 0x603ff71  bgezl       $s0, . + 4 + (-0x8F << 2)
    ctx->pc = 0x2AFEC8u;
    {
        const bool branch_taken_0x2afec8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2afec8) {
            ctx->pc = 0x2AFECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFEC8u;
            // 0x2afecc: 0x2e020002  sltiu       $v0, $s0, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFC90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2afc90;
        }
    }
    ctx->pc = 0x2AFED0u;
    // 0x2afed0: 0x8e731440  lw          $s3, 0x1440($s3)
    ctx->pc = 0x2afed0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5184)));
    // 0x2afed4: 0x1660ff6a  bnez        $s3, . + 4 + (-0x96 << 2)
    ctx->pc = 0x2AFED4u;
    {
        const bool branch_taken_0x2afed4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AFED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFED4u;
        // 0x2afed8: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afed4) {
            ctx->pc = 0x2AFC80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2afc80;
        }
    }
    ctx->pc = 0x2AFEDCu;
    // 0x2afedc: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x2afedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_2afee0:
    // 0x2afee0: 0xdfbe0110  ld          $fp, 0x110($sp)
    ctx->pc = 0x2afee0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2afee4: 0xdfb70100  ld          $s7, 0x100($sp)
    ctx->pc = 0x2afee4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2afee8: 0xdfb600f0  ld          $s6, 0xF0($sp)
    ctx->pc = 0x2afee8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2afeec: 0xdfb500e0  ld          $s5, 0xE0($sp)
    ctx->pc = 0x2afeecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2afef0: 0xdfb400d0  ld          $s4, 0xD0($sp)
    ctx->pc = 0x2afef0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2afef4: 0xdfb300c0  ld          $s3, 0xC0($sp)
    ctx->pc = 0x2afef4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2afef8: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x2afef8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2afefc: 0xdfb100a0  ld          $s1, 0xA0($sp)
    ctx->pc = 0x2afefcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2aff00: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x2aff00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aff04: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AFF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF04u;
        // 0x2aff08: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFF04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AFF0Cu;
}
