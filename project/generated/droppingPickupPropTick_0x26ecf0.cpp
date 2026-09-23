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

// Function: droppingPickupPropTick
// Address: 0x26ecf0 - 0x26eee4
void droppingPickupPropTick_0x26ecf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("droppingPickupPropTick_0x26ecf0");
#endif

    switch (ctx->pc) {
        case 0x26ed68u: goto label_26ed68;
        case 0x26ede4u: goto label_26ede4;
        default: break;
    }

    ctx->pc = 0x26ecf0u;

    // 0x26ecf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26ecf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26ecf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26ecf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26ecf8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26ecf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26ecfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26ecfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ed00: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x26ed00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x26ed04: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x26ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x26ed08: 0x14400071  bnez        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x26ED08u;
    {
        const bool branch_taken_0x26ed08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26ED0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED08u;
        // 0x26ed0c: 0x8e110160  lw          $s1, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ed08) {
            ctx->pc = 0x26EED0u;
            goto label_26eed0;
        }
    }
    ctx->pc = 0x26ED10u;
    // 0x26ed10: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x26ed10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x26ed14: 0x1440006f  bnez        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x26ED14u;
    {
        const bool branch_taken_0x26ed14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26ED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED14u;
        // 0x26ed18: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ed14) {
            ctx->pc = 0x26EED4u;
            goto label_26eed4;
        }
    }
    ctx->pc = 0x26ED1Cu;
    // 0x26ed1c: 0x1220006d  beqz        $s1, . + 4 + (0x6D << 2)
    ctx->pc = 0x26ED1Cu;
    {
        const bool branch_taken_0x26ed1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED1Cu;
        // 0x26ed20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ed1c) {
            ctx->pc = 0x26EED4u;
            goto label_26eed4;
        }
    }
    ctx->pc = 0x26ED24u;
    // 0x26ed24: 0x8e240044  lw          $a0, 0x44($s1)
    ctx->pc = 0x26ed24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x26ed28: 0x5482006b  bnel        $a0, $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x26ED28u;
    {
        const bool branch_taken_0x26ed28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x26ed28) {
            ctx->pc = 0x26ED2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26ED28u;
            // 0x26ed2c: 0xdfb10010  ld          $s1, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26EED8u;
            goto label_26eed8;
        }
    }
    ctx->pc = 0x26ED30u;
    // 0x26ed30: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x26ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x26ed34: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x26ed34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26ed38: 0x10600066  beqz        $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x26ED38u;
    {
        const bool branch_taken_0x26ed38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED38u;
        // 0x26ed3c: 0x8f83b460  lw          $v1, -0x4BA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ed38) {
            ctx->pc = 0x26EED4u;
            goto label_26eed4;
        }
    }
    ctx->pc = 0x26ED40u;
    // 0x26ed40: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x26ed40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x26ed44: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x26ed44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26ed48: 0x1c400042  bgtz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x26ED48u;
    {
        const bool branch_taken_0x26ed48 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x26ED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED48u;
        // 0x26ed4c: 0xae22004c  sw          $v0, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ed48) {
            ctx->pc = 0x26EE54u;
            goto label_26ee54;
        }
    }
    ctx->pc = 0x26ED50u;
    // 0x26ed50: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x26ed50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26ed54: 0x14640012  bne         $v1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26ED54u;
    {
        const bool branch_taken_0x26ed54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x26ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED54u;
        // 0x26ed58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ed54) {
            ctx->pc = 0x26EDA0u;
            goto label_26eda0;
        }
    }
    ctx->pc = 0x26ED5Cu;
    // 0x26ed5c: 0x240400c4  addiu       $a0, $zero, 0xC4
    ctx->pc = 0x26ed5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
    // 0x26ed60: 0xc081546  jal         func_205518
    ctx->pc = 0x26ED60u;
    SET_GPR_U32(ctx, 31, 0x26ED68u);
    ctx->pc = 0x26ED64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ED60u;
    // 0x26ed64: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x26ED60u, 0x26ED68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ED68u;
label_26ed68:
    // 0x26ed68: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x26ed68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x26ed6c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26ed6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26ed70: 0x8c62c4f0  lw          $v0, -0x3B10($v1)
    ctx->pc = 0x26ed70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x26ed74: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26ED74u;
    {
        const bool branch_taken_0x26ed74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x26ED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED74u;
        // 0x26ed78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ed74) {
            ctx->pc = 0x26ED88u;
            goto label_26ed88;
        }
    }
    ctx->pc = 0x26ED7Cu;
    // 0x26ed7c: 0x240302d0  addiu       $v1, $zero, 0x2D0
    ctx->pc = 0x26ed7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
    // 0x26ed80: 0xae0201e8  sw          $v0, 0x1E8($s0)
    ctx->pc = 0x26ed80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 488), GPR_U32(ctx, 2));
    // 0x26ed84: 0xae0301ec  sw          $v1, 0x1EC($s0)
    ctx->pc = 0x26ed84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 3));
label_26ed88:
    // 0x26ed88: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x26ed88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x26ed8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26ed8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ed90: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x26ed90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x26ed94: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x26ed94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x26ed98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26ED98u;
    {
        const bool branch_taken_0x26ed98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED98u;
        // 0x26ed9c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ed98) {
            ctx->pc = 0x26EDB0u;
            goto label_26edb0;
        }
    }
    ctx->pc = 0x26EDA0u;
label_26eda0:
    // 0x26eda0: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26EDA0u;
    {
        const bool branch_taken_0x26eda0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26eda0) {
            ctx->pc = 0x26EDA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26EDA0u;
            // 0x26eda4: 0xc6200034  lwc1        $f0, 0x34($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26EDB4u;
            goto label_26edb4;
        }
    }
    ctx->pc = 0x26EDA8u;
    // 0x26eda8: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x26eda8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x26edac: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x26edacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_26edb0:
    // 0x26edb0: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x26edb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26edb4:
    // 0x26edb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26edb8: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x26edb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x26edbc: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x26edbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x26edc0: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x26edc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x26edc4: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x26edc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26edc8: 0xae240024  sw          $a0, 0x24($s1)
    ctx->pc = 0x26edc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 4));
    // 0x26edcc: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x26edccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x26edd0: 0xc620003c  lwc1        $f0, 0x3C($s1)
    ctx->pc = 0x26edd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26edd4: 0x1462003e  bne         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x26EDD4u;
    {
        const bool branch_taken_0x26edd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26EDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EDD4u;
        // 0x26edd8: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26edd4) {
            ctx->pc = 0x26EED0u;
            goto label_26eed0;
        }
    }
    ctx->pc = 0x26EDDCu;
    // 0x26eddc: 0xc0b3678  jal         func_2CD9E0
    ctx->pc = 0x26EDDCu;
    SET_GPR_U32(ctx, 31, 0x26EDE4u);
    ctx->pc = 0x2CD9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD9E0u, 0x26EDDCu, 0x26EDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EDE4u;
label_26ede4:
    // 0x26ede4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26ede4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ede8: 0x10c0003a  beqz        $a2, . + 4 + (0x3A << 2)
    ctx->pc = 0x26EDE8u;
    {
        const bool branch_taken_0x26ede8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EDE8u;
        // 0x26edec: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ede8) {
            ctx->pc = 0x26EED4u;
            goto label_26eed4;
        }
    }
    ctx->pc = 0x26EDF0u;
    // 0x26edf0: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x26edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x26edf4: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26EDF4u;
    {
        const bool branch_taken_0x26edf4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26EDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EDF4u;
        // 0x26edf8: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26edf4) {
            ctx->pc = 0x26EE1Cu;
            goto label_26ee1c;
        }
    }
    ctx->pc = 0x26EDFCu;
    // 0x26edfc: 0x8f85a2ec  lw          $a1, -0x5D14($gp)
    ctx->pc = 0x26edfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x26ee00: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x26ee00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x26ee04: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x26ee04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x26ee08: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26ee08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26ee0c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x26ee0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x26ee10: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x26ee10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26ee14: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26ee14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26ee18: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x26ee18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_26ee1c:
    // 0x26ee1c: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x26ee1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x26ee20: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x26ee20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x26ee24: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x26ee24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26ee28: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x26ee28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x26ee2c: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x26ee2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x26ee30: 0x8f87b238  lw          $a3, -0x4DC8($gp)
    ctx->pc = 0x26ee30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x26ee34: 0xae230040  sw          $v1, 0x40($s1)
    ctx->pc = 0x26ee34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
    // 0x26ee38: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26ee38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ee3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26ee3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26ee40: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26ee40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ee44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26ee44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ee48: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x26ee48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x26ee4c: 0x809ac3c  j           func_26B0F0
    ctx->pc = 0x26EE4Cu;
    ctx->pc = 0x26EE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EE4Cu;
    // 0x26ee50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B0F0u;
    propDropBagOnDrop_0x26b0f0(rdram, ctx, runtime); return;
    ctx->pc = 0x26EE54u;
label_26ee54:
    // 0x26ee54: 0xc786b468  lwc1        $f6, -0x4B98($gp)
    ctx->pc = 0x26ee54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x26ee58: 0xc602003c  lwc1        $f2, 0x3C($s0)
    ctx->pc = 0x26ee58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26ee5c: 0xc6030040  lwc1        $f3, 0x40($s0)
    ctx->pc = 0x26ee5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26ee60: 0xc6050044  lwc1        $f5, 0x44($s0)
    ctx->pc = 0x26ee60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x26ee64: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x26ee64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x26ee68: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x26ee68u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x26ee6c: 0xc6040030  lwc1        $f4, 0x30($s0)
    ctx->pc = 0x26ee6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26ee70: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x26ee70u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x26ee74: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x26ee74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ee78: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x26ee78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ee7c: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x26ee7cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x26ee80: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x26ee80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x26ee84: 0xc6020048  lwc1        $f2, 0x48($s0)
    ctx->pc = 0x26ee84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26ee88: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x26ee88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x26ee8c: 0xc603004c  lwc1        $f3, 0x4C($s0)
    ctx->pc = 0x26ee8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26ee90: 0xe6040030  swc1        $f4, 0x30($s0)
    ctx->pc = 0x26ee90u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x26ee94: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x26ee94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x26ee98: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x26ee98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x26ee9c: 0xc6040058  lwc1        $f4, 0x58($s0)
    ctx->pc = 0x26ee9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26eea0: 0xc6200050  lwc1        $f0, 0x50($s1)
    ctx->pc = 0x26eea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26eea4: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x26eea4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x26eea8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x26eea8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x26eeac: 0xe6020048  swc1        $f2, 0x48($s0)
    ctx->pc = 0x26eeacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x26eeb0: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x26eeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26eeb4: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x26eeb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x26eeb8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x26eeb8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x26eebc: 0xe603004c  swc1        $f3, 0x4C($s0)
    ctx->pc = 0x26eebcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x26eec0: 0xc6200058  lwc1        $f0, 0x58($s1)
    ctx->pc = 0x26eec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26eec4: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x26eec4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x26eec8: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x26eec8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x26eecc: 0xe6040058  swc1        $f4, 0x58($s0)
    ctx->pc = 0x26eeccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_26eed0:
    // 0x26eed0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26eed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26eed4:
    // 0x26eed4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26eed4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26eed8:
    // 0x26eed8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26eed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26eedc: 0x3e00008  jr          $ra
    ctx->pc = 0x26EEDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EEDCu;
        // 0x26eee0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EEDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26EEE4u;
}
