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

// Function: propCalcRooms
// Address: 0x269b30 - 0x269c84
void propCalcRooms_0x269b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propCalcRooms_0x269b30");
#endif

    switch (ctx->pc) {
        case 0x269becu: goto label_269bec;
        case 0x269c70u: goto label_269c70;
        default: break;
    }

    ctx->pc = 0x269b30u;

    // 0x269b30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x269b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x269b34: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x269b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x269b38: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x269b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x269b3c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x269b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x269b40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x269b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269b44: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x269b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x269b48: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x269b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x269b4c: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x269B4Cu;
    {
        const bool branch_taken_0x269b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B4Cu;
        // 0x269b50: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269b4c) {
            ctx->pc = 0x269C78u;
            goto label_269c78;
        }
    }
    ctx->pc = 0x269B54u;
    // 0x269b54: 0x8f829f70  lw          $v0, -0x6090($gp)
    ctx->pc = 0x269b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x269b58: 0x2442ff9a  addiu       $v0, $v0, -0x66
    ctx->pc = 0x269b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967194));
    // 0x269b5c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x269b5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x269b60: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x269B60u;
    {
        const bool branch_taken_0x269b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x269b60) {
            ctx->pc = 0x269B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269B60u;
            // 0x269b64: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269B74u;
            goto label_269b74;
        }
    }
    ctx->pc = 0x269B68u;
    // 0x269b68: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x269b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x269b6c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x269B6Cu;
    {
        const bool branch_taken_0x269b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B6Cu;
        // 0x269b70: 0xae000090  sw          $zero, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269b6c) {
            ctx->pc = 0x269C78u;
            goto label_269c78;
        }
    }
    ctx->pc = 0x269B74u;
label_269b74:
    // 0x269b74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x269b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x269b78: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x269B78u;
    {
        const bool branch_taken_0x269b78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x269B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B78u;
        // 0x269b7c: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269b78) {
            ctx->pc = 0x269B98u;
            goto label_269b98;
        }
    }
    ctx->pc = 0x269B80u;
    // 0x269b80: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x269b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x269b84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x269b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269b88: 0xae0300b8  sw          $v1, 0xB8($s0)
    ctx->pc = 0x269b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
    // 0x269b8c: 0x2442fe00  addiu       $v0, $v0, -0x200
    ctx->pc = 0x269b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966784));
    // 0x269b90: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x269B90u;
    {
        const bool branch_taken_0x269b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B90u;
        // 0x269b94: 0xae020090  sw          $v0, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269b90) {
            ctx->pc = 0x269C74u;
            goto label_269c74;
        }
    }
    ctx->pc = 0x269B98u;
label_269b98:
    // 0x269b98: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x269B98u;
    {
        const bool branch_taken_0x269b98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x269B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B98u;
        // 0x269b9c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269b98) {
            ctx->pc = 0x269BA8u;
            goto label_269ba8;
        }
    }
    ctx->pc = 0x269BA0u;
    // 0x269ba0: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x269BA0u;
    {
        const bool branch_taken_0x269ba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x269ba0) {
            ctx->pc = 0x269BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269BA0u;
            // 0x269ba4: 0xc60301fc  lwc1        $f3, 0x1FC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x269BB0u;
            goto label_269bb0;
        }
    }
    ctx->pc = 0x269BA8u;
label_269ba8:
    // 0x269ba8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x269BA8u;
    {
        const bool branch_taken_0x269ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269BA8u;
        // 0x269bac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269ba8) {
            ctx->pc = 0x269C00u;
            goto label_269c00;
        }
    }
    ctx->pc = 0x269BB0u;
label_269bb0:
    // 0x269bb0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x269bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x269bb4: 0xc6020030  lwc1        $f2, 0x30($s0)
    ctx->pc = 0x269bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x269bb8: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x269bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269bbc: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x269bbcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x269bc0: 0xc6040200  lwc1        $f4, 0x200($s0)
    ctx->pc = 0x269bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x269bc4: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x269bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269bc8: 0xc6030204  lwc1        $f3, 0x204($s0)
    ctx->pc = 0x269bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x269bcc: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x269bccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x269bd0: 0xc78c83fc  lwc1        $f12, -0x7C04($gp)
    ctx->pc = 0x269bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x269bd4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x269bd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x269bd8: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x269bd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x269bdc: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x269bdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x269be0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x269be0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x269be4: 0xc09f21c  jal         func_27C870
    ctx->pc = 0x269BE4u;
    SET_GPR_U32(ctx, 31, 0x269BECu);
    ctx->pc = 0x269BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269BE4u;
    // 0x269be8: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C870u, 0x269BE4u, 0x269BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269BECu;
label_269bec:
    // 0x269bec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x269becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269bf0: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x269bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x269bf4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x269bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269bf8: 0xae0300b8  sw          $v1, 0xB8($s0)
    ctx->pc = 0x269bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
    // 0x269bfc: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x269bfcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_269c00:
    // 0x269c00: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x269C00u;
    {
        const bool branch_taken_0x269c00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x269C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269C00u;
        // 0x269c04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269c00) {
            ctx->pc = 0x269C74u;
            goto label_269c74;
        }
    }
    ctx->pc = 0x269C08u;
    // 0x269c08: 0xc60001fc  lwc1        $f0, 0x1FC($s0)
    ctx->pc = 0x269c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269c0c: 0xc6050200  lwc1        $f5, 0x200($s0)
    ctx->pc = 0x269c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x269c10: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x269c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x269c14: 0xc6030204  lwc1        $f3, 0x204($s0)
    ctx->pc = 0x269c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x269c18: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x269c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x269c1c: 0xc6040030  lwc1        $f4, 0x30($s0)
    ctx->pc = 0x269c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x269c20: 0xc6020034  lwc1        $f2, 0x34($s0)
    ctx->pc = 0x269c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x269c24: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x269c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269c28: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x269c28u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x269c2c: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x269c2cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x269c30: 0xc6000210  lwc1        $f0, 0x210($s0)
    ctx->pc = 0x269c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269c34: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x269c34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x269c38: 0xc605020c  lwc1        $f5, 0x20C($s0)
    ctx->pc = 0x269c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x269c3c: 0x460020c0  add.s       $f3, $f4, $f0
    ctx->pc = 0x269c3cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x269c40: 0x46051180  add.s       $f6, $f2, $f5
    ctx->pc = 0x269c40u;
    ctx->f[6] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x269c44: 0x460009c0  add.s       $f7, $f1, $f0
    ctx->pc = 0x269c44u;
    ctx->f[7] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x269c48: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x269c48u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x269c4c: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x269c4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x269c50: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x269c50u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x269c54: 0xe7a60010  swc1        $f6, 0x10($sp)
    ctx->pc = 0x269c54u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x269c58: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x269c58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x269c5c: 0xe7a70014  swc1        $f7, 0x14($sp)
    ctx->pc = 0x269c5cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x269c60: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x269c60u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x269c64: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x269c64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x269c68: 0xc095bf4  jal         func_256FD0
    ctx->pc = 0x269C68u;
    SET_GPR_U32(ctx, 31, 0x269C70u);
    ctx->pc = 0x269C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269C68u;
    // 0x269c6c: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x256FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256FD0u, 0x269C68u, 0x269C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269C70u;
label_269c70:
    // 0x269c70: 0xae0200b8  sw          $v0, 0xB8($s0)
    ctx->pc = 0x269c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
label_269c74:
    // 0x269c74: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x269c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_269c78:
    // 0x269c78: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x269c78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x269c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x269C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269C7Cu;
        // 0x269c80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269C84u;
}
