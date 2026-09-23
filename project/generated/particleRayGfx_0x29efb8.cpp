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

// Function: particleRayGfx
// Address: 0x29efb8 - 0x29f5e4
void particleRayGfx_0x29efb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleRayGfx_0x29efb8");
#endif

    switch (ctx->pc) {
        case 0x29f020u: goto label_29f020;
        case 0x29f0a0u: goto label_29f0a0;
        case 0x29f1c0u: goto label_29f1c0;
        case 0x29f2e0u: goto label_29f2e0;
        default: break;
    }

    ctx->pc = 0x29efb8u;

    // 0x29efb8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x29efb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x29efbc: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x29efbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x29efc0: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x29efc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x29efc4: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x29efc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x29efc8: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x29efc8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29efcc: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x29efccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x29efd0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x29efd0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29efd4: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x29efd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x29efd8: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x29efd8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x29efdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29efdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29efe0: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x29efe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x29efe4: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x29efe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x29efe8: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x29efe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x29efec: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x29efecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x29eff0: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x29eff0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x29eff4: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x29eff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x29eff8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29eff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29effc: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x29effcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f000: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x29f000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29f004: 0x0  nop
    ctx->pc = 0x29f004u;
    // NOP
    // 0x29f008: 0x0  nop
    ctx->pc = 0x29f008u;
    // NOP
    // 0x29f00c: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x29f00cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[21] = ctx->f[1] / ctx->f[0];
    // 0x29f010: 0x18400168  blez        $v0, . + 4 + (0x168 << 2)
    ctx->pc = 0x29F010u;
    {
        const bool branch_taken_0x29f010 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29F014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F010u;
        // 0x29f014: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f010) {
            ctx->pc = 0x29F5B4u;
            goto label_29f5b4;
        }
    }
    ctx->pc = 0x29F018u;
    // 0x29f018: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x29f018u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29f01c: 0x0  nop
    ctx->pc = 0x29f01cu;
    // NOP
label_29f020:
    // 0x29f020: 0x4492a000  mtc1        $s2, $f20
    ctx->pc = 0x29f020u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x29f024: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x29f024u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x29f028: 0xc62403ac  lwc1        $f4, 0x3AC($s1)
    ctx->pc = 0x29f028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29f02c: 0xc62503b0  lwc1        $f5, 0x3B0($s1)
    ctx->pc = 0x29f02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x29f030: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29f030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f034: 0xc62203b4  lwc1        $f2, 0x3B4($s1)
    ctx->pc = 0x29f034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29f038: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29f038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f03c: 0x46142102  mul.s       $f4, $f4, $f20
    ctx->pc = 0x29f03cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x29f040: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x29f040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x29f044: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29f044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29f048: 0x46142942  mul.s       $f5, $f5, $f20
    ctx->pc = 0x29f048u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
    // 0x29f04c: 0xc62603a0  lwc1        $f6, 0x3A0($s1)
    ctx->pc = 0x29f04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x29f050: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x29f050u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x29f054: 0xc62303a4  lwc1        $f3, 0x3A4($s1)
    ctx->pc = 0x29f054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29f058: 0x0  nop
    ctx->pc = 0x29f058u;
    // NOP
    // 0x29f05c: 0x0  nop
    ctx->pc = 0x29f05cu;
    // NOP
    // 0x29f060: 0x46002103  div.s       $f4, $f4, $f0
    ctx->pc = 0x29f060u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[4] = ctx->f[4] / ctx->f[0];
    // 0x29f064: 0xc62103a8  lwc1        $f1, 0x3A8($s1)
    ctx->pc = 0x29f064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f068: 0x0  nop
    ctx->pc = 0x29f068u;
    // NOP
    // 0x29f06c: 0x0  nop
    ctx->pc = 0x29f06cu;
    // NOP
    // 0x29f070: 0x46002943  div.s       $f5, $f5, $f0
    ctx->pc = 0x29f070u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[5] = ctx->f[5] / ctx->f[0];
    // 0x29f074: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x29f074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f078: 0x0  nop
    ctx->pc = 0x29f078u;
    // NOP
    // 0x29f07c: 0x0  nop
    ctx->pc = 0x29f07cu;
    // NOP
    // 0x29f080: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x29f080u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
    // 0x29f084: 0x46043180  add.s       $f6, $f6, $f4
    ctx->pc = 0x29f084u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x29f088: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x29f088u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x29f08c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x29f08cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x29f090: 0xe7a60000  swc1        $f6, 0x0($sp)
    ctx->pc = 0x29f090u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29f094: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x29f094u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29f098: 0xc0ad55c  jal         func_2B5570
    ctx->pc = 0x29F098u;
    SET_GPR_U32(ctx, 31, 0x29F0A0u);
    ctx->pc = 0x29F09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F098u;
    // 0x29f09c: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5570u, 0x29F098u, 0x29F0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F0A0u;
label_29f0a0:
    // 0x29f0a0: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x29f0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f0a4: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x29f0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29f0a8: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x29f0a8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x29f0ac: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x29f0acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f0b0: 0x0  nop
    ctx->pc = 0x29f0b0u;
    // NOP
    // 0x29f0b4: 0x4502013b  bc1fl       . + 4 + (0x13B << 2)
    ctx->pc = 0x29F0B4u;
    {
        const bool branch_taken_0x29f0b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f0b4) {
            ctx->pc = 0x29F0B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F0B4u;
            // 0x29f0b8: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F5A4u;
            goto label_29f5a4;
        }
    }
    ctx->pc = 0x29F0BCu;
    // 0x29f0bc: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x29f0bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f0c0: 0x0  nop
    ctx->pc = 0x29f0c0u;
    // NOP
    // 0x29f0c4: 0x45000136  bc1f        . + 4 + (0x136 << 2)
    ctx->pc = 0x29F0C4u;
    {
        const bool branch_taken_0x29f0c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F0C4u;
        // 0x29f0c8: 0xc7aa0014  lwc1        $f10, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f0c4) {
            ctx->pc = 0x29F5A0u;
            goto label_29f5a0;
        }
    }
    ctx->pc = 0x29F0CCu;
    // 0x29f0cc: 0x460a0036  c.le.s      $f0, $f10
    ctx->pc = 0x29f0ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f0d0: 0x0  nop
    ctx->pc = 0x29f0d0u;
    // NOP
    // 0x29f0d4: 0x45020133  bc1fl       . + 4 + (0x133 << 2)
    ctx->pc = 0x29F0D4u;
    {
        const bool branch_taken_0x29f0d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f0d4) {
            ctx->pc = 0x29F0D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F0D4u;
            // 0x29f0d8: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F5A4u;
            goto label_29f5a4;
        }
    }
    ctx->pc = 0x29F0DCu;
    // 0x29f0dc: 0x46015036  c.le.s      $f10, $f1
    ctx->pc = 0x29f0dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[10], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f0e0: 0x0  nop
    ctx->pc = 0x29f0e0u;
    // NOP
    // 0x29f0e4: 0x4500012e  bc1f        . + 4 + (0x12E << 2)
    ctx->pc = 0x29F0E4u;
    {
        const bool branch_taken_0x29f0e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F0E4u;
        // 0x29f0e8: 0xc7a90018  lwc1        $f9, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f0e4) {
            ctx->pc = 0x29F5A0u;
            goto label_29f5a0;
        }
    }
    ctx->pc = 0x29F0ECu;
    // 0x29f0ec: 0x46090036  c.le.s      $f0, $f9
    ctx->pc = 0x29f0ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f0f0: 0x0  nop
    ctx->pc = 0x29f0f0u;
    // NOP
    // 0x29f0f4: 0x4502012b  bc1fl       . + 4 + (0x12B << 2)
    ctx->pc = 0x29F0F4u;
    {
        const bool branch_taken_0x29f0f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f0f4) {
            ctx->pc = 0x29F0F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F0F4u;
            // 0x29f0f8: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F5A4u;
            goto label_29f5a4;
        }
    }
    ctx->pc = 0x29F0FCu;
    // 0x29f0fc: 0x46014836  c.le.s      $f9, $f1
    ctx->pc = 0x29f0fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f100: 0x0  nop
    ctx->pc = 0x29f100u;
    // NOP
    // 0x29f104: 0x45000126  bc1f        . + 4 + (0x126 << 2)
    ctx->pc = 0x29F104u;
    {
        const bool branch_taken_0x29f104 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29F108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F104u;
        // 0x29f108: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f104) {
            ctx->pc = 0x29F5A0u;
            goto label_29f5a0;
        }
    }
    ctx->pc = 0x29F10Cu;
    // 0x29f10c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29f10cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29f110: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29f110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29f114: 0x246399f0  addiu       $v1, $v1, -0x6610
    ctx->pc = 0x29f114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941168));
    // 0x29f118: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x29f118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x29f11c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x29f11cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29f120: 0x0  nop
    ctx->pc = 0x29f120u;
    // NOP
    // 0x29f124: 0x0  nop
    ctx->pc = 0x29f124u;
    // NOP
    // 0x29f128: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x29f128u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x29f12c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x29f12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x29f130: 0x4603a0c0  add.s       $f3, $f20, $f3
    ctx->pc = 0x29f130u;
    ctx->f[3] = FPU_ADD_S(ctx->f[20], ctx->f[3]);
    // 0x29f134: 0xc7858d60  lwc1        $f5, -0x72A0($gp)
    ctx->pc = 0x29f134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x29f138: 0x21023  negu        $v0, $v0
    ctx->pc = 0x29f138u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x29f13c: 0xc4660010  lwc1        $f6, 0x10($v1)
    ctx->pc = 0x29f13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x29f140: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x29f140u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x29f144: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x29f144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x29f148: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x29f148u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x29f14c: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x29f14cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x29f150: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x29f150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x29f154: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x29f154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29f158: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x29f158u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x29f15c: 0x2413007f  addiu       $s3, $zero, 0x7F
    ctx->pc = 0x29f15cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x29f160: 0x461518c2  mul.s       $f3, $f3, $f21
    ctx->pc = 0x29f160u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
    // 0x29f164: 0x46004842  mul.s       $f1, $f9, $f0
    ctx->pc = 0x29f164u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x29f168: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x29f168u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x29f16c: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x29f16cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x29f170: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x29f170u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x29f174: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x29f174u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x29f178: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x29f178u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x29f17c: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x29f17cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x29f180: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x29f180u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x29f184: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x29f184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x29f188: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x29f188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f18c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29f18cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29f190: 0x0  nop
    ctx->pc = 0x29f190u;
    // NOP
    // 0x29f194: 0x0  nop
    ctx->pc = 0x29f194u;
    // NOP
    // 0x29f198: 0x460918c3  div.s       $f3, $f3, $f9
    ctx->pc = 0x29f198u;
    if (ctx->f[9] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[9];
    // 0x29f19c: 0x46062100  add.s       $f4, $f4, $f6
    ctx->pc = 0x29f19cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x29f1a0: 0x46082940  add.s       $f5, $f5, $f8
    ctx->pc = 0x29f1a0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[8]);
    // 0x29f1a4: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x29f1a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x29f1a8: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x29f1a8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29f1ac: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x29f1acu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29f1b0: 0x46001864  .word       0x46001864                   # cvt.w.s     $f1, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29f1b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29f1b4: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x29f1b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x29f1b8: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x29F1B8u;
    SET_GPR_U32(ctx, 31, 0x29F1C0u);
    ctx->pc = 0x29F1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F1B8u;
    // 0x29f1bc: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x29F1B8u, 0x29F1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F1C0u;
label_29f1c0:
    // 0x29f1c0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29F1C0u;
    {
        const bool branch_taken_0x29f1c0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x29F1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F1C0u;
        // 0x29f1c4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f1c0) {
            ctx->pc = 0x29F1D4u;
            goto label_29f1d4;
        }
    }
    ctx->pc = 0x29F1C8u;
    // 0x29f1c8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x29f1c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29f1cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29F1CCu;
    {
        const bool branch_taken_0x29f1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F1CCu;
        // 0x29f1d0: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f1cc) {
            ctx->pc = 0x29F1E8u;
            goto label_29f1e8;
        }
    }
    ctx->pc = 0x29F1D4u;
label_29f1d4:
    // 0x29f1d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29f1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29f1d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29f1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29f1dc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x29f1dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29f1e0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x29f1e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x29f1e4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x29f1e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_29f1e8:
    // 0x29f1e8: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x29f1e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x29f1ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29f1ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29f1f0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x29f1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x29f1f4: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x29f1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x29f1f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29f1f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29f1fc: 0x24a55c60  addiu       $a1, $a1, 0x5C60
    ctx->pc = 0x29f1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23648));
    // 0x29f200: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x29f200u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x29f204: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x29f204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x29f208: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x29f208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x29f20c: 0xc7828d64  lwc1        $f2, -0x729C($gp)
    ctx->pc = 0x29f20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29f210: 0x44901800  mtc1        $s0, $f3
    ctx->pc = 0x29f210u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29f214: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x29f214u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x29f218: 0xc7858d68  lwc1        $f5, -0x7298($gp)
    ctx->pc = 0x29f218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x29f21c: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x29f21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x29f220: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29f220u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29f224: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29f224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x29f228: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x29f228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x29f22c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x29f22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f230: 0xc7a80000  lwc1        $f8, 0x0($sp)
    ctx->pc = 0x29f230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x29f234: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x29f234u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x29f238: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x29f238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x29f23c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x29f23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x29f240: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x29f240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x29f244: 0x0  nop
    ctx->pc = 0x29f244u;
    // NOP
    // 0x29f248: 0x0  nop
    ctx->pc = 0x29f248u;
    // NOP
    // 0x29f24c: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x29f24cu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[4];
    // 0x29f250: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x29f250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x29f254: 0xc7a90004  lwc1        $f9, 0x4($sp)
    ctx->pc = 0x29f254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x29f258: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x29f258u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x29f25c: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x29f25cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x29f260: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29f260u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29f264: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x29f264u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x29f268: 0x24430200  addiu       $v1, $v0, 0x200
    ctx->pc = 0x29f268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x29f26c: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x29f26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x29f270: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x29f270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x29f274: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29f274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29f278: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29f278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29f27c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x29f27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x29f280: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x29f280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x29f284: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x29f284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f288: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x29f288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f28c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x29f28cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x29f290: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x29f290u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x29f294: 0x46070882  mul.s       $f2, $f1, $f7
    ctx->pc = 0x29f294u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x29f298: 0x460719c2  mul.s       $f7, $f3, $f7
    ctx->pc = 0x29f298u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x29f29c: 0x46034001  sub.s       $f0, $f8, $f3
    ctx->pc = 0x29f29cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[8], ctx->f[3]);
    // 0x29f2a0: 0x46024901  sub.s       $f4, $f9, $f2
    ctx->pc = 0x29f2a0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[9], ctx->f[2]);
    // 0x29f2a4: 0x46014141  sub.s       $f5, $f8, $f1
    ctx->pc = 0x29f2a4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[8], ctx->f[1]);
    // 0x29f2a8: 0x46074980  add.s       $f6, $f9, $f7
    ctx->pc = 0x29f2a8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[9], ctx->f[7]);
    // 0x29f2ac: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x29f2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x29f2b0: 0x460340c0  add.s       $f3, $f8, $f3
    ctx->pc = 0x29f2b0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[8], ctx->f[3]);
    // 0x29f2b4: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x29f2b4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x29f2b8: 0x46024880  add.s       $f2, $f9, $f2
    ctx->pc = 0x29f2b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[9], ctx->f[2]);
    // 0x29f2bc: 0xe7a50040  swc1        $f5, 0x40($sp)
    ctx->pc = 0x29f2bcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x29f2c0: 0x46014200  add.s       $f8, $f8, $f1
    ctx->pc = 0x29f2c0u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[1]);
    // 0x29f2c4: 0xe7a60044  swc1        $f6, 0x44($sp)
    ctx->pc = 0x29f2c4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x29f2c8: 0x46074a41  sub.s       $f9, $f9, $f7
    ctx->pc = 0x29f2c8u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[7]);
    // 0x29f2cc: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x29f2ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x29f2d0: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x29f2d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x29f2d4: 0xe7a80030  swc1        $f8, 0x30($sp)
    ctx->pc = 0x29f2d4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x29f2d8: 0xc0807de  jal         func_201F78
    ctx->pc = 0x29F2D8u;
    SET_GPR_U32(ctx, 31, 0x29F2E0u);
    ctx->pc = 0x29F2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F2D8u;
    // 0x29f2dc: 0xe7a90034  swc1        $f9, 0x34($sp) (Delay Slot)
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x29F2D8u, 0x29F2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F2E0u;
label_29f2e0:
    // 0x29f2e0: 0x8f8593a0  lw          $a1, -0x6C60($gp)
    ctx->pc = 0x29f2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x29f2e4: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x29f2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x29f2e8: 0x3c036c0a  lui         $v1, 0x6C0A
    ctx->pc = 0x29f2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27658 << 16));
    // 0x29f2ec: 0x34068001  ori         $a2, $zero, 0x8001
    ctx->pc = 0x29f2ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x29f2f0: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x29f2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x29f2f4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x29f2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x29f2f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29f2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29f2fc: 0x3c04eeee  lui         $a0, 0xEEEE
    ctx->pc = 0x29f2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61166 << 16));
    // 0x29f300: 0x8f8993a0  lw          $t1, -0x6C60($gp)
    ctx->pc = 0x29f300u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x29f304: 0x3c0390ae  lui         $v1, 0x90AE
    ctx->pc = 0x29f304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37038 << 16));
    // 0x29f308: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x29f308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x29f30c: 0x3484eeee  ori         $a0, $a0, 0xEEEE
    ctx->pc = 0x29f30cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)61166);
    // 0x29f310: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x29f310u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x29f314: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x29f314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x29f318: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f31c: 0x132e00  sll         $a1, $s3, 24
    ctx->pc = 0x29f31cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 24));
    // 0x29f320: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x29f320u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x29f324: 0x2a52825  or          $a1, $s5, $a1
    ctx->pc = 0x29f324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) | GPR_U64(ctx, 5));
    // 0x29f328: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f32c: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x29f32cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x29f330: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29f330u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29f334: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x29f334u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f338: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f33c: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x29f33cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29f340: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29f340u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x29f344: 0x240b0005  addiu       $t3, $zero, 0x5
    ctx->pc = 0x29f344u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29f348: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f34c: 0x3c0c0400  lui         $t4, 0x400
    ctx->pc = 0x29f34cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)1024 << 16));
    // 0x29f350: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x29f350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f354: 0x240d0400  addiu       $t5, $zero, 0x400
    ctx->pc = 0x29f354u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x29f358: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x29f358u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x29f35c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f360: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29f360u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x29f364: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x29f364u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29f368: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x29f368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f36c: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x29f36cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x29f370: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x29f370u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x29f374: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f378: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29f378u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29f37c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29f37cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29f380: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x29f380u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x29f384: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x29f384u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x29f388: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f38c: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x29f38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x29f390: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x29f390u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x29f394: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29f394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29f398: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f39c: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x29f39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x29f3a0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29f3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29f3a4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x29f3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x29f3a8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f3ac: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x29f3acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x29f3b0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29f3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29f3b4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29f3b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29f3b8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f3bc: 0x25280010  addiu       $t0, $t1, 0x10
    ctx->pc = 0x29f3bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x29f3c0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29f3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29f3c4: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x29f3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x29f3c8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f3cc: 0xaf8893a0  sw          $t0, -0x6C60($gp)
    ctx->pc = 0x29f3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 8));
    // 0x29f3d0: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x29f3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29f3d4: 0x34c60400  ori         $a2, $a2, 0x400
    ctx->pc = 0x29f3d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1024);
    // 0x29f3d8: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x29f3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x29f3dc: 0x3c081100  lui         $t0, 0x1100
    ctx->pc = 0x29f3dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4352 << 16));
    // 0x29f3e0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f3e4: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x29f3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f3e8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29f3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29f3ec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f3f0: 0x460008e4  .word       0x460008E4                   # cvt.w.s     $f3, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29f3f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x29f3f4: 0x44051800  mfc1        $a1, $f3
    ctx->pc = 0x29f3f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x29f3f8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x29f3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f3fc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29f3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x29f400: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29f400u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29f404: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29f404u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29f408: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f40c: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29f40cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29f410: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x29f410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29f414: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x29f414u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x29f418: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x29f418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f41c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f420: 0xac4b0000  sw          $t3, 0x0($v0)
    ctx->pc = 0x29f420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 11));
    // 0x29f424: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29f424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29f428: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f42c: 0x24a56c00  addiu       $a1, $a1, 0x6C00
    ctx->pc = 0x29f42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27648));
    // 0x29f430: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29f430u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29f434: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x29f434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x29f438: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f43c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x29f43cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x29f440: 0xac4c0000  sw          $t4, 0x0($v0)
    ctx->pc = 0x29f440u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 12));
    // 0x29f444: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x29f444u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x29f448: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f44c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x29f44cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x29f450: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29f450u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29f454: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f458: 0xa5270000  sh          $a3, 0x0($t1)
    ctx->pc = 0x29f458u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x29f45c: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x29f45cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x29f460: 0x3c071400  lui         $a3, 0x1400
    ctx->pc = 0x29f460u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)5120 << 16));
    // 0x29f464: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f468: 0x34e707fc  ori         $a3, $a3, 0x7FC
    ctx->pc = 0x29f468u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2044);
    // 0x29f46c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29f46cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29f470: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f474: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x29f474u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x29f478: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f47c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29f47cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29f480: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x29f480u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29f484: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x29f484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f488: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f48c: 0xac4b0000  sw          $t3, 0x0($v0)
    ctx->pc = 0x29f48cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 11));
    // 0x29f490: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f494: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29f494u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x29f498: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x29f498u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29f49c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x29f49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f4a0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29f4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29f4a4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f4a8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29f4a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29f4ac: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29f4acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29f4b0: 0xac4d0000  sw          $t5, 0x0($v0)
    ctx->pc = 0x29f4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 13));
    // 0x29f4b4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x29f4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x29f4b8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f4bc: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x29f4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x29f4c0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29f4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29f4c4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29f4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29f4c8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f4cc: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x29f4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x29f4d0: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x29f4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x29f4d4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x29f4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x29f4d8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f4dc: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x29f4dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x29f4e0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29f4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29f4e4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29f4e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29f4e8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f4ec: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29f4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x29f4f0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f4f4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x29f4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f4f8: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x29f4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f4fc: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29f4fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x29f500: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x29f500u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29f504: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x29f504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29f508: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f50c: 0xac4b0000  sw          $t3, 0x0($v0)
    ctx->pc = 0x29f50cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 11));
    // 0x29f510: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29f510u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29f514: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x29f514u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29f518: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29f518u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29f51c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x29f51cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29f520: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f524: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x29f524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f528: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29f528u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29f52c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x29f52cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x29f530: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f534: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29f534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29f538: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x29f538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x29f53c: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x29f53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x29f540: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f544: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x29f544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x29f548: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29f548u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29f54c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x29f54cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x29f550: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f554: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x29f554u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x29f558: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x29f558u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x29f55c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29f55cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29f560: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f564: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29f564u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29f568: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f56c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29f56cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x29f570: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f574: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29f574u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29f578: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x29f578u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29f57c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f580: 0xac4b0000  sw          $t3, 0x0($v0)
    ctx->pc = 0x29f580u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 11));
    // 0x29f584: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f588: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29f588u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29f58c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f590: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x29f590u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x29f594: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29f594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29f598: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x29f598u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x29f59c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x29f59cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_29f5a0:
    // 0x29f5a0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x29f5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_29f5a4:
    // 0x29f5a4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x29f5a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x29f5a8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x29f5a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29f5ac: 0x1440fe9c  bnez        $v0, . + 4 + (-0x164 << 2)
    ctx->pc = 0x29F5ACu;
    {
        const bool branch_taken_0x29f5ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f5ac) {
            ctx->pc = 0x29F020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f020;
        }
    }
    ctx->pc = 0x29F5B4u;
label_29f5b4:
    // 0x29f5b4: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x29f5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x29f5b8: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x29f5b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29f5bc: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x29f5bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29f5c0: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x29f5c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29f5c4: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x29f5c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29f5c8: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x29f5c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29f5cc: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x29f5ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29f5d0: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x29f5d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29f5d4: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x29f5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29f5d8: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x29f5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29f5dc: 0x3e00008  jr          $ra
    ctx->pc = 0x29F5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F5DCu;
        // 0x29f5e0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F5DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F5E4u;
}
