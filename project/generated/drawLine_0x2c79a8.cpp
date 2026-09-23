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

// Function: drawLine
// Address: 0x2c79a8 - 0x2c7d74
void drawLine_0x2c79a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("drawLine_0x2c79a8");
#endif

    switch (ctx->pc) {
        case 0x2c79e8u: goto label_2c79e8;
        case 0x2c7a08u: goto label_2c7a08;
        case 0x2c7a14u: goto label_2c7a14;
        case 0x2c7a1cu: goto label_2c7a1c;
        case 0x2c7a34u: goto label_2c7a34;
        case 0x2c7a44u: goto label_2c7a44;
        case 0x2c7a58u: goto label_2c7a58;
        case 0x2c7a70u: goto label_2c7a70;
        case 0x2c7a80u: goto label_2c7a80;
        case 0x2c7d10u: goto label_2c7d10;
        case 0x2c7d3cu: goto label_2c7d3c;
        case 0x2c7d44u: goto label_2c7d44;
        default: break;
    }

    ctx->pc = 0x2c79a8u;

    // 0x2c79a8: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x2c79a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x2c79ac: 0xffb50150  sd          $s5, 0x150($sp)
    ctx->pc = 0x2c79acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 21));
    // 0x2c79b0: 0xffb60160  sd          $s6, 0x160($sp)
    ctx->pc = 0x2c79b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 22));
    // 0x2c79b4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2c79b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c79b8: 0xffb40140  sd          $s4, 0x140($sp)
    ctx->pc = 0x2c79b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x2c79bc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2c79bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c79c0: 0xffb30130  sd          $s3, 0x130($sp)
    ctx->pc = 0x2c79c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 19));
    // 0x2c79c4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2c79c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c79c8: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x2c79c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x2c79cc: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x2c79ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2c79d0: 0xffb70170  sd          $s7, 0x170($sp)
    ctx->pc = 0x2c79d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 23));
    // 0x2c79d4: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x2c79d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x2c79d8: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x2c79d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x2c79dc: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x2c79dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x2c79e0: 0xc0807de  jal         func_201F78
    ctx->pc = 0x2C79E0u;
    SET_GPR_U32(ctx, 31, 0x2C79E8u);
    ctx->pc = 0x2C79E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C79E0u;
    // 0x2c79e4: 0xe7b40190  swc1        $f20, 0x190($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x2C79E0u, 0x2C79E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C79E8u;
label_2c79e8:
    // 0x2c79e8: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x2c79e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2c79ec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c79ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c79f0: 0x8c6206e4  lw          $v0, 0x6E4($v1)
    ctx->pc = 0x2c79f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1764)));
    // 0x2c79f4: 0x104000d4  beqz        $v0, . + 4 + (0xD4 << 2)
    ctx->pc = 0x2C79F4u;
    {
        const bool branch_taken_0x2c79f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C79F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C79F4u;
        // 0x2c79f8: 0xdfbf0180  ld          $ra, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c79f4) {
            ctx->pc = 0x2C7D48u;
            goto label_2c7d48;
        }
    }
    ctx->pc = 0x2C79FCu;
    // 0x2c79fc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2c79fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c7a00: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x2C7A00u;
    SET_GPR_U32(ctx, 31, 0x2C7A08u);
    ctx->pc = 0x2C7A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7A00u;
    // 0x2c7a04: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x2C7A00u, 0x2C7A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7A08u;
label_2c7a08:
    // 0x2c7a08: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2c7a08u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7a0c: 0xc0adf26  jal         func_2B7C98
    ctx->pc = 0x2C7A0Cu;
    SET_GPR_U32(ctx, 31, 0x2C7A14u);
    ctx->pc = 0x2C7A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7A0Cu;
    // 0x2c7a10: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7C98u, 0x2C7A0Cu, 0x2C7A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7A14u;
label_2c7a14:
    // 0x2c7a14: 0xc0807de  jal         func_201F78
    ctx->pc = 0x2C7A14u;
    SET_GPR_U32(ctx, 31, 0x2C7A1Cu);
    ctx->pc = 0x2C7A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7A14u;
    // 0x2c7a18: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x2C7A14u, 0x2C7A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7A1Cu;
label_2c7a1c:
    // 0x2c7a1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c7a1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7a20: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2c7a20u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2c7a24: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x2c7a24u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x2c7a28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c7a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7a2c: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x2C7A2Cu;
    SET_GPR_U32(ctx, 31, 0x2C7A34u);
    ctx->pc = 0x2C7A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7A2Cu;
    // 0x2c7a30: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x2C7A2Cu, 0x2C7A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7A34u;
label_2c7a34:
    // 0x2c7a34: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x2c7a34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c7a38: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c7a38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c7a3c: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x2C7A3Cu;
    SET_GPR_U32(ctx, 31, 0x2C7A44u);
    ctx->pc = 0x2C7A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7A3Cu;
    // 0x2c7a40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x2C7A3Cu, 0x2C7A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7A44u;
label_2c7a44:
    // 0x2c7a44: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x2c7a44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2c7a48: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c7a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7a4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c7a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7a50: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2C7A50u;
    SET_GPR_U32(ctx, 31, 0x2C7A58u);
    ctx->pc = 0x2C7A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7A50u;
    // 0x2c7a54: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2C7A50u, 0x2C7A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7A58u;
label_2c7a58:
    // 0x2c7a58: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2c7a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2c7a5c: 0x27b100c0  addiu       $s1, $sp, 0xC0
    ctx->pc = 0x2c7a5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2c7a60: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2c7a60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7a64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c7a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7a68: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2C7A68u;
    SET_GPR_U32(ctx, 31, 0x2C7A70u);
    ctx->pc = 0x2C7A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7A68u;
    // 0x2c7a6c: 0x8c4506e4  lw          $a1, 0x6E4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1764)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2C7A68u, 0x2C7A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7A70u;
label_2c7a70:
    // 0x2c7a70: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2c7a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2c7a74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c7a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7a78: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x2C7A78u;
    SET_GPR_U32(ctx, 31, 0x2C7A80u);
    ctx->pc = 0x2C7A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7A78u;
    // 0x2c7a7c: 0x8c4506e4  lw          $a1, 0x6E4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1764)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x2C7A78u, 0x2C7A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7A80u;
label_2c7a80:
    // 0x2c7a80: 0x8f8493a0  lw          $a0, -0x6C60($gp)
    ctx->pc = 0x2c7a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2c7a84: 0x240d0030  addiu       $t5, $zero, 0x30
    ctx->pc = 0x2c7a84u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2c7a88: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2c7a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2c7a8c: 0x3c036c04  lui         $v1, 0x6C04
    ctx->pc = 0x2c7a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27652 << 16));
    // 0x2c7a90: 0xa08d0003  sb          $t5, 0x3($a0)
    ctx->pc = 0x2c7a90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 13));
    // 0x2c7a94: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x2c7a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x2c7a98: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c7a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c7a9c: 0x34638004  ori         $v1, $v1, 0x8004
    ctx->pc = 0x2c7a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32772);
    // 0x2c7aa0: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2c7aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2c7aa4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2c7aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c7aa8: 0x3c0a1400  lui         $t2, 0x1400
    ctx->pc = 0x2c7aa8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)5120 << 16));
    // 0x2c7aac: 0x3c121100  lui         $s2, 0x1100
    ctx->pc = 0x2c7aacu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4352 << 16));
    // 0x2c7ab0: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x2c7ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x2c7ab4: 0x244c0010  addiu       $t4, $v0, 0x10
    ctx->pc = 0x2c7ab4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2c7ab8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2c7ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c7abc: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x2c7abcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2c7ac0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c7ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c7ac4: 0x354a07a8  ori         $t2, $t2, 0x7A8
    ctx->pc = 0x2c7ac4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)1960);
    // 0x2c7ac8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2c7ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c7acc: 0xaf8c93a0  sw          $t4, -0x6C60($gp)
    ctx->pc = 0x2c7accu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 12));
    // 0x2c7ad0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2c7ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2c7ad4: 0x3c076c01  lui         $a3, 0x6C01
    ctx->pc = 0x2c7ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)27649 << 16));
    // 0x2c7ad8: 0x34e78000  ori         $a3, $a3, 0x8000
    ctx->pc = 0x2c7ad8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
    // 0x2c7adc: 0x340f8004  ori         $t7, $zero, 0x8004
    ctx->pc = 0x2c7adcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
    // 0x2c7ae0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c7ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c7ae4: 0x3c083026  lui         $t0, 0x3026
    ctx->pc = 0x2c7ae4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)12326 << 16));
    // 0x2c7ae8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2c7ae8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c7aec: 0x35084000  ori         $t0, $t0, 0x4000
    ctx->pc = 0x2c7aecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16384);
    // 0x2c7af0: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x2c7af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2c7af4: 0x24110412  addiu       $s1, $zero, 0x412
    ctx->pc = 0x2c7af4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x2c7af8: 0xc78291c4  lwc1        $f2, -0x6E3C($gp)
    ctx->pc = 0x2c7af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7afc: 0x3c096c04  lui         $t1, 0x6C04
    ctx->pc = 0x2c7afcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)27652 << 16));
    // 0x2c7b00: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c7b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c7b04: 0x35298018  ori         $t1, $t1, 0x8018
    ctx->pc = 0x2c7b04u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32792);
    // 0x2c7b08: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2c7b08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c7b0c: 0x141202  srl         $v0, $s4, 8
    ctx->pc = 0x2c7b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 8));
    // 0x2c7b10: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2c7b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2c7b14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c7b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7b18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c7b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c7b1c: 0x30a5ff00  andi        $a1, $a1, 0xFF00
    ctx->pc = 0x2c7b1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x2c7b20: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c7b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c7b24: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2c7b24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2c7b28: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2c7b28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c7b2c: 0x141e02  srl         $v1, $s4, 24
    ctx->pc = 0x2c7b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 24));
    // 0x2c7b30: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x2c7b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2c7b34: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2c7b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2c7b38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c7b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c7b3c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2c7b3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c7b40: 0x240e0007  addiu       $t6, $zero, 0x7
    ctx->pc = 0x2c7b40u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c7b44: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2c7b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2c7b48: 0x3c0b6e04  lui         $t3, 0x6E04
    ctx->pc = 0x2c7b48u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)28164 << 16));
    // 0x2c7b4c: 0x142600  sll         $a0, $s4, 24
    ctx->pc = 0x2c7b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 24));
    // 0x2c7b50: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2c7b50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c7b54: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x2c7b54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2c7b58: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2c7b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2c7b5c: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x2c7b5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c7b60: 0x356bc058  ori         $t3, $t3, 0xC058
    ctx->pc = 0x2c7b60u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)49240);
    // 0x2c7b64: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x2c7b64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x2c7b68: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x2c7b68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c7b6c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2c7b6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c7b70: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x2c7b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2c7b74: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c7b74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c7b78: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2c7b78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c7b7c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2c7b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2c7b80: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c7b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c7b84: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2c7b84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c7b88: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x2c7b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2c7b8c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c7b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c7b90: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2c7b90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c7b94: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2c7b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2c7b98: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c7b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c7b9c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2c7b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c7ba0: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x2c7ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2c7ba4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c7ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c7ba8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2c7ba8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c7bac: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2c7bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2c7bb0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c7bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c7bb4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2c7bb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c7bb8: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x2c7bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2c7bbc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c7bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c7bc0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2c7bc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c7bc4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2c7bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2c7bc8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c7bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c7bcc: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x2c7bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x2c7bd0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2c7bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c7bd4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c7bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c7bd8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2c7bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c7bdc: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2c7bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2c7be0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c7be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c7be4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2c7be4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c7be8: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x2c7be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x2c7bec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c7becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c7bf0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2c7bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c7bf4: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x2c7bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x2c7bf8: 0xae0a0000  sw          $t2, 0x0($s0)
    ctx->pc = 0x2c7bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
    // 0x2c7bfc: 0xa18d0003  sb          $t5, 0x3($t4)
    ctx->pc = 0x2c7bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 3), (uint8_t)GPR_U32(ctx, 13));
    // 0x2c7c00: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x2c7c00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x2c7c04: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2c7c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2c7c08: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x2c7c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7c0c: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x2c7c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
    // 0x2c7c10: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2c7c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2c7c14: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2c7c14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2c7c18: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c7c18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c7c1c: 0xae6f0000  sw          $t7, 0x0($s3)
    ctx->pc = 0x2c7c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 15));
    // 0x2c7c20: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2c7c20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2c7c24: 0xa44e0000  sh          $t6, 0x0($v0)
    ctx->pc = 0x2c7c24u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x2c7c28: 0xae680000  sw          $t0, 0x0($s3)
    ctx->pc = 0x2c7c28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 8));
    // 0x2c7c2c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2c7c2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2c7c30: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x2c7c30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x2c7c34: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x2c7c34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x2c7c38: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2c7c38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2c7c3c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2c7c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x2c7c40: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2c7c40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2c7c44: 0xae690000  sw          $t1, 0x0($s3)
    ctx->pc = 0x2c7c44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 9));
    // 0x2c7c48: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2c7c48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2c7c4c: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2c7c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2c7c50: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2c7c50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2c7c54: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x2c7c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7c58: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2c7c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2c7c5c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2c7c5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2c7c60: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x2c7c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7c64: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2c7c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2c7c68: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2c7c68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2c7c6c: 0xe6630000  swc1        $f3, 0x0($s3)
    ctx->pc = 0x2c7c6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2c7c70: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2c7c70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2c7c74: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x2c7c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7c78: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2c7c78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2c7c7c: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2c7c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2c7c80: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2c7c80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2c7c84: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x2c7c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7c88: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2c7c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2c7c8c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2c7c8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2c7c90: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x2c7c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7c94: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2c7c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2c7c98: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2c7c98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2c7c9c: 0xe6630000  swc1        $f3, 0x0($s3)
    ctx->pc = 0x2c7c9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2c7ca0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2c7ca0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2c7ca4: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x2c7ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7ca8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c7ca8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c7cac: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2c7cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2c7cb0: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x2c7cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7cb4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2c7cb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2c7cb8: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x2c7cb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2c7cbc: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2c7cbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2c7cc0: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x2c7cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7cc4: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2c7cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2c7cc8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2c7cc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2c7ccc: 0xe6630000  swc1        $f3, 0x0($s3)
    ctx->pc = 0x2c7cccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2c7cd0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2c7cd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2c7cd4: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x2c7cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7cd8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2c7cd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2c7cdc: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2c7cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2c7ce0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2c7ce0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2c7ce4: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x2c7ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7ce8: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2c7ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2c7cec: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2c7cecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2c7cf0: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x2c7cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7cf4: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2c7cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2c7cf8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2c7cf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2c7cfc: 0xe6630000  swc1        $f3, 0x0($s3)
    ctx->pc = 0x2c7cfcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2c7d00: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2c7d00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2c7d04: 0xae6b0000  sw          $t3, 0x0($s3)
    ctx->pc = 0x2c7d04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 11));
    // 0x2c7d08: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2c7d08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2c7d0c: 0x0  nop
    ctx->pc = 0x2c7d0cu;
    // NOP
label_2c7d10:
    // 0x2c7d10: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x2c7d10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x2c7d14: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2c7d14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2c7d18: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2c7d18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2c7d1c: 0x0  nop
    ctx->pc = 0x2c7d1cu;
    // NOP
    // 0x2c7d20: 0x0  nop
    ctx->pc = 0x2c7d20u;
    // NOP
    // 0x2c7d24: 0x681fffa  bgez        $s4, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C7D24u;
    {
        const bool branch_taken_0x2c7d24 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x2c7d24) {
            ctx->pc = 0x2C7D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c7d10;
        }
    }
    ctx->pc = 0x2C7D2Cu;
    // 0x2c7d2c: 0x3c021400  lui         $v0, 0x1400
    ctx->pc = 0x2c7d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5120 << 16));
    // 0x2c7d30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c7d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7d34: 0xc0adf26  jal         func_2B7C98
    ctx->pc = 0x2C7D34u;
    SET_GPR_U32(ctx, 31, 0x2C7D3Cu);
    ctx->pc = 0x2C7D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7D34u;
    // 0x2c7d38: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7C98u, 0x2C7D34u, 0x2C7D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7D3Cu;
label_2c7d3c:
    // 0x2c7d3c: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x2C7D3Cu;
    SET_GPR_U32(ctx, 31, 0x2C7D44u);
    ctx->pc = 0x2C7D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7D3Cu;
    // 0x2c7d40: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x2C7D3Cu, 0x2C7D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7D44u;
label_2c7d44:
    // 0x2c7d44: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x2c7d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_2c7d48:
    // 0x2c7d48: 0xdfb70170  ld          $s7, 0x170($sp)
    ctx->pc = 0x2c7d48u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2c7d4c: 0xdfb60160  ld          $s6, 0x160($sp)
    ctx->pc = 0x2c7d4cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2c7d50: 0xdfb50150  ld          $s5, 0x150($sp)
    ctx->pc = 0x2c7d50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2c7d54: 0xdfb40140  ld          $s4, 0x140($sp)
    ctx->pc = 0x2c7d54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2c7d58: 0xdfb30130  ld          $s3, 0x130($sp)
    ctx->pc = 0x2c7d58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2c7d5c: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x2c7d5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2c7d60: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x2c7d60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2c7d64: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x2c7d64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2c7d68: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x2c7d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c7d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7D6Cu;
        // 0x2c7d70: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7D74u;
}
