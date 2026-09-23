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

// Function: __kernel_tanf
// Address: 0x2dbc28 - 0x2dbebc
void ps2___kernel_tanf_0x2dbc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___kernel_tanf_0x2dbc28");
#endif

    switch (ctx->pc) {
        case 0x2dbc80u: goto label_2dbc80;
        default: break;
    }

    ctx->pc = 0x2dbc28u;

    // 0x2dbc28: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x2dbc28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2dbc2c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dbc2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dbc30: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2dbc30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbc34: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x2dbc34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x2dbc38: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2dbc38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2dbc3c: 0x3c02317f  lui         $v0, 0x317F
    ctx->pc = 0x2dbc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12671 << 16));
    // 0x2dbc40: 0xc32824  and         $a1, $a2, $v1
    ctx->pc = 0x2dbc40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2dbc44: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2dbc44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2dbc48: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2dbc48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2dbc4c: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2DBC4Cu;
    {
        const bool branch_taken_0x2dbc4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DBC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBC4Cu;
        // 0x2dbc50: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbc4c) {
            ctx->pc = 0x2DBCCCu;
            goto label_2dbccc;
        }
    }
    ctx->pc = 0x2DBC54u;
    // 0x2dbc54: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2dbc54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2dbc58: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2dbc58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2dbc5c: 0x0  nop
    ctx->pc = 0x2dbc5cu;
    // NOP
    // 0x2dbc60: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2DBC60u;
    {
        const bool branch_taken_0x2dbc60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DBC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBC60u;
        // 0x2dbc64: 0x3c023f2c  lui         $v0, 0x3F2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16172 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbc60) {
            ctx->pc = 0x2DBCD0u;
            goto label_2dbcd0;
        }
    }
    ctx->pc = 0x2DBC68u;
    // 0x2dbc68: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2dbc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2dbc6c: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x2dbc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2dbc70: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2DBC70u;
    {
        const bool branch_taken_0x2dbc70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DBC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBC70u;
        // 0x2dbc74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbc70) {
            ctx->pc = 0x2DBCA0u;
            goto label_2dbca0;
        }
    }
    ctx->pc = 0x2DBC78u;
    // 0x2dbc78: 0xc0b7168  jal         func_2DC5A0
    ctx->pc = 0x2DBC78u;
    SET_GPR_U32(ctx, 31, 0x2DBC80u);
    ctx->pc = 0x2DC5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC5A0u, 0x2DBC78u, 0x2DBC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBC80u;
label_2dbc80:
    // 0x2dbc80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2dbc80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2dbc84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2dbc84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dbc88: 0x0  nop
    ctx->pc = 0x2dbc88u;
    // NOP
    // 0x2dbc8c: 0x0  nop
    ctx->pc = 0x2dbc8cu;
    // NOP
    // 0x2dbc90: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2dbc90u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x2dbc94: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x2DBC94u;
    {
        const bool branch_taken_0x2dbc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBC94u;
        // 0x2dbc98: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbc94) {
            ctx->pc = 0x2DBEB4u;
            goto label_2dbeb4;
        }
    }
    ctx->pc = 0x2DBC9Cu;
    // 0x2dbc9c: 0x0  nop
    ctx->pc = 0x2dbc9cu;
    // NOP
label_2dbca0:
    // 0x2dbca0: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DBCA0u;
    {
        const bool branch_taken_0x2dbca0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DBCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBCA0u;
        // 0x2dbca4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbca0) {
            ctx->pc = 0x2DBCC4u;
            goto label_2dbcc4;
        }
    }
    ctx->pc = 0x2DBCA8u;
    // 0x2dbca8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2dbca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2dbcac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dbcacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dbcb0: 0x0  nop
    ctx->pc = 0x2dbcb0u;
    // NOP
    // 0x2dbcb4: 0x0  nop
    ctx->pc = 0x2dbcb4u;
    // NOP
    // 0x2dbcb8: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x2dbcb8u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[12];
    // 0x2dbcbc: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x2DBCBCu;
    {
        const bool branch_taken_0x2dbcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbcbc) {
            ctx->pc = 0x2DBEB4u;
            goto label_2dbeb4;
        }
    }
    ctx->pc = 0x2DBCC4u;
label_2dbcc4:
    // 0x2dbcc4: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x2DBCC4u;
    {
        const bool branch_taken_0x2dbcc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBCC4u;
        // 0x2dbcc8: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbcc4) {
            ctx->pc = 0x2DBEB0u;
            goto label_2dbeb0;
        }
    }
    ctx->pc = 0x2DBCCCu;
label_2dbccc:
    // 0x2dbccc: 0x3c023f2c  lui         $v0, 0x3F2C
    ctx->pc = 0x2dbcccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16172 << 16));
label_2dbcd0:
    // 0x2dbcd0: 0x3442a13f  ori         $v0, $v0, 0xA13F
    ctx->pc = 0x2dbcd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41279);
    // 0x2dbcd4: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2dbcd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2dbcd8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DBCD8u;
    {
        const bool branch_taken_0x2dbcd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbcd8) {
            ctx->pc = 0x2DBCDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBCD8u;
            // 0x2dbcdc: 0x460c6382  mul.s       $f14, $f12, $f12 (Delay Slot)
            ctx->f[14] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBD1Cu;
            goto label_2dbd1c;
        }
    }
    ctx->pc = 0x2DBCE0u;
    // 0x2dbce0: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DBCE0u;
    {
        const bool branch_taken_0x2dbce0 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x2dbce0) {
            ctx->pc = 0x2DBCF0u;
            goto label_2dbcf0;
        }
    }
    ctx->pc = 0x2DBCE8u;
    // 0x2dbce8: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x2dbce8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x2dbcec: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x2dbcecu;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
label_2dbcf0:
    // 0x2dbcf0: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x2dbcf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x2dbcf4: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x2dbcf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x2dbcf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dbcf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dbcfc: 0x3c013322  lui         $at, 0x3322
    ctx->pc = 0x2dbcfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13090 << 16));
    // 0x2dbd00: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x2dbd00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x2dbd04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2dbd04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dbd08: 0x460c0381  sub.s       $f14, $f0, $f12
    ctx->pc = 0x2dbd08u;
    ctx->f[14] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x2dbd0c: 0x460d0ac1  sub.s       $f11, $f1, $f13
    ctx->pc = 0x2dbd0cu;
    ctx->f[11] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x2dbd10: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2dbd10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2dbd14: 0x460b7300  add.s       $f12, $f14, $f11
    ctx->pc = 0x2dbd14u;
    ctx->f[12] = FPU_ADD_S(ctx->f[14], ctx->f[11]);
    // 0x2dbd18: 0x460c6382  mul.s       $f14, $f12, $f12
    ctx->pc = 0x2dbd18u;
    ctx->f[14] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_2dbd1c:
    // 0x2dbd1c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2dbd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2dbd20: 0x2462b0d8  addiu       $v0, $v1, -0x4F28
    ctx->pc = 0x2dbd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947032));
    // 0x2dbd24: 0xc469b0d8  lwc1        $f9, -0x4F28($v1)
    ctx->pc = 0x2dbd24u;
    { uint32_t bits = FAST_READ32(0x3AB0D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2dbd28: 0xc4440030  lwc1        $f4, 0x30($v0)
    ctx->pc = 0x2dbd28u;
    { uint32_t bits = FAST_READ32(0x3AB108u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2dbd2c: 0x3c033f2c  lui         $v1, 0x3F2C
    ctx->pc = 0x2dbd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16172 << 16));
    // 0x2dbd30: 0x460e72c2  mul.s       $f11, $f14, $f14
    ctx->pc = 0x2dbd30u;
    ctx->f[11] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x2dbd34: 0xc445002c  lwc1        $f5, 0x2C($v0)
    ctx->pc = 0x2dbd34u;
    { uint32_t bits = FAST_READ32(0x3AB104u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2dbd38: 0xc4460028  lwc1        $f6, 0x28($v0)
    ctx->pc = 0x2dbd38u;
    { uint32_t bits = FAST_READ32(0x3AB100u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2dbd3c: 0x460c73c2  mul.s       $f15, $f14, $f12
    ctx->pc = 0x2dbd3cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[14], ctx->f[12]);
    // 0x2dbd40: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x2dbd40u;
    { uint32_t bits = FAST_READ32(0x3AB0FCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dbd44: 0x3463a13f  ori         $v1, $v1, 0xA13F
    ctx->pc = 0x2dbd44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41279);
    // 0x2dbd48: 0x46045902  mul.s       $f4, $f11, $f4
    ctx->pc = 0x2dbd48u;
    ctx->f[4] = FPU_MUL_S(ctx->f[11], ctx->f[4]);
    // 0x2dbd4c: 0xc4430020  lwc1        $f3, 0x20($v0)
    ctx->pc = 0x2dbd4cu;
    { uint32_t bits = FAST_READ32(0x3AB0F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dbd50: 0x46055942  mul.s       $f5, $f11, $f5
    ctx->pc = 0x2dbd50u;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
    // 0x2dbd54: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x2dbd54u;
    { uint32_t bits = FAST_READ32(0x3AB0F4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dbd58: 0xc4470018  lwc1        $f7, 0x18($v0)
    ctx->pc = 0x2dbd58u;
    { uint32_t bits = FAST_READ32(0x3AB0F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2dbd5c: 0x460f4a42  mul.s       $f9, $f9, $f15
    ctx->pc = 0x2dbd5cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[15]);
    // 0x2dbd60: 0x46043180  add.s       $f6, $f6, $f4
    ctx->pc = 0x2dbd60u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x2dbd64: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2dbd64u;
    { uint32_t bits = FAST_READ32(0x3AB0ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dbd68: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x2dbd68u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x2dbd6c: 0xc4440010  lwc1        $f4, 0x10($v0)
    ctx->pc = 0x2dbd6cu;
    { uint32_t bits = FAST_READ32(0x3AB0E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2dbd70: 0xc445000c  lwc1        $f5, 0xC($v0)
    ctx->pc = 0x2dbd70u;
    { uint32_t bits = FAST_READ32(0x3AB0E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2dbd74: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x2dbd74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2dbd78: 0x46065982  mul.s       $f6, $f11, $f6
    ctx->pc = 0x2dbd78u;
    ctx->f[6] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
    // 0x2dbd7c: 0xc4480008  lwc1        $f8, 0x8($v0)
    ctx->pc = 0x2dbd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2dbd80: 0x46025882  mul.s       $f2, $f11, $f2
    ctx->pc = 0x2dbd80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[2]);
    // 0x2dbd84: 0xc44a0004  lwc1        $f10, 0x4($v0)
    ctx->pc = 0x2dbd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2dbd88: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x2dbd88u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x2dbd8c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2dbd8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2dbd90: 0x460358c2  mul.s       $f3, $f11, $f3
    ctx->pc = 0x2dbd90u;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[3]);
    // 0x2dbd94: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x2dbd94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x2dbd98: 0x460339c0  add.s       $f7, $f7, $f3
    ctx->pc = 0x2dbd98u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x2dbd9c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2dbd9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2dbda0: 0x460759c2  mul.s       $f7, $f11, $f7
    ctx->pc = 0x2dbda0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[11], ctx->f[7]);
    // 0x2dbda4: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x2dbda4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x2dbda8: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x2dbda8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x2dbdac: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x2dbdacu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x2dbdb0: 0x46045902  mul.s       $f4, $f11, $f4
    ctx->pc = 0x2dbdb0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[11], ctx->f[4]);
    // 0x2dbdb4: 0x46055942  mul.s       $f5, $f11, $f5
    ctx->pc = 0x2dbdb4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
    // 0x2dbdb8: 0x46044200  add.s       $f8, $f8, $f4
    ctx->pc = 0x2dbdb8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[4]);
    // 0x2dbdbc: 0x460550c0  add.s       $f3, $f10, $f5
    ctx->pc = 0x2dbdbcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[10], ctx->f[5]);
    // 0x2dbdc0: 0x46087102  mul.s       $f4, $f14, $f8
    ctx->pc = 0x2dbdc0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[14], ctx->f[8]);
    // 0x2dbdc4: 0x46041800  add.s       $f0, $f3, $f4
    ctx->pc = 0x2dbdc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2dbdc8: 0x46007802  mul.s       $f0, $f15, $f0
    ctx->pc = 0x2dbdc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x2dbdcc: 0x460d0000  add.s       $f0, $f0, $f13
    ctx->pc = 0x2dbdccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x2dbdd0: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x2dbdd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x2dbdd4: 0x460068c0  add.s       $f3, $f13, $f0
    ctx->pc = 0x2dbdd4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x2dbdd8: 0x460918c0  add.s       $f3, $f3, $f9
    ctx->pc = 0x2dbdd8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[9]);
    // 0x2dbddc: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DBDDCu;
    {
        const bool branch_taken_0x2dbddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBDDCu;
        // 0x2dbde0: 0x460362c0  add.s       $f11, $f12, $f3 (Delay Slot)
        ctx->f[11] = FPU_ADD_S(ctx->f[12], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbddc) {
            ctx->pc = 0x2DBE30u;
            goto label_2dbe30;
        }
    }
    ctx->pc = 0x2DBDE4u;
    // 0x2dbde4: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x2dbde4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2dbde8: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2dbde8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2dbdec: 0x61f83  sra         $v1, $a2, 30
    ctx->pc = 0x2dbdecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 30));
    // 0x2dbdf0: 0x460b5802  mul.s       $f0, $f11, $f11
    ctx->pc = 0x2dbdf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x2dbdf4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2dbdf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2dbdf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dbdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dbdfc: 0x46045840  add.s       $f1, $f11, $f4
    ctx->pc = 0x2dbdfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[11], ctx->f[4]);
    // 0x2dbe00: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2dbe00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dbe04: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2dbe04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2dbe08: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2dbe08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2dbe0c: 0x0  nop
    ctx->pc = 0x2dbe0cu;
    // NOP
    // 0x2dbe10: 0x0  nop
    ctx->pc = 0x2dbe10u;
    // NOP
    // 0x2dbe14: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2dbe14u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2dbe18: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2dbe18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2dbe1c: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x2dbe1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2dbe20: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2dbe20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2dbe24: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x2dbe24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2dbe28: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2DBE28u;
    {
        const bool branch_taken_0x2dbe28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBE28u;
        // 0x2dbe2c: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbe28) {
            ctx->pc = 0x2DBEB0u;
            goto label_2dbeb0;
        }
    }
    ctx->pc = 0x2DBE30u;
label_2dbe30:
    // 0x2dbe30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dbe30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dbe34: 0x1082001e  beq         $a0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2DBE34u;
    {
        const bool branch_taken_0x2dbe34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DBE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBE34u;
        // 0x2dbe38: 0x46005806  mov.s       $f0, $f11 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[11]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbe34) {
            ctx->pc = 0x2DBEB0u;
            goto label_2dbeb0;
        }
    }
    ctx->pc = 0x2DBE3Cu;
    // 0x2dbe3c: 0x44025800  mfc1        $v0, $f11
    ctx->pc = 0x2dbe3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[11], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2dbe40: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2dbe40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbe44: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2dbe44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2dbe48: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x2dbe48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x2dbe4c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2dbe4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2dbe50: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2dbe50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2dbe54: 0x460c7041  sub.s       $f1, $f14, $f12
    ctx->pc = 0x2dbe54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[14], ctx->f[12]);
    // 0x2dbe58: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2dbe58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2dbe5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dbe5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dbe60: 0x0  nop
    ctx->pc = 0x2dbe60u;
    // NOP
    // 0x2dbe64: 0x0  nop
    ctx->pc = 0x2dbe64u;
    // NOP
    // 0x2dbe68: 0x460b0003  div.s       $f0, $f0, $f11
    ctx->pc = 0x2dbe68u;
    if (ctx->f[11] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[11];
    // 0x2dbe6c: 0x46011901  sub.s       $f4, $f3, $f1
    ctx->pc = 0x2dbe6cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2dbe70: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2dbe70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2dbe74: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2dbe74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbe78: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2dbe78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2dbe7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dbe7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dbe80: 0x460e0042  mul.s       $f1, $f0, $f14
    ctx->pc = 0x2dbe80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x2dbe84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2dbe84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2dbe88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dbe88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dbe8c: 0x46000bc0  add.s       $f15, $f1, $f0
    ctx->pc = 0x2dbe8cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2dbe90: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2dbe90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dbe94: 0x46040802  mul.s       $f0, $f1, $f4
    ctx->pc = 0x2dbe94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2dbe98: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2dbe98u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dbe9c: 0x46007800  add.s       $f0, $f15, $f0
    ctx->pc = 0x2dbe9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
    // 0x2dbea0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2dbea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dbea4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2dbea4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dbea8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2dbea8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2dbeac: 0x0  nop
    ctx->pc = 0x2dbeacu;
    // NOP
label_2dbeb0:
    // 0x2dbeb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dbeb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dbeb4:
    // 0x2dbeb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBEB4u;
        // 0x2dbeb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBEB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBEBCu;
}
