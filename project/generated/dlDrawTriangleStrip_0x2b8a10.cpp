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

// Function: dlDrawTriangleStrip
// Address: 0x2b8a10 - 0x2b8c04
void dlDrawTriangleStrip_0x2b8a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dlDrawTriangleStrip_0x2b8a10");
#endif

    switch (ctx->pc) {
        case 0x2b8a50u: goto label_2b8a50;
        case 0x2b8b00u: goto label_2b8b00;
        default: break;
    }

    ctx->pc = 0x2b8a10u;

    // 0x2b8a10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b8a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b8a14: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2b8a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2b8a18: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2b8a18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8a1c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b8a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b8a20: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2b8a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2b8a24: 0x138840  sll         $s1, $s3, 1
    ctx->pc = 0x2b8a24u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x2b8a28: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2b8a28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8a2c: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x2b8a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x2b8a30: 0x54880b  movn        $s1, $v0, $s4
    ctx->pc = 0x2b8a30u;
    if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x2b8a34: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b8a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b8a38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b8a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b8a3c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b8a3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8a40: 0x26300002  addiu       $s0, $s1, 0x2
    ctx->pc = 0x2b8a40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x2b8a44: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2b8a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2b8a48: 0xc0807de  jal         func_201F78
    ctx->pc = 0x2B8A48u;
    SET_GPR_U32(ctx, 31, 0x2B8A50u);
    ctx->pc = 0x2B8A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8A48u;
    // 0x2b8a4c: 0x102100  sll         $a0, $s0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x2B8A48u, 0x2B8A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8A50u;
label_2b8a50:
    // 0x2b8a50: 0x8f8693a0  lw          $a2, -0x6C60($gp)
    ctx->pc = 0x2b8a50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b8a54: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x2b8a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b8a58: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x2b8a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b8a5c: 0x3c046c00  lui         $a0, 0x6C00
    ctx->pc = 0x2b8a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27648 << 16));
    // 0x2b8a60: 0xa0c50003  sb          $a1, 0x3($a2)
    ctx->pc = 0x2b8a60u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x2b8a64: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x2b8a64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x2b8a68: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2b8a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2b8a6c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2b8a6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8a70: 0x8f8693a0  lw          $a2, -0x6C60($gp)
    ctx->pc = 0x2b8a70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b8a74: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2b8a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2b8a78: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x2b8a78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x2b8a7c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2b8a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2b8a80: 0xacc70004  sw          $a3, 0x4($a2)
    ctx->pc = 0x2b8a80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
    // 0x2b8a84: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2b8a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2b8a88: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2b8a88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2b8a8c: 0x3c042026  lui         $a0, 0x2026
    ctx->pc = 0x2b8a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8230 << 16));
    // 0x2b8a90: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2b8a90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x2b8a94: 0x3c0330ae  lui         $v1, 0x30AE
    ctx->pc = 0x2b8a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12462 << 16));
    // 0x2b8a98: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2b8a98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2b8a9c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2b8a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2b8aa0: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x2b8aa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x2b8aa4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2b8aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8aa8: 0x74200b  movn        $a0, $v1, $s4
    ctx->pc = 0x2b8aa8u;
    if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x2b8aac: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2b8aacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2b8ab0: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x2b8ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x2b8ab4: 0x24030513  addiu       $v1, $zero, 0x513
    ctx->pc = 0x2b8ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1299));
    // 0x2b8ab8: 0x24020051  addiu       $v0, $zero, 0x51
    ctx->pc = 0x2b8ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x2b8abc: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2b8abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8ac0: 0x74100b  movn        $v0, $v1, $s4
    ctx->pc = 0x2b8ac0u;
    if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2b8ac4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2b8ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2b8ac8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2b8ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2b8acc: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x2b8accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2b8ad0: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2b8ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x2b8ad4: 0xa4d00000  sh          $s0, 0x0($a2)
    ctx->pc = 0x2b8ad4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 16));
    // 0x2b8ad8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2b8ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2b8adc: 0x1a60003a  blez        $s3, . + 4 + (0x3A << 2)
    ctx->pc = 0x2B8ADCu;
    {
        const bool branch_taken_0x2b8adc = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2B8AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8ADCu;
        // 0x2b8ae0: 0xaf8393a0  sw          $v1, -0x6C60($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8adc) {
            ctx->pc = 0x2B8BC8u;
            goto label_2b8bc8;
        }
    }
    ctx->pc = 0x2B8AE4u;
    // 0x2b8ae4: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x2b8ae4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x2b8ae8: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2b8ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x2b8aec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b8aecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b8af0: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x2b8af0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8af4: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x2b8af4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x2b8af8: 0x24e80004  addiu       $t0, $a3, 0x4
    ctx->pc = 0x2b8af8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2b8afc: 0x26490004  addiu       $t1, $s2, 0x4
    ctx->pc = 0x2b8afcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2b8b00:
    // 0x2b8b00: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x2b8b00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b8b04: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x2b8b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8b08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b8b08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b8b0c: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x2b8b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8b10: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b8b10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b8b14: 0x2529000c  addiu       $t1, $t1, 0xC
    ctx->pc = 0x2b8b14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
    // 0x2b8b18: 0x12800011  beqz        $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B8B18u;
    {
        const bool branch_taken_0x2b8b18 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B18u;
        // 0x2b8b1c: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8b18) {
            ctx->pc = 0x2B8B60u;
            goto label_2b8b60;
        }
    }
    ctx->pc = 0x2B8B20u;
    // 0x2b8b20: 0x8d22fffc  lw          $v0, -0x4($t1)
    ctx->pc = 0x2b8b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294967292)));
    // 0x2b8b24: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x2b8b24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2b8b28: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2b8b28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2b8b2c: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x2b8b2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x2b8b30: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2b8b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2b8b34: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2b8b34u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x2b8b38: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2b8b38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2b8b3c: 0x8d22fffc  lw          $v0, -0x4($t1)
    ctx->pc = 0x2b8b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294967292)));
    // 0x2b8b40: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2b8b40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2b8b44: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2b8b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2b8b48: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2b8b48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x2b8b4c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2b8b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2b8b50: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2b8b50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x2b8b54: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2b8b54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2b8b58: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2b8b58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x2b8b5c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2b8b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_2b8b60:
    // 0x2b8b60: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2b8b60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2b8b64: 0x62e02  srl         $a1, $a2, 24
    ctx->pc = 0x2b8b64u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x2b8b68: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b8b68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b8b6c: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x2b8b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x2b8b70: 0x61402  srl         $v0, $a2, 16
    ctx->pc = 0x2b8b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x2b8b74: 0x61a02  srl         $v1, $a2, 8
    ctx->pc = 0x2b8b74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x2b8b78: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b8b78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x2b8b7c: 0x44041800  mfc1        $a0, $f3
    ctx->pc = 0x2b8b7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b8b80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b8b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b8b84: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b8b84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2b8b88: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2b8b88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2b8b8c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b8b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b8b90: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x2b8b90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2b8b94: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x2b8b94u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x2b8b98: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x2b8b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x2b8b9c: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x2b8b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x2b8ba0: 0x24a57900  addiu       $a1, $a1, 0x7900
    ctx->pc = 0x2b8ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30976));
    // 0x2b8ba4: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x2b8ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
    // 0x2b8ba8: 0xad04000c  sw          $a0, 0xC($t0)
    ctx->pc = 0x2b8ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 4));
    // 0x2b8bac: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2b8bacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2b8bb0: 0xad050010  sw          $a1, 0x10($t0)
    ctx->pc = 0x2b8bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 5));
    // 0x2b8bb4: 0xad0a0014  sw          $t2, 0x14($t0)
    ctx->pc = 0x2b8bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 10));
    // 0x2b8bb8: 0xace0001c  sw          $zero, 0x1C($a3)
    ctx->pc = 0x2b8bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
    // 0x2b8bbc: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x2b8bbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x2b8bc0: 0x1620ffcf  bnez        $s1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x2B8BC0u;
    {
        const bool branch_taken_0x2b8bc0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BC0u;
        // 0x2b8bc4: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8bc0) {
            ctx->pc = 0x2B8B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b8b00;
        }
    }
    ctx->pc = 0x2B8BC8u;
label_2b8bc8:
    // 0x2b8bc8: 0x3c021400  lui         $v0, 0x1400
    ctx->pc = 0x2b8bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5120 << 16));
    // 0x2b8bcc: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x2b8bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
    // 0x2b8bd0: 0x344207fc  ori         $v0, $v0, 0x7FC
    ctx->pc = 0x2b8bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2044);
    // 0x2b8bd4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2b8bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8bd8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2b8bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x2b8bdc: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2b8bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2b8be0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2b8be0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b8be4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2b8be4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b8be8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b8be8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8bec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b8becu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8bf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b8bf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8bf4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x2b8bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x2b8bf8: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x2b8bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x2b8bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BFCu;
        // 0x2b8c00: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8C04u;
}
