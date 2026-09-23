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

// Function: doorNew
// Address: 0x269970 - 0x269b0c
void doorNew_0x269970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("doorNew_0x269970");
#endif

    switch (ctx->pc) {
        case 0x2699b0u: goto label_2699b0;
        case 0x2699c8u: goto label_2699c8;
        case 0x2699ecu: goto label_2699ec;
        default: break;
    }

    ctx->pc = 0x269970u;

    // 0x269970: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x269970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x269974: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x269974u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x269978: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x269978u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x26997c: 0xe7b70058  swc1        $f23, 0x58($sp)
    ctx->pc = 0x26997cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x269980: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x269980u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x269984: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x269984u;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
    // 0x269988: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x269988u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x26998c: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x26998cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x269990: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x269990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x269994: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x269994u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x269998: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x269998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x26999c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x26999cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2699a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2699a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2699a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2699a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2699a8: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x2699A8u;
    SET_GPR_U32(ctx, 31, 0x2699B0u);
    ctx->pc = 0x2699ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2699A8u;
    // 0x2699ac: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x2699A8u, 0x2699B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2699B0u;
label_2699b0:
    // 0x2699b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2699b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2699b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2699b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2699b8: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x2699b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2699bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2699bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2699c0: 0xc09829e  jal         func_260A78
    ctx->pc = 0x2699C0u;
    SET_GPR_U32(ctx, 31, 0x2699C8u);
    ctx->pc = 0x2699C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2699C0u;
    // 0x2699c4: 0x8e300160  lw          $s0, 0x160($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x2699C0u, 0x2699C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2699C8u;
label_2699c8:
    // 0x2699c8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2699c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2699cc: 0x3c060027  lui         $a2, 0x27
    ctx->pc = 0x2699ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)39 << 16));
    // 0x2699d0: 0x24c69960  addiu       $a2, $a2, -0x66A0
    ctx->pc = 0x2699d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941024));
    // 0x2699d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2699d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2699d8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2699d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2699dc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2699dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2699e0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2699e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x2699e4: 0xc099c78  jal         func_2671E0
    ctx->pc = 0x2699E4u;
    SET_GPR_U32(ctx, 31, 0x2699ECu);
    ctx->pc = 0x2699E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2699E4u;
    // 0x2699e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2671E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2671E0u, 0x2699E4u, 0x2699ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2699ECu;
label_2699ec:
    // 0x2699ec: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x2699ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2699f0: 0xe616000c  swc1        $f22, 0xC($s0)
    ctx->pc = 0x2699f0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2699f4: 0xe6170010  swc1        $f23, 0x10($s0)
    ctx->pc = 0x2699f4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2699f8: 0xe6140020  swc1        $f20, 0x20($s0)
    ctx->pc = 0x2699f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2699fc: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x2699fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x269a00: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x269a00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x269a04: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x269a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x269a08: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x269A08u;
    {
        const bool branch_taken_0x269a08 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x269A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A08u;
        // 0x269a0c: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269a08) {
            ctx->pc = 0x269A24u;
            goto label_269a24;
        }
    }
    ctx->pc = 0x269A10u;
    // 0x269a10: 0x3c0201fd  lui         $v0, 0x1FD
    ctx->pc = 0x269a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)509 << 16));
    // 0x269a14: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x269a14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x269a18: 0x24420da0  addiu       $v0, $v0, 0xDA0
    ctx->pc = 0x269a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3488));
    // 0x269a1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x269a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x269a20: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x269a20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_269a24:
    // 0x269a24: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x269a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x269a28: 0x2444ff57  addiu       $a0, $v0, -0xA9
    ctx->pc = 0x269a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967127));
    // 0x269a2c: 0x2c830072  sltiu       $v1, $a0, 0x72
    ctx->pc = 0x269a2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)114) ? 1 : 0);
    // 0x269a30: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x269A30u;
    {
        const bool branch_taken_0x269a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x269A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A30u;
        // 0x269a34: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269a30) {
            ctx->pc = 0x269ADCu;
            goto label_269adc;
        }
    }
    ctx->pc = 0x269A38u;
    // 0x269a38: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x269a38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x269a3c: 0x24427c10  addiu       $v0, $v0, 0x7C10
    ctx->pc = 0x269a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31760));
    // 0x269a40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x269a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x269a44: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x269a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x269a48: 0x800008  jr          $a0
    ctx->pc = 0x269A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x269A50u: goto label_269a50;
            case 0x269A60u: goto label_269a60;
            case 0x269A70u: goto label_269a70;
            case 0x269A7Cu: goto label_269a7c;
            case 0x269A90u: goto label_269a90;
            case 0x269A9Cu: goto label_269a9c;
            case 0x269AA8u: goto label_269aa8;
            case 0x269AB4u: goto label_269ab4;
            case 0x269AC4u: goto label_269ac4;
            case 0x269ADCu: goto label_269adc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269A48u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x269A50u;
label_269a50:
    // 0x269a50: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x269a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x269a54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x269a54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269a58: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x269A58u;
    {
        const bool branch_taken_0x269a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A58u;
        // 0x269a5c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269a58) {
            ctx->pc = 0x269A88u;
            goto label_269a88;
        }
    }
    ctx->pc = 0x269A60u;
label_269a60:
    // 0x269a60: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x269a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x269a64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x269a64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269a68: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x269A68u;
    {
        const bool branch_taken_0x269a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A68u;
        // 0x269a6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269a68) {
            ctx->pc = 0x269AD0u;
            goto label_269ad0;
        }
    }
    ctx->pc = 0x269A70u;
label_269a70:
    // 0x269a70: 0xc78083ec  lwc1        $f0, -0x7C14($gp)
    ctx->pc = 0x269a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269a74: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x269A74u;
    {
        const bool branch_taken_0x269a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A74u;
        // 0x269a78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269a74) {
            ctx->pc = 0x269AD0u;
            goto label_269ad0;
        }
    }
    ctx->pc = 0x269A7Cu;
label_269a7c:
    // 0x269a7c: 0x3c014030  lui         $at, 0x4030
    ctx->pc = 0x269a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16432 << 16));
    // 0x269a80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x269a80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269a84: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x269a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_269a88:
    // 0x269a88: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x269A88u;
    {
        const bool branch_taken_0x269a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A88u;
        // 0x269a8c: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x269a88) {
            ctx->pc = 0x269AE0u;
            goto label_269ae0;
        }
    }
    ctx->pc = 0x269A90u;
label_269a90:
    // 0x269a90: 0xc78083f0  lwc1        $f0, -0x7C10($gp)
    ctx->pc = 0x269a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269a94: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x269A94u;
    {
        const bool branch_taken_0x269a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A94u;
        // 0x269a98: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269a94) {
            ctx->pc = 0x269AD0u;
            goto label_269ad0;
        }
    }
    ctx->pc = 0x269A9Cu;
label_269a9c:
    // 0x269a9c: 0xc78083f4  lwc1        $f0, -0x7C0C($gp)
    ctx->pc = 0x269a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269aa0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x269AA0u;
    {
        const bool branch_taken_0x269aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269AA0u;
        // 0x269aa4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269aa0) {
            ctx->pc = 0x269AD0u;
            goto label_269ad0;
        }
    }
    ctx->pc = 0x269AA8u;
label_269aa8:
    // 0x269aa8: 0xc78083f8  lwc1        $f0, -0x7C08($gp)
    ctx->pc = 0x269aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269aac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x269AACu;
    {
        const bool branch_taken_0x269aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269AACu;
        // 0x269ab0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269aac) {
            ctx->pc = 0x269AD0u;
            goto label_269ad0;
        }
    }
    ctx->pc = 0x269AB4u;
label_269ab4:
    // 0x269ab4: 0x3c014030  lui         $at, 0x4030
    ctx->pc = 0x269ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16432 << 16));
    // 0x269ab8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x269ab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269abc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x269ABCu;
    {
        const bool branch_taken_0x269abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269ABCu;
        // 0x269ac0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269abc) {
            ctx->pc = 0x269AD0u;
            goto label_269ad0;
        }
    }
    ctx->pc = 0x269AC4u;
label_269ac4:
    // 0x269ac4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x269ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x269ac8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x269ac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269acc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x269accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_269ad0:
    // 0x269ad0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x269ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x269ad4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x269AD4u;
    {
        const bool branch_taken_0x269ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269AD4u;
        // 0x269ad8: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x269ad4) {
            ctx->pc = 0x269AE0u;
            goto label_269ae0;
        }
    }
    ctx->pc = 0x269ADCu;
label_269adc:
    // 0x269adc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x269adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_269ae0:
    // 0x269ae0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x269ae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269ae4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x269ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x269ae8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x269ae8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x269aec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x269aecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x269af0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x269af0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x269af4: 0xc7b70058  lwc1        $f23, 0x58($sp)
    ctx->pc = 0x269af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x269af8: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x269af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x269afc: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x269afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x269b00: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x269b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x269b04: 0x3e00008  jr          $ra
    ctx->pc = 0x269B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B04u;
        // 0x269b08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269B0Cu;
}
