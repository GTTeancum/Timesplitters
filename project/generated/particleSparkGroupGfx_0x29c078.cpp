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

// Function: particleSparkGroupGfx
// Address: 0x29c078 - 0x29c810
void particleSparkGroupGfx_0x29c078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleSparkGroupGfx_0x29c078");
#endif

    switch (ctx->pc) {
        case 0x29c148u: goto label_29c148;
        case 0x29c1dcu: goto label_29c1dc;
        case 0x29c1ecu: goto label_29c1ec;
        case 0x29c2d0u: goto label_29c2d0;
        case 0x29c448u: goto label_29c448;
        default: break;
    }

    ctx->pc = 0x29c078u;

    // 0x29c078: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x29c078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x29c07c: 0xc7838d20  lwc1        $f3, -0x72E0($gp)
    ctx->pc = 0x29c07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29c080: 0xffb400d0  sd          $s4, 0xD0($sp)
    ctx->pc = 0x29c080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
    // 0x29c084: 0xffb300c0  sd          $s3, 0xC0($sp)
    ctx->pc = 0x29c084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 19));
    // 0x29c088: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x29c088u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c08c: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x29c08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x29c090: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x29c090u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c094: 0xffb100a0  sd          $s1, 0xA0($sp)
    ctx->pc = 0x29c094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 17));
    // 0x29c098: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29c098u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c09c: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x29c09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x29c0a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29c0a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c0a4: 0xe7b70148  swc1        $f23, 0x148($sp)
    ctx->pc = 0x29c0a4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x29c0a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29c0a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c0ac: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x29c0acu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x29c0b0: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x29c0b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x29c0b4: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x29c0b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x29c0b8: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x29c0b8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x29c0bc: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x29c0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x29c0c0: 0xffbe0110  sd          $fp, 0x110($sp)
    ctx->pc = 0x29c0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 30));
    // 0x29c0c4: 0xffb70100  sd          $s7, 0x100($sp)
    ctx->pc = 0x29c0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 23));
    // 0x29c0c8: 0xffb600f0  sd          $s6, 0xF0($sp)
    ctx->pc = 0x29c0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 22));
    // 0x29c0cc: 0xffb500e0  sd          $s5, 0xE0($sp)
    ctx->pc = 0x29c0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 21));
    // 0x29c0d0: 0x3c01c020  lui         $at, 0xC020
    ctx->pc = 0x29c0d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49184 << 16));
    // 0x29c0d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29c0d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29c0d8: 0xc629000c  lwc1        $f9, 0xC($s1)
    ctx->pc = 0x29c0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x29c0dc: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x29c0dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x29c0e0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x29c0e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x29c0e4: 0x46091801  sub.s       $f0, $f3, $f9
    ctx->pc = 0x29c0e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[9]);
    // 0x29c0e8: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x29c0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x29c0ec: 0x460c4d00  add.s       $f20, $f9, $f12
    ctx->pc = 0x29c0ecu;
    ctx->f[20] = FPU_ADD_S(ctx->f[9], ctx->f[12]);
    // 0x29c0f0: 0x46014882  mul.s       $f2, $f9, $f1
    ctx->pc = 0x29c0f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x29c0f4: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x29c0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29c0f8: 0x0  nop
    ctx->pc = 0x29c0f8u;
    // NOP
    // 0x29c0fc: 0x0  nop
    ctx->pc = 0x29c0fcu;
    // NOP
    // 0x29c100: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x29c100u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x29c104: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x29c104u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x29c108: 0x460915c2  mul.s       $f23, $f2, $f9
    ctx->pc = 0x29c108u;
    ctx->f[23] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
    // 0x29c10c: 0x46140d82  mul.s       $f22, $f1, $f20
    ctx->pc = 0x29c10cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x29c110: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x29c110u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x29c114: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29c114u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29c118: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x29c118u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x29c11c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29c11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29c120: 0x18600184  blez        $v1, . + 4 + (0x184 << 2)
    ctx->pc = 0x29C120u;
    {
        const bool branch_taken_0x29c120 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x29C124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C120u;
        // 0x29c124: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c120) {
            ctx->pc = 0x29C734u;
            goto label_29c734;
        }
    }
    ctx->pc = 0x29C128u;
    // 0x29c128: 0x262203ac  addiu       $v0, $s1, 0x3AC
    ctx->pc = 0x29c128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 940));
    // 0x29c12c: 0x262303b0  addiu       $v1, $s1, 0x3B0
    ctx->pc = 0x29c12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 944));
    // 0x29c130: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x29c130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x29c134: 0x263e03b4  addiu       $fp, $s1, 0x3B4
    ctx->pc = 0x29c134u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 948));
    // 0x29c138: 0xafa3008c  sw          $v1, 0x8C($sp)
    ctx->pc = 0x29c138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
    // 0x29c13c: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x29c13cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29c140: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x29c140u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29c144: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x29c144u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_29c148:
    // 0x29c148: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x29c148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29c14c: 0x8fa7008c  lw          $a3, 0x8C($sp)
    ctx->pc = 0x29c14cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x29c150: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x29c150u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29c154: 0xc62503a4  lwc1        $f5, 0x3A4($s1)
    ctx->pc = 0x29c154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x29c158: 0xc62603a0  lwc1        $f6, 0x3A0($s1)
    ctx->pc = 0x29c158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x29c15c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29c15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c160: 0xc62703a8  lwc1        $f7, 0x3A8($s1)
    ctx->pc = 0x29c160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x29c164: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29c164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c168: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x29c168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c16c: 0xe21821  addu        $v1, $a3, $v0
    ctx->pc = 0x29c16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29c170: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x29c170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c174: 0x3c23821  addu        $a3, $fp, $v0
    ctx->pc = 0x29c174u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x29c178: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x29c178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x29c17c: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x29c17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29c180: 0x46140102  mul.s       $f4, $f0, $f20
    ctx->pc = 0x29c180u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x29c184: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29c184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29c188: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x29c188u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x29c18c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x29c18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29c190: 0x46091202  mul.s       $f8, $f2, $f9
    ctx->pc = 0x29c190u;
    ctx->f[8] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
    // 0x29c194: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x29c194u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x29c198: 0x46141842  mul.s       $f1, $f3, $f20
    ctx->pc = 0x29c198u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x29c19c: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x29c19cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x29c1a0: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x29c1a0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x29c1a4: 0x460918c2  mul.s       $f3, $f3, $f9
    ctx->pc = 0x29c1a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x29c1a8: 0x46013040  add.s       $f1, $f6, $f1
    ctx->pc = 0x29c1a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x29c1ac: 0x46023880  add.s       $f2, $f7, $f2
    ctx->pc = 0x29c1acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x29c1b0: 0x46033180  add.s       $f6, $f6, $f3
    ctx->pc = 0x29c1b0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x29c1b4: 0x46172940  add.s       $f5, $f5, $f23
    ctx->pc = 0x29c1b4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[23]);
    // 0x29c1b8: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x29c1b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x29c1bc: 0x460839c0  add.s       $f7, $f7, $f8
    ctx->pc = 0x29c1bcu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[8]);
    // 0x29c1c0: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x29c1c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x29c1c4: 0x46162100  add.s       $f4, $f4, $f22
    ctx->pc = 0x29c1c4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[22]);
    // 0x29c1c8: 0xe7a60000  swc1        $f6, 0x0($sp)
    ctx->pc = 0x29c1c8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29c1cc: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x29c1ccu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29c1d0: 0xe7a70008  swc1        $f7, 0x8($sp)
    ctx->pc = 0x29c1d0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29c1d4: 0xc0ad55c  jal         func_2B5570
    ctx->pc = 0x29C1D4u;
    SET_GPR_U32(ctx, 31, 0x29C1DCu);
    ctx->pc = 0x29C1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C1D4u;
    // 0x29c1d8: 0xe7a40014  swc1        $f4, 0x14($sp) (Delay Slot)
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5570u, 0x29C1D4u, 0x29C1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C1DCu;
label_29c1dc:
    // 0x29c1dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29c1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c1e0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x29c1e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c1e4: 0xc0ad55c  jal         func_2B5570
    ctx->pc = 0x29C1E4u;
    SET_GPR_U32(ctx, 31, 0x29C1ECu);
    ctx->pc = 0x29C1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C1E4u;
    // 0x29c1e8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5570u, 0x29C1E4u, 0x29C1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C1ECu;
label_29c1ec:
    // 0x29c1ec: 0xc7a6002c  lwc1        $f6, 0x2C($sp)
    ctx->pc = 0x29c1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x29c1f0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x29c1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c1f4: 0x46003047  neg.s       $f1, $f6
    ctx->pc = 0x29c1f4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[6]);
    // 0x29c1f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29c1f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c1fc: 0x0  nop
    ctx->pc = 0x29c1fcu;
    // NOP
    // 0x29c200: 0x45020148  bc1fl       . + 4 + (0x148 << 2)
    ctx->pc = 0x29C200u;
    {
        const bool branch_taken_0x29c200 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c200) {
            ctx->pc = 0x29C204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C200u;
            // 0x29c204: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C724u;
            goto label_29c724;
        }
    }
    ctx->pc = 0x29C208u;
    // 0x29c208: 0x46060036  c.le.s      $f0, $f6
    ctx->pc = 0x29c208u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c20c: 0x0  nop
    ctx->pc = 0x29c20cu;
    // NOP
    // 0x29c210: 0x45000143  bc1f        . + 4 + (0x143 << 2)
    ctx->pc = 0x29C210u;
    {
        const bool branch_taken_0x29c210 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29C214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C210u;
        // 0x29c214: 0xc7a90024  lwc1        $f9, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c210) {
            ctx->pc = 0x29C720u;
            goto label_29c720;
        }
    }
    ctx->pc = 0x29C218u;
    // 0x29c218: 0x46090836  c.le.s      $f1, $f9
    ctx->pc = 0x29c218u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c21c: 0x0  nop
    ctx->pc = 0x29c21cu;
    // NOP
    // 0x29c220: 0x45020140  bc1fl       . + 4 + (0x140 << 2)
    ctx->pc = 0x29C220u;
    {
        const bool branch_taken_0x29c220 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c220) {
            ctx->pc = 0x29C224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C220u;
            // 0x29c224: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C724u;
            goto label_29c724;
        }
    }
    ctx->pc = 0x29C228u;
    // 0x29c228: 0x46064836  c.le.s      $f9, $f6
    ctx->pc = 0x29c228u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c22c: 0x0  nop
    ctx->pc = 0x29c22cu;
    // NOP
    // 0x29c230: 0x4500013b  bc1f        . + 4 + (0x13B << 2)
    ctx->pc = 0x29C230u;
    {
        const bool branch_taken_0x29c230 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29C234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C230u;
        // 0x29c234: 0xc7af0028  lwc1        $f15, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c230) {
            ctx->pc = 0x29C720u;
            goto label_29c720;
        }
    }
    ctx->pc = 0x29C238u;
    // 0x29c238: 0x460f0836  c.le.s      $f1, $f15
    ctx->pc = 0x29c238u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c23c: 0x0  nop
    ctx->pc = 0x29c23cu;
    // NOP
    // 0x29c240: 0x45020138  bc1fl       . + 4 + (0x138 << 2)
    ctx->pc = 0x29C240u;
    {
        const bool branch_taken_0x29c240 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c240) {
            ctx->pc = 0x29C244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C240u;
            // 0x29c244: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C724u;
            goto label_29c724;
        }
    }
    ctx->pc = 0x29C248u;
    // 0x29c248: 0x46067836  c.le.s      $f15, $f6
    ctx->pc = 0x29c248u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[15], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c24c: 0x0  nop
    ctx->pc = 0x29c24cu;
    // NOP
    // 0x29c250: 0x45000133  bc1f        . + 4 + (0x133 << 2)
    ctx->pc = 0x29C250u;
    {
        const bool branch_taken_0x29c250 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29C254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C250u;
        // 0x29c254: 0xc7a5003c  lwc1        $f5, 0x3C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c250) {
            ctx->pc = 0x29C720u;
            goto label_29c720;
        }
    }
    ctx->pc = 0x29C258u;
    // 0x29c258: 0xc7a40030  lwc1        $f4, 0x30($sp)
    ctx->pc = 0x29c258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29c25c: 0x46002887  neg.s       $f2, $f5
    ctx->pc = 0x29c25cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[5]);
    // 0x29c260: 0x46041036  c.le.s      $f2, $f4
    ctx->pc = 0x29c260u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c264: 0x0  nop
    ctx->pc = 0x29c264u;
    // NOP
    // 0x29c268: 0x4502012e  bc1fl       . + 4 + (0x12E << 2)
    ctx->pc = 0x29C268u;
    {
        const bool branch_taken_0x29c268 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c268) {
            ctx->pc = 0x29C26Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C268u;
            // 0x29c26c: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C724u;
            goto label_29c724;
        }
    }
    ctx->pc = 0x29C270u;
    // 0x29c270: 0x46052036  c.le.s      $f4, $f5
    ctx->pc = 0x29c270u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c274: 0x0  nop
    ctx->pc = 0x29c274u;
    // NOP
    // 0x29c278: 0x45000129  bc1f        . + 4 + (0x129 << 2)
    ctx->pc = 0x29C278u;
    {
        const bool branch_taken_0x29c278 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29C27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C278u;
        // 0x29c27c: 0xc7a10034  lwc1        $f1, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c278) {
            ctx->pc = 0x29C720u;
            goto label_29c720;
        }
    }
    ctx->pc = 0x29C280u;
    // 0x29c280: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x29c280u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c284: 0x0  nop
    ctx->pc = 0x29c284u;
    // NOP
    // 0x29c288: 0x45020126  bc1fl       . + 4 + (0x126 << 2)
    ctx->pc = 0x29C288u;
    {
        const bool branch_taken_0x29c288 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c288) {
            ctx->pc = 0x29C28Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C288u;
            // 0x29c28c: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C724u;
            goto label_29c724;
        }
    }
    ctx->pc = 0x29C290u;
    // 0x29c290: 0x46050836  c.le.s      $f1, $f5
    ctx->pc = 0x29c290u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c294: 0x0  nop
    ctx->pc = 0x29c294u;
    // NOP
    // 0x29c298: 0x45000121  bc1f        . + 4 + (0x121 << 2)
    ctx->pc = 0x29C298u;
    {
        const bool branch_taken_0x29c298 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29C29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C298u;
        // 0x29c29c: 0xc7ae0038  lwc1        $f14, 0x38($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c298) {
            ctx->pc = 0x29C720u;
            goto label_29c720;
        }
    }
    ctx->pc = 0x29C2A0u;
    // 0x29c2a0: 0x460e1036  c.le.s      $f2, $f14
    ctx->pc = 0x29c2a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c2a4: 0x0  nop
    ctx->pc = 0x29c2a4u;
    // NOP
    // 0x29c2a8: 0x4502011e  bc1fl       . + 4 + (0x11E << 2)
    ctx->pc = 0x29C2A8u;
    {
        const bool branch_taken_0x29c2a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c2a8) {
            ctx->pc = 0x29C2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C2A8u;
            // 0x29c2ac: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C724u;
            goto label_29c724;
        }
    }
    ctx->pc = 0x29C2B0u;
    // 0x29c2b0: 0x46057036  c.le.s      $f14, $f5
    ctx->pc = 0x29c2b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[14], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c2b4: 0x0  nop
    ctx->pc = 0x29c2b4u;
    // NOP
    // 0x29c2b8: 0x4502011a  bc1fl       . + 4 + (0x11A << 2)
    ctx->pc = 0x29C2B8u;
    {
        const bool branch_taken_0x29c2b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c2b8) {
            ctx->pc = 0x29C2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C2B8u;
            // 0x29c2bc: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C724u;
            goto label_29c724;
        }
    }
    ctx->pc = 0x29C2C0u;
    // 0x29c2c0: 0x16400015  bnez        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x29C2C0u;
    {
        const bool branch_taken_0x29c2c0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c2c0) {
            ctx->pc = 0x29C318u;
            goto label_29c318;
        }
    }
    ctx->pc = 0x29C2C8u;
    // 0x29c2c8: 0xc0807de  jal         func_201F78
    ctx->pc = 0x29C2C8u;
    SET_GPR_U32(ctx, 31, 0x29C2D0u);
    ctx->pc = 0x29C2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C2C8u;
    // 0x29c2cc: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x29C2C8u, 0x29C2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C2D0u;
label_29c2d0:
    // 0x29c2d0: 0x8f8493a0  lw          $a0, -0x6C60($gp)
    ctx->pc = 0x29c2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x29c2d4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x29c2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x29c2d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29c2d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c2dc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29c2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29c2e0: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x29c2e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x29c2e4: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x29c2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x29c2e8: 0xc7a6002c  lwc1        $f6, 0x2C($sp)
    ctx->pc = 0x29c2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x29c2ec: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x29c2ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x29c2f0: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x29c2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x29c2f4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x29c2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x29c2f8: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x29c2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x29c2fc: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x29c2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c300: 0xc7a90024  lwc1        $f9, 0x24($sp)
    ctx->pc = 0x29c300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x29c304: 0xc7af0028  lwc1        $f15, 0x28($sp)
    ctx->pc = 0x29c304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x29c308: 0xc7a5003c  lwc1        $f5, 0x3C($sp)
    ctx->pc = 0x29c308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x29c30c: 0xc7a40030  lwc1        $f4, 0x30($sp)
    ctx->pc = 0x29c30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29c310: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x29c310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c314: 0xc7ae0038  lwc1        $f14, 0x38($sp)
    ctx->pc = 0x29c314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_29c318:
    // 0x29c318: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29c318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29c31c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x29c31cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29c320: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x29c320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x29c324: 0x246399f0  addiu       $v1, $v1, -0x6610
    ctx->pc = 0x29c324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941168));
    // 0x29c328: 0xc78d8d24  lwc1        $f13, -0x72DC($gp)
    ctx->pc = 0x29c328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x29c32c: 0x0  nop
    ctx->pc = 0x29c32cu;
    // NOP
    // 0x29c330: 0x0  nop
    ctx->pc = 0x29c330u;
    // NOP
    // 0x29c334: 0x46051a83  div.s       $f10, $f3, $f5
    ctx->pc = 0x29c334u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[10] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[10] = ctx->f[3] / ctx->f[5];
    // 0x29c338: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x29c338u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x329A14u));
    // 0x29c33c: 0x0  nop
    ctx->pc = 0x29c33cu;
    // NOP
    // 0x29c340: 0x0  nop
    ctx->pc = 0x29c340u;
    // NOP
    // 0x29c344: 0x460618c3  div.s       $f3, $f3, $f6
    ctx->pc = 0x29c344u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[6];
    // 0x29c348: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x29c348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x29c34c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x29c34cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29c350: 0x21023  negu        $v0, $v0
    ctx->pc = 0x29c350u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x29c354: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x29c354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29c358: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x29c358u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x29c35c: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x29c35cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x29c360: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x29c360u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x29c364: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29c364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x29c368: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x29c368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x29c36c: 0xc4680008  lwc1        $f8, 0x8($v1)
    ctx->pc = 0x29c36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x29c370: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x29c370u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x29c374: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x29c374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x29c378: 0xc467001c  lwc1        $f7, 0x1C($v1)
    ctx->pc = 0x29c378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x29c37c: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x29c37cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x29c380: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x29c380u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x29c384: 0x460a2102  mul.s       $f4, $f4, $f10
    ctx->pc = 0x29c384u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[10]);
    // 0x29c388: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x29c388u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x29c38c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x29c38cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x29c390: 0x46034a42  mul.s       $f9, $f9, $f3
    ctx->pc = 0x29c390u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
    // 0x29c394: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x29c394u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x29c398: 0x46013142  mul.s       $f5, $f6, $f1
    ctx->pc = 0x29c398u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x29c39c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x29c39cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x29c3a0: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x29c3a0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x29c3a4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x29c3a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x29c3a8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x29c3a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x29c3ac: 0xe7a90024  swc1        $f9, 0x24($sp)
    ctx->pc = 0x29c3acu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x29c3b0: 0x46093182  mul.s       $f6, $f6, $f9
    ctx->pc = 0x29c3b0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[9]);
    // 0x29c3b4: 0x46044100  add.s       $f4, $f8, $f4
    ctx->pc = 0x29c3b4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[8], ctx->f[4]);
    // 0x29c3b8: 0x46053940  add.s       $f5, $f7, $f5
    ctx->pc = 0x29c3b8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[7], ctx->f[5]);
    // 0x29c3bc: 0x46024200  add.s       $f8, $f8, $f2
    ctx->pc = 0x29c3bcu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[2]);
    // 0x29c3c0: 0x460639c0  add.s       $f7, $f7, $f6
    ctx->pc = 0x29c3c0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x29c3c4: 0x460a7282  mul.s       $f10, $f14, $f10
    ctx->pc = 0x29c3c4u;
    ctx->f[10] = FPU_MUL_S(ctx->f[14], ctx->f[10]);
    // 0x29c3c8: 0x46082041  sub.s       $f1, $f4, $f8
    ctx->pc = 0x29c3c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[8]);
    // 0x29c3cc: 0x46072801  sub.s       $f0, $f5, $f7
    ctx->pc = 0x29c3ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
    // 0x29c3d0: 0x460d5082  mul.s       $f2, $f10, $f13
    ctx->pc = 0x29c3d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[13]);
    // 0x29c3d4: 0xe7aa0038  swc1        $f10, 0x38($sp)
    ctx->pc = 0x29c3d4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x29c3d8: 0x460378c2  mul.s       $f3, $f15, $f3
    ctx->pc = 0x29c3d8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[15], ctx->f[3]);
    // 0x29c3dc: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x29c3dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x29c3e0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x29c3e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x29c3e4: 0x460c1080  add.s       $f2, $f2, $f12
    ctx->pc = 0x29c3e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
    // 0x29c3e8: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x29c3e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x29c3ec: 0x460b0842  mul.s       $f1, $f1, $f11
    ctx->pc = 0x29c3ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
    // 0x29c3f0: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x29c3f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x29c3f4: 0x460d18c2  mul.s       $f3, $f3, $f13
    ctx->pc = 0x29c3f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[13]);
    // 0x29c3f8: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x29c3f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x29c3fc: 0x46012a40  add.s       $f9, $f5, $f1
    ctx->pc = 0x29c3fcu;
    ctx->f[9] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x29c400: 0x46002181  sub.s       $f6, $f4, $f0
    ctx->pc = 0x29c400u;
    ctx->f[6] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x29c404: 0x46004281  sub.s       $f10, $f8, $f0
    ctx->pc = 0x29c404u;
    ctx->f[10] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x29c408: 0x46013880  add.s       $f2, $f7, $f1
    ctx->pc = 0x29c408u;
    ctx->f[2] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x29c40c: 0xe7a90054  swc1        $f9, 0x54($sp)
    ctx->pc = 0x29c40cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x29c410: 0x460c18c0  add.s       $f3, $f3, $f12
    ctx->pc = 0x29c410u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[12]);
    // 0x29c414: 0xe7a60050  swc1        $f6, 0x50($sp)
    ctx->pc = 0x29c414u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x29c418: 0x46004200  add.s       $f8, $f8, $f0
    ctx->pc = 0x29c418u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x29c41c: 0xe7aa0040  swc1        $f10, 0x40($sp)
    ctx->pc = 0x29c41cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x29c420: 0x460139c1  sub.s       $f7, $f7, $f1
    ctx->pc = 0x29c420u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x29c424: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x29c424u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x29c428: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x29c428u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x29c42c: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x29c42cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x29c430: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x29c430u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x29c434: 0xe7a80060  swc1        $f8, 0x60($sp)
    ctx->pc = 0x29c434u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x29c438: 0xe7a70064  swc1        $f7, 0x64($sp)
    ctx->pc = 0x29c438u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x29c43c: 0xe7a40070  swc1        $f4, 0x70($sp)
    ctx->pc = 0x29c43cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x29c440: 0xc0807de  jal         func_201F78
    ctx->pc = 0x29C440u;
    SET_GPR_U32(ctx, 31, 0x29C448u);
    ctx->pc = 0x29C444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C440u;
    // 0x29c444: 0xe7a50074  swc1        $f5, 0x74($sp) (Delay Slot)
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x29C440u, 0x29C448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C448u;
label_29c448:
    // 0x29c448: 0x8fa50084  lw          $a1, 0x84($sp)
    ctx->pc = 0x29c448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x29c44c: 0x240f0030  addiu       $t7, $zero, 0x30
    ctx->pc = 0x29c44cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x29c450: 0x8fa70080  lw          $a3, 0x80($sp)
    ctx->pc = 0x29c450u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29c454: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x29c454u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c458: 0x8f8493a0  lw          $a0, -0x6C60($gp)
    ctx->pc = 0x29c458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x29c45c: 0x51e00  sll         $v1, $a1, 24
    ctx->pc = 0x29c45cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x29c460: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x29c460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x29c464: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x29c464u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x29c468: 0xa08f0003  sb          $t7, 0x3($a0)
    ctx->pc = 0x29c468u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 15));
    // 0x29c46c: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x29c46cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29c470: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29c470u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29c474: 0x240a000d  addiu       $t2, $zero, 0xD
    ctx->pc = 0x29c474u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29c478: 0x8f8693a0  lw          $a2, -0x6C60($gp)
    ctx->pc = 0x29c478u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x29c47c: 0x3c0b0400  lui         $t3, 0x400
    ctx->pc = 0x29c47cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)1024 << 16));
    // 0x29c480: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x29c480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c484: 0x240d0800  addiu       $t5, $zero, 0x800
    ctx->pc = 0x29c484u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29c488: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x29c488u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x29c48c: 0x24ce0010  addiu       $t6, $a2, 0x10
    ctx->pc = 0x29c48cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x29c490: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29c490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29c494: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29c494u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x29c498: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x29c498u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29c49c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x29c49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c4a0: 0x240c0005  addiu       $t4, $zero, 0x5
    ctx->pc = 0x29c4a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29c4a4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x29c4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x29c4a8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29c4ac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29c4acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29c4b0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29c4b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29c4b4: 0xac580000  sw          $t8, 0x0($v0)
    ctx->pc = 0x29c4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 24));
    // 0x29c4b8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x29c4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x29c4bc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29c4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29c4c0: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x29c4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x29c4c4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29c4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29c4c8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29c4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29c4cc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29c4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29c4d0: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x29c4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x29c4d4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29c4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29c4d8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x29c4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x29c4dc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29c4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29c4e0: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x29c4e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x29c4e4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x29c4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c4e8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29c4e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29c4ec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29c4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29c4f0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x29c4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29c4f4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29c4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29c4f8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29c4f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29c4fc: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x29c4fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x29c500: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x29c500u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x29c504: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29c504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29c508: 0xaf8e93a0  sw          $t6, -0x6C60($gp)
    ctx->pc = 0x29c508u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 14));
    // 0x29c50c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29c50cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29c510: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29c510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29c514: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x29c514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c518: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29c518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x29c51c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29c51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29c520: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29c520u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x29c524: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x29c524u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29c528: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x29c528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c52c: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x29c52cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x29c530: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29c530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29c534: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29c534u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29c538: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29c538u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29c53c: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x29c53cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x29c540: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x29c540u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x29c544: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29c544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29c548: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x29c548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x29c54c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29c54cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29c550: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29c550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29c554: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29c554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29c558: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x29c558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x29c55c: 0xac4b0000  sw          $t3, 0x0($v0)
    ctx->pc = 0x29c55cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 11));
    // 0x29c560: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x29c560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x29c564: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29c564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29c568: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x29c568u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x29c56c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29c56cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29c570: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29c570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29c574: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29c574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29c578: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x29c578u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x29c57c: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x29c57cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x29c580: 0x3c070400  lui         $a3, 0x400
    ctx->pc = 0x29c580u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1024 << 16));
    // 0x29c584: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29c584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29c588: 0x34e70800  ori         $a3, $a3, 0x800
    ctx->pc = 0x29c588u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2048);
    // 0x29c58c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29c58cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29c590: 0x240b0017  addiu       $t3, $zero, 0x17
    ctx->pc = 0x29c590u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x29c594: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29c594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29c598: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29c598u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x29c59c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29c59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29c5a0: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x29c5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x29c5a4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29c5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29c5a8: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x29c5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x29c5ac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29c5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29c5b0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29c5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29c5b4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29c5b8: 0xac4d0000  sw          $t5, 0x0($v0)
    ctx->pc = 0x29c5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 13));
    // 0x29c5bc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29c5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29c5c0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29c5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29c5c4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29c5c8: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x29c5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x29c5cc: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x29c5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c5d0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29c5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29c5d4: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x29c5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c5d8: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29c5d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x29c5dc: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x29c5dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29c5e0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29c5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29c5e4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29c5e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29c5e8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x29c5e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29c5ec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29c5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29c5f0: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x29c5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c5f4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x29c5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x29c5f8: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x29c5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c5fc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29c5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29c600: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x29c600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x29c604: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x29c604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x29c608: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x29c608u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x29c60c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x29c60cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x29c610: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29c610u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x29c614: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x29c614u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x29c618: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29c618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29c61c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29c61cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x29c620: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29c620u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29c624: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x29c624u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x29c628: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29c628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29c62c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29c62cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29c630: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x29c630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x29c634: 0x24c66c00  addiu       $a2, $a2, 0x6C00
    ctx->pc = 0x29c634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27648));
    // 0x29c638: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29c638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29c63c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x29c63cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x29c640: 0xac4c0000  sw          $t4, 0x0($v0)
    ctx->pc = 0x29c640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 12));
    // 0x29c644: 0x24a57900  addiu       $a1, $a1, 0x7900
    ctx->pc = 0x29c644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30976));
    // 0x29c648: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29c648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29c64c: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x29c64cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x29c650: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29c650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29c654: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x29c654u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x29c658: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29c658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29c65c: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x29c65cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x29c660: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x29c660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x29c664: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29c664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29c668: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29c668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29c66c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29c66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29c670: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x29c670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x29c674: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29c674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29c678: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29c678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29c67c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29c67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29c680: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x29c680u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x29c684: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29c684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29c688: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x29c688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x29c68c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29c68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29c690: 0xac4c0000  sw          $t4, 0x0($v0)
    ctx->pc = 0x29c690u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 12));
    // 0x29c694: 0x164b0022  bne         $s2, $t3, . + 4 + (0x22 << 2)
    ctx->pc = 0x29C694u;
    {
        const bool branch_taken_0x29c694 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 11));
        ctx->pc = 0x29C698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C694u;
        // 0x29c698: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c694) {
            ctx->pc = 0x29C720u;
            goto label_29c720;
        }
    }
    ctx->pc = 0x29C69Cu;
    // 0x29c69c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x29c69cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x29c6a0: 0x3c026cd0  lui         $v0, 0x6CD0
    ctx->pc = 0x29c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27856 << 16));
    // 0x29c6a4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29c6a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29c6a8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x29c6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x29c6ac: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x29c6acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x29c6b0: 0x34068017  ori         $a2, $zero, 0x8017
    ctx->pc = 0x29c6b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32791);
    // 0x29c6b4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29c6b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29c6b8: 0x3c0490ae  lui         $a0, 0x90AE
    ctx->pc = 0x29c6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37038 << 16));
    // 0x29c6bc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x29c6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x29c6c0: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x29c6c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x29c6c4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29c6c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29c6c8: 0x3c03eeee  lui         $v1, 0xEEEE
    ctx->pc = 0x29c6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61166 << 16));
    // 0x29c6cc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29c6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x29c6d0: 0x3463eeee  ori         $v1, $v1, 0xEEEE
    ctx->pc = 0x29c6d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61166);
    // 0x29c6d4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29c6d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29c6d8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x29c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x29c6dc: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x29c6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x29c6e0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x29c6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x29c6e4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29c6e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29c6e8: 0x24a59700  addiu       $a1, $a1, -0x6900
    ctx->pc = 0x29c6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940416));
    // 0x29c6ec: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x29c6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x29c6f0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29c6f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c6f4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29c6f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29c6f8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x29c6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x29c6fc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29c6fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29c700: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29c700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x29c704: 0xa1cf0003  sb          $t7, 0x3($t6)
    ctx->pc = 0x29c704u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 3), (uint8_t)GPR_U32(ctx, 15));
    // 0x29c708: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29c708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29c70c: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x29c70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x29c710: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x29c710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x29c714: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x29c714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x29c718: 0xa4580000  sh          $t8, 0x0($v0)
    ctx->pc = 0x29c718u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 24));
    // 0x29c71c: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x29c71cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
label_29c720:
    // 0x29c720: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x29c720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_29c724:
    // 0x29c724: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x29c724u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x29c728: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x29c728u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29c72c: 0x5440fe86  bnel        $v0, $zero, . + 4 + (-0x17A << 2)
    ctx->pc = 0x29C72Cu;
    {
        const bool branch_taken_0x29c72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c72c) {
            ctx->pc = 0x29C730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C72Cu;
            // 0x29c730: 0xc629000c  lwc1        $f9, 0xC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29c148;
        }
    }
    ctx->pc = 0x29C734u;
label_29c734:
    // 0x29c734: 0x12400026  beqz        $s2, . + 4 + (0x26 << 2)
    ctx->pc = 0x29C734u;
    {
        const bool branch_taken_0x29c734 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C734u;
        // 0x29c738: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c734) {
            ctx->pc = 0x29C7D0u;
            goto label_29c7d0;
        }
    }
    ctx->pc = 0x29C73Cu;
    // 0x29c73c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x29c73cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x29c740: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29c740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29c744: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x29c744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x29c748: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x29c748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x29c74c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29c74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29c750: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29c750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29c754: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x29c754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
    // 0x29c758: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x29c758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x29c75c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x29c75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x29c760: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x29c760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x29c764: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29c764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29c768: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29c768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29c76c: 0x36458000  ori         $a1, $s2, 0x8000
    ctx->pc = 0x29c76cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)32768);
    // 0x29c770: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29c770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x29c774: 0x3c0390ae  lui         $v1, 0x90AE
    ctx->pc = 0x29c774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37038 << 16));
    // 0x29c778: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29c778u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29c77c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x29c77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x29c780: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x29c780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x29c784: 0x3c04eeee  lui         $a0, 0xEEEE
    ctx->pc = 0x29c784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61166 << 16));
    // 0x29c788: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29c788u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29c78c: 0x8f8693a0  lw          $a2, -0x6C60($gp)
    ctx->pc = 0x29c78cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x29c790: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x29c790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x29c794: 0x3484eeee  ori         $a0, $a0, 0xEEEE
    ctx->pc = 0x29c794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)61166);
    // 0x29c798: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29c798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29c79c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x29c79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x29c7a0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x29c7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x29c7a4: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x29c7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x29c7a8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x29c7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x29c7ac: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x29c7acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x29c7b0: 0xa0c50003  sb          $a1, 0x3($a2)
    ctx->pc = 0x29c7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x29c7b4: 0x24639700  addiu       $v1, $v1, -0x6900
    ctx->pc = 0x29c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940416));
    // 0x29c7b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29c7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c7bc: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x29c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x29c7c0: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x29c7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x29c7c4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x29c7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x29c7c8: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x29c7c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x29c7cc: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x29c7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
label_29c7d0:
    // 0x29c7d0: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x29c7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x29c7d4: 0xdfbe0110  ld          $fp, 0x110($sp)
    ctx->pc = 0x29c7d4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x29c7d8: 0xdfb70100  ld          $s7, 0x100($sp)
    ctx->pc = 0x29c7d8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x29c7dc: 0xdfb600f0  ld          $s6, 0xF0($sp)
    ctx->pc = 0x29c7dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x29c7e0: 0xdfb500e0  ld          $s5, 0xE0($sp)
    ctx->pc = 0x29c7e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x29c7e4: 0xdfb400d0  ld          $s4, 0xD0($sp)
    ctx->pc = 0x29c7e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x29c7e8: 0xdfb300c0  ld          $s3, 0xC0($sp)
    ctx->pc = 0x29c7e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29c7ec: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x29c7ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29c7f0: 0xdfb100a0  ld          $s1, 0xA0($sp)
    ctx->pc = 0x29c7f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29c7f4: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x29c7f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29c7f8: 0xc7b70148  lwc1        $f23, 0x148($sp)
    ctx->pc = 0x29c7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x29c7fc: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x29c7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29c800: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x29c800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29c804: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x29c804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29c808: 0x3e00008  jr          $ra
    ctx->pc = 0x29C808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C808u;
        // 0x29c80c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C810u;
}
