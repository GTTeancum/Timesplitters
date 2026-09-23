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

// Function: gunReload
// Address: 0x28db90 - 0x28de68
void gunReload_0x28db90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gunReload_0x28db90");
#endif

    switch (ctx->pc) {
        case 0x28dcf4u: goto label_28dcf4;
        case 0x28dd24u: goto label_28dd24;
        case 0x28dd68u: goto label_28dd68;
        case 0x28dda8u: goto label_28dda8;
        case 0x28ddf0u: goto label_28ddf0;
        case 0x28de24u: goto label_28de24;
        case 0x28de40u: goto label_28de40;
        default: break;
    }

    ctx->pc = 0x28db90u;

    // 0x28db90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x28db90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x28db94: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x28db94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x28db98: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x28db98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x28db9c: 0x24496218  addiu       $t1, $v0, 0x6218
    ctx->pc = 0x28db9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 25112));
    // 0x28dba0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x28dba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x28dba4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x28dba4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dba8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x28dba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x28dbac: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x28dbacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dbb0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28dbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28dbb4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x28dbb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dbb8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28dbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28dbbc: 0x24050190  addiu       $a1, $zero, 0x190
    ctx->pc = 0x28dbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x28dbc0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x28dbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x28dbc4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x28dbc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dbc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28dbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28dbcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28dbccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dbd0: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x28dbd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x28dbd4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x28dbd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28dbd8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x28dbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x28dbdc: 0x8e460098  lw          $a2, 0x98($s2)
    ctx->pc = 0x28dbdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x28dbe0: 0x652818  mult        $a1, $v1, $a1
    ctx->pc = 0x28dbe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x28dbe4: 0x1251021  addu        $v0, $t1, $a1
    ctx->pc = 0x28dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x28dbe8: 0x10c70007  beq         $a2, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x28DBE8u;
    {
        const bool branch_taken_0x28dbe8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x28DBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DBE8u;
        // 0x28dbec: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dbe8) {
            ctx->pc = 0x28DC08u;
            goto label_28dc08;
        }
    }
    ctx->pc = 0x28DBF0u;
    // 0x28dbf0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28dbf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dbf4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x28dbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
    // 0x28dbf8: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x28dbf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x28dbfc: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x28DBFCu;
    {
        const bool branch_taken_0x28dbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DBFCu;
        // 0x28dc00: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dbfc) {
            ctx->pc = 0x28DE44u;
            goto label_28de44;
        }
    }
    ctx->pc = 0x28DC04u;
    // 0x28dc04: 0x1251021  addu        $v0, $t1, $a1
    ctx->pc = 0x28dc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
label_28dc08:
    // 0x28dc08: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x28dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x28dc0c: 0x14470030  bne         $v0, $a3, . + 4 + (0x30 << 2)
    ctx->pc = 0x28DC0Cu;
    {
        const bool branch_taken_0x28dc0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x28dc0c) {
            ctx->pc = 0x28DCD0u;
            goto label_28dcd0;
        }
    }
    ctx->pc = 0x28DC14u;
    // 0x28dc14: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x28dc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x28dc18: 0x10400089  beqz        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x28DC18u;
    {
        const bool branch_taken_0x28dc18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DC18u;
        // 0x28dc1c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dc18) {
            ctx->pc = 0x28DE40u;
            goto label_28de40;
        }
    }
    ctx->pc = 0x28DC20u;
    // 0x28dc20: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x28dc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x28dc24: 0x8c43026c  lw          $v1, 0x26C($v0)
    ctx->pc = 0x28dc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
    // 0x28dc28: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x28DC28u;
    {
        const bool branch_taken_0x28dc28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DC28u;
        // 0x28dc2c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dc28) {
            ctx->pc = 0x28DCA0u;
            goto label_28dca0;
        }
    }
    ctx->pc = 0x28DC30u;
    // 0x28dc30: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x28dc30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x28dc34: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x28dc34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x28dc38: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x28dc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x28dc3c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x28dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x28dc40: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x28DC40u;
    {
        const bool branch_taken_0x28dc40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x28DC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DC40u;
        // 0x28dc44: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dc40) {
            ctx->pc = 0x28DC74u;
            goto label_28dc74;
        }
    }
    ctx->pc = 0x28DC48u;
    // 0x28dc48: 0x240400d7  addiu       $a0, $zero, 0xD7
    ctx->pc = 0x28dc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
    // 0x28dc4c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x28dc4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28dc50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28dc50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc54: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x28dc54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28dc58: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x28dc58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28dc5c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28dc5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28dc60: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28dc60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28dc64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28dc64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28dc68: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x28dc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28dc6c: 0x8081546  j           func_205518
    ctx->pc = 0x28DC6Cu;
    ctx->pc = 0x28DC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DC6Cu;
    // 0x28dc70: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    soundStart_0x205518(rdram, ctx, runtime); return;
    ctx->pc = 0x28DC74u;
label_28dc74:
    // 0x28dc74: 0x2404008a  addiu       $a0, $zero, 0x8A
    ctx->pc = 0x28dc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    // 0x28dc78: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x28dc78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28dc7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28dc7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc80: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x28dc80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28dc84: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x28dc84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28dc88: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28dc88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28dc8c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28dc8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28dc90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28dc90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28dc94: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x28dc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28dc98: 0x8081546  j           func_205518
    ctx->pc = 0x28DC98u;
    ctx->pc = 0x28DC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DC98u;
    // 0x28dc9c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    soundStart_0x205518(rdram, ctx, runtime); return;
    ctx->pc = 0x28DCA0u;
label_28dca0:
    // 0x28dca0: 0x16a00068  bnez        $s5, . + 4 + (0x68 << 2)
    ctx->pc = 0x28DCA0u;
    {
        const bool branch_taken_0x28dca0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DCA0u;
        // 0x28dca4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dca0) {
            ctx->pc = 0x28DE44u;
            goto label_28de44;
        }
    }
    ctx->pc = 0x28DCA8u;
    // 0x28dca8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28dca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dcac: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x28dcacu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28dcb0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x28dcb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28dcb4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x28dcb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28dcb8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28dcb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28dcbc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28dcbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28dcc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28dcc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28dcc4: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x28dcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28dcc8: 0x80a36b2  j           func_28DAC8
    ctx->pc = 0x28DCC8u;
    ctx->pc = 0x28DCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DCC8u;
    // 0x28dccc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DAC8u;
    changeToComboWithAmmo_0x28dac8(rdram, ctx, runtime); return;
    ctx->pc = 0x28DCD0u;
label_28dcd0:
    // 0x28dcd0: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x28DCD0u;
    {
        const bool branch_taken_0x28dcd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DCD0u;
        // 0x28dcd4: 0x48080  sll         $s0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dcd0) {
            ctx->pc = 0x28DE40u;
            goto label_28de40;
        }
    }
    ctx->pc = 0x28DCD8u;
    // 0x28dcd8: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x28dcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x28dcdc: 0x8c43026c  lw          $v1, 0x26C($v0)
    ctx->pc = 0x28dcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
    // 0x28dce0: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x28DCE0u;
    {
        const bool branch_taken_0x28dce0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DCE0u;
        // 0x28dce4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dce0) {
            ctx->pc = 0x28DD5Cu;
            goto label_28dd5c;
        }
    }
    ctx->pc = 0x28DCE8u;
    // 0x28dce8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28dce8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dcec: 0xc0a5464  jal         func_295190
    ctx->pc = 0x28DCECu;
    SET_GPR_U32(ctx, 31, 0x28DCF4u);
    ctx->pc = 0x28DCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DCECu;
    // 0x28dcf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295190u, 0x28DCECu, 0x28DCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DCF4u;
label_28dcf4:
    // 0x28dcf4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28DCF4u;
    {
        const bool branch_taken_0x28dcf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dcf4) {
            ctx->pc = 0x28DD14u;
            goto label_28dd14;
        }
    }
    ctx->pc = 0x28DCFCu;
    // 0x28dcfc: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x28DCFCu;
    {
        const bool branch_taken_0x28dcfc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DCFCu;
        // 0x28dd00: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dcfc) {
            ctx->pc = 0x28DD0Cu;
            goto label_28dd0c;
        }
    }
    ctx->pc = 0x28DD04u;
    // 0x28dd04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28DD04u;
    {
        const bool branch_taken_0x28dd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DD04u;
        // 0x28dd08: 0x8c43017c  lw          $v1, 0x17C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dd04) {
            ctx->pc = 0x28DD10u;
            goto label_28dd10;
        }
    }
    ctx->pc = 0x28DD0Cu;
label_28dd0c:
    // 0x28dd0c: 0x8c430110  lw          $v1, 0x110($v0)
    ctx->pc = 0x28dd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
label_28dd10:
    // 0x28dd10: 0x28720001  slti        $s2, $v1, 0x1
    ctx->pc = 0x28dd10u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1) ? 1 : 0);
label_28dd14:
    // 0x28dd14: 0x16a0004b  bnez        $s5, . + 4 + (0x4B << 2)
    ctx->pc = 0x28DD14u;
    {
        const bool branch_taken_0x28dd14 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DD14u;
        // 0x28dd18: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dd14) {
            ctx->pc = 0x28DE44u;
            goto label_28de44;
        }
    }
    ctx->pc = 0x28DD1Cu;
    // 0x28dd1c: 0xc0a5464  jal         func_295190
    ctx->pc = 0x28DD1Cu;
    SET_GPR_U32(ctx, 31, 0x28DD24u);
    ctx->pc = 0x28DD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DD1Cu;
    // 0x28dd20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295190u, 0x28DD1Cu, 0x28DD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DD24u;
label_28dd24:
    // 0x28dd24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28DD24u;
    {
        const bool branch_taken_0x28dd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DD24u;
        // 0x28dd28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dd24) {
            ctx->pc = 0x28DD34u;
            goto label_28dd34;
        }
    }
    ctx->pc = 0x28DD2Cu;
    // 0x28dd2c: 0x12400045  beqz        $s2, . + 4 + (0x45 << 2)
    ctx->pc = 0x28DD2Cu;
    {
        const bool branch_taken_0x28dd2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DD2Cu;
        // 0x28dd30: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dd2c) {
            ctx->pc = 0x28DE44u;
            goto label_28de44;
        }
    }
    ctx->pc = 0x28DD34u;
label_28dd34:
    // 0x28dd34: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x28dd34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28dd38: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x28dd38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28dd3c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x28dd3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28dd40: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x28dd40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28dd44: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28dd44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28dd48: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28dd48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28dd4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28dd4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28dd50: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x28dd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28dd54: 0x80a36b2  j           func_28DAC8
    ctx->pc = 0x28DD54u;
    ctx->pc = 0x28DD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DD54u;
    // 0x28dd58: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DAC8u;
    changeToComboWithAmmo_0x28dac8(rdram, ctx, runtime); return;
    ctx->pc = 0x28DD5Cu;
label_28dd5c:
    // 0x28dd5c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28dd5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dd60: 0xc0a36c6  jal         func_28DB18
    ctx->pc = 0x28DD60u;
    SET_GPR_U32(ctx, 31, 0x28DD68u);
    ctx->pc = 0x28DD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DD60u;
    // 0x28dd64: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB18u, 0x28DD60u, 0x28DD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DD68u;
label_28dd68:
    // 0x28dd68: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x28DD68u;
    {
        const bool branch_taken_0x28dd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DD68u;
        // 0x28dd6c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dd68) {
            ctx->pc = 0x28DE44u;
            goto label_28de44;
        }
    }
    ctx->pc = 0x28DD70u;
    // 0x28dd70: 0x12400034  beqz        $s2, . + 4 + (0x34 << 2)
    ctx->pc = 0x28DD70u;
    {
        const bool branch_taken_0x28dd70 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DD70u;
        // 0x28dd74: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dd70) {
            ctx->pc = 0x28DE44u;
            goto label_28de44;
        }
    }
    ctx->pc = 0x28DD78u;
    // 0x28dd78: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x28dd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x28dd7c: 0x1462002b  bne         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x28DD7Cu;
    {
        const bool branch_taken_0x28dd7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28DD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DD7Cu;
        // 0x28dd80: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dd7c) {
            ctx->pc = 0x28DE2Cu;
            goto label_28de2c;
        }
    }
    ctx->pc = 0x28DD84u;
    // 0x28dd84: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x28dd84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x28dd88: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x28dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x28dd8c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x28dd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x28dd90: 0x240400de  addiu       $a0, $zero, 0xDE
    ctx->pc = 0x28dd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
    // 0x28dd94: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x28dd94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28dd98: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x28dd98u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x28dd9c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x28dd9cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x28dda0: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x28DDA0u;
    SET_GPR_U32(ctx, 31, 0x28DDA8u);
    ctx->pc = 0x28DDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DDA0u;
    // 0x28dda4: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x28DDA0u, 0x28DDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DDA8u;
label_28dda8:
    // 0x28dda8: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x28dda8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28ddac: 0x8f86b234  lw          $a2, -0x4DCC($gp)
    ctx->pc = 0x28ddacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x28ddb0: 0x3c114000  lui         $s1, 0x4000
    ctx->pc = 0x28ddb0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16384 << 16));
    // 0x28ddb4: 0xac50008c  sw          $s0, 0x8C($v0)
    ctx->pc = 0x28ddb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 16));
    // 0x28ddb8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x28ddb8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28ddbc: 0xac500088  sw          $s0, 0x88($v0)
    ctx->pc = 0x28ddbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 16));
    // 0x28ddc0: 0x240400de  addiu       $a0, $zero, 0xDE
    ctx->pc = 0x28ddc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
    // 0x28ddc4: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x28ddc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x28ddc8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x28ddc8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x28ddcc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x28ddccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28ddd0: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x28ddd0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x28ddd4: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x28ddd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x28ddd8: 0xae42008c  sw          $v0, 0x8C($s2)
    ctx->pc = 0x28ddd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
    // 0x28dddc: 0x246300c9  addiu       $v1, $v1, 0xC9
    ctx->pc = 0x28dddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 201));
    // 0x28dde0: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x28dde0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
    // 0x28dde4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x28dde4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x28dde8: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x28DDE8u;
    SET_GPR_U32(ctx, 31, 0x28DDF0u);
    ctx->pc = 0x28DDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DDE8u;
    // 0x28ddec: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x28DDE8u, 0x28DDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DDF0u;
label_28ddf0:
    // 0x28ddf0: 0x8f87b234  lw          $a3, -0x4DCC($gp)
    ctx->pc = 0x28ddf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x28ddf4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28ddf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ddf8: 0xac500088  sw          $s0, 0x88($v0)
    ctx->pc = 0x28ddf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 16));
    // 0x28ddfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28ddfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28de00: 0xac50008c  sw          $s0, 0x8C($v0)
    ctx->pc = 0x28de00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 16));
    // 0x28de04: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x28de04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x28de08: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x28de08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28de0c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x28de0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x28de10: 0xae420090  sw          $v0, 0x90($s2)
    ctx->pc = 0x28de10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
    // 0x28de14: 0x24c600c9  addiu       $a2, $a2, 0xC9
    ctx->pc = 0x28de14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 201));
    // 0x28de18: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x28de18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x28de1c: 0xc0a474e  jal         func_291D38
    ctx->pc = 0x28DE1Cu;
    SET_GPR_U32(ctx, 31, 0x28DE24u);
    ctx->pc = 0x28DE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DE1Cu;
    // 0x28de20: 0xac46000c  sw          $a2, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D38u, 0x28DE1Cu, 0x28DE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DE24u;
label_28de24:
    // 0x28de24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28DE24u;
    {
        const bool branch_taken_0x28de24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DE24u;
        // 0x28de28: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28de24) {
            ctx->pc = 0x28DE34u;
            goto label_28de34;
        }
    }
    ctx->pc = 0x28DE2Cu;
label_28de2c:
    // 0x28de2c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x28de2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x28de30: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x28de30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_28de34:
    // 0x28de34: 0x2404008a  addiu       $a0, $zero, 0x8A
    ctx->pc = 0x28de34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    // 0x28de38: 0xc081546  jal         func_205518
    ctx->pc = 0x28DE38u;
    SET_GPR_U32(ctx, 31, 0x28DE40u);
    ctx->pc = 0x28DE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DE38u;
    // 0x28de3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x28DE38u, 0x28DE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DE40u;
label_28de40:
    // 0x28de40: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x28de40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_28de44:
    // 0x28de44: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x28de44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28de48: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x28de48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28de4c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x28de4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28de50: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28de50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28de54: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28de54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28de58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28de58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28de5c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x28de5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28de60: 0x3e00008  jr          $ra
    ctx->pc = 0x28DE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DE60u;
        // 0x28de64: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DE68u;
}
