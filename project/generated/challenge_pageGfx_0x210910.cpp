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

// Function: challenge_pageGfx
// Address: 0x210910 - 0x210fbc
void challenge_pageGfx_0x210910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("challenge_pageGfx_0x210910");
#endif

    switch (ctx->pc) {
        case 0x21094cu: goto label_21094c;
        case 0x210954u: goto label_210954;
        case 0x210964u: goto label_210964;
        case 0x2109a4u: goto label_2109a4;
        case 0x2109ecu: goto label_2109ec;
        case 0x210a24u: goto label_210a24;
        case 0x210a6cu: goto label_210a6c;
        case 0x210ab4u: goto label_210ab4;
        case 0x210b08u: goto label_210b08;
        case 0x210b60u: goto label_210b60;
        case 0x210b7cu: goto label_210b7c;
        case 0x210bf8u: goto label_210bf8;
        case 0x210c24u: goto label_210c24;
        case 0x210c5cu: goto label_210c5c;
        case 0x210c64u: goto label_210c64;
        case 0x210c70u: goto label_210c70;
        case 0x210c7cu: goto label_210c7c;
        case 0x210ca8u: goto label_210ca8;
        case 0x210ce8u: goto label_210ce8;
        case 0x210cf4u: goto label_210cf4;
        case 0x210d0cu: goto label_210d0c;
        case 0x210d20u: goto label_210d20;
        case 0x210d2cu: goto label_210d2c;
        case 0x210d58u: goto label_210d58;
        case 0x210d7cu: goto label_210d7c;
        case 0x210d88u: goto label_210d88;
        case 0x210db4u: goto label_210db4;
        case 0x210de8u: goto label_210de8;
        case 0x210df0u: goto label_210df0;
        case 0x210e20u: goto label_210e20;
        case 0x210e44u: goto label_210e44;
        case 0x210e68u: goto label_210e68;
        case 0x210e94u: goto label_210e94;
        case 0x210eccu: goto label_210ecc;
        case 0x210ed4u: goto label_210ed4;
        case 0x210f10u: goto label_210f10;
        case 0x210f24u: goto label_210f24;
        case 0x210f30u: goto label_210f30;
        case 0x210f60u: goto label_210f60;
        case 0x210f84u: goto label_210f84;
        case 0x210f8cu: goto label_210f8c;
        default: break;
    }

    ctx->pc = 0x210910u;

    // 0x210910: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x210910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x210914: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x210914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x210918: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x210918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x21091c: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x21091cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x210920: 0x3c170033  lui         $s7, 0x33
    ctx->pc = 0x210920u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)51 << 16));
    // 0x210924: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x210924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x210928: 0x26f699f0  addiu       $s6, $s7, -0x6610
    ctx->pc = 0x210928u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941168));
    // 0x21092c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x21092cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x210930: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x210930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x210934: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x210934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x210938: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x210938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x21093c: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x21093cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x210940: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x210940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x210944: 0xc08089c  jal         func_202270
    ctx->pc = 0x210944u;
    SET_GPR_U32(ctx, 31, 0x21094Cu);
    ctx->pc = 0x210948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210944u;
    // 0x210948: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x210944u, 0x21094Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21094Cu;
label_21094c:
    // 0x21094c: 0xc087c18  jal         func_21F060
    ctx->pc = 0x21094Cu;
    SET_GPR_U32(ctx, 31, 0x210954u);
    ctx->pc = 0x210950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21094Cu;
    // 0x210950: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F060u, 0x21094Cu, 0x210954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210954u;
label_210954:
    // 0x210954: 0x8ed20014  lw          $s2, 0x14($s6)
    ctx->pc = 0x210954u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x210958: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x210958u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21095c: 0xc08089c  jal         func_202270
    ctx->pc = 0x21095Cu;
    SET_GPR_U32(ctx, 31, 0x210964u);
    ctx->pc = 0x210960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21095Cu;
    // 0x210960: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x21095Cu, 0x210964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210964u;
label_210964:
    // 0x210964: 0x26550038  addiu       $s5, $s2, 0x38
    ctx->pc = 0x210964u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x210968: 0x8f839dac  lw          $v1, -0x6254($gp)
    ctx->pc = 0x210968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942124)));
    // 0x21096c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x21096cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x210970: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x210970u;
    {
        const bool branch_taken_0x210970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x210974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210970u;
        // 0x210974: 0x26540070  addiu       $s4, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210970) {
            ctx->pc = 0x210A2Cu;
            goto label_210a2c;
        }
    }
    ctx->pc = 0x210978u;
    // 0x210978: 0x8f849354  lw          $a0, -0x6CAC($gp)
    ctx->pc = 0x210978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x21097c: 0x3c10002f  lui         $s0, 0x2F
    ctx->pc = 0x21097cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)47 << 16));
    // 0x210980: 0x26102c18  addiu       $s0, $s0, 0x2C18
    ctx->pc = 0x210980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11288));
    // 0x210984: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x210984u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x210988: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x210988u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21098c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x21098cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x210990: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x210990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x210994: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x210994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x210998: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x210998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21099c: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x21099Cu;
    SET_GPR_U32(ctx, 31, 0x2109A4u);
    ctx->pc = 0x2109A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21099Cu;
    // 0x2109a0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x21099Cu, 0x2109A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2109A4u;
label_2109a4:
    // 0x2109a4: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x2109a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2109a8: 0x22fc2  srl         $a1, $v0, 31
    ctx->pc = 0x2109a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2109ac: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2109acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2109b0: 0x86680000  lh          $t0, 0x0($s3)
    ctx->pc = 0x2109b0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2109b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2109b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2109b8: 0x8ec40008  lw          $a0, 0x8($s6)
    ctx->pc = 0x2109b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x2109bc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2109bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2109c0: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x2109c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2109c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2109c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2109c8: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x2109c8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x2109cc: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x2109ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2109d0: 0x3c074078  lui         $a3, 0x4078
    ctx->pc = 0x2109d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16504 << 16));
    // 0x2109d4: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x2109d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2109d8: 0x26450052  addiu       $a1, $s2, 0x52
    ctx->pc = 0x2109d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 82));
    // 0x2109dc: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x2109dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2109e0: 0x34e77880  ori         $a3, $a3, 0x7880
    ctx->pc = 0x2109e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)30848);
    // 0x2109e4: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x2109E4u;
    SET_GPR_U32(ctx, 31, 0x2109ECu);
    ctx->pc = 0x2109E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2109E4u;
    // 0x2109e8: 0x24085080  addiu       $t0, $zero, 0x5080 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x2109E4u, 0x2109ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2109ECu;
label_2109ec:
    // 0x2109ec: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x2109ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2109f0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2109f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2109f4: 0x8663003c  lh          $v1, 0x3C($s3)
    ctx->pc = 0x2109f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x2109f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2109f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2109fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2109fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x210a00: 0x8f88a01c  lw          $t0, -0x5FE4($gp)
    ctx->pc = 0x210a00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x210a04: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x210a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x210a08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x210a08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x210a0c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x210a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x210a10: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x210a10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210a14: 0x8f89a020  lw          $t1, -0x5FE0($gp)
    ctx->pc = 0x210a14u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x210a18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x210a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x210a1c: 0xc08ba4c  jal         func_22E930
    ctx->pc = 0x210A1Cu;
    SET_GPR_U32(ctx, 31, 0x210A24u);
    ctx->pc = 0x210A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210A1Cu;
    // 0x210a20: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E930u, 0x210A1Cu, 0x210A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210A24u;
label_210a24:
    // 0x210a24: 0x10000157  b           . + 4 + (0x157 << 2)
    ctx->pc = 0x210A24u;
    {
        const bool branch_taken_0x210a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x210a24) {
            ctx->pc = 0x210F84u;
            goto label_210f84;
        }
    }
    ctx->pc = 0x210A2Cu;
label_210a2c:
    // 0x210a2c: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x210a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x210a30: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x210a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x210a34: 0x24702c18  addiu       $s0, $v1, 0x2C18
    ctx->pc = 0x210a34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x210a38: 0x26520080  addiu       $s2, $s2, 0x80
    ctx->pc = 0x210a38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x210a3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x210a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x210a40: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x210a40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x210a44: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x210a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x210a48: 0x3c1e0033  lui         $fp, 0x33
    ctx->pc = 0x210a48u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)51 << 16));
    // 0x210a4c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x210a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x210a50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x210a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x210a54: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x210a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x210a58: 0x3c117f20  lui         $s1, 0x7F20
    ctx->pc = 0x210a58u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32544 << 16));
    // 0x210a5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x210a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x210a60: 0x36312080  ori         $s1, $s1, 0x2080
    ctx->pc = 0x210a60u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8320);
    // 0x210a64: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x210A64u;
    SET_GPR_U32(ctx, 31, 0x210A6Cu);
    ctx->pc = 0x210A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210A64u;
    // 0x210a68: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x210A64u, 0x210A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210A6Cu;
label_210a6c:
    // 0x210a6c: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x210a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x210a70: 0x22fc2  srl         $a1, $v0, 31
    ctx->pc = 0x210a70u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x210a74: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x210a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x210a78: 0x86680000  lh          $t0, 0x0($s3)
    ctx->pc = 0x210a78u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x210a7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x210a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x210a80: 0x8ec40008  lw          $a0, 0x8($s6)
    ctx->pc = 0x210a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x210a84: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x210a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x210a88: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x210a88u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x210a8c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x210a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x210a90: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x210a90u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x210a94: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x210a94u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x210a98: 0x3c074078  lui         $a3, 0x4078
    ctx->pc = 0x210a98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16504 << 16));
    // 0x210a9c: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x210a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x210aa0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x210aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210aa4: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x210aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x210aa8: 0x34e77880  ori         $a3, $a3, 0x7880
    ctx->pc = 0x210aa8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)30848);
    // 0x210aac: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x210AACu;
    SET_GPR_U32(ctx, 31, 0x210AB4u);
    ctx->pc = 0x210AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210AACu;
    // 0x210ab0: 0x24085080  addiu       $t0, $zero, 0x5080 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x210AACu, 0x210AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210AB4u;
label_210ab4:
    // 0x210ab4: 0x27c4c4a8  addiu       $a0, $fp, -0x3B58
    ctx->pc = 0x210ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
    // 0x210ab8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x210ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x210abc: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x210abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x210ac0: 0x3c024078  lui         $v0, 0x4078
    ctx->pc = 0x210ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16504 << 16));
    // 0x210ac4: 0x34427880  ori         $v0, $v0, 0x7880
    ctx->pc = 0x210ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30848);
    // 0x210ac8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x210ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x210acc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x210ACCu;
    {
        const bool branch_taken_0x210acc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x210AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210ACCu;
        // 0x210ad0: 0x43880b  movn        $s1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210acc) {
            ctx->pc = 0x210AECu;
            goto label_210aec;
        }
    }
    ctx->pc = 0x210AD4u;
    // 0x210ad4: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x210ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x210ad8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x210ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x210adc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x210adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x210ae0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x210ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x210ae4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x210AE4u;
    {
        const bool branch_taken_0x210ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AE4u;
        // 0x210ae8: 0x8c700734  lw          $s0, 0x734($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1844)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210ae4) {
            ctx->pc = 0x210B00u;
            goto label_210b00;
        }
    }
    ctx->pc = 0x210AECu;
label_210aec:
    // 0x210aec: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x210aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x210af0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x210af0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x210af4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x210af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x210af8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x210af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x210afc: 0x8c700738  lw          $s0, 0x738($v1)
    ctx->pc = 0x210afcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1848)));
label_210b00:
    // 0x210b00: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x210B00u;
    SET_GPR_U32(ctx, 31, 0x210B08u);
    ctx->pc = 0x210B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210B00u;
    // 0x210b04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x210B00u, 0x210B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210B08u;
label_210b08:
    // 0x210b08: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x210b08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x210b0c: 0x26e499f0  addiu       $a0, $s7, -0x6610
    ctx->pc = 0x210b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941168));
    // 0x210b10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x210b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x210b14: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x210b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x210b18: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x210b18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x210b1c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x210b1cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x210b20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x210b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x210b24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x210B24u;
    {
        const bool branch_taken_0x210b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B24u;
        // 0x210b28: 0xa32023  subu        $a0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210b24) {
            ctx->pc = 0x210B40u;
            goto label_210b40;
        }
    }
    ctx->pc = 0x210B2Cu;
    // 0x210b2c: 0x8f839a9c  lw          $v1, -0x6564($gp)
    ctx->pc = 0x210b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x210b30: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x210b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x210b34: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x210b34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x210b38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x210B38u;
    {
        const bool branch_taken_0x210b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B38u;
        // 0x210b3c: 0x2a22821  addu        $a1, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210b38) {
            ctx->pc = 0x210B4Cu;
            goto label_210b4c;
        }
    }
    ctx->pc = 0x210B40u;
label_210b40:
    // 0x210b40: 0x8f829a9c  lw          $v0, -0x6564($gp)
    ctx->pc = 0x210b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x210b44: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x210b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x210b48: 0x2a32821  addu        $a1, $s5, $v1
    ctx->pc = 0x210b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_210b4c:
    // 0x210b4c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x210b4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210b50: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x210b50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210b54: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x210b54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x210b58: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x210B58u;
    SET_GPR_U32(ctx, 31, 0x210B60u);
    ctx->pc = 0x210B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210B58u;
    // 0x210b5c: 0x27d0c4a8  addiu       $s0, $fp, -0x3B58 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x210B58u, 0x210B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210B60u;
label_210b60:
    // 0x210b60: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x210b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x210b64: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x210b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x210b68: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x210b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x210b6c: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x210B6Cu;
    {
        const bool branch_taken_0x210b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B6Cu;
        // 0x210b70: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210b6c) {
            ctx->pc = 0x210CB0u;
            goto label_210cb0;
        }
    }
    ctx->pc = 0x210B74u;
    // 0x210b74: 0xc08089c  jal         func_202270
    ctx->pc = 0x210B74u;
    SET_GPR_U32(ctx, 31, 0x210B7Cu);
    ctx->pc = 0x210B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210B74u;
    // 0x210b78: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x210B74u, 0x210B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210B7Cu;
label_210b7c:
    // 0x210b7c: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x210b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x210b80: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x210b80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x210b84: 0x24822c18  addiu       $v0, $a0, 0x2C18
    ctx->pc = 0x210b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 11288));
    // 0x210b88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x210b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x210b8c: 0x93849ab5  lbu         $a0, -0x654B($gp)
    ctx->pc = 0x210b8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x210b90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x210b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x210b94: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x210b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x210b98: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x210b98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x210b9c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x210B9Cu;
    {
        const bool branch_taken_0x210b9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x210BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B9Cu;
        // 0x210ba0: 0x8c500744  lw          $s0, 0x744($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1860)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210b9c) {
            ctx->pc = 0x210BB4u;
            goto label_210bb4;
        }
    }
    ctx->pc = 0x210BA4u;
    // 0x210ba4: 0x8f839a9c  lw          $v1, -0x6564($gp)
    ctx->pc = 0x210ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x210ba8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x210ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x210bac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x210BACu;
    {
        const bool branch_taken_0x210bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BACu;
        // 0x210bb0: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210bac) {
            ctx->pc = 0x210BBCu;
            goto label_210bbc;
        }
    }
    ctx->pc = 0x210BB4u;
label_210bb4:
    // 0x210bb4: 0x8f839a9c  lw          $v1, -0x6564($gp)
    ctx->pc = 0x210bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x210bb8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x210bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_210bbc:
    // 0x210bbc: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x210bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x210bc0: 0x24520005  addiu       $s2, $v0, 0x5
    ctx->pc = 0x210bc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x210bc4: 0x8f83b45c  lw          $v1, -0x4BA4($gp)
    ctx->pc = 0x210bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947932)));
    // 0x210bc8: 0x3c117f7f  lui         $s1, 0x7F7F
    ctx->pc = 0x210bc8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32639 << 16));
    // 0x210bcc: 0x8f84a01c  lw          $a0, -0x5FE4($gp)
    ctx->pc = 0x210bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x210bd0: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x210bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x210bd4: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x210bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x210bd8: 0x3c134078  lui         $s3, 0x4078
    ctx->pc = 0x210bd8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)16504 << 16));
    // 0x210bdc: 0x36317f80  ori         $s1, $s1, 0x7F80
    ctx->pc = 0x210bdcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32640);
    // 0x210be0: 0x34427f80  ori         $v0, $v0, 0x7F80
    ctx->pc = 0x210be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32640);
    // 0x210be4: 0x83880a  movz        $s1, $a0, $v1
    ctx->pc = 0x210be4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
    // 0x210be8: 0x36737880  ori         $s3, $s3, 0x7880
    ctx->pc = 0x210be8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)30848);
    // 0x210bec: 0x43980b  movn        $s3, $v0, $v1
    ctx->pc = 0x210becu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
    // 0x210bf0: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x210BF0u;
    SET_GPR_U32(ctx, 31, 0x210BF8u);
    ctx->pc = 0x210BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210BF0u;
    // 0x210bf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x210BF0u, 0x210BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210BF8u;
label_210bf8:
    // 0x210bf8: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x210bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x210bfc: 0x26e599f0  addiu       $a1, $s7, -0x6610
    ctx->pc = 0x210bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941168));
    // 0x210c00: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x210c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x210c04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x210c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x210c08: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x210c08u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x210c0c: 0x8f88a020  lw          $t0, -0x5FE0($gp)
    ctx->pc = 0x210c0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x210c10: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x210c10u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x210c14: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x210c14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210c18: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x210c18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210c1c: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x210C1Cu;
    SET_GPR_U32(ctx, 31, 0x210C24u);
    ctx->pc = 0x210C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210C1Cu;
    // 0x210c20: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x210C1Cu, 0x210C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210C24u;
label_210c24:
    // 0x210c24: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x210c24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x210c28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x210c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x210c2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x210C2Cu;
    {
        const bool branch_taken_0x210c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C2Cu;
        // 0x210c30: 0x8f829a9c  lw          $v0, -0x6564($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c2c) {
            ctx->pc = 0x210C44u;
            goto label_210c44;
        }
    }
    ctx->pc = 0x210C34u;
    // 0x210c34: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x210c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x210c38: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x210c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x210c3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x210C3Cu;
    {
        const bool branch_taken_0x210c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C3Cu;
        // 0x210c40: 0x31843  sra         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c3c) {
            ctx->pc = 0x210C4Cu;
            goto label_210c4c;
        }
    }
    ctx->pc = 0x210C44u;
label_210c44:
    // 0x210c44: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x210c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x210c48: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x210c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_210c4c:
    // 0x210c4c: 0x839021  addu        $s2, $a0, $v1
    ctx->pc = 0x210c4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x210c50: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x210c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x210c54: 0xc08089c  jal         func_202270
    ctx->pc = 0x210C54u;
    SET_GPR_U32(ctx, 31, 0x210C5Cu);
    ctx->pc = 0x210C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210C54u;
    // 0x210c58: 0x27d0c4a8  addiu       $s0, $fp, -0x3B58 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x210C54u, 0x210C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210C5Cu;
label_210c5c:
    // 0x210c5c: 0xc087c20  jal         func_21F080
    ctx->pc = 0x210C5Cu;
    SET_GPR_U32(ctx, 31, 0x210C64u);
    ctx->pc = 0x21F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F080u, 0x210C5Cu, 0x210C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210C64u;
label_210c64:
    // 0x210c64: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x210c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x210c68: 0xc087c5a  jal         func_21F168
    ctx->pc = 0x210C68u;
    SET_GPR_U32(ctx, 31, 0x210C70u);
    ctx->pc = 0x210C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210C68u;
    // 0x210c6c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F168u, 0x210C68u, 0x210C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210C70u;
label_210c70:
    // 0x210c70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x210c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210c74: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x210C74u;
    SET_GPR_U32(ctx, 31, 0x210C7Cu);
    ctx->pc = 0x210C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210C74u;
    // 0x210c78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x210C74u, 0x210C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210C7Cu;
label_210c7c:
    // 0x210c7c: 0x26e599f0  addiu       $a1, $s7, -0x6610
    ctx->pc = 0x210c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941168));
    // 0x210c80: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x210c80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x210c84: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x210c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x210c88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x210c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x210c8c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x210c8cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x210c90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x210c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210c94: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x210c94u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x210c98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x210c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210c9c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x210c9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210ca0: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x210CA0u;
    SET_GPR_U32(ctx, 31, 0x210CA8u);
    ctx->pc = 0x210CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210CA0u;
    // 0x210ca4: 0x24085080  addiu       $t0, $zero, 0x5080 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x210CA0u, 0x210CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210CA8u;
label_210ca8:
    // 0x210ca8: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x210CA8u;
    {
        const bool branch_taken_0x210ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CA8u;
        // 0x210cac: 0x27c2c4a8  addiu       $v0, $fp, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210ca8) {
            ctx->pc = 0x210E24u;
            goto label_210e24;
        }
    }
    ctx->pc = 0x210CB0u;
label_210cb0:
    // 0x210cb0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x210cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x210cb4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x210cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x210cb8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x210cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x210cbc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x210CBCu;
    {
        const bool branch_taken_0x210cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CBCu;
        // 0x210cc0: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210cbc) {
            ctx->pc = 0x210CFCu;
            goto label_210cfc;
        }
    }
    ctx->pc = 0x210CC4u;
    // 0x210cc4: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x210cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x210cc8: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x210cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x210ccc: 0x24642c18  addiu       $a0, $v1, 0x2C18
    ctx->pc = 0x210cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x210cd0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x210cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x210cd4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x210cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x210cd8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x210cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x210cdc: 0x8c64073c  lw          $a0, 0x73C($v1)
    ctx->pc = 0x210cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1852)));
    // 0x210ce0: 0xc087c20  jal         func_21F080
    ctx->pc = 0x210CE0u;
    SET_GPR_U32(ctx, 31, 0x210CE8u);
    ctx->pc = 0x210CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210CE0u;
    // 0x210ce4: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F080u, 0x210CE0u, 0x210CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210CE8u;
label_210ce8:
    // 0x210ce8: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x210ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x210cec: 0xc087c5a  jal         func_21F168
    ctx->pc = 0x210CECu;
    SET_GPR_U32(ctx, 31, 0x210CF4u);
    ctx->pc = 0x210CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210CECu;
    // 0x210cf0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F168u, 0x210CECu, 0x210CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210CF4u;
label_210cf4:
    // 0x210cf4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x210CF4u;
    {
        const bool branch_taken_0x210cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CF4u;
        // 0x210cf8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210cf4) {
            ctx->pc = 0x210D0Cu;
            goto label_210d0c;
        }
    }
    ctx->pc = 0x210CFCu;
label_210cfc:
    // 0x210cfc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x210cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210d00: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x210d00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x210d04: 0xc087d50  jal         func_21F540
    ctx->pc = 0x210D04u;
    SET_GPR_U32(ctx, 31, 0x210D0Cu);
    ctx->pc = 0x210D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210D04u;
    // 0x210d08: 0x37a60008  ori         $a2, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F540u, 0x210D04u, 0x210D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210D0Cu;
label_210d0c:
    // 0x210d0c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x210d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x210d10: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x210D10u;
    {
        const bool branch_taken_0x210d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D10u;
        // 0x210d14: 0x8f91a01c  lw          $s1, -0x5FE4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d10) {
            ctx->pc = 0x210D60u;
            goto label_210d60;
        }
    }
    ctx->pc = 0x210D18u;
    // 0x210d18: 0xc08089c  jal         func_202270
    ctx->pc = 0x210D18u;
    SET_GPR_U32(ctx, 31, 0x210D20u);
    ctx->pc = 0x210D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210D18u;
    // 0x210d1c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x210D18u, 0x210D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210D20u;
label_210d20:
    // 0x210d20: 0x2692fff0  addiu       $s2, $s4, -0x10
    ctx->pc = 0x210d20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967280));
    // 0x210d24: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x210D24u;
    SET_GPR_U32(ctx, 31, 0x210D2Cu);
    ctx->pc = 0x210D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210D24u;
    // 0x210d28: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x210D24u, 0x210D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210D2Cu;
label_210d2c:
    // 0x210d2c: 0x26e599f0  addiu       $a1, $s7, -0x6610
    ctx->pc = 0x210d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941168));
    // 0x210d30: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x210d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x210d34: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x210d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x210d38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x210d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x210d3c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x210d3cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x210d40: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x210d40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x210d44: 0x8f88a020  lw          $t0, -0x5FE0($gp)
    ctx->pc = 0x210d44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x210d48: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x210d48u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x210d4c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x210d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210d50: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x210D50u;
    SET_GPR_U32(ctx, 31, 0x210D58u);
    ctx->pc = 0x210D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210D50u;
    // 0x210d54: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x210D50u, 0x210D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210D58u;
label_210d58:
    // 0x210d58: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x210D58u;
    {
        const bool branch_taken_0x210d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D58u;
        // 0x210d5c: 0x27c2c4a8  addiu       $v0, $fp, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d58) {
            ctx->pc = 0x210E24u;
            goto label_210e24;
        }
    }
    ctx->pc = 0x210D60u;
label_210d60:
    // 0x210d60: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x210d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210d64: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x210D64u;
    {
        const bool branch_taken_0x210d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D64u;
        // 0x210d68: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d64) {
            ctx->pc = 0x210E20u;
            goto label_210e20;
        }
    }
    ctx->pc = 0x210D6Cu;
    // 0x210d6c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x210D6Cu;
    {
        const bool branch_taken_0x210d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D6Cu;
        // 0x210d70: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d6c) {
            ctx->pc = 0x210E20u;
            goto label_210e20;
        }
    }
    ctx->pc = 0x210D74u;
    // 0x210d74: 0xc08089c  jal         func_202270
    ctx->pc = 0x210D74u;
    SET_GPR_U32(ctx, 31, 0x210D7Cu);
    ctx->pc = 0x210D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210D74u;
    // 0x210d78: 0x2692fff0  addiu       $s2, $s4, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x210D74u, 0x210D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210D7Cu;
label_210d7c:
    // 0x210d7c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x210d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210d80: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x210D80u;
    SET_GPR_U32(ctx, 31, 0x210D88u);
    ctx->pc = 0x210D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210D80u;
    // 0x210d84: 0x8f91a01c  lw          $s1, -0x5FE4($gp) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x210D80u, 0x210D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210D88u;
label_210d88:
    // 0x210d88: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x210d88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x210d8c: 0x26e599f0  addiu       $a1, $s7, -0x6610
    ctx->pc = 0x210d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941168));
    // 0x210d90: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x210d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x210d94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x210d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x210d98: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x210d98u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x210d9c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x210d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210da0: 0x8f88a020  lw          $t0, -0x5FE0($gp)
    ctx->pc = 0x210da0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x210da4: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x210da4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x210da8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x210da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210dac: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x210DACu;
    SET_GPR_U32(ctx, 31, 0x210DB4u);
    ctx->pc = 0x210DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210DACu;
    // 0x210db0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x210DACu, 0x210DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210DB4u;
label_210db4:
    // 0x210db4: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x210db4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x210db8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x210db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x210dbc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x210DBCu;
    {
        const bool branch_taken_0x210dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210DBCu;
        // 0x210dc0: 0x8f829a9c  lw          $v0, -0x6564($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210dbc) {
            ctx->pc = 0x210DD4u;
            goto label_210dd4;
        }
    }
    ctx->pc = 0x210DC4u;
    // 0x210dc4: 0x2684fff1  addiu       $a0, $s4, -0xF
    ctx->pc = 0x210dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967281));
    // 0x210dc8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x210dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x210dcc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x210DCCu;
    {
        const bool branch_taken_0x210dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210DCCu;
        // 0x210dd0: 0x31843  sra         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210dcc) {
            ctx->pc = 0x210DDCu;
            goto label_210ddc;
        }
    }
    ctx->pc = 0x210DD4u;
label_210dd4:
    // 0x210dd4: 0x2684fff1  addiu       $a0, $s4, -0xF
    ctx->pc = 0x210dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967281));
    // 0x210dd8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x210dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_210ddc:
    // 0x210ddc: 0x839021  addu        $s2, $a0, $v1
    ctx->pc = 0x210ddcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x210de0: 0xc08089c  jal         func_202270
    ctx->pc = 0x210DE0u;
    SET_GPR_U32(ctx, 31, 0x210DE8u);
    ctx->pc = 0x210DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210DE0u;
    // 0x210de4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x210DE0u, 0x210DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210DE8u;
label_210de8:
    // 0x210de8: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x210DE8u;
    SET_GPR_U32(ctx, 31, 0x210DF0u);
    ctx->pc = 0x210DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210DE8u;
    // 0x210dec: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x210DE8u, 0x210DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210DF0u;
label_210df0:
    // 0x210df0: 0x26e599f0  addiu       $a1, $s7, -0x6610
    ctx->pc = 0x210df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941168));
    // 0x210df4: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x210df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x210df8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x210df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x210dfc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x210dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x210e00: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x210e00u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x210e04: 0x3c074078  lui         $a3, 0x4078
    ctx->pc = 0x210e04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16504 << 16));
    // 0x210e08: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x210e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x210e0c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x210e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x210e10: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x210e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210e14: 0x34e77880  ori         $a3, $a3, 0x7880
    ctx->pc = 0x210e14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)30848);
    // 0x210e18: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x210E18u;
    SET_GPR_U32(ctx, 31, 0x210E20u);
    ctx->pc = 0x210E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210E18u;
    // 0x210e1c: 0x24085080  addiu       $t0, $zero, 0x5080 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x210E18u, 0x210E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210E20u;
label_210e20:
    // 0x210e20: 0x27c2c4a8  addiu       $v0, $fp, -0x3B58
    ctx->pc = 0x210e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
label_210e24:
    // 0x210e24: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x210e24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x210e28: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x210e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x210e2c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x210e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x210e30: 0x1460004c  bnez        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x210E30u;
    {
        const bool branch_taken_0x210e30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x210E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E30u;
        // 0x210e34: 0x26e399f0  addiu       $v1, $s7, -0x6610 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210e30) {
            ctx->pc = 0x210F64u;
            goto label_210f64;
        }
    }
    ctx->pc = 0x210E38u;
    // 0x210e38: 0x8fb20010  lw          $s2, 0x10($sp)
    ctx->pc = 0x210e38u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210e3c: 0xc08089c  jal         func_202270
    ctx->pc = 0x210E3Cu;
    SET_GPR_U32(ctx, 31, 0x210E44u);
    ctx->pc = 0x210E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210E3Cu;
    // 0x210e40: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x210E3Cu, 0x210E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210E44u;
label_210e44:
    // 0x210e44: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x210e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x210e48: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x210e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x210e4c: 0x24442c18  addiu       $a0, $v0, 0x2C18
    ctx->pc = 0x210e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x210e50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x210e50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x210e54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x210e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x210e58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x210e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x210e5c: 0x8c500740  lw          $s0, 0x740($v0)
    ctx->pc = 0x210e5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1856)));
    // 0x210e60: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x210E60u;
    SET_GPR_U32(ctx, 31, 0x210E68u);
    ctx->pc = 0x210E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210E60u;
    // 0x210e64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x210E60u, 0x210E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210E68u;
label_210e68:
    // 0x210e68: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x210e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x210e6c: 0x26e599f0  addiu       $a1, $s7, -0x6610
    ctx->pc = 0x210e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941168));
    // 0x210e70: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x210e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x210e74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x210e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x210e78: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x210e78u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x210e7c: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x210e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x210e80: 0x8f88a020  lw          $t0, -0x5FE0($gp)
    ctx->pc = 0x210e80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x210e84: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x210e84u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x210e88: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x210e88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210e8c: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x210E8Cu;
    SET_GPR_U32(ctx, 31, 0x210E94u);
    ctx->pc = 0x210E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210E8Cu;
    // 0x210e90: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x210E8Cu, 0x210E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210E94u;
label_210e94:
    // 0x210e94: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x210e94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x210e98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x210e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x210e9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x210E9Cu;
    {
        const bool branch_taken_0x210e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E9Cu;
        // 0x210ea0: 0x8f829a9c  lw          $v0, -0x6564($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210e9c) {
            ctx->pc = 0x210EB4u;
            goto label_210eb4;
        }
    }
    ctx->pc = 0x210EA4u;
    // 0x210ea4: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x210ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x210ea8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x210ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x210eac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x210EACu;
    {
        const bool branch_taken_0x210eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210EACu;
        // 0x210eb0: 0x31843  sra         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210eac) {
            ctx->pc = 0x210EBCu;
            goto label_210ebc;
        }
    }
    ctx->pc = 0x210EB4u;
label_210eb4:
    // 0x210eb4: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x210eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x210eb8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x210eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_210ebc:
    // 0x210ebc: 0x839021  addu        $s2, $a0, $v1
    ctx->pc = 0x210ebcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x210ec0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x210ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x210ec4: 0xc08089c  jal         func_202270
    ctx->pc = 0x210EC4u;
    SET_GPR_U32(ctx, 31, 0x210ECCu);
    ctx->pc = 0x210EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210EC4u;
    // 0x210ec8: 0x27d0c4a8  addiu       $s0, $fp, -0x3B58 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x210EC4u, 0x210ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210ECCu;
label_210ecc:
    // 0x210ecc: 0xc087fee  jal         func_21FFB8
    ctx->pc = 0x210ECCu;
    SET_GPR_U32(ctx, 31, 0x210ED4u);
    ctx->pc = 0x210ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210ECCu;
    // 0x210ed0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB8u, 0x210ECCu, 0x210ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210ED4u;
label_210ed4:
    // 0x210ed4: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x210ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x210ed8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x210ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x210edc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x210edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x210ee0: 0x8c440578  lw          $a0, 0x578($v0)
    ctx->pc = 0x210ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1400)));
    // 0x210ee4: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x210EE4u;
    {
        const bool branch_taken_0x210ee4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x210EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210EE4u;
        // 0x210ee8: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210ee4) {
            ctx->pc = 0x210F08u;
            goto label_210f08;
        }
    }
    ctx->pc = 0x210EECu;
    // 0x210eec: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x210eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x210ef0: 0x24642c18  addiu       $a0, $v1, 0x2C18
    ctx->pc = 0x210ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x210ef4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x210ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x210ef8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x210ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x210efc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x210efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x210f00: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x210F00u;
    {
        const bool branch_taken_0x210f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F00u;
        // 0x210f04: 0x8c7006e0  lw          $s0, 0x6E0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210f00) {
            ctx->pc = 0x210F28u;
            goto label_210f28;
        }
    }
    ctx->pc = 0x210F08u;
label_210f08:
    // 0x210f08: 0xc087fee  jal         func_21FFB8
    ctx->pc = 0x210F08u;
    SET_GPR_U32(ctx, 31, 0x210F10u);
    ctx->pc = 0x210F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210F08u;
    // 0x210f0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB8u, 0x210F08u, 0x210F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210F10u;
label_210f10:
    // 0x210f10: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x210f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x210f14: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x210f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x210f18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x210f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x210f1c: 0xc087c5a  jal         func_21F168
    ctx->pc = 0x210F1Cu;
    SET_GPR_U32(ctx, 31, 0x210F24u);
    ctx->pc = 0x210F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210F1Cu;
    // 0x210f20: 0x8c45057c  lw          $a1, 0x57C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1404)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F168u, 0x210F1Cu, 0x210F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210F24u;
label_210f24:
    // 0x210f24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x210f24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210f28:
    // 0x210f28: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x210F28u;
    SET_GPR_U32(ctx, 31, 0x210F30u);
    ctx->pc = 0x210F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210F28u;
    // 0x210f2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x210F28u, 0x210F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210F30u;
label_210f30:
    // 0x210f30: 0x26e399f0  addiu       $v1, $s7, -0x6610
    ctx->pc = 0x210f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941168));
    // 0x210f34: 0x22fc2  srl         $a1, $v0, 31
    ctx->pc = 0x210f34u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x210f38: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x210f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x210f3c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x210f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x210f40: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x210f40u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x210f44: 0x3c074078  lui         $a3, 0x4078
    ctx->pc = 0x210f44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16504 << 16));
    // 0x210f48: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x210f48u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x210f4c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x210f4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210f50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x210f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210f54: 0x34e77880  ori         $a3, $a3, 0x7880
    ctx->pc = 0x210f54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)30848);
    // 0x210f58: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x210F58u;
    SET_GPR_U32(ctx, 31, 0x210F60u);
    ctx->pc = 0x210F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210F58u;
    // 0x210f5c: 0x24085080  addiu       $t0, $zero, 0x5080 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x210F58u, 0x210F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210F60u;
label_210f60:
    // 0x210f60: 0x26e399f0  addiu       $v1, $s7, -0x6610
    ctx->pc = 0x210f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941168));
label_210f64:
    // 0x210f64: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x210f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x210f68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x210F68u;
    {
        const bool branch_taken_0x210f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F68u;
        // 0x210f6c: 0x8c620018  lw          $v0, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210f68) {
            ctx->pc = 0x210F78u;
            goto label_210f78;
        }
    }
    ctx->pc = 0x210F70u;
    // 0x210f70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x210F70u;
    {
        const bool branch_taken_0x210f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F70u;
        // 0x210f74: 0x2444ffe2  addiu       $a0, $v0, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210f70) {
            ctx->pc = 0x210F7Cu;
            goto label_210f7c;
        }
    }
    ctx->pc = 0x210F78u;
label_210f78:
    // 0x210f78: 0x2444ffc8  addiu       $a0, $v0, -0x38
    ctx->pc = 0x210f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967240));
label_210f7c:
    // 0x210f7c: 0xc0841dc  jal         func_210770
    ctx->pc = 0x210F7Cu;
    SET_GPR_U32(ctx, 31, 0x210F84u);
    ctx->pc = 0x210770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210770u, 0x210F7Cu, 0x210F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210F84u;
label_210f84:
    // 0x210f84: 0xc08089c  jal         func_202270
    ctx->pc = 0x210F84u;
    SET_GPR_U32(ctx, 31, 0x210F8Cu);
    ctx->pc = 0x210F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210F84u;
    // 0x210f88: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x210F84u, 0x210F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210F8Cu;
label_210f8c:
    // 0x210f8c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x210f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x210f90: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x210f90u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x210f94: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x210f94u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x210f98: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x210f98u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x210f9c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x210f9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x210fa0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x210fa0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x210fa4: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x210fa4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x210fa8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x210fa8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x210fac: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x210facu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x210fb0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x210fb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x210FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210FB4u;
        // 0x210fb8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210FBCu;
}
