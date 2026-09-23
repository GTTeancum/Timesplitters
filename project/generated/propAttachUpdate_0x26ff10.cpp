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

// Function: propAttachUpdate
// Address: 0x26ff10 - 0x2702d8
void propAttachUpdate_0x26ff10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propAttachUpdate_0x26ff10");
#endif

    switch (ctx->pc) {
        case 0x26ff78u: goto label_26ff78;
        case 0x26ff88u: goto label_26ff88;
        case 0x26fff8u: goto label_26fff8;
        case 0x2700b4u: goto label_2700b4;
        case 0x2700c4u: goto label_2700c4;
        case 0x2700dcu: goto label_2700dc;
        case 0x270130u: goto label_270130;
        case 0x270144u: goto label_270144;
        case 0x2701e8u: goto label_2701e8;
        case 0x2701f8u: goto label_2701f8;
        case 0x270200u: goto label_270200;
        case 0x27026cu: goto label_27026c;
        case 0x27027cu: goto label_27027c;
        case 0x27029cu: goto label_27029c;
        case 0x2702acu: goto label_2702ac;
        default: break;
    }

    ctx->pc = 0x26ff10u;

    // 0x26ff10: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x26ff10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x26ff14: 0xffb100d0  sd          $s1, 0xD0($sp)
    ctx->pc = 0x26ff14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 17));
    // 0x26ff18: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x26ff18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x26ff1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26ff1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff20: 0xffb300f0  sd          $s3, 0xF0($sp)
    ctx->pc = 0x26ff20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 19));
    // 0x26ff24: 0xffb200e0  sd          $s2, 0xE0($sp)
    ctx->pc = 0x26ff24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 18));
    // 0x26ff28: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x26ff28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x26ff2c: 0x8e2500bc  lw          $a1, 0xBC($s1)
    ctx->pc = 0x26ff2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x26ff30: 0x8ca200f4  lw          $v0, 0xF4($a1)
    ctx->pc = 0x26ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
    // 0x26ff34: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x26ff34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x26ff38: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x26ff38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x26ff3c: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x26FF3Cu;
    {
        const bool branch_taken_0x26ff3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ff3c) {
            ctx->pc = 0x26FF40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FF3Cu;
            // 0x26ff40: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FF64u;
            goto label_26ff64;
        }
    }
    ctx->pc = 0x26FF44u;
    // 0x26ff44: 0x3c020f00  lui         $v0, 0xF00
    ctx->pc = 0x26ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3840 << 16));
    // 0x26ff48: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x26ff48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x26ff4c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26FF4Cu;
    {
        const bool branch_taken_0x26ff4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ff4c) {
            ctx->pc = 0x26FF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FF4Cu;
            // 0x26ff50: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FF64u;
            goto label_26ff64;
        }
    }
    ctx->pc = 0x26FF54u;
    // 0x26ff54: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x26ff54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x26ff58: 0x54600022  bnel        $v1, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x26FF58u;
    {
        const bool branch_taken_0x26ff58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ff58) {
            ctx->pc = 0x26FF5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FF58u;
            // 0x26ff5c: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FFE4u;
            goto label_26ffe4;
        }
    }
    ctx->pc = 0x26FF60u;
    // 0x26ff60: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x26ff60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_26ff64:
    // 0x26ff64: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x26ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26ff68: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x26ff68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26ff6c: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x26FF6Cu;
    {
        const bool branch_taken_0x26ff6c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x26FF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FF6Cu;
        // 0x26ff70: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ff6c) {
            ctx->pc = 0x26FFA4u;
            goto label_26ffa4;
        }
    }
    ctx->pc = 0x26FF74u;
    // 0x26ff74: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x26ff74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_26ff78:
    // 0x26ff78: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x26ff78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x26ff7c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x26ff7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26ff80: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x26FF80u;
    SET_GPR_U32(ctx, 31, 0x26FF88u);
    ctx->pc = 0x26FF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FF80u;
    // 0x26ff84: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x26FF80u, 0x26FF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FF88u;
label_26ff88:
    // 0x26ff88: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x26ff88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x26ff8c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x26ff8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26ff90: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x26ff90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26ff94: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x26ff94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26ff98: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x26FF98u;
    {
        const bool branch_taken_0x26ff98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ff98) {
            ctx->pc = 0x26FF9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FF98u;
            // 0x26ff9c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FF78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26ff78;
        }
    }
    ctx->pc = 0x26FFA0u;
    // 0x26ffa0: 0x8e2500bc  lw          $a1, 0xBC($s1)
    ctx->pc = 0x26ffa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_26ffa4:
    // 0x26ffa4: 0x8ca200f4  lw          $v0, 0xF4($a1)
    ctx->pc = 0x26ffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
    // 0x26ffa8: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x26ffa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x26ffac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26ffacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26ffb0: 0xc4420030  lwc1        $f2, 0x30($v0)
    ctx->pc = 0x26ffb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26ffb4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x26ffb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x26ffb8: 0xe6220030  swc1        $f2, 0x30($s1)
    ctx->pc = 0x26ffb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x26ffbc: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x26ffbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x26ffc0: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x26ffc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ffc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26ffc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26ffc8: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x26ffc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x26ffcc: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x26ffccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ffd0: 0xe6220234  swc1        $f2, 0x234($s1)
    ctx->pc = 0x26ffd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 564), bits); }
    // 0x26ffd4: 0xe621023c  swc1        $f1, 0x23C($s1)
    ctx->pc = 0x26ffd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 572), bits); }
    // 0x26ffd8: 0xe6200238  swc1        $f0, 0x238($s1)
    ctx->pc = 0x26ffd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 568), bits); }
    // 0x26ffdc: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x26FFDCu;
    {
        const bool branch_taken_0x26ffdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FFDCu;
        // 0x26ffe0: 0xe6210038  swc1        $f1, 0x38($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ffdc) {
            ctx->pc = 0x2702BCu;
            goto label_2702bc;
        }
    }
    ctx->pc = 0x26FFE4u;
label_26ffe4:
    // 0x26ffe4: 0x8e2500c0  lw          $a1, 0xC0($s1)
    ctx->pc = 0x26ffe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x26ffe8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26ffe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26ffec: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x26ffecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x26fff0: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x26FFF0u;
    SET_GPR_U32(ctx, 31, 0x26FFF8u);
    ctx->pc = 0x26FFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FFF0u;
    // 0x26fff4: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x26FFF0u, 0x26FFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FFF8u;
label_26fff8:
    // 0x26fff8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x26fff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x26fffc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x26fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x270000: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x270000u;
    {
        const bool branch_taken_0x270000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x270004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270000u;
        // 0x270004: 0x28620021  slti        $v0, $v1, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270000) {
            ctx->pc = 0x270044u;
            goto label_270044;
        }
    }
    ctx->pc = 0x270008u;
    // 0x270008: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x270008u;
    {
        const bool branch_taken_0x270008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270008u;
        // 0x27000c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270008) {
            ctx->pc = 0x270028u;
            goto label_270028;
        }
    }
    ctx->pc = 0x270010u;
    // 0x270010: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x270010u;
    {
        const bool branch_taken_0x270010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x270014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270010u;
        // 0x270014: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270010) {
            ctx->pc = 0x2700BCu;
            goto label_2700bc;
        }
    }
    ctx->pc = 0x270018u;
    // 0x270018: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x270018u;
    {
        const bool branch_taken_0x270018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x270018) {
            ctx->pc = 0x27001Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270018u;
            // 0x27001c: 0x8e2300c4  lw          $v1, 0xC4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270048u;
            goto label_270048;
        }
    }
    ctx->pc = 0x270020u;
    // 0x270020: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x270020u;
    {
        const bool branch_taken_0x270020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270020u;
        // 0x270024: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270020) {
            ctx->pc = 0x2700C8u;
            goto label_2700c8;
        }
    }
    ctx->pc = 0x270028u;
label_270028:
    // 0x270028: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x270028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x27002c: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x27002Cu;
    {
        const bool branch_taken_0x27002c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x270030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27002Cu;
        // 0x270030: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27002c) {
            ctx->pc = 0x270090u;
            goto label_270090;
        }
    }
    ctx->pc = 0x270034u;
    // 0x270034: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x270034u;
    {
        const bool branch_taken_0x270034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x270034) {
            ctx->pc = 0x2700BCu;
            goto label_2700bc;
        }
    }
    ctx->pc = 0x27003Cu;
    // 0x27003c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x27003Cu;
    {
        const bool branch_taken_0x27003c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27003Cu;
        // 0x270040: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27003c) {
            ctx->pc = 0x2700C8u;
            goto label_2700c8;
        }
    }
    ctx->pc = 0x270044u;
label_270044:
    // 0x270044: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x270044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_270048:
    // 0x270048: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x270048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x27004c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27004Cu;
    {
        const bool branch_taken_0x27004c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27004Cu;
        // 0x270050: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27004c) {
            ctx->pc = 0x27006Cu;
            goto label_27006c;
        }
    }
    ctx->pc = 0x270054u;
    // 0x270054: 0xc78c84e0  lwc1        $f12, -0x7B20($gp)
    ctx->pc = 0x270054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x270058: 0xc78d84e4  lwc1        $f13, -0x7B1C($gp)
    ctx->pc = 0x270058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27005c: 0xc78e84e8  lwc1        $f14, -0x7B18($gp)
    ctx->pc = 0x27005cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x270060: 0xc78f84ec  lwc1        $f15, -0x7B14($gp)
    ctx->pc = 0x270060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x270064: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x270064u;
    {
        const bool branch_taken_0x270064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270064u;
        // 0x270068: 0xc79084f0  lwc1        $f16, -0x7B10($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x270064) {
            ctx->pc = 0x2700A8u;
            goto label_2700a8;
        }
    }
    ctx->pc = 0x27006Cu;
label_27006c:
    // 0x27006c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x27006cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x270070: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x270070u;
    {
        const bool branch_taken_0x270070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x270070) {
            ctx->pc = 0x270074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270070u;
            // 0x270074: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2700C8u;
            goto label_2700c8;
        }
    }
    ctx->pc = 0x270078u;
    // 0x270078: 0xc78c84f4  lwc1        $f12, -0x7B0C($gp)
    ctx->pc = 0x270078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27007c: 0xc78d84f8  lwc1        $f13, -0x7B08($gp)
    ctx->pc = 0x27007cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x270080: 0xc78e84fc  lwc1        $f14, -0x7B04($gp)
    ctx->pc = 0x270080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x270084: 0xc78f8500  lwc1        $f15, -0x7B00($gp)
    ctx->pc = 0x270084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x270088: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x270088u;
    {
        const bool branch_taken_0x270088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270088u;
        // 0x27008c: 0xc7908504  lwc1        $f16, -0x7AFC($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x270088) {
            ctx->pc = 0x2700A8u;
            goto label_2700a8;
        }
    }
    ctx->pc = 0x270090u;
label_270090:
    // 0x270090: 0xc78c8508  lwc1        $f12, -0x7AF8($gp)
    ctx->pc = 0x270090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x270094: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x270094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270098: 0xc78d850c  lwc1        $f13, -0x7AF4($gp)
    ctx->pc = 0x270098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27009c: 0xc78e8510  lwc1        $f14, -0x7AF0($gp)
    ctx->pc = 0x27009cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2700a0: 0xc78f8514  lwc1        $f15, -0x7AEC($gp)
    ctx->pc = 0x2700a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2700a4: 0xc7908518  lwc1        $f16, -0x7AE8($gp)
    ctx->pc = 0x2700a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_2700a8:
    // 0x2700a8: 0x44808800  mtc1        $zero, $f17
    ctx->pc = 0x2700a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x2700ac: 0xc0ad338  jal         func_2B4CE0
    ctx->pc = 0x2700ACu;
    SET_GPR_U32(ctx, 31, 0x2700B4u);
    ctx->pc = 0x2B4CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4CE0u, 0x2700ACu, 0x2700B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2700B4u;
label_2700b4:
    // 0x2700b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2700B4u;
    {
        const bool branch_taken_0x2700b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2700B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2700B4u;
        // 0x2700b8: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2700b4) {
            ctx->pc = 0x2700C8u;
            goto label_2700c8;
        }
    }
    ctx->pc = 0x2700BCu;
label_2700bc:
    // 0x2700bc: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x2700BCu;
    SET_GPR_U32(ctx, 31, 0x2700C4u);
    ctx->pc = 0x2700C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2700BCu;
    // 0x2700c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x2700BCu, 0x2700C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2700C4u;
label_2700c4:
    // 0x2700c4: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2700c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2700c8:
    // 0x2700c8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2700c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2700cc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2700ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2700d0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2700d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2700d4: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2700D4u;
    SET_GPR_U32(ctx, 31, 0x2700DCu);
    ctx->pc = 0x2700D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2700D4u;
    // 0x2700d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2700D4u, 0x2700DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2700DCu;
label_2700dc:
    // 0x2700dc: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x2700dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2700e0: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x2700e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2700e4: 0x8c4300f4  lw          $v1, 0xF4($v0)
    ctx->pc = 0x2700e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x2700e8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2700e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2700ec: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2700ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2700f0: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x2700f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2700f4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2700f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2700f8: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x2700f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x2700fc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2700fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x270100: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x270100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270104: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x270104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x270108: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x270108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27010c: 0xe6210038  swc1        $f1, 0x38($s1)
    ctx->pc = 0x27010cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x270110: 0xc4600048  lwc1        $f0, 0x48($v1)
    ctx->pc = 0x270110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270114: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x270114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x270118: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x270118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27011c: 0xe621004c  swc1        $f1, 0x4C($s1)
    ctx->pc = 0x27011cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x270120: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x270120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270124: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x270124u;
    {
        const bool branch_taken_0x270124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270124u;
        // 0x270128: 0xe6200058  swc1        $f0, 0x58($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x270124) {
            ctx->pc = 0x27015Cu;
            goto label_27015c;
        }
    }
    ctx->pc = 0x27012Cu;
    // 0x27012c: 0x0  nop
    ctx->pc = 0x27012cu;
    // NOP
label_270130:
    // 0x270130: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x270130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x270134: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x270134u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x270138: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x270138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27013c: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x27013Cu;
    SET_GPR_U32(ctx, 31, 0x270144u);
    ctx->pc = 0x270140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27013Cu;
    // 0x270140: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x27013Cu, 0x270144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270144u;
label_270144:
    // 0x270144: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x270144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x270148: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x270148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x27014c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x27014cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x270150: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x270150u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x270154: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x270154u;
    {
        const bool branch_taken_0x270154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270154u;
        // 0x270158: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270154) {
            ctx->pc = 0x270130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_270130;
        }
    }
    ctx->pc = 0x27015Cu;
label_27015c:
    // 0x27015c: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x27015cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x270160: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x270160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x270164: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x270164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x270168: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x270168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27016c: 0xe6200234  swc1        $f0, 0x234($s1)
    ctx->pc = 0x27016cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 564), bits); }
    // 0x270170: 0xc4a10034  lwc1        $f1, 0x34($a1)
    ctx->pc = 0x270170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270174: 0xe6210238  swc1        $f1, 0x238($s1)
    ctx->pc = 0x270174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 568), bits); }
    // 0x270178: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x270178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27017c: 0x1443004b  bne         $v0, $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x27017Cu;
    {
        const bool branch_taken_0x27017c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x270180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27017Cu;
        // 0x270180: 0xe620023c  swc1        $f0, 0x23C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 572), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27017c) {
            ctx->pc = 0x2702ACu;
            goto label_2702ac;
        }
    }
    ctx->pc = 0x270184u;
    // 0x270184: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x270184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x270188: 0x2462fe8a  addiu       $v0, $v1, -0x176
    ctx->pc = 0x270188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966922));
    // 0x27018c: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x27018cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x270190: 0x54400047  bnel        $v0, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x270190u;
    {
        const bool branch_taken_0x270190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270190) {
            ctx->pc = 0x270194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270190u;
            // 0x270194: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2702B0u;
            goto label_2702b0;
        }
    }
    ctx->pc = 0x270198u;
    // 0x270198: 0x24020181  addiu       $v0, $zero, 0x181
    ctx->pc = 0x270198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 385));
    // 0x27019c: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x27019Cu;
    {
        const bool branch_taken_0x27019c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2701A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27019Cu;
        // 0x2701a0: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27019c) {
            ctx->pc = 0x2702ACu;
            goto label_2702ac;
        }
    }
    ctx->pc = 0x2701A4u;
    // 0x2701a4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2701a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2701a8: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2701a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2701ac: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x2701acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2701b0: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2701b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2701b4: 0x80830007  lb          $v1, 0x7($a0)
    ctx->pc = 0x2701b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x2701b8: 0x1860003c  blez        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x2701B8u;
    {
        const bool branch_taken_0x2701b8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2701BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2701B8u;
        // 0x2701bc: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2701b8) {
            ctx->pc = 0x2702ACu;
            goto label_2702ac;
        }
    }
    ctx->pc = 0x2701C0u;
    // 0x2701c0: 0x5440003b  bnel        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x2701C0u;
    {
        const bool branch_taken_0x2701c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2701c0) {
            ctx->pc = 0x2701C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2701C0u;
            // 0x2701c4: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2702B0u;
            goto label_2702b0;
        }
    }
    ctx->pc = 0x2701C8u;
    // 0x2701c8: 0x8c900048  lw          $s0, 0x48($a0)
    ctx->pc = 0x2701c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2701cc: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x2701ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2701d0: 0x24b30040  addiu       $s3, $a1, 0x40
    ctx->pc = 0x2701d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x2701d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2701d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2701d8: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x2701d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2701dc: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x2701dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2701e0: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x2701E0u;
    SET_GPR_U32(ctx, 31, 0x2701E8u);
    ctx->pc = 0x2701E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2701E0u;
    // 0x2701e4: 0xc60e0008  lwc1        $f14, 0x8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x2701E0u, 0x2701E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2701E8u;
label_2701e8:
    // 0x2701e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2701e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2701ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2701ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2701f0: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2701F0u;
    SET_GPR_U32(ctx, 31, 0x2701F8u);
    ctx->pc = 0x2701F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2701F0u;
    // 0x2701f4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2701F0u, 0x2701F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2701F8u;
label_2701f8:
    // 0x2701f8: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2701F8u;
    SET_GPR_U32(ctx, 31, 0x270200u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2701F8u, 0x270200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270200u;
label_270200:
    // 0x270200: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x270200u;
    {
        const bool branch_taken_0x270200 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x270204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270200u;
        // 0x270204: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270200) {
            ctx->pc = 0x270214u;
            goto label_270214;
        }
    }
    ctx->pc = 0x270208u;
    // 0x270208: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x270208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27020c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27020Cu;
    {
        const bool branch_taken_0x27020c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27020Cu;
        // 0x270210: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27020c) {
            ctx->pc = 0x270228u;
            goto label_270228;
        }
    }
    ctx->pc = 0x270214u;
label_270214:
    // 0x270214: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x270214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x270218: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x270218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x27021c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27021cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x270220: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x270220u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x270224: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x270224u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_270228:
    // 0x270228: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x270228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x27022c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x27022cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x270230: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x270230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270234: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x270234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x270238: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x270238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27023c: 0x460e0b82  mul.s       $f14, $f1, $f14
    ctx->pc = 0x27023cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
    // 0x270240: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x270240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x270244: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x270244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x270248: 0xc781851c  lwc1        $f1, -0x7AE4($gp)
    ctx->pc = 0x270248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27024c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27024cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x270250: 0x46007382  mul.s       $f14, $f14, $f0
    ctx->pc = 0x270250u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x270254: 0x46017382  mul.s       $f14, $f14, $f1
    ctx->pc = 0x270254u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x270258: 0x0  nop
    ctx->pc = 0x270258u;
    // NOP
    // 0x27025c: 0x0  nop
    ctx->pc = 0x27025cu;
    // NOP
    // 0x270260: 0x46027383  div.s       $f14, $f14, $f2
    ctx->pc = 0x270260u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[14] * 0.0f); } else ctx->f[14] = ctx->f[14] / ctx->f[2];
    // 0x270264: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x270264u;
    SET_GPR_U32(ctx, 31, 0x27026Cu);
    ctx->pc = 0x270268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270264u;
    // 0x270268: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x270264u, 0x27026Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27026Cu;
label_27026c:
    // 0x27026c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27026cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270270: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x270270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270274: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x270274u;
    SET_GPR_U32(ctx, 31, 0x27027Cu);
    ctx->pc = 0x270278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270274u;
    // 0x270278: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x270274u, 0x27027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27027Cu;
label_27027c:
    // 0x27027c: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x27027cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x270280: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x270280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270284: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x270284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x270288: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x270288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27028c: 0x46007387  neg.s       $f14, $f14
    ctx->pc = 0x27028cu;
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    // 0x270290: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x270290u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x270294: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x270294u;
    SET_GPR_U32(ctx, 31, 0x27029Cu);
    ctx->pc = 0x270298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270294u;
    // 0x270298: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x270294u, 0x27029Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27029Cu;
label_27029c:
    // 0x27029c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27029cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2702a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2702a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2702a4: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2702A4u;
    SET_GPR_U32(ctx, 31, 0x2702ACu);
    ctx->pc = 0x2702A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2702A4u;
    // 0x2702a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2702A4u, 0x2702ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2702ACu;
label_2702ac:
    // 0x2702ac: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x2702acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_2702b0:
    // 0x2702b0: 0x8c4300f4  lw          $v1, 0xF4($v0)
    ctx->pc = 0x2702b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x2702b4: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x2702b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2702b8: 0xae24000c  sw          $a0, 0xC($s1)
    ctx->pc = 0x2702b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
label_2702bc:
    // 0x2702bc: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x2702bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2702c0: 0xdfb300f0  ld          $s3, 0xF0($sp)
    ctx->pc = 0x2702c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2702c4: 0xdfb200e0  ld          $s2, 0xE0($sp)
    ctx->pc = 0x2702c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2702c8: 0xdfb100d0  ld          $s1, 0xD0($sp)
    ctx->pc = 0x2702c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2702cc: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x2702ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2702d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2702D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2702D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2702D0u;
        // 0x2702d4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2702D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2702D8u;
}
