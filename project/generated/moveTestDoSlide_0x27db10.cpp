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

// Function: moveTestDoSlide
// Address: 0x27db10 - 0x27dff4
void moveTestDoSlide_0x27db10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("moveTestDoSlide_0x27db10");
#endif

    switch (ctx->pc) {
        case 0x27dbccu: goto label_27dbcc;
        case 0x27dc44u: goto label_27dc44;
        case 0x27dd28u: goto label_27dd28;
        case 0x27ddd0u: goto label_27ddd0;
        case 0x27de78u: goto label_27de78;
        default: break;
    }

    ctx->pc = 0x27db10u;

    // 0x27db10: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x27db10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x27db14: 0x24031210  addiu       $v1, $zero, 0x1210
    ctx->pc = 0x27db14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x27db18: 0xffb400d0  sd          $s4, 0xD0($sp)
    ctx->pc = 0x27db18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
    // 0x27db1c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x27db1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27db20: 0xffb70100  sd          $s7, 0x100($sp)
    ctx->pc = 0x27db20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 23));
    // 0x27db24: 0xffb600f0  sd          $s6, 0xF0($sp)
    ctx->pc = 0x27db24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 22));
    // 0x27db28: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x27db28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x27db2c: 0xffb500e0  sd          $s5, 0xE0($sp)
    ctx->pc = 0x27db2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 21));
    // 0x27db30: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x27db30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27db34: 0xffb300c0  sd          $s3, 0xC0($sp)
    ctx->pc = 0x27db34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 19));
    // 0x27db38: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x27db38u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27db3c: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x27db3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x27db40: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x27db40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27db44: 0xffb100a0  sd          $s1, 0xA0($sp)
    ctx->pc = 0x27db44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 17));
    // 0x27db48: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x27db48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x27db4c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x27db4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27db50: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x27db50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x27db54: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x27db54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x27db58: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x27db58u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x27db5c: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x27db5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x27db60: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x27db60u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x27db64: 0xffbe0110  sd          $fp, 0x110($sp)
    ctx->pc = 0x27db64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 30));
    // 0x27db68: 0xe7b80150  swc1        $f24, 0x150($sp)
    ctx->pc = 0x27db68u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x27db6c: 0xe7b70148  swc1        $f23, 0x148($sp)
    ctx->pc = 0x27db6cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x27db70: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x27db70u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x27db74: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x27db74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27db78: 0x8f82b238  lw          $v0, -0x4DC8($gp)
    ctx->pc = 0x27db78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x27db7c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x27db7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27db80: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x27db80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27db84: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x27db84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27db88: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x27db88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27db8c: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x27db8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27db90: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x27db90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27db94: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x27db94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27db98: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x27db98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x27db9c: 0xc6370004  lwc1        $f23, 0x4($s1)
    ctx->pc = 0x27db9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x27dba0: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x27dba0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x27dba4: 0x8e42119c  lw          $v0, 0x119C($s2)
    ctx->pc = 0x27dba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4508)));
    // 0x27dba8: 0xc6581198  lwc1        $f24, 0x1198($s2)
    ctx->pc = 0x27dba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x27dbac: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x27dbacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x27dbb0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x27dbb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x27dbb4: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x27dbb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x27dbb8: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x27dbb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x27dbbc: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x27dbbcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x27dbc0: 0xe7b70044  swc1        $f23, 0x44($sp)
    ctx->pc = 0x27dbc0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x27dbc4: 0xc09f430  jal         func_27D0C0
    ctx->pc = 0x27DBC4u;
    SET_GPR_U32(ctx, 31, 0x27DBCCu);
    ctx->pc = 0x27DBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DBC4u;
    // 0x27dbc8: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D0C0u, 0x27DBC4u, 0x27DBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DBCCu;
label_27dbcc:
    // 0x27dbcc: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x27dbccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x27dbd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27dbd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dbd4: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x27dbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x27dbd8: 0x8e4311bc  lw          $v1, 0x11BC($s2)
    ctx->pc = 0x27dbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4540)));
    // 0x27dbdc: 0x8e5711b8  lw          $s7, 0x11B8($s2)
    ctx->pc = 0x27dbdcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4536)));
    // 0x27dbe0: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x27dbe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27dbe4: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x27DBE4u;
    {
        const bool branch_taken_0x27dbe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DBE4u;
        // 0x27dbe8: 0xafa30088  sw          $v1, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dbe4) {
            ctx->pc = 0x27DC64u;
            goto label_27dc64;
        }
    }
    ctx->pc = 0x27DBECu;
    // 0x27dbec: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x27dbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x27dbf0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x27DBF0u;
    {
        const bool branch_taken_0x27dbf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DBF0u;
        // 0x27dbf4: 0xc7a60000  lwc1        $f6, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dbf0) {
            ctx->pc = 0x27DC48u;
            goto label_27dc48;
        }
    }
    ctx->pc = 0x27DBF8u;
    // 0x27dbf8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x27dbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dbfc: 0x46060032  c.eq.s      $f0, $f6
    ctx->pc = 0x27dbfcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27dc00: 0x0  nop
    ctx->pc = 0x27dc00u;
    // NOP
    // 0x27dc04: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x27DC04u;
    {
        const bool branch_taken_0x27dc04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27DC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC04u;
        // 0x27dc08: 0xc7a50008  lwc1        $f5, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc04) {
            ctx->pc = 0x27DC20u;
            goto label_27dc20;
        }
    }
    ctx->pc = 0x27DC0Cu;
    // 0x27dc0c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x27dc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dc10: 0x46050032  c.eq.s      $f0, $f5
    ctx->pc = 0x27dc10u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27dc14: 0x0  nop
    ctx->pc = 0x27dc14u;
    // NOP
    // 0x27dc18: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x27DC18u;
    {
        const bool branch_taken_0x27dc18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27DC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC18u;
        // 0x27dc1c: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc18) {
            ctx->pc = 0x27DC54u;
            goto label_27dc54;
        }
    }
    ctx->pc = 0x27DC20u;
label_27dc20:
    // 0x27dc20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27dc20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dc24: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27dc24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27dc28: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x27dc28u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x27dc2c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x27dc2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dc30: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x27dc30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dc34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27dc34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dc38: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x27dc38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dc3c: 0xc09f430  jal         func_27D0C0
    ctx->pc = 0x27DC3Cu;
    SET_GPR_U32(ctx, 31, 0x27DC44u);
    ctx->pc = 0x27DC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DC3Cu;
    // 0x27dc40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D0C0u, 0x27DC3Cu, 0x27DC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DC44u;
label_27dc44:
    // 0x27dc44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27dc44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27dc48:
    // 0x27dc48: 0xc7a60000  lwc1        $f6, 0x0($sp)
    ctx->pc = 0x27dc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x27dc4c: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x27dc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27dc50: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x27dc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27dc54:
    // 0x27dc54: 0xe6250008  swc1        $f5, 0x8($s1)
    ctx->pc = 0x27dc54u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x27dc58: 0xe6260000  swc1        $f6, 0x0($s1)
    ctx->pc = 0x27dc58u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x27dc5c: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x27DC5Cu;
    {
        const bool branch_taken_0x27dc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC5Cu;
        // 0x27dc60: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc5c) {
            ctx->pc = 0x27DF8Cu;
            goto label_27df8c;
        }
    }
    ctx->pc = 0x27DC64u;
label_27dc64:
    // 0x27dc64: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x27dc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x27dc68: 0x1040008e  beqz        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x27DC68u;
    {
        const bool branch_taken_0x27dc68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC68u;
        // 0x27dc6c: 0xc7a60000  lwc1        $f6, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc68) {
            ctx->pc = 0x27DEA4u;
            goto label_27dea4;
        }
    }
    ctx->pc = 0x27DC70u;
    // 0x27dc70: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x27dc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27dc74: 0x46061032  c.eq.s      $f2, $f6
    ctx->pc = 0x27dc74u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27dc78: 0x0  nop
    ctx->pc = 0x27dc78u;
    // NOP
    // 0x27dc7c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x27DC7Cu;
    {
        const bool branch_taken_0x27dc7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27DC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC7Cu;
        // 0x27dc80: 0x46003106  mov.s       $f4, $f6 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc7c) {
            ctx->pc = 0x27DCA4u;
            goto label_27dca4;
        }
    }
    ctx->pc = 0x27DC84u;
    // 0x27dc84: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x27dc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27dc88: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x27dc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27dc8c: 0x46051832  c.eq.s      $f3, $f5
    ctx->pc = 0x27dc8cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27dc90: 0x0  nop
    ctx->pc = 0x27dc90u;
    // NOP
    // 0x27dc94: 0x45010088  bc1t        . + 4 + (0x88 << 2)
    ctx->pc = 0x27DC94u;
    {
        const bool branch_taken_0x27dc94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27DC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC94u;
        // 0x27dc98: 0x32020004  andi        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc94) {
            ctx->pc = 0x27DEB8u;
            goto label_27deb8;
        }
    }
    ctx->pc = 0x27DC9Cu;
    // 0x27dc9c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27DC9Cu;
    {
        const bool branch_taken_0x27dc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27dc9c) {
            ctx->pc = 0x27DCB0u;
            goto label_27dcb0;
        }
    }
    ctx->pc = 0x27DCA4u;
label_27dca4:
    // 0x27dca4: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x27dca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27dca8: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x27dca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27dcac: 0x32020004  andi        $v0, $s0, 0x4
    ctx->pc = 0x27dcacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
label_27dcb0:
    // 0x27dcb0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27DCB0u;
    {
        const bool branch_taken_0x27dcb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCB0u;
        // 0x27dcb4: 0xc781b928  lwc1        $f1, -0x46D8($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dcb0) {
            ctx->pc = 0x27DCCCu;
            goto label_27dccc;
        }
    }
    ctx->pc = 0x27DCB8u;
    // 0x27dcb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27dcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27dcbc: 0xc780b92c  lwc1        $f0, -0x46D4($gp)
    ctx->pc = 0x27dcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dcc0: 0xafa30084  sw          $v1, 0x84($sp)
    ctx->pc = 0x27dcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 3));
    // 0x27dcc4: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x27dcc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27dcc8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x27dcc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_27dccc:
    // 0x27dccc: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x27dcccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x27dcd0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x27dcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dcd4: 0x460328c1  sub.s       $f3, $f5, $f3
    ctx->pc = 0x27dcd4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x27dcd8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x27dcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27dcdc: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x27dcdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x27dce0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x27dce0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x27dce4: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x27dce4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x27dce8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x27dce8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x27dcec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27dcecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27dcf0: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x27dcf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27dcf4: 0x0  nop
    ctx->pc = 0x27dcf4u;
    // NOP
    // 0x27dcf8: 0x4500006f  bc1f        . + 4 + (0x6F << 2)
    ctx->pc = 0x27DCF8u;
    {
        const bool branch_taken_0x27dcf8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27DCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCF8u;
        // 0x27dcfc: 0xe7a30054  swc1        $f3, 0x54($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dcf8) {
            ctx->pc = 0x27DEB8u;
            goto label_27deb8;
        }
    }
    ctx->pc = 0x27DD00u;
    // 0x27dd00: 0x27be0010  addiu       $fp, $sp, 0x10
    ctx->pc = 0x27dd00u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27dd04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27dd04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dd08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27dd08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dd0c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x27dd0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dd10: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27dd10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27dd14: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x27dd14u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x27dd18: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x27dd18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dd1c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x27dd1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dd20: 0xc09f430  jal         func_27D0C0
    ctx->pc = 0x27DD20u;
    SET_GPR_U32(ctx, 31, 0x27DD28u);
    ctx->pc = 0x27DD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DD20u;
    // 0x27dd24: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D0C0u, 0x27DD20u, 0x27DD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DD28u;
label_27dd28:
    // 0x27dd28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27dd28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dd2c: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x27dd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x27dd30: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x27DD30u;
    {
        const bool branch_taken_0x27dd30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD30u;
        // 0x27dd34: 0xc7a60000  lwc1        $f6, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd30) {
            ctx->pc = 0x27DEA4u;
            goto label_27dea4;
        }
    }
    ctx->pc = 0x27DD38u;
    // 0x27dd38: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x27dd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27dd3c: 0x46013032  c.eq.s      $f6, $f1
    ctx->pc = 0x27dd3cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[6], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27dd40: 0x0  nop
    ctx->pc = 0x27dd40u;
    // NOP
    // 0x27dd44: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x27DD44u;
    {
        const bool branch_taken_0x27dd44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27DD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD44u;
        // 0x27dd48: 0x46003086  mov.s       $f2, $f6 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd44) {
            ctx->pc = 0x27DD6Cu;
            goto label_27dd6c;
        }
    }
    ctx->pc = 0x27DD4Cu;
    // 0x27dd4c: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x27dd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27dd50: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x27dd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dd54: 0x46002832  c.eq.s      $f5, $f0
    ctx->pc = 0x27dd54u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27dd58: 0x0  nop
    ctx->pc = 0x27dd58u;
    // NOP
    // 0x27dd5c: 0x45010056  bc1t        . + 4 + (0x56 << 2)
    ctx->pc = 0x27DD5Cu;
    {
        const bool branch_taken_0x27dd5c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD5Cu;
        // 0x27dd60: 0x32020004  andi        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd5c) {
            ctx->pc = 0x27DEB8u;
            goto label_27deb8;
        }
    }
    ctx->pc = 0x27DD64u;
    // 0x27dd64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27DD64u;
    {
        const bool branch_taken_0x27dd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD64u;
        // 0x27dd68: 0x460208c1  sub.s       $f3, $f1, $f2 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd64) {
            ctx->pc = 0x27DD78u;
            goto label_27dd78;
        }
    }
    ctx->pc = 0x27DD6Cu;
label_27dd6c:
    // 0x27dd6c: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x27dd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27dd70: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x27dd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dd74: 0x460208c1  sub.s       $f3, $f1, $f2
    ctx->pc = 0x27dd74u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_27dd78:
    // 0x27dd78: 0x46050081  sub.s       $f2, $f0, $f5
    ctx->pc = 0x27dd78u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x27dd7c: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x27dd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27dd80: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x27dd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dd84: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x27dd84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x27dd88: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x27dd88u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x27dd8c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x27dd8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x27dd90: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27dd90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27dd94: 0x4601b034  c.lt.s      $f22, $f1
    ctx->pc = 0x27dd94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27dd98: 0x0  nop
    ctx->pc = 0x27dd98u;
    // NOP
    // 0x27dd9c: 0x45000045  bc1f        . + 4 + (0x45 << 2)
    ctx->pc = 0x27DD9Cu;
    {
        const bool branch_taken_0x27dd9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27DDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD9Cu;
        // 0x27dda0: 0xe7a20064  swc1        $f2, 0x64($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd9c) {
            ctx->pc = 0x27DEB4u;
            goto label_27deb4;
        }
    }
    ctx->pc = 0x27DDA4u;
    // 0x27dda4: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x27dda4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x27dda8: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x27dda8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x27ddac: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x27ddacu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27ddb0: 0x0  nop
    ctx->pc = 0x27ddb0u;
    // NOP
    // 0x27ddb4: 0x0  nop
    ctx->pc = 0x27ddb4u;
    // NOP
    // 0x27ddb8: 0x460c0004  c1          0xC0004
    ctx->pc = 0x27ddb8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x27ddbc: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x27ddbcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ddc0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x27DDC0u;
    {
        const bool branch_taken_0x27ddc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27ddc0) {
            ctx->pc = 0x27DDD8u;
            goto label_27ddd8;
        }
    }
    ctx->pc = 0x27DDC8u;
    // 0x27ddc8: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x27DDC8u;
    SET_GPR_U32(ctx, 31, 0x27DDD0u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x27DDC8u, 0x27DDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DDD0u;
label_27ddd0:
    // 0x27ddd0: 0xc7a60000  lwc1        $f6, 0x0($sp)
    ctx->pc = 0x27ddd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x27ddd4: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x27ddd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_27ddd8:
    // 0x27ddd8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27ddd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27dddc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x27dddcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27dde0: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x27dde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27dde4: 0x0  nop
    ctx->pc = 0x27dde4u;
    // NOP
    // 0x27dde8: 0x0  nop
    ctx->pc = 0x27dde8u;
    // NOP
    // 0x27ddec: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x27ddecu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
    // 0x27ddf0: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x27ddf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27ddf4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x27ddf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ddf8: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x27ddf8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x27ddfc: 0xc7a40064  lwc1        $f4, 0x64($sp)
    ctx->pc = 0x27ddfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27de00: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x27de00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x27de04: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x27de04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x27de08: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x27de08u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x27de0c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x27de0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x27de10: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x27de10u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x27de14: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x27de14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x27de18: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x27de18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x27de1c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x27de1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x27de20: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27de20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27de24: 0x4601b034  c.lt.s      $f22, $f1
    ctx->pc = 0x27de24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27de28: 0x0  nop
    ctx->pc = 0x27de28u;
    // NOP
    // 0x27de2c: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x27DE2Cu;
    {
        const bool branch_taken_0x27de2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27DE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE2Cu;
        // 0x27de30: 0xe7a40064  swc1        $f4, 0x64($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de2c) {
            ctx->pc = 0x27DEB4u;
            goto label_27deb4;
        }
    }
    ctx->pc = 0x27DE34u;
    // 0x27de34: 0x46040802  mul.s       $f0, $f1, $f4
    ctx->pc = 0x27de34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x27de38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27de38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27de3c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x27de3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x27de40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27de40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27de44: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x27de44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27de48: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27de48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27de4c: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x27de4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x27de50: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x27de50u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x27de54: 0x46013040  add.s       $f1, $f6, $f1
    ctx->pc = 0x27de54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x27de58: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x27de58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27de5c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27de5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27de60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27de60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27de64: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x27de64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27de68: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x27de68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x27de6c: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x27de6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x27de70: 0xc09f430  jal         func_27D0C0
    ctx->pc = 0x27DE70u;
    SET_GPR_U32(ctx, 31, 0x27DE78u);
    ctx->pc = 0x27DE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DE70u;
    // 0x27de74: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D0C0u, 0x27DE70u, 0x27DE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DE78u;
label_27de78:
    // 0x27de78: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x27de78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27de7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27de7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27de80: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x27de80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27de84: 0x32020004  andi        $v0, $s0, 0x4
    ctx->pc = 0x27de84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
    // 0x27de88: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x27de88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27de8c: 0x46000986  mov.s       $f6, $f1
    ctx->pc = 0x27de8cu;
    ctx->f[6] = FPU_MOV_S(ctx->f[1]);
    // 0x27de90: 0x46001146  mov.s       $f5, $f2
    ctx->pc = 0x27de90u;
    ctx->f[5] = FPU_MOV_S(ctx->f[2]);
    // 0x27de94: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x27de94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27de98: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x27de98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x27de9c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27DE9Cu;
    {
        const bool branch_taken_0x27de9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE9Cu;
        // 0x27dea0: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de9c) {
            ctx->pc = 0x27DEB8u;
            goto label_27deb8;
        }
    }
    ctx->pc = 0x27DEA4u;
label_27dea4:
    // 0x27dea4: 0xc7a60000  lwc1        $f6, 0x0($sp)
    ctx->pc = 0x27dea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x27dea8: 0x32020004  andi        $v0, $s0, 0x4
    ctx->pc = 0x27dea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
    // 0x27deac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27DEACu;
    {
        const bool branch_taken_0x27deac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DEACu;
        // 0x27deb0: 0xc7a50008  lwc1        $f5, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27deac) {
            ctx->pc = 0x27DEB8u;
            goto label_27deb8;
        }
    }
    ctx->pc = 0x27DEB4u;
label_27deb4:
    // 0x27deb4: 0x32020004  andi        $v0, $s0, 0x4
    ctx->pc = 0x27deb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
label_27deb8:
    // 0x27deb8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x27deb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27debc: 0xe6260000  swc1        $f6, 0x0($s1)
    ctx->pc = 0x27debcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x27dec0: 0xe6250008  swc1        $f5, 0x8($s1)
    ctx->pc = 0x27dec0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x27dec4: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x27dec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x27dec8: 0xc6670000  lwc1        $f7, 0x0($s3)
    ctx->pc = 0x27dec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x27decc: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x27deccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ded0: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x27ded0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x27ded4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x27DED4u;
    {
        const bool branch_taken_0x27ded4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DED4u;
        // 0x27ded8: 0x46050141  sub.s       $f5, $f0, $f5 (Delay Slot)
        ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ded4) {
            ctx->pc = 0x27DF18u;
            goto label_27df18;
        }
    }
    ctx->pc = 0x27DEDCu;
    // 0x27dedc: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x27dedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x27dee0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x27DEE0u;
    {
        const bool branch_taken_0x27dee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DEE0u;
        // 0x27dee4: 0xc782b928  lwc1        $f2, -0x46D8($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dee0) {
            ctx->pc = 0x27DF18u;
            goto label_27df18;
        }
    }
    ctx->pc = 0x27DEE8u;
    // 0x27dee8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x27dee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27deec: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x27deecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27def0: 0xc783b92c  lwc1        $f3, -0x46D4($gp)
    ctx->pc = 0x27def0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27def4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x27def4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x27def8: 0xc78487c4  lwc1        $f4, -0x783C($gp)
    ctx->pc = 0x27def8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27defc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x27defcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x27df00: 0xc78287c8  lwc1        $f2, -0x7838($gp)
    ctx->pc = 0x27df00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27df04: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27df04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27df08: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x27df08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27df0c: 0x0  nop
    ctx->pc = 0x27df0cu;
    // NOP
    // 0x27df10: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x27DF10u;
    {
        const bool branch_taken_0x27df10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27df10) {
            ctx->pc = 0x27DF14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27DF10u;
            // 0x27df14: 0x46063002  mul.s       $f0, $f6, $f6 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DF2Cu;
            goto label_27df2c;
        }
    }
    ctx->pc = 0x27DF18u;
label_27df18:
    // 0x27df18: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x27df18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x27df1c: 0xc78287cc  lwc1        $f2, -0x7834($gp)
    ctx->pc = 0x27df1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27df20: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27DF20u;
    {
        const bool branch_taken_0x27df20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF20u;
        // 0x27df24: 0x46063002  mul.s       $f0, $f6, $f6 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27df20) {
            ctx->pc = 0x27DF2Cu;
            goto label_27df2c;
        }
    }
    ctx->pc = 0x27DF28u;
    // 0x27df28: 0xc78287d0  lwc1        $f2, -0x7830($gp)
    ctx->pc = 0x27df28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27df2c:
    // 0x27df2c: 0x46052842  mul.s       $f1, $f5, $f5
    ctx->pc = 0x27df2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x27df30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27df30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27df34: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x27df34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27df38: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x27DF38u;
    {
        const bool branch_taken_0x27df38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27df38) {
            ctx->pc = 0x27DF8Cu;
            goto label_27df8c;
        }
    }
    ctx->pc = 0x27DF40u;
    // 0x27df40: 0xe6270000  swc1        $f7, 0x0($s1)
    ctx->pc = 0x27df40u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x27df44: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x27df44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27df48: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x27df48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x27df4c: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x27df4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27df50: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x27df50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x27df54: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x27df54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27df58: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x27DF58u;
    {
        const bool branch_taken_0x27df58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27df58) {
            ctx->pc = 0x27DF8Cu;
            goto label_27df8c;
        }
    }
    ctx->pc = 0x27DF60u;
    // 0x27df60: 0xe6581198  swc1        $f24, 0x1198($s2)
    ctx->pc = 0x27df60u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4504), bits); }
    // 0x27df64: 0xe6380004  swc1        $f24, 0x4($s1)
    ctx->pc = 0x27df64u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x27df68: 0x12c00002  beqz        $s6, . + 4 + (0x2 << 2)
    ctx->pc = 0x27DF68u;
    {
        const bool branch_taken_0x27df68 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF68u;
        // 0x27df6c: 0xae43119c  sw          $v1, 0x119C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4508), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27df68) {
            ctx->pc = 0x27DF74u;
            goto label_27df74;
        }
    }
    ctx->pc = 0x27DF70u;
    // 0x27df70: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x27df70u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_27df74:
    // 0x27df74: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x27df74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27df78: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x27df78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27df7c: 0x0  nop
    ctx->pc = 0x27df7cu;
    // NOP
    // 0x27df80: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x27DF80u;
    {
        const bool branch_taken_0x27df80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27df80) {
            ctx->pc = 0x27DF84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27DF80u;
            // 0x27df84: 0x36100001  ori         $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DF8Cu;
            goto label_27df8c;
        }
    }
    ctx->pc = 0x27DF88u;
    // 0x27df88: 0xe6370004  swc1        $f23, 0x4($s1)
    ctx->pc = 0x27df88u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_27df8c:
    // 0x27df8c: 0x12e00008  beqz        $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x27DF8Cu;
    {
        const bool branch_taken_0x27df8c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF8Cu;
        // 0x27df90: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27df8c) {
            ctx->pc = 0x27DFB0u;
            goto label_27dfb0;
        }
    }
    ctx->pc = 0x27DF94u;
    // 0x27df94: 0x8e4211b8  lw          $v0, 0x11B8($s2)
    ctx->pc = 0x27df94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4536)));
    // 0x27df98: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27DF98u;
    {
        const bool branch_taken_0x27df98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF98u;
        // 0x27df9c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27df98) {
            ctx->pc = 0x27DFB0u;
            goto label_27dfb0;
        }
    }
    ctx->pc = 0x27DFA0u;
    // 0x27dfa0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x27dfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x27dfa4: 0xae5711b8  sw          $s7, 0x11B8($s2)
    ctx->pc = 0x27dfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4536), GPR_U32(ctx, 23));
    // 0x27dfa8: 0xae4211bc  sw          $v0, 0x11BC($s2)
    ctx->pc = 0x27dfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4540), GPR_U32(ctx, 2));
    // 0x27dfac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27dfacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27dfb0:
    // 0x27dfb0: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x27dfb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x27dfb4: 0xdfbe0110  ld          $fp, 0x110($sp)
    ctx->pc = 0x27dfb4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x27dfb8: 0xdfb70100  ld          $s7, 0x100($sp)
    ctx->pc = 0x27dfb8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x27dfbc: 0xdfb600f0  ld          $s6, 0xF0($sp)
    ctx->pc = 0x27dfbcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27dfc0: 0xdfb500e0  ld          $s5, 0xE0($sp)
    ctx->pc = 0x27dfc0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x27dfc4: 0xdfb400d0  ld          $s4, 0xD0($sp)
    ctx->pc = 0x27dfc4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x27dfc8: 0xdfb300c0  ld          $s3, 0xC0($sp)
    ctx->pc = 0x27dfc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x27dfcc: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x27dfccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x27dfd0: 0xdfb100a0  ld          $s1, 0xA0($sp)
    ctx->pc = 0x27dfd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27dfd4: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x27dfd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27dfd8: 0xc7b80150  lwc1        $f24, 0x150($sp)
    ctx->pc = 0x27dfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x27dfdc: 0xc7b70148  lwc1        $f23, 0x148($sp)
    ctx->pc = 0x27dfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x27dfe0: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x27dfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27dfe4: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x27dfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27dfe8: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x27dfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27dfec: 0x3e00008  jr          $ra
    ctx->pc = 0x27DFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DFECu;
        // 0x27dff0: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27DFF4u;
}
