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

// Function: drawTeamBots
// Address: 0x235b00 - 0x235cc4
void drawTeamBots_0x235b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("drawTeamBots_0x235b00");
#endif

    switch (ctx->pc) {
        case 0x235b78u: goto label_235b78;
        case 0x235c48u: goto label_235c48;
        case 0x235c60u: goto label_235c60;
        default: break;
    }

    ctx->pc = 0x235b00u;

    // 0x235b00: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x235b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x235b04: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x235b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x235b08: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x235b08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235b0c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x235b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x235b10: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x235b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x235b14: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x235b14u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235b18: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x235b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x235b1c: 0x1718c0  sll         $v1, $s7, 3
    ctx->pc = 0x235b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
    // 0x235b20: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x235b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x235b24: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x235b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x235b28: 0x2442c378  addiu       $v0, $v0, -0x3C88
    ctx->pc = 0x235b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951800));
    // 0x235b2c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x235b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x235b30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x235b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x235b34: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x235b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x235b38: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x235b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x235b3c: 0x3c1e01fc  lui         $fp, 0x1FC
    ctx->pc = 0x235b3cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)508 << 16));
    // 0x235b40: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x235b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x235b44: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x235b44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235b48: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x235b48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x235b4c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x235b4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235b50: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x235b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x235b54: 0x4496a000  mtc1        $s6, $f20
    ctx->pc = 0x235b54u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x235b58: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x235b58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x235b5c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x235b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x235b60: 0x27d42a88  addiu       $s4, $fp, 0x2A88
    ctx->pc = 0x235b60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 10888));
    // 0x235b64: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x235b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x235b68: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x235b68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235b6c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x235b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x235b70: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x235b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x235b74: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x235b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_235b78:
    // 0x235b78: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x235b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x235b7c: 0x8c673838  lw          $a3, 0x3838($v1)
    ctx->pc = 0x235b7cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x353838u));
    // 0x235b80: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x235B80u;
    {
        const bool branch_taken_0x235b80 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x235B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B80u;
        // 0x235b84: 0x153100  sll         $a2, $s5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235b80) {
            ctx->pc = 0x235BB8u;
            goto label_235bb8;
        }
    }
    ctx->pc = 0x235B88u;
    // 0x235b88: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x235b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x235b8c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x235b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x235b90: 0x1457003a  bne         $v0, $s7, . + 4 + (0x3A << 2)
    ctx->pc = 0x235B90u;
    {
        const bool branch_taken_0x235b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x235B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B90u;
        // 0x235b94: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235b90) {
            ctx->pc = 0x235C7Cu;
            goto label_235c7c;
        }
    }
    ctx->pc = 0x235B98u;
    // 0x235b98: 0x3c0501fc  lui         $a1, 0x1FC
    ctx->pc = 0x235b98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)508 << 16));
    // 0x235b9c: 0x24a51234  addiu       $a1, $a1, 0x1234
    ctx->pc = 0x235b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4660));
    // 0x235ba0: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x235ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x235ba4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x235ba4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x235ba8: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x235BA8u;
    {
        const bool branch_taken_0x235ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x235BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BA8u;
        // 0x235bac: 0x27c52a88  addiu       $a1, $fp, 0x2A88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 10888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235ba8) {
            ctx->pc = 0x235C7Cu;
            goto label_235c7c;
        }
    }
    ctx->pc = 0x235BB0u;
    // 0x235bb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x235BB0u;
    {
        const bool branch_taken_0x235bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BB0u;
        // 0x235bb4: 0xb31021  addu        $v0, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235bb0) {
            ctx->pc = 0x235BC0u;
            goto label_235bc0;
        }
    }
    ctx->pc = 0x235BB8u;
label_235bb8:
    // 0x235bb8: 0x27c52a88  addiu       $a1, $fp, 0x2A88
    ctx->pc = 0x235bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 10888));
    // 0x235bbc: 0xb31021  addu        $v0, $a1, $s3
    ctx->pc = 0x235bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_235bc0:
    // 0x235bc0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x235bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x235bc4: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x235BC4u;
    {
        const bool branch_taken_0x235bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x235BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BC4u;
        // 0x235bc8: 0xc51021  addu        $v0, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235bc4) {
            ctx->pc = 0x235C7Cu;
            goto label_235c7c;
        }
    }
    ctx->pc = 0x235BCCu;
    // 0x235bcc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x235bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x235bd0: 0x462002b  bltzl       $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x235BD0u;
    {
        const bool branch_taken_0x235bd0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x235bd0) {
            ctx->pc = 0x235BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235BD0u;
            // 0x235bd4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235C80u;
            goto label_235c80;
        }
    }
    ctx->pc = 0x235BD8u;
    // 0x235bd8: 0x6c00026  bltz        $s6, . + 4 + (0x26 << 2)
    ctx->pc = 0x235BD8u;
    {
        const bool branch_taken_0x235bd8 = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x235BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BD8u;
        // 0x235bdc: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235bd8) {
            ctx->pc = 0x235C74u;
            goto label_235c74;
        }
    }
    ctx->pc = 0x235BE0u;
    // 0x235be0: 0x3c118080  lui         $s1, 0x8080
    ctx->pc = 0x235be0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32896 << 16));
    // 0x235be4: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x235BE4u;
    {
        const bool branch_taken_0x235be4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x235BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BE4u;
        // 0x235be8: 0x36318080  ori         $s1, $s1, 0x8080 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32896);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235be4) {
            ctx->pc = 0x235BFCu;
            goto label_235bfc;
        }
    }
    ctx->pc = 0x235BECu;
    // 0x235bec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x235becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235bf0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x235BF0u;
    {
        const bool branch_taken_0x235bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BF0u;
        // 0x235bf4: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235bf0) {
            ctx->pc = 0x235BFCu;
            goto label_235bfc;
        }
    }
    ctx->pc = 0x235BF8u;
    // 0x235bf8: 0x8c710004  lw          $s1, 0x4($v1)
    ctx->pc = 0x235bf8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_235bfc:
    // 0x235bfc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x235bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x235c00: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x235c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x235c04: 0x24a550f0  addiu       $a1, $a1, 0x50F0
    ctx->pc = 0x235c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20720));
    // 0x235c08: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x235c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x235c0c: 0xa00013  mtlo        $a1
    ctx->pc = 0x235c0cu;
    ctx->lo = GPR_U64(ctx, 5);
    // 0x235c10: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x235c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x235c14: 0x70621800  madd        $v1, $v1, $v0
    ctx->pc = 0x235c14u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x235c18: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x235c18u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x235c1c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x235c1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x235c20: 0x24100016  addiu       $s0, $zero, 0x16
    ctx->pc = 0x235c20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x235c24: 0xc7ad0008  lwc1        $f13, 0x8($sp)
    ctx->pc = 0x235c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x235c28: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x235c28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x235c2c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x235c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x235c30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x235c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x235c34: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x235c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x235c38: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x235c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x235c3c: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x235c3cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x235c40: 0xc08b952  jal         func_22E548
    ctx->pc = 0x235C40u;
    SET_GPR_U32(ctx, 31, 0x235C48u);
    ctx->pc = 0x235C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235C40u;
    // 0x235c44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x235C40u, 0x235C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235C48u;
label_235c48:
    // 0x235c48: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x235c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x235c4c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x235c4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x235c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235c54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x235c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235c58: 0xc08b952  jal         func_22E548
    ctx->pc = 0x235C58u;
    SET_GPR_U32(ctx, 31, 0x235C60u);
    ctx->pc = 0x235C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235C58u;
    // 0x235c5c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x235C58u, 0x235C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235C60u;
label_235c60:
    // 0x235c60: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x235c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x235c64: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x235c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x235c68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x235c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235c6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x235C6Cu;
    {
        const bool branch_taken_0x235c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C6Cu;
        // 0x235c70: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235c6c) {
            ctx->pc = 0x235C7Cu;
            goto label_235c7c;
        }
    }
    ctx->pc = 0x235C74u;
label_235c74:
    // 0x235c74: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x235c74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x235c78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x235c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235c7c:
    // 0x235c7c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x235c7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_235c80:
    // 0x235c80: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x235c80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x235c84: 0x2aa2000a  slti        $v0, $s5, 0xA
    ctx->pc = 0x235c84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x235c88: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x235C88u;
    {
        const bool branch_taken_0x235c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C88u;
        // 0x235c8c: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235c88) {
            ctx->pc = 0x235B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_235b78;
        }
    }
    ctx->pc = 0x235C90u;
    // 0x235c90: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x235c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x235c94: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x235c94u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x235c98: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x235c98u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x235c9c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x235c9cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x235ca0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x235ca0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x235ca4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x235ca4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x235ca8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x235ca8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x235cac: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x235cacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x235cb0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x235cb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235cb4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x235cb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235cb8: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x235cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x235cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x235CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CBCu;
        // 0x235cc0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235CC4u;
}
