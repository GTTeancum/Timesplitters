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

// Function: enemyGunUpdate
// Address: 0x2bfd78 - 0x2c03dc
void enemyGunUpdate_0x2bfd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyGunUpdate_0x2bfd78");
#endif

    switch (ctx->pc) {
        case 0x2bfdbcu: goto label_2bfdbc;
        case 0x2bfdc8u: goto label_2bfdc8;
        case 0x2bfdd4u: goto label_2bfdd4;
        case 0x2bfde0u: goto label_2bfde0;
        case 0x2bfde8u: goto label_2bfde8;
        case 0x2bfdf8u: goto label_2bfdf8;
        case 0x2bff5cu: goto label_2bff5c;
        case 0x2c006cu: goto label_2c006c;
        case 0x2c007cu: goto label_2c007c;
        case 0x2c008cu: goto label_2c008c;
        case 0x2c00a0u: goto label_2c00a0;
        case 0x2c00b0u: goto label_2c00b0;
        case 0x2c00c0u: goto label_2c00c0;
        case 0x2c00d0u: goto label_2c00d0;
        case 0x2c00e4u: goto label_2c00e4;
        case 0x2c00f8u: goto label_2c00f8;
        case 0x2c010cu: goto label_2c010c;
        case 0x2c015cu: goto label_2c015c;
        case 0x2c01b4u: goto label_2c01b4;
        case 0x2c01ccu: goto label_2c01cc;
        case 0x2c0230u: goto label_2c0230;
        case 0x2c0288u: goto label_2c0288;
        case 0x2c02a0u: goto label_2c02a0;
        case 0x2c02b8u: goto label_2c02b8;
        case 0x2c034cu: goto label_2c034c;
        case 0x2c03a4u: goto label_2c03a4;
        case 0x2c03bcu: goto label_2c03bc;
        default: break;
    }

    ctx->pc = 0x2bfd78u;

    // 0x2bfd78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2bfd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2bfd7c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2bfd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2bfd80: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2bfd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2bfd84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bfd84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfd88: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2bfd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2bfd8c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2bfd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2bfd90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bfd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bfd94: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bfd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bfd98: 0x8e510160  lw          $s1, 0x160($s2)
    ctx->pc = 0x2bfd98u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x2bfd9c: 0x8e220a9c  lw          $v0, 0xA9C($s1)
    ctx->pc = 0x2bfd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2716)));
    // 0x2bfda0: 0x10400186  beqz        $v0, . + 4 + (0x186 << 2)
    ctx->pc = 0x2BFDA0u;
    {
        const bool branch_taken_0x2bfda0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFDA0u;
        // 0x2bfda4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfda0) {
            ctx->pc = 0x2C03BCu;
            goto label_2c03bc;
        }
    }
    ctx->pc = 0x2BFDA8u;
    // 0x2bfda8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2bfda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2bfdac: 0x10620184  beq         $v1, $v0, . + 4 + (0x184 << 2)
    ctx->pc = 0x2BFDACu;
    {
        const bool branch_taken_0x2bfdac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BFDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFDACu;
        // 0x2bfdb0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfdac) {
            ctx->pc = 0x2C03C0u;
            goto label_2c03c0;
        }
    }
    ctx->pc = 0x2BFDB4u;
    // 0x2bfdb4: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2BFDB4u;
    SET_GPR_U32(ctx, 31, 0x2BFDBCu);
    ctx->pc = 0x2BFDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFDB4u;
    // 0x2bfdb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2BFDB4u, 0x2BFDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFDBCu;
label_2bfdbc:
    // 0x2bfdbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bfdbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfdc0: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2BFDC0u;
    SET_GPR_U32(ctx, 31, 0x2BFDC8u);
    ctx->pc = 0x2BFDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFDC0u;
    // 0x2bfdc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2BFDC0u, 0x2BFDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFDC8u;
label_2bfdc8:
    // 0x2bfdc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bfdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfdcc: 0xc0a514a  jal         func_294528
    ctx->pc = 0x2BFDCCu;
    SET_GPR_U32(ctx, 31, 0x2BFDD4u);
    ctx->pc = 0x2BFDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFDCCu;
    // 0x2bfdd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294528u, 0x2BFDCCu, 0x2BFDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFDD4u;
label_2bfdd4:
    // 0x2bfdd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bfdd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfdd8: 0xc0a514a  jal         func_294528
    ctx->pc = 0x2BFDD8u;
    SET_GPR_U32(ctx, 31, 0x2BFDE0u);
    ctx->pc = 0x2BFDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFDD8u;
    // 0x2bfddc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294528u, 0x2BFDD8u, 0x2BFDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFDE0u;
label_2bfde0:
    // 0x2bfde0: 0xc0a5422  jal         func_295088
    ctx->pc = 0x2BFDE0u;
    SET_GPR_U32(ctx, 31, 0x2BFDE8u);
    ctx->pc = 0x2BFDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFDE0u;
    // 0x2bfde4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295088u, 0x2BFDE0u, 0x2BFDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFDE8u;
label_2bfde8:
    // 0x2bfde8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BFDE8u;
    {
        const bool branch_taken_0x2bfde8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfde8) {
            ctx->pc = 0x2BFDECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFDE8u;
            // 0x2bfdec: 0x8e270ae4  lw          $a3, 0xAE4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFDFCu;
            goto label_2bfdfc;
        }
    }
    ctx->pc = 0x2BFDF0u;
    // 0x2bfdf0: 0xc0b00f8  jal         func_2C03E0
    ctx->pc = 0x2BFDF0u;
    SET_GPR_U32(ctx, 31, 0x2BFDF8u);
    ctx->pc = 0x2BFDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFDF0u;
    // 0x2bfdf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C03E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C03E0u, 0x2BFDF0u, 0x2BFDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFDF8u;
label_2bfdf8:
    // 0x2bfdf8: 0x8e270ae4  lw          $a3, 0xAE4($s1)
    ctx->pc = 0x2bfdf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
label_2bfdfc:
    // 0x2bfdfc: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BFDFCu;
    {
        const bool branch_taken_0x2bfdfc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFDFCu;
        // 0x2bfe00: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfdfc) {
            ctx->pc = 0x2BFE24u;
            goto label_2bfe24;
        }
    }
    ctx->pc = 0x2BFE04u;
    // 0x2bfe04: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x2bfe04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2bfe08: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2bfe08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2bfe0c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BFE0Cu;
    {
        const bool branch_taken_0x2bfe0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bfe0c) {
            ctx->pc = 0x2BFE10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFE0Cu;
            // 0x2bfe10: 0x8e2201bc  lw          $v0, 0x1BC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFE28u;
            goto label_2bfe28;
        }
    }
    ctx->pc = 0x2BFE14u;
    // 0x2bfe14: 0x8e230a90  lw          $v1, 0xA90($s1)
    ctx->pc = 0x2bfe14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2bfe18: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2bfe18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2bfe1c: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x2BFE1Cu;
    {
        const bool branch_taken_0x2bfe1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFE1Cu;
        // 0x2bfe20: 0x3442fff9  ori         $v0, $v0, 0xFFF9 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65529);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfe1c) {
            ctx->pc = 0x2C01ECu;
            goto label_2c01ec;
        }
    }
    ctx->pc = 0x2BFE24u;
label_2bfe24:
    // 0x2bfe24: 0x8e2201bc  lw          $v0, 0x1BC($s1)
    ctx->pc = 0x2bfe24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
label_2bfe28:
    // 0x2bfe28: 0x8f84b460  lw          $a0, -0x4BA0($gp)
    ctx->pc = 0x2bfe28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x2bfe2c: 0x8e23014c  lw          $v1, 0x14C($s1)
    ctx->pc = 0x2bfe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x2bfe30: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2bfe30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2bfe34: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BFE34u;
    {
        const bool branch_taken_0x2bfe34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFE34u;
        // 0x2bfe38: 0xae2201bc  sw          $v0, 0x1BC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 444), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfe34) {
            ctx->pc = 0x2BFE48u;
            goto label_2bfe48;
        }
    }
    ctx->pc = 0x2BFE3Cu;
    // 0x2bfe3c: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x2bfe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x2bfe40: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2bfe40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2bfe44: 0xae220150  sw          $v0, 0x150($s1)
    ctx->pc = 0x2bfe44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 2));
label_2bfe48:
    // 0x2bfe48: 0x8e260a90  lw          $a2, 0xA90($s1)
    ctx->pc = 0x2bfe48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2bfe4c: 0x30c20004  andi        $v0, $a2, 0x4
    ctx->pc = 0x2bfe4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x2bfe50: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2BFE50u;
    {
        const bool branch_taken_0x2bfe50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFE50u;
        // 0x2bfe54: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfe50) {
            ctx->pc = 0x2BFEB0u;
            goto label_2bfeb0;
        }
    }
    ctx->pc = 0x2BFE58u;
    // 0x2bfe58: 0x8e250178  lw          $a1, 0x178($s1)
    ctx->pc = 0x2bfe58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
    // 0x2bfe5c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2bfe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2bfe60: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2bfe60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2bfe64: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x2bfe64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2bfe68: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x2bfe68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x2bfe6c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x2bfe6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2bfe70: 0x24840920  addiu       $a0, $a0, 0x920
    ctx->pc = 0x2bfe70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2336));
    // 0x2bfe74: 0xae220a90  sw          $v0, 0xA90($s1)
    ctx->pc = 0x2bfe74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2704), GPR_U32(ctx, 2));
    // 0x2bfe78: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2bfe78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x2bfe7c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2bfe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bfe80: 0x2463c4a8  addiu       $v1, $v1, -0x3B58
    ctx->pc = 0x2bfe80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952104));
    // 0x2bfe84: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2bfe84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2bfe88: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2bfe88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2bfe8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2bfe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bfe90: 0xae240bbc  sw          $a0, 0xBBC($s1)
    ctx->pc = 0x2bfe90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3004), GPR_U32(ctx, 4));
    // 0x2bfe94: 0x90620031  lbu         $v0, 0x31($v1)
    ctx->pc = 0x2bfe94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 49)));
    // 0x2bfe98: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BFE98u;
    {
        const bool branch_taken_0x2bfe98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bfe98) {
            ctx->pc = 0x2BFE9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFE98u;
            // 0x2bfe9c: 0x8e220ad4  lw          $v0, 0xAD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFEB4u;
            goto label_2bfeb4;
        }
    }
    ctx->pc = 0x2BFEA0u;
    // 0x2bfea0: 0x417c2  srl         $v0, $a0, 31
    ctx->pc = 0x2bfea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2bfea4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2bfea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2bfea8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2bfea8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2bfeac: 0xae220bbc  sw          $v0, 0xBBC($s1)
    ctx->pc = 0x2bfeacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3004), GPR_U32(ctx, 2));
label_2bfeb0:
    // 0x2bfeb0: 0x8e220ad4  lw          $v0, 0xAD4($s1)
    ctx->pc = 0x2bfeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
label_2bfeb4:
    // 0x2bfeb4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BFEB4u;
    {
        const bool branch_taken_0x2bfeb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BFEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFEB4u;
        // 0x2bfeb8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfeb4) {
            ctx->pc = 0x2BFED4u;
            goto label_2bfed4;
        }
    }
    ctx->pc = 0x2BFEBCu;
    // 0x2bfebc: 0x8e230a9c  lw          $v1, 0xA9C($s1)
    ctx->pc = 0x2bfebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2716)));
    // 0x2bfec0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2bfec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2bfec4: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x2bfec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x2bfec8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2bfec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2bfecc: 0x106000c3  beqz        $v1, . + 4 + (0xC3 << 2)
    ctx->pc = 0x2BFECCu;
    {
        const bool branch_taken_0x2bfecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFECCu;
        // 0x2bfed0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfecc) {
            ctx->pc = 0x2C01DCu;
            goto label_2c01dc;
        }
    }
    ctx->pc = 0x2BFED4u;
label_2bfed4:
    // 0x2bfed4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2bfed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2bfed8: 0x8c43c4f0  lw          $v1, -0x3B10($v0)
    ctx->pc = 0x2bfed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952176)));
    // 0x2bfedc: 0x50640048  beql        $v1, $a0, . + 4 + (0x48 << 2)
    ctx->pc = 0x2BFEDCu;
    {
        const bool branch_taken_0x2bfedc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2bfedc) {
            ctx->pc = 0x2BFEE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFEDCu;
            // 0x2bfee0: 0x8e450020  lw          $a1, 0x20($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0000u;
            goto label_2c0000;
        }
    }
    ctx->pc = 0x2BFEE4u;
    // 0x2bfee4: 0x8e220a90  lw          $v0, 0xA90($s1)
    ctx->pc = 0x2bfee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2bfee8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2bfee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2bfeec: 0x50400044  beql        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x2BFEECu;
    {
        const bool branch_taken_0x2bfeec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfeec) {
            ctx->pc = 0x2BFEF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFEECu;
            // 0x2bfef0: 0x8e450020  lw          $a1, 0x20($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0000u;
            goto label_2c0000;
        }
    }
    ctx->pc = 0x2BFEF4u;
    // 0x2bfef4: 0x8e2601b8  lw          $a2, 0x1B8($s1)
    ctx->pc = 0x2bfef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x2bfef8: 0x50c00041  beql        $a2, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x2BFEF8u;
    {
        const bool branch_taken_0x2bfef8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfef8) {
            ctx->pc = 0x2BFEFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFEF8u;
            // 0x2bfefc: 0x8e450020  lw          $a1, 0x20($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0000u;
            goto label_2c0000;
        }
    }
    ctx->pc = 0x2BFF00u;
    // 0x2bff00: 0x1100003e  beqz        $t0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2BFF00u;
    {
        const bool branch_taken_0x2bff00 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF00u;
        // 0x2bff04: 0x3c030f00  lui         $v1, 0xF00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3840 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bff00) {
            ctx->pc = 0x2BFFFCu;
            goto label_2bfffc;
        }
    }
    ctx->pc = 0x2BFF08u;
    // 0x2bff08: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2bff08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2bff0c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2bff0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2bff10: 0x5440003b  bnel        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x2BFF10u;
    {
        const bool branch_taken_0x2bff10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bff10) {
            ctx->pc = 0x2BFF14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFF10u;
            // 0x2bff14: 0x8e450020  lw          $a1, 0x20($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0000u;
            goto label_2c0000;
        }
    }
    ctx->pc = 0x2BFF18u;
    // 0x2bff18: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x2bff18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2bff1c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2bff1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2bff20: 0x54400037  bnel        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x2BFF20u;
    {
        const bool branch_taken_0x2bff20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bff20) {
            ctx->pc = 0x2BFF24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFF20u;
            // 0x2bff24: 0x8e450020  lw          $a1, 0x20($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0000u;
            goto label_2c0000;
        }
    }
    ctx->pc = 0x2BFF28u;
    // 0x2bff28: 0x8e240178  lw          $a0, 0x178($s1)
    ctx->pc = 0x2bff28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
    // 0x2bff2c: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x2bff2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x2bff30: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2bff30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x2bff34: 0x8e2501bc  lw          $a1, 0x1BC($s1)
    ctx->pc = 0x2bff34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
    // 0x2bff38: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x2bff38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2bff3c: 0x24426218  addiu       $v0, $v0, 0x6218
    ctx->pc = 0x2bff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25112));
    // 0x2bff40: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2bff40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2bff44: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2bff44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2bff48: 0xa3282a  slt         $a1, $a1, $v1
    ctx->pc = 0x2bff48u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2bff4c: 0x14a0011c  bnez        $a1, . + 4 + (0x11C << 2)
    ctx->pc = 0x2BFF4Cu;
    {
        const bool branch_taken_0x2bff4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BFF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF4Cu;
        // 0x2bff50: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bff4c) {
            ctx->pc = 0x2C03C0u;
            goto label_2c03c0;
        }
    }
    ctx->pc = 0x2BFF54u;
    // 0x2bff54: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2BFF54u;
    SET_GPR_U32(ctx, 31, 0x2BFF5Cu);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2BFF54u, 0x2BFF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFF5Cu;
label_2bff5c:
    // 0x2bff5c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BFF5Cu;
    {
        const bool branch_taken_0x2bff5c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BFF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF5Cu;
        // 0x2bff60: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bff5c) {
            ctx->pc = 0x2BFF70u;
            goto label_2bff70;
        }
    }
    ctx->pc = 0x2BFF64u;
    // 0x2bff64: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bff64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bff68: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BFF68u;
    {
        const bool branch_taken_0x2bff68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF68u;
        // 0x2bff6c: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bff68) {
            ctx->pc = 0x2BFF84u;
            goto label_2bff84;
        }
    }
    ctx->pc = 0x2BFF70u;
label_2bff70:
    // 0x2bff70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bff70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bff74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bff74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2bff78: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bff78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bff7c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2bff7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2bff80: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2bff80u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2bff84:
    // 0x2bff84: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2bff84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2bff88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bff88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bff8c: 0xc78190a0  lwc1        $f1, -0x6F60($gp)
    ctx->pc = 0x2bff8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bff90: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2bff90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2bff94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bff94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bff98: 0x0  nop
    ctx->pc = 0x2bff98u;
    // NOP
    // 0x2bff9c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2BFF9Cu;
    {
        const bool branch_taken_0x2bff9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BFFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF9Cu;
        // 0x2bffa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bff9c) {
            ctx->pc = 0x2BFFD0u;
            goto label_2bffd0;
        }
    }
    ctx->pc = 0x2BFFA4u;
    // 0x2bffa4: 0x26250178  addiu       $a1, $s1, 0x178
    ctx->pc = 0x2bffa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 376));
    // 0x2bffa8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2bffa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bffac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bffacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bffb0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2bffb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bffb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bffb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bffb8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2bffb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bffbc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2bffbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bffc0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bffc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bffc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bffc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bffc8: 0x80a3cb4  j           func_28F2D0
    ctx->pc = 0x2BFFC8u;
    ctx->pc = 0x2BFFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFFC8u;
    // 0x2bffcc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F2D0u;
    gunChrFire_0x28f2d0(rdram, ctx, runtime); return;
    ctx->pc = 0x2BFFD0u;
label_2bffd0:
    // 0x2bffd0: 0x26250178  addiu       $a1, $s1, 0x178
    ctx->pc = 0x2bffd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 376));
    // 0x2bffd4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2bffd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bffd8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2bffd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bffdc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2bffdcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bffe0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bffe0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bffe4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2bffe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bffe8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2bffe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bffec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bffecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bfff0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bfff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bfff4: 0x80a3cb4  j           func_28F2D0
    ctx->pc = 0x2BFFF4u;
    ctx->pc = 0x2BFFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFFF4u;
    // 0x2bfff8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F2D0u;
    gunChrFire_0x28f2d0(rdram, ctx, runtime); return;
    ctx->pc = 0x2BFFFCu;
label_2bfffc:
    // 0x2bfffc: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x2bfffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2c0000:
    // 0x2c0000: 0x3c140033  lui         $s4, 0x33
    ctx->pc = 0x2c0000u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
    // 0x2c0004: 0x2683ab60  addiu       $v1, $s4, -0x54A0
    ctx->pc = 0x2c0004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294945632));
    // 0x2c0008: 0x8ca20060  lw          $v0, 0x60($a1)
    ctx->pc = 0x2c0008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x2c000c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c000cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c0010: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c0010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c0014: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c0014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0018: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2c0018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2c001c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x2c001cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2c0020: 0x106000e7  beqz        $v1, . + 4 + (0xE7 << 2)
    ctx->pc = 0x2C0020u;
    {
        const bool branch_taken_0x2c0020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0020u;
        // 0x2c0024: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0020) {
            ctx->pc = 0x2C03C0u;
            goto label_2c03c0;
        }
    }
    ctx->pc = 0x2C0028u;
    // 0x2c0028: 0x8e220a90  lw          $v0, 0xA90($s1)
    ctx->pc = 0x2c0028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2c002c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2c002cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2c0030: 0x504000e4  beql        $v0, $zero, . + 4 + (0xE4 << 2)
    ctx->pc = 0x2C0030u;
    {
        const bool branch_taken_0x2c0030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0030) {
            ctx->pc = 0x2C0034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0030u;
            // 0x2c0034: 0xdfb40040  ld          $s4, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C03C4u;
            goto label_2c03c4;
        }
    }
    ctx->pc = 0x2C0038u;
    // 0x2c0038: 0x8e220a94  lw          $v0, 0xA94($s1)
    ctx->pc = 0x2c0038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2708)));
    // 0x2c003c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2c003cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2c0040: 0x504000e0  beql        $v0, $zero, . + 4 + (0xE0 << 2)
    ctx->pc = 0x2C0040u;
    {
        const bool branch_taken_0x2c0040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0040) {
            ctx->pc = 0x2C0044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0040u;
            // 0x2c0044: 0xdfb40040  ld          $s4, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C03C4u;
            goto label_2c03c4;
        }
    }
    ctx->pc = 0x2C0048u;
    // 0x2c0048: 0xc4a100e0  lwc1        $f1, 0xE0($a1)
    ctx->pc = 0x2c0048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c004c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c004cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0050: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2c0050u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0054: 0x0  nop
    ctx->pc = 0x2c0054u;
    // NOP
    // 0x2c0058: 0x450200da  bc1fl       . + 4 + (0xDA << 2)
    ctx->pc = 0x2C0058u;
    {
        const bool branch_taken_0x2c0058 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0058) {
            ctx->pc = 0x2C005Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0058u;
            // 0x2c005c: 0xdfb40040  ld          $s4, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C03C4u;
            goto label_2c03c4;
        }
    }
    ctx->pc = 0x2C0060u;
    // 0x2c0060: 0xc62c0adc  lwc1        $f12, 0xADC($s1)
    ctx->pc = 0x2c0060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c0064: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2C0064u;
    SET_GPR_U32(ctx, 31, 0x2C006Cu);
    ctx->pc = 0x2C0068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0064u;
    // 0x2c0068: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2C0064u, 0x2C006Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C006Cu;
label_2c006c:
    // 0x2c006c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c006cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0070: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c0070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0074: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2C0074u;
    SET_GPR_U32(ctx, 31, 0x2C007Cu);
    ctx->pc = 0x2C0078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0074u;
    // 0x2c0078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2C0074u, 0x2C007Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C007Cu;
label_2c007c:
    // 0x2c007c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C007Cu;
    {
        const bool branch_taken_0x2c007c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2C0080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C007Cu;
        // 0x2c0080: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c007c) {
            ctx->pc = 0x2C0090u;
            goto label_2c0090;
        }
    }
    ctx->pc = 0x2C0084u;
    // 0x2c0084: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2C0084u;
    SET_GPR_U32(ctx, 31, 0x2C008Cu);
    ctx->pc = 0x2C0088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0084u;
    // 0x2c0088: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2C0084u, 0x2C008Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C008Cu;
label_2c008c:
    // 0x2c008c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c008cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c0090:
    // 0x2c0090: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x2c0090u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x2c0094: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2c0094u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2c0098: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2C0098u;
    SET_GPR_U32(ctx, 31, 0x2C00A0u);
    ctx->pc = 0x2C009Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0098u;
    // 0x2c009c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2C0098u, 0x2C00A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C00A0u;
label_2c00a0:
    // 0x2c00a0: 0x442001d  bltzl       $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C00A0u;
    {
        const bool branch_taken_0x2c00a0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2c00a0) {
            ctx->pc = 0x2C00A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C00A0u;
            // 0x2c00a4: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0118u;
            goto label_2c0118;
        }
    }
    ctx->pc = 0x2C00A8u;
    // 0x2c00a8: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2C00A8u;
    SET_GPR_U32(ctx, 31, 0x2C00B0u);
    ctx->pc = 0x2C00ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C00A8u;
    // 0x2c00ac: 0xc62c0adc  lwc1        $f12, 0xADC($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2C00A8u, 0x2C00B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C00B0u;
label_2c00b0:
    // 0x2c00b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c00b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c00b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c00b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c00b8: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2C00B8u;
    SET_GPR_U32(ctx, 31, 0x2C00C0u);
    ctx->pc = 0x2C00BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C00B8u;
    // 0x2c00bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2C00B8u, 0x2C00C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C00C0u;
label_2c00c0:
    // 0x2c00c0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C00C0u;
    {
        const bool branch_taken_0x2c00c0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2C00C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C00C0u;
        // 0x2c00c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c00c0) {
            ctx->pc = 0x2C00D4u;
            goto label_2c00d4;
        }
    }
    ctx->pc = 0x2C00C8u;
    // 0x2c00c8: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2C00C8u;
    SET_GPR_U32(ctx, 31, 0x2C00D0u);
    ctx->pc = 0x2C00CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C00C8u;
    // 0x2c00cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2C00C8u, 0x2C00D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C00D0u;
label_2c00d0:
    // 0x2c00d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c00d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c00d4:
    // 0x2c00d4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2c00d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2c00d8: 0xdc259d08  ld          $a1, -0x62F8($at)
    ctx->pc = 0x2c00d8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9D08u));
    // 0x2c00dc: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2C00DCu;
    SET_GPR_U32(ctx, 31, 0x2C00E4u);
    ctx->pc = 0x2C00E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C00DCu;
    // 0x2c00e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2C00DCu, 0x2C00E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C00E4u;
label_2c00e4:
    // 0x2c00e4: 0x44100b6  bgez        $v0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x2C00E4u;
    {
        const bool branch_taken_0x2c00e4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2C00E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C00E4u;
        // 0x2c00e8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c00e4) {
            ctx->pc = 0x2C03C0u;
            goto label_2c03c0;
        }
    }
    ctx->pc = 0x2C00ECu;
    // 0x2c00ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c00ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c00f0: 0xc085608  jal         func_215820
    ctx->pc = 0x2C00F0u;
    SET_GPR_U32(ctx, 31, 0x2C00F8u);
    ctx->pc = 0x2C00F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C00F0u;
    // 0x2c00f4: 0x240501de  addiu       $a1, $zero, 0x1DE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 478));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C00F0u, 0x2C00F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C00F8u;
label_2c00f8:
    // 0x2c00f8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C00F8u;
    {
        const bool branch_taken_0x2c00f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c00f8) {
            ctx->pc = 0x2C00FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C00F8u;
            // 0x2c00fc: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0118u;
            goto label_2c0118;
        }
    }
    ctx->pc = 0x2C0100u;
    // 0x2c0100: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c0100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0104: 0xc085608  jal         func_215820
    ctx->pc = 0x2C0104u;
    SET_GPR_U32(ctx, 31, 0x2C010Cu);
    ctx->pc = 0x2C0108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0104u;
    // 0x2c0108: 0x240501dd  addiu       $a1, $zero, 0x1DD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 477));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C0104u, 0x2C010Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C010Cu;
label_2c010c:
    // 0x2c010c: 0x104000ac  beqz        $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x2C010Cu;
    {
        const bool branch_taken_0x2c010c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C010Cu;
        // 0x2c0110: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c010c) {
            ctx->pc = 0x2C03C0u;
            goto label_2c03c0;
        }
    }
    ctx->pc = 0x2C0114u;
    // 0x2c0114: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2c0114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c0118:
    // 0x2c0118: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c0118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c011c: 0x14620036  bne         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2C011Cu;
    {
        const bool branch_taken_0x2c011c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C0120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C011Cu;
        // 0x2c0120: 0x8e2601b8  lw          $a2, 0x1B8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c011c) {
            ctx->pc = 0x2C01F8u;
            goto label_2c01f8;
        }
    }
    ctx->pc = 0x2C0124u;
    // 0x2c0124: 0x10c00071  beqz        $a2, . + 4 + (0x71 << 2)
    ctx->pc = 0x2C0124u;
    {
        const bool branch_taken_0x2c0124 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0124u;
        // 0x2c0128: 0x24030190  addiu       $v1, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0124) {
            ctx->pc = 0x2C02ECu;
            goto label_2c02ec;
        }
    }
    ctx->pc = 0x2C012Cu;
    // 0x2c012c: 0x8e240178  lw          $a0, 0x178($s1)
    ctx->pc = 0x2c012cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
    // 0x2c0130: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2c0130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x2c0134: 0x8e2501bc  lw          $a1, 0x1BC($s1)
    ctx->pc = 0x2c0134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
    // 0x2c0138: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x2c0138u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2c013c: 0x24426218  addiu       $v0, $v0, 0x6218
    ctx->pc = 0x2c013cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25112));
    // 0x2c0140: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c0140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c0144: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2c0144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2c0148: 0xa3282a  slt         $a1, $a1, $v1
    ctx->pc = 0x2c0148u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c014c: 0x14a0002a  bnez        $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x2C014Cu;
    {
        const bool branch_taken_0x2c014c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c014c) {
            ctx->pc = 0x2C01F8u;
            goto label_2c01f8;
        }
    }
    ctx->pc = 0x2C0154u;
    // 0x2c0154: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C0154u;
    SET_GPR_U32(ctx, 31, 0x2C015Cu);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C0154u, 0x2C015Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C015Cu;
label_2c015c:
    // 0x2c015c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C015Cu;
    {
        const bool branch_taken_0x2c015c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C0160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C015Cu;
        // 0x2c0160: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c015c) {
            ctx->pc = 0x2C0170u;
            goto label_2c0170;
        }
    }
    ctx->pc = 0x2C0164u;
    // 0x2c0164: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c0164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c0168: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C0168u;
    {
        const bool branch_taken_0x2c0168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0168u;
        // 0x2c016c: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0168) {
            ctx->pc = 0x2C0184u;
            goto label_2c0184;
        }
    }
    ctx->pc = 0x2C0170u;
label_2c0170:
    // 0x2c0170: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c0170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c0174: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c0174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c0178: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c0178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c017c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c017cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c0180: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c0180u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2c0184:
    // 0x2c0184: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c0184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c0188: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c0188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c018c: 0xc78190a4  lwc1        $f1, -0x6F5C($gp)
    ctx->pc = 0x2c018cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0190: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2c0190u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c0194: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c0194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0198: 0x0  nop
    ctx->pc = 0x2c0198u;
    // NOP
    // 0x2c019c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2C019Cu;
    {
        const bool branch_taken_0x2c019c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C01A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C019Cu;
        // 0x2c01a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c019c) {
            ctx->pc = 0x2C01BCu;
            goto label_2c01bc;
        }
    }
    ctx->pc = 0x2C01A4u;
    // 0x2c01a4: 0x26250178  addiu       $a1, $s1, 0x178
    ctx->pc = 0x2c01a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 376));
    // 0x2c01a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c01a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c01ac: 0xc0a3cb4  jal         func_28F2D0
    ctx->pc = 0x2C01ACu;
    SET_GPR_U32(ctx, 31, 0x2C01B4u);
    ctx->pc = 0x2C01B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C01ACu;
    // 0x2c01b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F2D0u, 0x2C01ACu, 0x2C01B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C01B4u;
label_2c01b4:
    // 0x2c01b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C01B4u;
    {
        const bool branch_taken_0x2c01b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C01B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C01B4u;
        // 0x2c01b8: 0x8e220bbc  lw          $v0, 0xBBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3004)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c01b4) {
            ctx->pc = 0x2C01D0u;
            goto label_2c01d0;
        }
    }
    ctx->pc = 0x2C01BCu;
label_2c01bc:
    // 0x2c01bc: 0x26250178  addiu       $a1, $s1, 0x178
    ctx->pc = 0x2c01bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 376));
    // 0x2c01c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c01c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c01c4: 0xc0a3cb4  jal         func_28F2D0
    ctx->pc = 0x2C01C4u;
    SET_GPR_U32(ctx, 31, 0x2C01CCu);
    ctx->pc = 0x2C01C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C01C4u;
    // 0x2c01c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F2D0u, 0x2C01C4u, 0x2C01CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C01CCu;
label_2c01cc:
    // 0x2c01cc: 0x8e220bbc  lw          $v0, 0xBBC($s1)
    ctx->pc = 0x2c01ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3004)));
label_2c01d0:
    // 0x2c01d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c01d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c01d4: 0x1c400079  bgtz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x2C01D4u;
    {
        const bool branch_taken_0x2c01d4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2C01D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C01D4u;
        // 0x2c01d8: 0xae220bbc  sw          $v0, 0xBBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3004), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c01d4) {
            ctx->pc = 0x2C03BCu;
            goto label_2c03bc;
        }
    }
    ctx->pc = 0x2C01DCu;
label_2c01dc:
    // 0x2c01dc: 0x8e230a90  lw          $v1, 0xA90($s1)
    ctx->pc = 0x2c01dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2c01e0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c01e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c01e4: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x2c01e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x2c01e8: 0xae200bbc  sw          $zero, 0xBBC($s1)
    ctx->pc = 0x2c01e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3004), GPR_U32(ctx, 0));
label_2c01ec:
    // 0x2c01ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2c01ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c01f0: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x2C01F0u;
    {
        const bool branch_taken_0x2c01f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C01F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C01F0u;
        // 0x2c01f4: 0xae230a90  sw          $v1, 0xA90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2704), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c01f0) {
            ctx->pc = 0x2C03BCu;
            goto label_2c03bc;
        }
    }
    ctx->pc = 0x2C01F8u;
label_2c01f8:
    // 0x2c01f8: 0x10c0003c  beqz        $a2, . + 4 + (0x3C << 2)
    ctx->pc = 0x2C01F8u;
    {
        const bool branch_taken_0x2c01f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C01FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C01F8u;
        // 0x2c01fc: 0x24030190  addiu       $v1, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c01f8) {
            ctx->pc = 0x2C02ECu;
            goto label_2c02ec;
        }
    }
    ctx->pc = 0x2C0200u;
    // 0x2c0200: 0x8e240178  lw          $a0, 0x178($s1)
    ctx->pc = 0x2c0200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
    // 0x2c0204: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2c0204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x2c0208: 0x8e2501bc  lw          $a1, 0x1BC($s1)
    ctx->pc = 0x2c0208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
    // 0x2c020c: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x2c020cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2c0210: 0x24426218  addiu       $v0, $v0, 0x6218
    ctx->pc = 0x2c0210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25112));
    // 0x2c0214: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c0214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c0218: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2c0218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2c021c: 0xa3282a  slt         $a1, $a1, $v1
    ctx->pc = 0x2c021cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c0220: 0x54a00033  bnel        $a1, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x2C0220u;
    {
        const bool branch_taken_0x2c0220 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c0220) {
            ctx->pc = 0x2C0224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0220u;
            // 0x2c0224: 0x8e22014c  lw          $v0, 0x14C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C02F0u;
            goto label_2c02f0;
        }
    }
    ctx->pc = 0x2C0228u;
    // 0x2c0228: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C0228u;
    SET_GPR_U32(ctx, 31, 0x2C0230u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C0228u, 0x2C0230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0230u;
label_2c0230:
    // 0x2c0230: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0230u;
    {
        const bool branch_taken_0x2c0230 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C0234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0230u;
        // 0x2c0234: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0230) {
            ctx->pc = 0x2C0244u;
            goto label_2c0244;
        }
    }
    ctx->pc = 0x2C0238u;
    // 0x2c0238: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c0238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c023c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C023Cu;
    {
        const bool branch_taken_0x2c023c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C023Cu;
        // 0x2c0240: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c023c) {
            ctx->pc = 0x2C0258u;
            goto label_2c0258;
        }
    }
    ctx->pc = 0x2C0244u;
label_2c0244:
    // 0x2c0244: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c0244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c0248: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c0248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c024c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c024cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c0250: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c0250u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c0254: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c0254u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2c0258:
    // 0x2c0258: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c0258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c025c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c025cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0260: 0xc78190a8  lwc1        $f1, -0x6F58($gp)
    ctx->pc = 0x2c0260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0264: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2c0264u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c0268: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c0268u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c026c: 0x0  nop
    ctx->pc = 0x2c026cu;
    // NOP
    // 0x2c0270: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2C0270u;
    {
        const bool branch_taken_0x2c0270 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C0274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0270u;
        // 0x2c0274: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0270) {
            ctx->pc = 0x2C0290u;
            goto label_2c0290;
        }
    }
    ctx->pc = 0x2C0278u;
    // 0x2c0278: 0x26250178  addiu       $a1, $s1, 0x178
    ctx->pc = 0x2c0278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 376));
    // 0x2c027c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c027cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0280: 0xc0a3cb4  jal         func_28F2D0
    ctx->pc = 0x2C0280u;
    SET_GPR_U32(ctx, 31, 0x2C0288u);
    ctx->pc = 0x2C0284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0280u;
    // 0x2c0284: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F2D0u, 0x2C0280u, 0x2C0288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0288u;
label_2c0288:
    // 0x2c0288: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C0288u;
    {
        const bool branch_taken_0x2c0288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0288u;
        // 0x2c028c: 0x8e220bbc  lw          $v0, 0xBBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3004)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0288) {
            ctx->pc = 0x2C02A4u;
            goto label_2c02a4;
        }
    }
    ctx->pc = 0x2C0290u;
label_2c0290:
    // 0x2c0290: 0x26250178  addiu       $a1, $s1, 0x178
    ctx->pc = 0x2c0290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 376));
    // 0x2c0294: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c0294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0298: 0xc0a3cb4  jal         func_28F2D0
    ctx->pc = 0x2C0298u;
    SET_GPR_U32(ctx, 31, 0x2C02A0u);
    ctx->pc = 0x2C029Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0298u;
    // 0x2c029c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F2D0u, 0x2C0298u, 0x2C02A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C02A0u;
label_2c02a0:
    // 0x2c02a0: 0x8e220bbc  lw          $v0, 0xBBC($s1)
    ctx->pc = 0x2c02a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3004)));
label_2c02a4:
    // 0x2c02a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c02a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c02a8: 0x240501c1  addiu       $a1, $zero, 0x1C1
    ctx->pc = 0x2c02a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 449));
    // 0x2c02ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c02acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c02b0: 0xc085608  jal         func_215820
    ctx->pc = 0x2C02B0u;
    SET_GPR_U32(ctx, 31, 0x2C02B8u);
    ctx->pc = 0x2C02B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C02B0u;
    // 0x2c02b4: 0xae220bbc  sw          $v0, 0xBBC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 3004), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C02B0u, 0x2C02B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C02B8u;
label_2c02b8:
    // 0x2c02b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C02B8u;
    {
        const bool branch_taken_0x2c02b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C02BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C02B8u;
        // 0x2c02bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c02b8) {
            ctx->pc = 0x2C02C8u;
            goto label_2c02c8;
        }
    }
    ctx->pc = 0x2C02C0u;
    // 0x2c02c0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2C02C0u;
    {
        const bool branch_taken_0x2c02c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C02C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C02C0u;
        // 0x2c02c4: 0xae220bbc  sw          $v0, 0xBBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3004), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c02c0) {
            ctx->pc = 0x2C02ECu;
            goto label_2c02ec;
        }
    }
    ctx->pc = 0x2C02C8u;
label_2c02c8:
    // 0x2c02c8: 0x8e220bbc  lw          $v0, 0xBBC($s1)
    ctx->pc = 0x2c02c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3004)));
    // 0x2c02cc: 0x5c400008  bgtzl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C02CCu;
    {
        const bool branch_taken_0x2c02cc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2c02cc) {
            ctx->pc = 0x2C02D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C02CCu;
            // 0x2c02d0: 0x8e22014c  lw          $v0, 0x14C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C02F0u;
            goto label_2c02f0;
        }
    }
    ctx->pc = 0x2C02D4u;
    // 0x2c02d4: 0x8e230a90  lw          $v1, 0xA90($s1)
    ctx->pc = 0x2c02d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2c02d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c02d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c02dc: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x2c02dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x2c02e0: 0xae200bbc  sw          $zero, 0xBBC($s1)
    ctx->pc = 0x2c02e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3004), GPR_U32(ctx, 0));
    // 0x2c02e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2c02e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c02e8: 0xae230a90  sw          $v1, 0xA90($s1)
    ctx->pc = 0x2c02e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2704), GPR_U32(ctx, 3));
label_2c02ec:
    // 0x2c02ec: 0x8e22014c  lw          $v0, 0x14C($s1)
    ctx->pc = 0x2c02ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
label_2c02f0:
    // 0x2c02f0: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2C02F0u;
    {
        const bool branch_taken_0x2c02f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C02F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C02F0u;
        // 0x2c02f4: 0x2685ab60  addiu       $a1, $s4, -0x54A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294945632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c02f0) {
            ctx->pc = 0x2C03BCu;
            goto label_2c03bc;
        }
    }
    ctx->pc = 0x2C02F8u;
    // 0x2c02f8: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x2c02f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2c02fc: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x2c02fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x2c0300: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c0300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c0304: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c0304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c0308: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c0308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c030c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2c030cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2c0310: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2c0310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2c0314: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2C0314u;
    {
        const bool branch_taken_0x2c0314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0314u;
        // 0x2c0318: 0x24030190  addiu       $v1, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0314) {
            ctx->pc = 0x2C03BCu;
            goto label_2c03bc;
        }
    }
    ctx->pc = 0x2C031Cu;
    // 0x2c031c: 0x8e24010c  lw          $a0, 0x10C($s1)
    ctx->pc = 0x2c031cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x2c0320: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2c0320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x2c0324: 0x8e250150  lw          $a1, 0x150($s1)
    ctx->pc = 0x2c0324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x2c0328: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x2c0328u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2c032c: 0x24426218  addiu       $v0, $v0, 0x6218
    ctx->pc = 0x2c032cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25112));
    // 0x2c0330: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c0330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c0334: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2c0334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2c0338: 0xa3282a  slt         $a1, $a1, $v1
    ctx->pc = 0x2c0338u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c033c: 0x14a00020  bnez        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C033Cu;
    {
        const bool branch_taken_0x2c033c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C033Cu;
        // 0x2c0340: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c033c) {
            ctx->pc = 0x2C03C0u;
            goto label_2c03c0;
        }
    }
    ctx->pc = 0x2C0344u;
    // 0x2c0344: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C0344u;
    SET_GPR_U32(ctx, 31, 0x2C034Cu);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C0344u, 0x2C034Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C034Cu;
label_2c034c:
    // 0x2c034c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C034Cu;
    {
        const bool branch_taken_0x2c034c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C0350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C034Cu;
        // 0x2c0350: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c034c) {
            ctx->pc = 0x2C0360u;
            goto label_2c0360;
        }
    }
    ctx->pc = 0x2C0354u;
    // 0x2c0354: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c0354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c0358: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C0358u;
    {
        const bool branch_taken_0x2c0358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0358u;
        // 0x2c035c: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0358) {
            ctx->pc = 0x2C0374u;
            goto label_2c0374;
        }
    }
    ctx->pc = 0x2C0360u;
label_2c0360:
    // 0x2c0360: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c0360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c0364: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c0364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c0368: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c0368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c036c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c036cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c0370: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c0370u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2c0374:
    // 0x2c0374: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c0374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c0378: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c0378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c037c: 0xc78190ac  lwc1        $f1, -0x6F54($gp)
    ctx->pc = 0x2c037cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0380: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2c0380u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c0384: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c0384u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0388: 0x0  nop
    ctx->pc = 0x2c0388u;
    // NOP
    // 0x2c038c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2C038Cu;
    {
        const bool branch_taken_0x2c038c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C0390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C038Cu;
        // 0x2c0390: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c038c) {
            ctx->pc = 0x2C03ACu;
            goto label_2c03ac;
        }
    }
    ctx->pc = 0x2C0394u;
    // 0x2c0394: 0x2625010c  addiu       $a1, $s1, 0x10C
    ctx->pc = 0x2c0394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 268));
    // 0x2c0398: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c0398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c039c: 0xc0a3cb4  jal         func_28F2D0
    ctx->pc = 0x2C039Cu;
    SET_GPR_U32(ctx, 31, 0x2C03A4u);
    ctx->pc = 0x2C03A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C039Cu;
    // 0x2c03a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F2D0u, 0x2C039Cu, 0x2C03A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C03A4u;
label_2c03a4:
    // 0x2c03a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C03A4u;
    {
        const bool branch_taken_0x2c03a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C03A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C03A4u;
        // 0x2c03a8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c03a4) {
            ctx->pc = 0x2C03C0u;
            goto label_2c03c0;
        }
    }
    ctx->pc = 0x2C03ACu;
label_2c03ac:
    // 0x2c03ac: 0x2625010c  addiu       $a1, $s1, 0x10C
    ctx->pc = 0x2c03acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 268));
    // 0x2c03b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c03b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c03b4: 0xc0a3cb4  jal         func_28F2D0
    ctx->pc = 0x2C03B4u;
    SET_GPR_U32(ctx, 31, 0x2C03BCu);
    ctx->pc = 0x2C03B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C03B4u;
    // 0x2c03b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F2D0u, 0x2C03B4u, 0x2C03BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C03BCu;
label_2c03bc:
    // 0x2c03bc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c03bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2c03c0:
    // 0x2c03c0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2c03c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c03c4:
    // 0x2c03c4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2c03c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c03c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c03c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c03cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c03ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c03d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c03d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c03d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C03D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C03D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C03D4u;
        // 0x2c03d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C03D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C03DCu;
}
