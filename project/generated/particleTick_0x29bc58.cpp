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

// Function: particleTick
// Address: 0x29bc58 - 0x29c074
void particleTick_0x29bc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleTick_0x29bc58");
#endif

    switch (ctx->pc) {
        case 0x29bc58u: goto label_29bc58;
        case 0x29bc5cu: goto label_29bc5c;
        case 0x29bc60u: goto label_29bc60;
        case 0x29bc64u: goto label_29bc64;
        case 0x29bc68u: goto label_29bc68;
        case 0x29bc6cu: goto label_29bc6c;
        case 0x29bc70u: goto label_29bc70;
        case 0x29bc74u: goto label_29bc74;
        case 0x29bc78u: goto label_29bc78;
        case 0x29bc7cu: goto label_29bc7c;
        case 0x29bc80u: goto label_29bc80;
        case 0x29bc84u: goto label_29bc84;
        case 0x29bc88u: goto label_29bc88;
        case 0x29bc8cu: goto label_29bc8c;
        case 0x29bc90u: goto label_29bc90;
        case 0x29bc94u: goto label_29bc94;
        case 0x29bc98u: goto label_29bc98;
        case 0x29bc9cu: goto label_29bc9c;
        case 0x29bca0u: goto label_29bca0;
        case 0x29bca4u: goto label_29bca4;
        case 0x29bca8u: goto label_29bca8;
        case 0x29bcacu: goto label_29bcac;
        case 0x29bcb0u: goto label_29bcb0;
        case 0x29bcb4u: goto label_29bcb4;
        case 0x29bcb8u: goto label_29bcb8;
        case 0x29bcbcu: goto label_29bcbc;
        case 0x29bcc0u: goto label_29bcc0;
        case 0x29bcc4u: goto label_29bcc4;
        case 0x29bcc8u: goto label_29bcc8;
        case 0x29bcccu: goto label_29bccc;
        case 0x29bcd0u: goto label_29bcd0;
        case 0x29bcd4u: goto label_29bcd4;
        case 0x29bcd8u: goto label_29bcd8;
        case 0x29bcdcu: goto label_29bcdc;
        case 0x29bce0u: goto label_29bce0;
        case 0x29bce4u: goto label_29bce4;
        case 0x29bce8u: goto label_29bce8;
        case 0x29bcecu: goto label_29bcec;
        case 0x29bcf0u: goto label_29bcf0;
        case 0x29bcf4u: goto label_29bcf4;
        case 0x29bcf8u: goto label_29bcf8;
        case 0x29bcfcu: goto label_29bcfc;
        case 0x29bd00u: goto label_29bd00;
        case 0x29bd04u: goto label_29bd04;
        case 0x29bd08u: goto label_29bd08;
        case 0x29bd0cu: goto label_29bd0c;
        case 0x29bd10u: goto label_29bd10;
        case 0x29bd14u: goto label_29bd14;
        case 0x29bd18u: goto label_29bd18;
        case 0x29bd1cu: goto label_29bd1c;
        case 0x29bd20u: goto label_29bd20;
        case 0x29bd24u: goto label_29bd24;
        case 0x29bd28u: goto label_29bd28;
        case 0x29bd2cu: goto label_29bd2c;
        case 0x29bd30u: goto label_29bd30;
        case 0x29bd34u: goto label_29bd34;
        case 0x29bd38u: goto label_29bd38;
        case 0x29bd3cu: goto label_29bd3c;
        case 0x29bd40u: goto label_29bd40;
        case 0x29bd44u: goto label_29bd44;
        case 0x29bd48u: goto label_29bd48;
        case 0x29bd4cu: goto label_29bd4c;
        case 0x29bd50u: goto label_29bd50;
        case 0x29bd54u: goto label_29bd54;
        case 0x29bd58u: goto label_29bd58;
        case 0x29bd5cu: goto label_29bd5c;
        case 0x29bd60u: goto label_29bd60;
        case 0x29bd64u: goto label_29bd64;
        case 0x29bd68u: goto label_29bd68;
        case 0x29bd6cu: goto label_29bd6c;
        case 0x29bd70u: goto label_29bd70;
        case 0x29bd74u: goto label_29bd74;
        case 0x29bd78u: goto label_29bd78;
        case 0x29bd7cu: goto label_29bd7c;
        case 0x29bd80u: goto label_29bd80;
        case 0x29bd84u: goto label_29bd84;
        case 0x29bd88u: goto label_29bd88;
        case 0x29bd8cu: goto label_29bd8c;
        case 0x29bd90u: goto label_29bd90;
        case 0x29bd94u: goto label_29bd94;
        case 0x29bd98u: goto label_29bd98;
        case 0x29bd9cu: goto label_29bd9c;
        case 0x29bda0u: goto label_29bda0;
        case 0x29bda4u: goto label_29bda4;
        case 0x29bda8u: goto label_29bda8;
        case 0x29bdacu: goto label_29bdac;
        case 0x29bdb0u: goto label_29bdb0;
        case 0x29bdb4u: goto label_29bdb4;
        case 0x29bdb8u: goto label_29bdb8;
        case 0x29bdbcu: goto label_29bdbc;
        case 0x29bdc0u: goto label_29bdc0;
        case 0x29bdc4u: goto label_29bdc4;
        case 0x29bdc8u: goto label_29bdc8;
        case 0x29bdccu: goto label_29bdcc;
        case 0x29bdd0u: goto label_29bdd0;
        case 0x29bdd4u: goto label_29bdd4;
        case 0x29bdd8u: goto label_29bdd8;
        case 0x29bddcu: goto label_29bddc;
        case 0x29bde0u: goto label_29bde0;
        case 0x29bde4u: goto label_29bde4;
        case 0x29bde8u: goto label_29bde8;
        case 0x29bdecu: goto label_29bdec;
        case 0x29bdf0u: goto label_29bdf0;
        case 0x29bdf4u: goto label_29bdf4;
        case 0x29bdf8u: goto label_29bdf8;
        case 0x29bdfcu: goto label_29bdfc;
        case 0x29be00u: goto label_29be00;
        case 0x29be04u: goto label_29be04;
        case 0x29be08u: goto label_29be08;
        case 0x29be0cu: goto label_29be0c;
        case 0x29be10u: goto label_29be10;
        case 0x29be14u: goto label_29be14;
        case 0x29be18u: goto label_29be18;
        case 0x29be1cu: goto label_29be1c;
        case 0x29be20u: goto label_29be20;
        case 0x29be24u: goto label_29be24;
        case 0x29be28u: goto label_29be28;
        case 0x29be2cu: goto label_29be2c;
        case 0x29be30u: goto label_29be30;
        case 0x29be34u: goto label_29be34;
        case 0x29be38u: goto label_29be38;
        case 0x29be3cu: goto label_29be3c;
        case 0x29be40u: goto label_29be40;
        case 0x29be44u: goto label_29be44;
        case 0x29be48u: goto label_29be48;
        case 0x29be4cu: goto label_29be4c;
        case 0x29be50u: goto label_29be50;
        case 0x29be54u: goto label_29be54;
        case 0x29be58u: goto label_29be58;
        case 0x29be5cu: goto label_29be5c;
        case 0x29be60u: goto label_29be60;
        case 0x29be64u: goto label_29be64;
        case 0x29be68u: goto label_29be68;
        case 0x29be6cu: goto label_29be6c;
        case 0x29be70u: goto label_29be70;
        case 0x29be74u: goto label_29be74;
        case 0x29be78u: goto label_29be78;
        case 0x29be7cu: goto label_29be7c;
        case 0x29be80u: goto label_29be80;
        case 0x29be84u: goto label_29be84;
        case 0x29be88u: goto label_29be88;
        case 0x29be8cu: goto label_29be8c;
        case 0x29be90u: goto label_29be90;
        case 0x29be94u: goto label_29be94;
        case 0x29be98u: goto label_29be98;
        case 0x29be9cu: goto label_29be9c;
        case 0x29bea0u: goto label_29bea0;
        case 0x29bea4u: goto label_29bea4;
        case 0x29bea8u: goto label_29bea8;
        case 0x29beacu: goto label_29beac;
        case 0x29beb0u: goto label_29beb0;
        case 0x29beb4u: goto label_29beb4;
        case 0x29beb8u: goto label_29beb8;
        case 0x29bebcu: goto label_29bebc;
        case 0x29bec0u: goto label_29bec0;
        case 0x29bec4u: goto label_29bec4;
        case 0x29bec8u: goto label_29bec8;
        case 0x29beccu: goto label_29becc;
        case 0x29bed0u: goto label_29bed0;
        case 0x29bed4u: goto label_29bed4;
        case 0x29bed8u: goto label_29bed8;
        case 0x29bedcu: goto label_29bedc;
        case 0x29bee0u: goto label_29bee0;
        case 0x29bee4u: goto label_29bee4;
        case 0x29bee8u: goto label_29bee8;
        case 0x29beecu: goto label_29beec;
        case 0x29bef0u: goto label_29bef0;
        case 0x29bef4u: goto label_29bef4;
        case 0x29bef8u: goto label_29bef8;
        case 0x29befcu: goto label_29befc;
        case 0x29bf00u: goto label_29bf00;
        case 0x29bf04u: goto label_29bf04;
        case 0x29bf08u: goto label_29bf08;
        case 0x29bf0cu: goto label_29bf0c;
        case 0x29bf10u: goto label_29bf10;
        case 0x29bf14u: goto label_29bf14;
        case 0x29bf18u: goto label_29bf18;
        case 0x29bf1cu: goto label_29bf1c;
        case 0x29bf20u: goto label_29bf20;
        case 0x29bf24u: goto label_29bf24;
        case 0x29bf28u: goto label_29bf28;
        case 0x29bf2cu: goto label_29bf2c;
        case 0x29bf30u: goto label_29bf30;
        case 0x29bf34u: goto label_29bf34;
        case 0x29bf38u: goto label_29bf38;
        case 0x29bf3cu: goto label_29bf3c;
        case 0x29bf40u: goto label_29bf40;
        case 0x29bf44u: goto label_29bf44;
        case 0x29bf48u: goto label_29bf48;
        case 0x29bf4cu: goto label_29bf4c;
        case 0x29bf50u: goto label_29bf50;
        case 0x29bf54u: goto label_29bf54;
        case 0x29bf58u: goto label_29bf58;
        case 0x29bf5cu: goto label_29bf5c;
        case 0x29bf60u: goto label_29bf60;
        case 0x29bf64u: goto label_29bf64;
        case 0x29bf68u: goto label_29bf68;
        case 0x29bf6cu: goto label_29bf6c;
        case 0x29bf70u: goto label_29bf70;
        case 0x29bf74u: goto label_29bf74;
        case 0x29bf78u: goto label_29bf78;
        case 0x29bf7cu: goto label_29bf7c;
        case 0x29bf80u: goto label_29bf80;
        case 0x29bf84u: goto label_29bf84;
        case 0x29bf88u: goto label_29bf88;
        case 0x29bf8cu: goto label_29bf8c;
        case 0x29bf90u: goto label_29bf90;
        case 0x29bf94u: goto label_29bf94;
        case 0x29bf98u: goto label_29bf98;
        case 0x29bf9cu: goto label_29bf9c;
        case 0x29bfa0u: goto label_29bfa0;
        case 0x29bfa4u: goto label_29bfa4;
        case 0x29bfa8u: goto label_29bfa8;
        case 0x29bfacu: goto label_29bfac;
        case 0x29bfb0u: goto label_29bfb0;
        case 0x29bfb4u: goto label_29bfb4;
        case 0x29bfb8u: goto label_29bfb8;
        case 0x29bfbcu: goto label_29bfbc;
        case 0x29bfc0u: goto label_29bfc0;
        case 0x29bfc4u: goto label_29bfc4;
        case 0x29bfc8u: goto label_29bfc8;
        case 0x29bfccu: goto label_29bfcc;
        case 0x29bfd0u: goto label_29bfd0;
        case 0x29bfd4u: goto label_29bfd4;
        case 0x29bfd8u: goto label_29bfd8;
        case 0x29bfdcu: goto label_29bfdc;
        case 0x29bfe0u: goto label_29bfe0;
        case 0x29bfe4u: goto label_29bfe4;
        case 0x29bfe8u: goto label_29bfe8;
        case 0x29bfecu: goto label_29bfec;
        case 0x29bff0u: goto label_29bff0;
        case 0x29bff4u: goto label_29bff4;
        case 0x29bff8u: goto label_29bff8;
        case 0x29bffcu: goto label_29bffc;
        case 0x29c000u: goto label_29c000;
        case 0x29c004u: goto label_29c004;
        case 0x29c008u: goto label_29c008;
        case 0x29c00cu: goto label_29c00c;
        case 0x29c010u: goto label_29c010;
        case 0x29c014u: goto label_29c014;
        case 0x29c018u: goto label_29c018;
        case 0x29c01cu: goto label_29c01c;
        case 0x29c020u: goto label_29c020;
        case 0x29c024u: goto label_29c024;
        case 0x29c028u: goto label_29c028;
        case 0x29c02cu: goto label_29c02c;
        case 0x29c030u: goto label_29c030;
        case 0x29c034u: goto label_29c034;
        case 0x29c038u: goto label_29c038;
        case 0x29c03cu: goto label_29c03c;
        case 0x29c040u: goto label_29c040;
        case 0x29c044u: goto label_29c044;
        case 0x29c048u: goto label_29c048;
        case 0x29c04cu: goto label_29c04c;
        case 0x29c050u: goto label_29c050;
        case 0x29c054u: goto label_29c054;
        case 0x29c058u: goto label_29c058;
        case 0x29c05cu: goto label_29c05c;
        case 0x29c060u: goto label_29c060;
        case 0x29c064u: goto label_29c064;
        case 0x29c068u: goto label_29c068;
        case 0x29c06cu: goto label_29c06c;
        case 0x29c070u: goto label_29c070;
        default: break;
    }

    ctx->pc = 0x29bc58u;

label_29bc58:
    // 0x29bc58: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29bc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_29bc5c:
    // 0x29bc5c: 0x8f85b2f0  lw          $a1, -0x4D10($gp)
    ctx->pc = 0x29bc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947568)));
label_29bc60:
    // 0x29bc60: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x29bc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_29bc64:
    // 0x29bc64: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x29bc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_29bc68:
    // 0x29bc68: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x29bc68u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_29bc6c:
    // 0x29bc6c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29bc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_29bc70:
    // 0x29bc70: 0x3c13003b  lui         $s3, 0x3B
    ctx->pc = 0x29bc70u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
label_29bc74:
    // 0x29bc74: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x29bc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_29bc78:
    // 0x29bc78: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29bc78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29bc7c:
    // 0x29bc7c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29bc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_29bc80:
    // 0x29bc80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29bc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29bc84:
    // 0x29bc84: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x29bc84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_29bc88:
    // 0x29bc88: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x29bc88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_29bc8c:
    // 0x29bc8c: 0xc786b468  lwc1        $f6, -0x4B98($gp)
    ctx->pc = 0x29bc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_29bc90:
    // 0x29bc90: 0x240217a0  addiu       $v0, $zero, 0x17A0
    ctx->pc = 0x29bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6048));
label_29bc94:
    // 0x29bc94: 0x0  nop
    ctx->pc = 0x29bc94u;
    // NOP
label_29bc98:
    // 0x29bc98: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29bc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29bc9c:
    // 0x29bc9c: 0x2422018  mult        $a0, $s2, $v0
    ctx->pc = 0x29bc9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_29bca0:
    // 0x29bca0: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x29bca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_29bca4:
    // 0x29bca4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x29bca4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29bca8:
    // 0x29bca8: 0x10c300e3  beq         $a2, $v1, . + 4 + (0xE3 << 2)
label_29bcac:
    if (ctx->pc == 0x29BCACu) {
        ctx->pc = 0x29BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BCA8u;
        // 0x29bcac: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BCB0u;
        goto label_29bcb0;
    }
    ctx->pc = 0x29BCA8u;
    {
        const bool branch_taken_0x29bca8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x29BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BCA8u;
        // 0x29bcac: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bca8) {
            ctx->pc = 0x29C038u;
            goto label_29c038;
        }
    }
    ctx->pc = 0x29BCB0u;
label_29bcb0:
    // 0x29bcb0: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x29bcb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_29bcb4:
    // 0x29bcb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29bcb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29bcb8:
    // 0x29bcb8: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x29bcb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29bcbc:
    // 0x29bcbc: 0x0  nop
    ctx->pc = 0x29bcbcu;
    // NOP
label_29bcc0:
    // 0x29bcc0: 0x0  nop
    ctx->pc = 0x29bcc0u;
    // NOP
label_29bcc4:
    // 0x29bcc4: 0x46003003  div.s       $f0, $f6, $f0
    ctx->pc = 0x29bcc4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[0] = ctx->f[6] / ctx->f[0];
label_29bcc8:
    // 0x29bcc8: 0xc6020034  lwc1        $f2, 0x34($s0)
    ctx->pc = 0x29bcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_29bccc:
    // 0x29bccc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x29bcccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_29bcd0:
    // 0x29bcd0: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x29bcd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29bcd4:
    // 0x29bcd4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29bcd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_29bcd8:
    // 0x29bcd8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_29bcdc:
    if (ctx->pc == 0x29BCDCu) {
        ctx->pc = 0x29BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BCD8u;
        // 0x29bcdc: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BCE0u;
        goto label_29bce0;
    }
    ctx->pc = 0x29BCD8u;
    {
        const bool branch_taken_0x29bcd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BCD8u;
        // 0x29bcdc: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bcd8) {
            ctx->pc = 0x29BCFCu;
            goto label_29bcfc;
        }
    }
    ctx->pc = 0x29BCE0u;
label_29bce0:
    // 0x29bce0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x29bce0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29bce4:
    // 0x29bce4: 0x0  nop
    ctx->pc = 0x29bce4u;
    // NOP
label_29bce8:
    // 0x29bce8: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_29bcec:
    if (ctx->pc == 0x29BCECu) {
        ctx->pc = 0x29BCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BCE8u;
        // 0x29bcec: 0xc601000c  lwc1        $f1, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BCF0u;
        goto label_29bcf0;
    }
    ctx->pc = 0x29BCE8u;
    {
        const bool branch_taken_0x29bce8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29bce8) {
            ctx->pc = 0x29BCECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29BCE8u;
            // 0x29bcec: 0xc601000c  lwc1        $f1, 0xC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x29BD00u;
            goto label_29bd00;
        }
    }
    ctx->pc = 0x29BCF0u;
label_29bcf0:
    // 0x29bcf0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x29bcf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_29bcf4:
    // 0x29bcf4: 0xe6030034  swc1        $f3, 0x34($s0)
    ctx->pc = 0x29bcf4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_29bcf8:
    // 0x29bcf8: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x29bcf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_29bcfc:
    // 0x29bcfc: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x29bcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29bd00:
    // 0x29bd00: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x29bd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29bd04:
    // 0x29bd04: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x29bd04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29bd08:
    // 0x29bd08: 0x0  nop
    ctx->pc = 0x29bd08u;
    // NOP
label_29bd0c:
    // 0x29bd0c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_29bd10:
    if (ctx->pc == 0x29BD10u) {
        ctx->pc = 0x29BD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BD0Cu;
        // 0x29bd10: 0x21100  sll         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BD14u;
        goto label_29bd14;
    }
    ctx->pc = 0x29BD0Cu;
    {
        const bool branch_taken_0x29bd0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29BD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BD0Cu;
        // 0x29bd10: 0x21100  sll         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bd0c) {
            ctx->pc = 0x29BD34u;
            goto label_29bd34;
        }
    }
    ctx->pc = 0x29BD14u;
label_29bd14:
    // 0x29bd14: 0x26839710  addiu       $v1, $s4, -0x68F0
    ctx->pc = 0x29bd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294940432));
label_29bd18:
    // 0x29bd18: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29bd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29bd1c:
    // 0x29bd1c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x29bd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_29bd20:
    // 0x29bd20: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_29bd24:
    if (ctx->pc == 0x29BD24u) {
        ctx->pc = 0x29BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BD20u;
        // 0x29bd24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BD28u;
        goto label_29bd28;
    }
    ctx->pc = 0x29BD20u;
    {
        const bool branch_taken_0x29bd20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BD20u;
        // 0x29bd24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bd20) {
            ctx->pc = 0x29BD38u;
            goto label_29bd38;
        }
    }
    ctx->pc = 0x29BD28u;
label_29bd28:
    // 0x29bd28: 0xc0a5ac2  jal         func_296B08
label_29bd2c:
    if (ctx->pc == 0x29BD2Cu) {
        ctx->pc = 0x29BD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BD28u;
        // 0x29bd2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BD30u;
        goto label_29bd30;
    }
    ctx->pc = 0x29BD28u;
    SET_GPR_U32(ctx, 31, 0x29BD30u);
    ctx->pc = 0x29BD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BD28u;
    // 0x29bd2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296B08u, 0x29BD28u, 0x29BD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BD30u;
label_29bd30:
    // 0x29bd30: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x29bd30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29bd34:
    // 0x29bd34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29bd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29bd38:
    // 0x29bd38: 0x10c200b9  beq         $a2, $v0, . + 4 + (0xB9 << 2)
label_29bd3c:
    if (ctx->pc == 0x29BD3Cu) {
        ctx->pc = 0x29BD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BD38u;
        // 0x29bd3c: 0x26510001  addiu       $s1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BD40u;
        goto label_29bd40;
    }
    ctx->pc = 0x29BD38u;
    {
        const bool branch_taken_0x29bd38 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x29BD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BD38u;
        // 0x29bd3c: 0x26510001  addiu       $s1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bd38) {
            ctx->pc = 0x29C020u;
            goto label_29c020;
        }
    }
    ctx->pc = 0x29BD40u;
label_29bd40:
    // 0x29bd40: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x29bd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29bd44:
    // 0x29bd44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29bd44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29bd48:
    // 0x29bd48: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x29bd48u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29bd4c:
    // 0x29bd4c: 0x0  nop
    ctx->pc = 0x29bd4cu;
    // NOP
label_29bd50:
    // 0x29bd50: 0x450000b4  bc1f        . + 4 + (0xB4 << 2)
label_29bd54:
    if (ctx->pc == 0x29BD54u) {
        ctx->pc = 0x29BD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BD50u;
        // 0x29bd54: 0x8f85b2f0  lw          $a1, -0x4D10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BD58u;
        goto label_29bd58;
    }
    ctx->pc = 0x29BD50u;
    {
        const bool branch_taken_0x29bd50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29BD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BD50u;
        // 0x29bd54: 0x8f85b2f0  lw          $a1, -0x4D10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bd50) {
            ctx->pc = 0x29C024u;
            goto label_29c024;
        }
    }
    ctx->pc = 0x29BD58u;
label_29bd58:
    // 0x29bd58: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x29bd58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
label_29bd5c:
    // 0x29bd5c: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x29bd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
label_29bd60:
    // 0x29bd60: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_29bd64:
    if (ctx->pc == 0x29BD64u) {
        ctx->pc = 0x29BD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BD60u;
        // 0x29bd64: 0x2403ff87  addiu       $v1, $zero, -0x79 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967175));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BD68u;
        goto label_29bd68;
    }
    ctx->pc = 0x29BD60u;
    {
        const bool branch_taken_0x29bd60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BD60u;
        // 0x29bd64: 0x2403ff87  addiu       $v1, $zero, -0x79 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967175));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bd60) {
            ctx->pc = 0x29BDE8u;
            goto label_29bde8;
        }
    }
    ctx->pc = 0x29BD68u;
label_29bd68:
    // 0x29bd68: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x29bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_29bd6c:
    // 0x29bd6c: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x29bd6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_29bd70:
    // 0x29bd70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29bd70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29bd74:
    // 0x29bd74: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29bd74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_29bd78:
    // 0x29bd78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29bd78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29bd7c:
    // 0x29bd7c: 0xc095076  jal         func_2541D8
label_29bd80:
    if (ctx->pc == 0x29BD80u) {
        ctx->pc = 0x29BD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BD7Cu;
        // 0x29bd80: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BD84u;
        goto label_29bd84;
    }
    ctx->pc = 0x29BD7Cu;
    SET_GPR_U32(ctx, 31, 0x29BD84u);
    ctx->pc = 0x29BD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BD7Cu;
    // 0x29bd80: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2541D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2541D8u, 0x29BD7Cu, 0x29BD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BD84u;
label_29bd84:
    // 0x29bd84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_29bd88:
    if (ctx->pc == 0x29BD88u) {
        ctx->pc = 0x29BD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BD84u;
        // 0x29bd88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BD8Cu;
        goto label_29bd8c;
    }
    ctx->pc = 0x29BD84u;
    {
        const bool branch_taken_0x29bd84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BD84u;
        // 0x29bd88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bd84) {
            ctx->pc = 0x29BD98u;
            goto label_29bd98;
        }
    }
    ctx->pc = 0x29BD8Cu;
label_29bd8c:
    // 0x29bd8c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x29bd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_29bd90:
    // 0x29bd90: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x29bd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_29bd94:
    // 0x29bd94: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x29bd94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_29bd98:
    // 0x29bd98: 0xc095076  jal         func_2541D8
label_29bd9c:
    if (ctx->pc == 0x29BD9Cu) {
        ctx->pc = 0x29BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BD98u;
        // 0x29bd9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BDA0u;
        goto label_29bda0;
    }
    ctx->pc = 0x29BD98u;
    SET_GPR_U32(ctx, 31, 0x29BDA0u);
    ctx->pc = 0x29BD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BD98u;
    // 0x29bd9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2541D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2541D8u, 0x29BD98u, 0x29BDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BDA0u;
label_29bda0:
    // 0x29bda0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_29bda4:
    if (ctx->pc == 0x29BDA4u) {
        ctx->pc = 0x29BDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BDA0u;
        // 0x29bda4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BDA8u;
        goto label_29bda8;
    }
    ctx->pc = 0x29BDA0u;
    {
        const bool branch_taken_0x29bda0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BDA0u;
        // 0x29bda4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bda0) {
            ctx->pc = 0x29BDB4u;
            goto label_29bdb4;
        }
    }
    ctx->pc = 0x29BDA8u;
label_29bda8:
    // 0x29bda8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x29bda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_29bdac:
    // 0x29bdac: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x29bdacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_29bdb0:
    // 0x29bdb0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x29bdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_29bdb4:
    // 0x29bdb4: 0xc095076  jal         func_2541D8
label_29bdb8:
    if (ctx->pc == 0x29BDB8u) {
        ctx->pc = 0x29BDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BDB4u;
        // 0x29bdb8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BDBCu;
        goto label_29bdbc;
    }
    ctx->pc = 0x29BDB4u;
    SET_GPR_U32(ctx, 31, 0x29BDBCu);
    ctx->pc = 0x29BDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BDB4u;
    // 0x29bdb8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2541D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2541D8u, 0x29BDB4u, 0x29BDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BDBCu;
label_29bdbc:
    // 0x29bdbc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_29bdc0:
    if (ctx->pc == 0x29BDC0u) {
        ctx->pc = 0x29BDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BDBCu;
        // 0x29bdc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BDC4u;
        goto label_29bdc4;
    }
    ctx->pc = 0x29BDBCu;
    {
        const bool branch_taken_0x29bdbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BDBCu;
        // 0x29bdc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bdbc) {
            ctx->pc = 0x29BDD0u;
            goto label_29bdd0;
        }
    }
    ctx->pc = 0x29BDC4u;
label_29bdc4:
    // 0x29bdc4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x29bdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_29bdc8:
    // 0x29bdc8: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x29bdc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_29bdcc:
    // 0x29bdcc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x29bdccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_29bdd0:
    // 0x29bdd0: 0xc095076  jal         func_2541D8
label_29bdd4:
    if (ctx->pc == 0x29BDD4u) {
        ctx->pc = 0x29BDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BDD0u;
        // 0x29bdd4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BDD8u;
        goto label_29bdd8;
    }
    ctx->pc = 0x29BDD0u;
    SET_GPR_U32(ctx, 31, 0x29BDD8u);
    ctx->pc = 0x29BDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BDD0u;
    // 0x29bdd4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2541D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2541D8u, 0x29BDD0u, 0x29BDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BDD8u;
label_29bdd8:
    // 0x29bdd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_29bddc:
    if (ctx->pc == 0x29BDDCu) {
        ctx->pc = 0x29BDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BDD8u;
        // 0x29bddc: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BDE0u;
        goto label_29bde0;
    }
    ctx->pc = 0x29BDD8u;
    {
        const bool branch_taken_0x29bdd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BDD8u;
        // 0x29bddc: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bdd8) {
            ctx->pc = 0x29BDECu;
            goto label_29bdec;
        }
    }
    ctx->pc = 0x29BDE0u;
label_29bde0:
    // 0x29bde0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x29bde0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_29bde4:
    // 0x29bde4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x29bde4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_29bde8:
    // 0x29bde8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x29bde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_29bdec:
    // 0x29bdec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x29bdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29bdf0:
    // 0x29bdf0: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x29bdf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_29bdf4:
    // 0x29bdf4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x29bdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_29bdf8:
    // 0x29bdf8: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x29bdf8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
label_29bdfc:
    // 0x29bdfc: 0x3063007a  andi        $v1, $v1, 0x7A
    ctx->pc = 0x29bdfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)122);
label_29be00:
    // 0x29be00: 0x10640087  beq         $v1, $a0, . + 4 + (0x87 << 2)
label_29be04:
    if (ctx->pc == 0x29BE04u) {
        ctx->pc = 0x29BE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BE00u;
        // 0x29be04: 0x26510001  addiu       $s1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BE08u;
        goto label_29be08;
    }
    ctx->pc = 0x29BE00u;
    {
        const bool branch_taken_0x29be00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x29BE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BE00u;
        // 0x29be04: 0x26510001  addiu       $s1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29be00) {
            ctx->pc = 0x29C020u;
            goto label_29c020;
        }
    }
    ctx->pc = 0x29BE08u;
label_29be08:
    // 0x29be08: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29be08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29be0c:
    // 0x29be0c: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x29be0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
label_29be10:
    // 0x29be10: 0x2c43000c  sltiu       $v1, $v0, 0xC
    ctx->pc = 0x29be10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_29be14:
    // 0x29be14: 0x10600082  beqz        $v1, . + 4 + (0x82 << 2)
label_29be18:
    if (ctx->pc == 0x29BE18u) {
        ctx->pc = 0x29BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BE14u;
        // 0x29be18: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BE1Cu;
        goto label_29be1c;
    }
    ctx->pc = 0x29BE14u;
    {
        const bool branch_taken_0x29be14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BE14u;
        // 0x29be18: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29be14) {
            ctx->pc = 0x29C020u;
            goto label_29c020;
        }
    }
    ctx->pc = 0x29BE1Cu;
label_29be1c:
    // 0x29be1c: 0x26639020  addiu       $v1, $s3, -0x6FE0
    ctx->pc = 0x29be1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294938656));
label_29be20:
    // 0x29be20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29be20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29be24:
    // 0x29be24: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x29be24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29be28:
    // 0x29be28: 0x800008  jr          $a0
label_29be2c:
    if (ctx->pc == 0x29BE2Cu) {
        ctx->pc = 0x29BE30u;
        goto label_29be30;
    }
    ctx->pc = 0x29BE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BE28u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29BE30u;
label_29be30:
    // 0x29be30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29be30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29be34:
    // 0x29be34: 0xc0a754c  jal         func_29D530
label_29be38:
    if (ctx->pc == 0x29BE38u) {
        ctx->pc = 0x29BE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BE34u;
        // 0x29be38: 0x26510001  addiu       $s1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BE3Cu;
        goto label_29be3c;
    }
    ctx->pc = 0x29BE34u;
    SET_GPR_U32(ctx, 31, 0x29BE3Cu);
    ctx->pc = 0x29BE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BE34u;
    // 0x29be38: 0x26510001  addiu       $s1, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D530u, 0x29BE34u, 0x29BE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BE3Cu;
label_29be3c:
    // 0x29be3c: 0x10000079  b           . + 4 + (0x79 << 2)
label_29be40:
    if (ctx->pc == 0x29BE40u) {
        ctx->pc = 0x29BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BE3Cu;
        // 0x29be40: 0x8f85b2f0  lw          $a1, -0x4D10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BE44u;
        goto label_29be44;
    }
    ctx->pc = 0x29BE3Cu;
    {
        const bool branch_taken_0x29be3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BE3Cu;
        // 0x29be40: 0x8f85b2f0  lw          $a1, -0x4D10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29be3c) {
            ctx->pc = 0x29C024u;
            goto label_29c024;
        }
    }
    ctx->pc = 0x29BE44u;
label_29be44:
    // 0x29be44: 0xc786b468  lwc1        $f6, -0x4B98($gp)
    ctx->pc = 0x29be44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_29be48:
    // 0x29be48: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x29be48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_29be4c:
    // 0x29be4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29be4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29be50:
    // 0x29be50: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x29be50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29be54:
    // 0x29be54: 0x0  nop
    ctx->pc = 0x29be54u;
    // NOP
label_29be58:
    // 0x29be58: 0x0  nop
    ctx->pc = 0x29be58u;
    // NOP
label_29be5c:
    // 0x29be5c: 0x46003003  div.s       $f0, $f6, $f0
    ctx->pc = 0x29be5cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[0] = ctx->f[6] / ctx->f[0];
label_29be60:
    // 0x29be60: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29be60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29be64:
    // 0x29be64: 0x0  nop
    ctx->pc = 0x29be64u;
    // NOP
label_29be68:
    // 0x29be68: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
label_29be6c:
    if (ctx->pc == 0x29BE6Cu) {
        ctx->pc = 0x29BE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BE68u;
        // 0x29be6c: 0xc60303b0  lwc1        $f3, 0x3B0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BE70u;
        goto label_29be70;
    }
    ctx->pc = 0x29BE68u;
    {
        const bool branch_taken_0x29be68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29be68) {
            ctx->pc = 0x29BE6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29BE68u;
            // 0x29be6c: 0xc60303b0  lwc1        $f3, 0x3B0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x29BE88u;
            goto label_29be88;
        }
    }
    ctx->pc = 0x29BE70u;
label_29be70:
    // 0x29be70: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x29be70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_29be74:
    // 0x29be74: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x29be74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_29be78:
    // 0x29be78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29be78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_29be7c:
    // 0x29be7c: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
label_29be80:
    if (ctx->pc == 0x29BE80u) {
        ctx->pc = 0x29BE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BE7Cu;
        // 0x29be80: 0x26510001  addiu       $s1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BE84u;
        goto label_29be84;
    }
    ctx->pc = 0x29BE7Cu;
    {
        const bool branch_taken_0x29be7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29BE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BE7Cu;
        // 0x29be80: 0x26510001  addiu       $s1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29be7c) {
            ctx->pc = 0x29C030u;
            goto label_29c030;
        }
    }
    ctx->pc = 0x29BE84u;
label_29be84:
    // 0x29be84: 0xc60303b0  lwc1        $f3, 0x3B0($s0)
    ctx->pc = 0x29be84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_29be88:
    // 0x29be88: 0xc60403b4  lwc1        $f4, 0x3B4($s0)
    ctx->pc = 0x29be88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_29be8c:
    // 0x29be8c: 0xc60503b8  lwc1        $f5, 0x3B8($s0)
    ctx->pc = 0x29be8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_29be90:
    // 0x29be90: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x29be90u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
label_29be94:
    // 0x29be94: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x29be94u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
label_29be98:
    // 0x29be98: 0xc60203a4  lwc1        $f2, 0x3A4($s0)
    ctx->pc = 0x29be98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_29be9c:
    // 0x29be9c: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x29be9cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
label_29bea0:
    // 0x29bea0: 0xc60003a8  lwc1        $f0, 0x3A8($s0)
    ctx->pc = 0x29bea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29bea4:
    // 0x29bea4: 0xc60103ac  lwc1        $f1, 0x3AC($s0)
    ctx->pc = 0x29bea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29bea8:
    // 0x29bea8: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x29bea8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_29beac:
    // 0x29beac: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x29beacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_29beb0:
    // 0x29beb0: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x29beb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
label_29beb4:
    // 0x29beb4: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x29beb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_29beb8:
    // 0x29beb8: 0xe60203a4  swc1        $f2, 0x3A4($s0)
    ctx->pc = 0x29beb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 932), bits); }
label_29bebc:
    // 0x29bebc: 0xe60003a8  swc1        $f0, 0x3A8($s0)
    ctx->pc = 0x29bebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 936), bits); }
label_29bec0:
    // 0x29bec0: 0x1840005a  blez        $v0, . + 4 + (0x5A << 2)
label_29bec4:
    if (ctx->pc == 0x29BEC4u) {
        ctx->pc = 0x29BEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BEC0u;
        // 0x29bec4: 0xe60103ac  swc1        $f1, 0x3AC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 940), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BEC8u;
        goto label_29bec8;
    }
    ctx->pc = 0x29BEC0u;
    {
        const bool branch_taken_0x29bec0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29BEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BEC0u;
        // 0x29bec4: 0xe60103ac  swc1        $f1, 0x3AC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 940), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bec0) {
            ctx->pc = 0x29C02Cu;
            goto label_29c02c;
        }
    }
    ctx->pc = 0x29BEC8u;
label_29bec8:
    // 0x29bec8: 0x26510001  addiu       $s1, $s2, 0x1
    ctx->pc = 0x29bec8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_29becc:
    // 0x29becc: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x29beccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
label_29bed0:
    // 0x29bed0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x29bed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_29bed4:
    // 0x29bed4: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x29bed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
label_29bed8:
    // 0x29bed8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x29bed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_29bedc:
    // 0x29bedc: 0x261003bc  addiu       $s0, $s0, 0x3BC
    ctx->pc = 0x29bedcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 956));
label_29bee0:
    // 0x29bee0: 0x24120013  addiu       $s2, $zero, 0x13
    ctx->pc = 0x29bee0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_29bee4:
    // 0x29bee4: 0x0  nop
    ctx->pc = 0x29bee4u;
    // NOP
label_29bee8:
    // 0x29bee8: 0xc0ada34  jal         func_2B68D0
label_29beec:
    if (ctx->pc == 0x29BEECu) {
        ctx->pc = 0x29BEF0u;
        goto label_29bef0;
    }
    ctx->pc = 0x29BEE8u;
    SET_GPR_U32(ctx, 31, 0x29BEF0u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x29BEE8u, 0x29BEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BEF0u;
label_29bef0:
    // 0x29bef0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_29bef4:
    if (ctx->pc == 0x29BEF4u) {
        ctx->pc = 0x29BEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BEF0u;
        // 0x29bef4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BEF8u;
        goto label_29bef8;
    }
    ctx->pc = 0x29BEF0u;
    {
        const bool branch_taken_0x29bef0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x29BEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BEF0u;
        // 0x29bef4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bef0) {
            ctx->pc = 0x29BF08u;
            goto label_29bf08;
        }
    }
    ctx->pc = 0x29BEF8u;
label_29bef8:
    // 0x29bef8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29bef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29befc:
    // 0x29befc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29befcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_29bf00:
    // 0x29bf00: 0x10000007  b           . + 4 + (0x7 << 2)
label_29bf04:
    if (ctx->pc == 0x29BF04u) {
        ctx->pc = 0x29BF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BF00u;
        // 0x29bf04: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BF08u;
        goto label_29bf08;
    }
    ctx->pc = 0x29BF00u;
    {
        const bool branch_taken_0x29bf00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BF00u;
        // 0x29bf04: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bf00) {
            ctx->pc = 0x29BF20u;
            goto label_29bf20;
        }
    }
    ctx->pc = 0x29BF08u;
label_29bf08:
    // 0x29bf08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29bf08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_29bf0c:
    // 0x29bf0c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29bf0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_29bf10:
    // 0x29bf10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29bf10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29bf14:
    // 0x29bf14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29bf14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_29bf18:
    // 0x29bf18: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x29bf18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_29bf1c:
    // 0x29bf1c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x29bf1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_29bf20:
    // 0x29bf20: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x29bf20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_29bf24:
    // 0x29bf24: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x29bf24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_29bf28:
    // 0x29bf28: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x29bf28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_29bf2c:
    // 0x29bf2c: 0x641ffee  bgez        $s2, . + 4 + (-0x12 << 2)
label_29bf30:
    if (ctx->pc == 0x29BF30u) {
        ctx->pc = 0x29BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BF2Cu;
        // 0x29bf30: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BF34u;
        goto label_29bf34;
    }
    ctx->pc = 0x29BF2Cu;
    {
        const bool branch_taken_0x29bf2c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x29BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BF2Cu;
        // 0x29bf30: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bf2c) {
            ctx->pc = 0x29BEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29bee8;
        }
    }
    ctx->pc = 0x29BF34u;
label_29bf34:
    // 0x29bf34: 0x1000003b  b           . + 4 + (0x3B << 2)
label_29bf38:
    if (ctx->pc == 0x29BF38u) {
        ctx->pc = 0x29BF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BF34u;
        // 0x29bf38: 0x8f85b2f0  lw          $a1, -0x4D10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BF3Cu;
        goto label_29bf3c;
    }
    ctx->pc = 0x29BF34u;
    {
        const bool branch_taken_0x29bf34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BF34u;
        // 0x29bf38: 0x8f85b2f0  lw          $a1, -0x4D10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bf34) {
            ctx->pc = 0x29C024u;
            goto label_29c024;
        }
    }
    ctx->pc = 0x29BF3Cu;
label_29bf3c:
    // 0x29bf3c: 0xc786b468  lwc1        $f6, -0x4B98($gp)
    ctx->pc = 0x29bf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_29bf40:
    // 0x29bf40: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x29bf40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_29bf44:
    // 0x29bf44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29bf44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29bf48:
    // 0x29bf48: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x29bf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29bf4c:
    // 0x29bf4c: 0x0  nop
    ctx->pc = 0x29bf4cu;
    // NOP
label_29bf50:
    // 0x29bf50: 0x0  nop
    ctx->pc = 0x29bf50u;
    // NOP
label_29bf54:
    // 0x29bf54: 0x46003003  div.s       $f0, $f6, $f0
    ctx->pc = 0x29bf54u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[0] = ctx->f[6] / ctx->f[0];
label_29bf58:
    // 0x29bf58: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29bf58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29bf5c:
    // 0x29bf5c: 0x0  nop
    ctx->pc = 0x29bf5cu;
    // NOP
label_29bf60:
    // 0x29bf60: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
label_29bf64:
    if (ctx->pc == 0x29BF64u) {
        ctx->pc = 0x29BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BF60u;
        // 0x29bf64: 0xc60503ac  lwc1        $f5, 0x3AC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BF68u;
        goto label_29bf68;
    }
    ctx->pc = 0x29BF60u;
    {
        const bool branch_taken_0x29bf60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29bf60) {
            ctx->pc = 0x29BF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29BF60u;
            // 0x29bf64: 0xc60503ac  lwc1        $f5, 0x3AC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x29BF80u;
            goto label_29bf80;
        }
    }
    ctx->pc = 0x29BF68u;
label_29bf68:
    // 0x29bf68: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x29bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_29bf6c:
    // 0x29bf6c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x29bf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_29bf70:
    // 0x29bf70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29bf70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_29bf74:
    // 0x29bf74: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
label_29bf78:
    if (ctx->pc == 0x29BF78u) {
        ctx->pc = 0x29BF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BF74u;
        // 0x29bf78: 0x8f85b2f0  lw          $a1, -0x4D10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BF7Cu;
        goto label_29bf7c;
    }
    ctx->pc = 0x29BF74u;
    {
        const bool branch_taken_0x29bf74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29BF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BF74u;
        // 0x29bf78: 0x8f85b2f0  lw          $a1, -0x4D10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bf74) {
            ctx->pc = 0x29C038u;
            goto label_29c038;
        }
    }
    ctx->pc = 0x29BF7Cu;
label_29bf7c:
    // 0x29bf7c: 0xc60503ac  lwc1        $f5, 0x3AC($s0)
    ctx->pc = 0x29bf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_29bf80:
    // 0x29bf80: 0x26510001  addiu       $s1, $s2, 0x1
    ctx->pc = 0x29bf80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_29bf84:
    // 0x29bf84: 0xc60303b0  lwc1        $f3, 0x3B0($s0)
    ctx->pc = 0x29bf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_29bf88:
    // 0x29bf88: 0xc60403b4  lwc1        $f4, 0x3B4($s0)
    ctx->pc = 0x29bf88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_29bf8c:
    // 0x29bf8c: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x29bf8cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
label_29bf90:
    // 0x29bf90: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x29bf90u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
label_29bf94:
    // 0x29bf94: 0xc60203a0  lwc1        $f2, 0x3A0($s0)
    ctx->pc = 0x29bf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_29bf98:
    // 0x29bf98: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x29bf98u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
label_29bf9c:
    // 0x29bf9c: 0xc60003a4  lwc1        $f0, 0x3A4($s0)
    ctx->pc = 0x29bf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29bfa0:
    // 0x29bfa0: 0xc60103a8  lwc1        $f1, 0x3A8($s0)
    ctx->pc = 0x29bfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29bfa4:
    // 0x29bfa4: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x29bfa4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_29bfa8:
    // 0x29bfa8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x29bfa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_29bfac:
    // 0x29bfac: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x29bfacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_29bfb0:
    // 0x29bfb0: 0xe60203a0  swc1        $f2, 0x3A0($s0)
    ctx->pc = 0x29bfb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 928), bits); }
label_29bfb4:
    // 0x29bfb4: 0xe60003a4  swc1        $f0, 0x3A4($s0)
    ctx->pc = 0x29bfb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 932), bits); }
label_29bfb8:
    // 0x29bfb8: 0xe60103a8  swc1        $f1, 0x3A8($s0)
    ctx->pc = 0x29bfb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 936), bits); }
label_29bfbc:
    // 0x29bfbc: 0x1000001f  b           . + 4 + (0x1F << 2)
label_29bfc0:
    if (ctx->pc == 0x29BFC0u) {
        ctx->pc = 0x29BFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BFBCu;
        // 0x29bfc0: 0x8f85b2f0  lw          $a1, -0x4D10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BFC4u;
        goto label_29bfc4;
    }
    ctx->pc = 0x29BFBCu;
    {
        const bool branch_taken_0x29bfbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BFBCu;
        // 0x29bfc0: 0x8f85b2f0  lw          $a1, -0x4D10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bfbc) {
            ctx->pc = 0x29C03Cu;
            goto label_29c03c;
        }
    }
    ctx->pc = 0x29BFC4u;
label_29bfc4:
    // 0x29bfc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29bfc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29bfc8:
    // 0x29bfc8: 0xc0a6ba2  jal         func_29AE88
label_29bfcc:
    if (ctx->pc == 0x29BFCCu) {
        ctx->pc = 0x29BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BFC8u;
        // 0x29bfcc: 0x26510001  addiu       $s1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BFD0u;
        goto label_29bfd0;
    }
    ctx->pc = 0x29BFC8u;
    SET_GPR_U32(ctx, 31, 0x29BFD0u);
    ctx->pc = 0x29BFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BFC8u;
    // 0x29bfcc: 0x26510001  addiu       $s1, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AE88u, 0x29BFC8u, 0x29BFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BFD0u;
label_29bfd0:
    // 0x29bfd0: 0x10000014  b           . + 4 + (0x14 << 2)
label_29bfd4:
    if (ctx->pc == 0x29BFD4u) {
        ctx->pc = 0x29BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BFD0u;
        // 0x29bfd4: 0x8f85b2f0  lw          $a1, -0x4D10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BFD8u;
        goto label_29bfd8;
    }
    ctx->pc = 0x29BFD0u;
    {
        const bool branch_taken_0x29bfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BFD0u;
        // 0x29bfd4: 0x8f85b2f0  lw          $a1, -0x4D10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bfd0) {
            ctx->pc = 0x29C024u;
            goto label_29c024;
        }
    }
    ctx->pc = 0x29BFD8u;
label_29bfd8:
    // 0x29bfd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29bfd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29bfdc:
    // 0x29bfdc: 0xc0a6ca6  jal         func_29B298
label_29bfe0:
    if (ctx->pc == 0x29BFE0u) {
        ctx->pc = 0x29BFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BFDCu;
        // 0x29bfe0: 0x26510001  addiu       $s1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BFE4u;
        goto label_29bfe4;
    }
    ctx->pc = 0x29BFDCu;
    SET_GPR_U32(ctx, 31, 0x29BFE4u);
    ctx->pc = 0x29BFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BFDCu;
    // 0x29bfe0: 0x26510001  addiu       $s1, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B298u, 0x29BFDCu, 0x29BFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BFE4u;
label_29bfe4:
    // 0x29bfe4: 0x1000000f  b           . + 4 + (0xF << 2)
label_29bfe8:
    if (ctx->pc == 0x29BFE8u) {
        ctx->pc = 0x29BFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BFE4u;
        // 0x29bfe8: 0x8f85b2f0  lw          $a1, -0x4D10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BFECu;
        goto label_29bfec;
    }
    ctx->pc = 0x29BFE4u;
    {
        const bool branch_taken_0x29bfe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BFE4u;
        // 0x29bfe8: 0x8f85b2f0  lw          $a1, -0x4D10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bfe4) {
            ctx->pc = 0x29C024u;
            goto label_29c024;
        }
    }
    ctx->pc = 0x29BFECu;
label_29bfec:
    // 0x29bfec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29bfecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29bff0:
    // 0x29bff0: 0xc0a6ca4  jal         func_29B290
label_29bff4:
    if (ctx->pc == 0x29BFF4u) {
        ctx->pc = 0x29BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BFF0u;
        // 0x29bff4: 0x26510001  addiu       $s1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BFF8u;
        goto label_29bff8;
    }
    ctx->pc = 0x29BFF0u;
    SET_GPR_U32(ctx, 31, 0x29BFF8u);
    ctx->pc = 0x29BFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BFF0u;
    // 0x29bff4: 0x26510001  addiu       $s1, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B290u, 0x29BFF0u, 0x29BFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BFF8u;
label_29bff8:
    // 0x29bff8: 0x1000000a  b           . + 4 + (0xA << 2)
label_29bffc:
    if (ctx->pc == 0x29BFFCu) {
        ctx->pc = 0x29BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BFF8u;
        // 0x29bffc: 0x8f85b2f0  lw          $a1, -0x4D10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C000u;
        goto label_29c000;
    }
    ctx->pc = 0x29BFF8u;
    {
        const bool branch_taken_0x29bff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BFF8u;
        // 0x29bffc: 0x8f85b2f0  lw          $a1, -0x4D10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bff8) {
            ctx->pc = 0x29C024u;
            goto label_29c024;
        }
    }
    ctx->pc = 0x29C000u;
label_29c000:
    // 0x29c000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29c000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29c004:
    // 0x29c004: 0xc0a6d04  jal         func_29B410
label_29c008:
    if (ctx->pc == 0x29C008u) {
        ctx->pc = 0x29C008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C004u;
        // 0x29c008: 0x26510001  addiu       $s1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C00Cu;
        goto label_29c00c;
    }
    ctx->pc = 0x29C004u;
    SET_GPR_U32(ctx, 31, 0x29C00Cu);
    ctx->pc = 0x29C008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C004u;
    // 0x29c008: 0x26510001  addiu       $s1, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B410u, 0x29C004u, 0x29C00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C00Cu;
label_29c00c:
    // 0x29c00c: 0x10000005  b           . + 4 + (0x5 << 2)
label_29c010:
    if (ctx->pc == 0x29C010u) {
        ctx->pc = 0x29C010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C00Cu;
        // 0x29c010: 0x8f85b2f0  lw          $a1, -0x4D10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C014u;
        goto label_29c014;
    }
    ctx->pc = 0x29C00Cu;
    {
        const bool branch_taken_0x29c00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C00Cu;
        // 0x29c010: 0x8f85b2f0  lw          $a1, -0x4D10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c00c) {
            ctx->pc = 0x29C024u;
            goto label_29c024;
        }
    }
    ctx->pc = 0x29C014u;
label_29c014:
    // 0x29c014: 0xc0a6e24  jal         func_29B890
label_29c018:
    if (ctx->pc == 0x29C018u) {
        ctx->pc = 0x29C018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C014u;
        // 0x29c018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C01Cu;
        goto label_29c01c;
    }
    ctx->pc = 0x29C014u;
    SET_GPR_U32(ctx, 31, 0x29C01Cu);
    ctx->pc = 0x29C018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C014u;
    // 0x29c018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B890u, 0x29C014u, 0x29C01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C01Cu;
label_29c01c:
    // 0x29c01c: 0x26510001  addiu       $s1, $s2, 0x1
    ctx->pc = 0x29c01cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_29c020:
    // 0x29c020: 0x8f85b2f0  lw          $a1, -0x4D10($gp)
    ctx->pc = 0x29c020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947568)));
label_29c024:
    // 0x29c024: 0x10000005  b           . + 4 + (0x5 << 2)
label_29c028:
    if (ctx->pc == 0x29C028u) {
        ctx->pc = 0x29C028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C024u;
        // 0x29c028: 0xc786b468  lwc1        $f6, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C02Cu;
        goto label_29c02c;
    }
    ctx->pc = 0x29C024u;
    {
        const bool branch_taken_0x29c024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C024u;
        // 0x29c028: 0xc786b468  lwc1        $f6, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c024) {
            ctx->pc = 0x29C03Cu;
            goto label_29c03c;
        }
    }
    ctx->pc = 0x29C02Cu;
label_29c02c:
    // 0x29c02c: 0x26510001  addiu       $s1, $s2, 0x1
    ctx->pc = 0x29c02cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_29c030:
    // 0x29c030: 0x10000002  b           . + 4 + (0x2 << 2)
label_29c034:
    if (ctx->pc == 0x29C034u) {
        ctx->pc = 0x29C034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C030u;
        // 0x29c034: 0x8f85b2f0  lw          $a1, -0x4D10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C038u;
        goto label_29c038;
    }
    ctx->pc = 0x29C030u;
    {
        const bool branch_taken_0x29c030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C030u;
        // 0x29c034: 0x8f85b2f0  lw          $a1, -0x4D10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c030) {
            ctx->pc = 0x29C03Cu;
            goto label_29c03c;
        }
    }
    ctx->pc = 0x29C038u;
label_29c038:
    // 0x29c038: 0x26510001  addiu       $s1, $s2, 0x1
    ctx->pc = 0x29c038u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_29c03c:
    // 0x29c03c: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x29c03cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29c040:
    // 0x29c040: 0x2a420064  slti        $v0, $s2, 0x64
    ctx->pc = 0x29c040u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)100) ? 1 : 0);
label_29c044:
    // 0x29c044: 0x5440ff14  bnel        $v0, $zero, . + 4 + (-0xEC << 2)
label_29c048:
    if (ctx->pc == 0x29C048u) {
        ctx->pc = 0x29C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C044u;
        // 0x29c048: 0x240217a0  addiu       $v0, $zero, 0x17A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C04Cu;
        goto label_29c04c;
    }
    ctx->pc = 0x29C044u;
    {
        const bool branch_taken_0x29c044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c044) {
            ctx->pc = 0x29C048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C044u;
            // 0x29c048: 0x240217a0  addiu       $v0, $zero, 0x17A0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6048));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29BC98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29bc98;
        }
    }
    ctx->pc = 0x29C04Cu;
label_29c04c:
    // 0x29c04c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x29c04cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_29c050:
    // 0x29c050: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x29c050u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29c054:
    // 0x29c054: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x29c054u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29c058:
    // 0x29c058: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29c058u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29c05c:
    // 0x29c05c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29c05cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29c060:
    // 0x29c060: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29c060u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29c064:
    // 0x29c064: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x29c064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_29c068:
    // 0x29c068: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x29c068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_29c06c:
    // 0x29c06c: 0x3e00008  jr          $ra
label_29c070:
    if (ctx->pc == 0x29C070u) {
        ctx->pc = 0x29C070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C06Cu;
        // 0x29c070: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C074u;
        goto label_fallthrough_0x29c06c;
    }
    ctx->pc = 0x29C06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C06Cu;
        // 0x29c070: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29c06c:
    ctx->pc = 0x29C074u;
}
