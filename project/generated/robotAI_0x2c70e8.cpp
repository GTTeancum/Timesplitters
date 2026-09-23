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

// Function: robotAI
// Address: 0x2c70e8 - 0x2c79a4
void robotAI_0x2c70e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("robotAI_0x2c70e8");
#endif

    switch (ctx->pc) {
        case 0x2c714cu: goto label_2c714c;
        case 0x2c71acu: goto label_2c71ac;
        case 0x2c71c8u: goto label_2c71c8;
        case 0x2c71d8u: goto label_2c71d8;
        case 0x2c7290u: goto label_2c7290;
        case 0x2c72c8u: goto label_2c72c8;
        case 0x2c7340u: goto label_2c7340;
        case 0x2c7370u: goto label_2c7370;
        case 0x2c7384u: goto label_2c7384;
        case 0x2c73a8u: goto label_2c73a8;
        case 0x2c7444u: goto label_2c7444;
        case 0x2c74a8u: goto label_2c74a8;
        case 0x2c75f0u: goto label_2c75f0;
        case 0x2c75fcu: goto label_2c75fc;
        case 0x2c7608u: goto label_2c7608;
        case 0x2c7618u: goto label_2c7618;
        case 0x2c7628u: goto label_2c7628;
        case 0x2c7630u: goto label_2c7630;
        case 0x2c763cu: goto label_2c763c;
        case 0x2c7648u: goto label_2c7648;
        case 0x2c7658u: goto label_2c7658;
        case 0x2c766cu: goto label_2c766c;
        case 0x2c7684u: goto label_2c7684;
        case 0x2c7690u: goto label_2c7690;
        case 0x2c76e8u: goto label_2c76e8;
        case 0x2c7730u: goto label_2c7730;
        case 0x2c7820u: goto label_2c7820;
        case 0x2c782cu: goto label_2c782c;
        case 0x2c7848u: goto label_2c7848;
        case 0x2c786cu: goto label_2c786c;
        case 0x2c788cu: goto label_2c788c;
        case 0x2c78d0u: goto label_2c78d0;
        case 0x2c7914u: goto label_2c7914;
        case 0x2c792cu: goto label_2c792c;
        case 0x2c7940u: goto label_2c7940;
        case 0x2c7954u: goto label_2c7954;
        case 0x2c796cu: goto label_2c796c;
        default: break;
    }

    ctx->pc = 0x2c70e8u;

    // 0x2c70e8: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x2c70e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x2c70ec: 0x8f83b238  lw          $v1, -0x4DC8($gp)
    ctx->pc = 0x2c70ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2c70f0: 0xffbe0130  sd          $fp, 0x130($sp)
    ctx->pc = 0x2c70f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 30));
    // 0x2c70f4: 0x3c0286a4  lui         $v0, 0x86A4
    ctx->pc = 0x2c70f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34468 << 16));
    // 0x2c70f8: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x2c70f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x2c70fc: 0x3442c2e1  ori         $v0, $v0, 0xC2E1
    ctx->pc = 0x2c70fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49889);
    // 0x2c7100: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x2c7100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x2c7104: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c7104u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7108: 0xffb70120  sd          $s7, 0x120($sp)
    ctx->pc = 0x2c7108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 23));
    // 0x2c710c: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x2c710cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
    // 0x2c7110: 0xffb50100  sd          $s5, 0x100($sp)
    ctx->pc = 0x2c7110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 21));
    // 0x2c7114: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x2c7114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
    // 0x2c7118: 0xffb300e0  sd          $s3, 0xE0($sp)
    ctx->pc = 0x2c7118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 19));
    // 0x2c711c: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x2c711cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x2c7120: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x2c7120u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x2c7124: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x2c7124u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x2c7128: 0xffb100c0  sd          $s1, 0xC0($sp)
    ctx->pc = 0x2c7128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 17));
    // 0x2c712c: 0x8e510160  lw          $s1, 0x160($s2)
    ctx->pc = 0x2c712cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x2c7130: 0x8f86b230  lw          $a2, -0x4DD0($gp)
    ctx->pc = 0x2c7130u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2c7134: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x2c7134u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2c7138: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2c7138u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c713c: 0x8cc50180  lw          $a1, 0x180($a2)
    ctx->pc = 0x2c713cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 384)));
    // 0x2c7140: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c7140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7144: 0xc0b179a  jal         func_2C5E68
    ctx->pc = 0x2C7144u;
    SET_GPR_U32(ctx, 31, 0x2C714Cu);
    ctx->pc = 0x2C7148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7144u;
    // 0x2c7148: 0x3f103  sra         $fp, $v1, 4 (Delay Slot)
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 3), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5E68u, 0x2C7144u, 0x2C714Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C714Cu;
label_2c714c:
    // 0x2c714c: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x2c714cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7150: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c7150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c7154: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c7154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c7158: 0xe6200bc0  swc1        $f0, 0xBC0($s1)
    ctx->pc = 0x2c7158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3008), bits); }
    // 0x2c715c: 0x8e230ad4  lw          $v1, 0xAD4($s1)
    ctx->pc = 0x2c715cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
    // 0x2c7160: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x2c7160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7164: 0x8c440160  lw          $a0, 0x160($v0)
    ctx->pc = 0x2c7164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x2c7168: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c7168u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c716c: 0xae220ae4  sw          $v0, 0xAE4($s1)
    ctx->pc = 0x2c716cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2788), GPR_U32(ctx, 2));
    // 0x2c7170: 0xe6200bc4  swc1        $f0, 0xBC4($s1)
    ctx->pc = 0x2c7170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3012), bits); }
    // 0x2c7174: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x2c7174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7178: 0x14600038  bnez        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x2C7178u;
    {
        const bool branch_taken_0x2c7178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7178u;
        // 0x2c717c: 0xe6210bc8  swc1        $f1, 0xBC8($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3016), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7178) {
            ctx->pc = 0x2C725Cu;
            goto label_2c725c;
        }
    }
    ctx->pc = 0x2C7180u;
    // 0x2c7180: 0xae200aa8  sw          $zero, 0xAA8($s1)
    ctx->pc = 0x2c7180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 0));
    // 0x2c7184: 0x8e2202ac  lw          $v0, 0x2AC($s1)
    ctx->pc = 0x2c7184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 684)));
    // 0x2c7188: 0x8c8302a8  lw          $v1, 0x2A8($a0)
    ctx->pc = 0x2c7188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 680)));
    // 0x2c718c: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C718Cu;
    {
        const bool branch_taken_0x2c718c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c718c) {
            ctx->pc = 0x2C7190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C718Cu;
            // 0x2c7190: 0xae2302ac  sw          $v1, 0x2AC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 684), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C71A4u;
            goto label_2c71a4;
        }
    }
    ctx->pc = 0x2C7194u;
    // 0x2c7194: 0xae200698  sw          $zero, 0x698($s1)
    ctx->pc = 0x2c7194u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1688), GPR_U32(ctx, 0));
    // 0x2c7198: 0xae200a84  sw          $zero, 0xA84($s1)
    ctx->pc = 0x2c7198u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2692), GPR_U32(ctx, 0));
    // 0x2c719c: 0x8c8302a8  lw          $v1, 0x2A8($a0)
    ctx->pc = 0x2c719cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 680)));
    // 0x2c71a0: 0xae2302ac  sw          $v1, 0x2AC($s1)
    ctx->pc = 0x2c71a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 684), GPR_U32(ctx, 3));
label_2c71a4:
    // 0x2c71a4: 0xc0afda0  jal         func_2BF680
    ctx->pc = 0x2C71A4u;
    SET_GPR_U32(ctx, 31, 0x2C71ACu);
    ctx->pc = 0x2C71A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C71A4u;
    // 0x2c71a8: 0x262402a8  addiu       $a0, $s1, 0x2A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF680u, 0x2C71A4u, 0x2C71ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C71ACu;
label_2c71ac:
    // 0x2c71ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c71acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c71b0: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x2c71b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2c71b4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2c71b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c71b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C71B8u;
    {
        const bool branch_taken_0x2c71b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C71BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C71B8u;
        // 0x2c71bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c71b8) {
            ctx->pc = 0x2C71D0u;
            goto label_2c71d0;
        }
    }
    ctx->pc = 0x2C71C0u;
    // 0x2c71c0: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C71C0u;
    SET_GPR_U32(ctx, 31, 0x2C71C8u);
    ctx->pc = 0x2C71C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C71C0u;
    // 0x2c71c4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C71C0u, 0x2C71C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C71C8u;
label_2c71c8:
    // 0x2c71c8: 0x100001e9  b           . + 4 + (0x1E9 << 2)
    ctx->pc = 0x2C71C8u;
    {
        const bool branch_taken_0x2c71c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C71CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C71C8u;
        // 0x2c71cc: 0xdfbf0140  ld          $ra, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c71c8) {
            ctx->pc = 0x2C7970u;
            goto label_2c7970;
        }
    }
    ctx->pc = 0x2C71D0u;
label_2c71d0:
    // 0x2c71d0: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C71D0u;
    SET_GPR_U32(ctx, 31, 0x2C71D8u);
    ctx->pc = 0x2C71D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C71D0u;
    // 0x2c71d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C71D0u, 0x2C71D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C71D8u;
label_2c71d8:
    // 0x2c71d8: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2c71d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2c71dc: 0xc6200b2c  lwc1        $f0, 0xB2C($s1)
    ctx->pc = 0x2c71dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c71e0: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x2c71e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c71e4: 0x8f83a2ec  lw          $v1, -0x5D14($gp)
    ctx->pc = 0x2c71e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2c71e8: 0xe6200b38  swc1        $f0, 0xB38($s1)
    ctx->pc = 0x2c71e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2872), bits); }
    // 0x2c71ec: 0xc78491a4  lwc1        $f4, -0x6E5C($gp)
    ctx->pc = 0x2c71ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c71f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c71f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c71f4: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x2c71f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c71f8: 0xe6220aec  swc1        $f2, 0xAEC($s1)
    ctx->pc = 0x2c71f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2796), bits); }
    // 0x2c71fc: 0xc4430010  lwc1        $f3, 0x10($v0)
    ctx->pc = 0x2c71fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c7200: 0xe6230af0  swc1        $f3, 0xAF0($s1)
    ctx->pc = 0x2c7200u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2800), bits); }
    // 0x2c7204: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2c7204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7208: 0xe6210af4  swc1        $f1, 0xAF4($s1)
    ctx->pc = 0x2c7208u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2804), bits); }
    // 0x2c720c: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x2c720cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7210: 0xc6470030  lwc1        $f7, 0x30($s2)
    ctx->pc = 0x2c7210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c7214: 0x46030141  sub.s       $f5, $f0, $f3
    ctx->pc = 0x2c7214u;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2c7218: 0xc6460038  lwc1        $f6, 0x38($s2)
    ctx->pc = 0x2c7218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c721c: 0x46023881  sub.s       $f2, $f7, $f2
    ctx->pc = 0x2c721cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x2c7220: 0x46013501  sub.s       $f20, $f6, $f1
    ctx->pc = 0x2c7220u;
    ctx->f[20] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x2c7224: 0x46052842  mul.s       $f1, $f5, $f5
    ctx->pc = 0x2c7224u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2c7228: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x2c7228u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c722c: 0x4614a082  mul.s       $f2, $f20, $f20
    ctx->pc = 0x2c722cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2c7230: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c7230u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c7234: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c7234u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c7238: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x2c7238u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c723c: 0x0  nop
    ctx->pc = 0x2c723cu;
    // NOP
    // 0x2c7240: 0x450200e2  bc1fl       . + 4 + (0xE2 << 2)
    ctx->pc = 0x2C7240u;
    {
        const bool branch_taken_0x2c7240 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c7240) {
            ctx->pc = 0x2C7244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7240u;
            // 0x2c7244: 0xc62c0aec  lwc1        $f12, 0xAEC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C75CCu;
            goto label_2c75cc;
        }
    }
    ctx->pc = 0x2C7248u;
    // 0x2c7248: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x2c7248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x2c724c: 0xae3002a8  sw          $s0, 0x2A8($s1)
    ctx->pc = 0x2c724cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 16));
    // 0x2c7250: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c7250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c7254: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x2C7254u;
    {
        const bool branch_taken_0x2c7254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7254u;
        // 0x2c7258: 0xae220698  sw          $v0, 0x698($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7254) {
            ctx->pc = 0x2C75C8u;
            goto label_2c75c8;
        }
    }
    ctx->pc = 0x2C725Cu;
label_2c725c:
    // 0x2c725c: 0x8e230aa8  lw          $v1, 0xAA8($s1)
    ctx->pc = 0x2c725cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2728)));
    // 0x2c7260: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x2c7260u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2c7264: 0x104000bc  beqz        $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x2C7264u;
    {
        const bool branch_taken_0x2c7264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7264u;
        // 0x2c7268: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7264) {
            ctx->pc = 0x2C7558u;
            goto label_2c7558;
        }
    }
    ctx->pc = 0x2C726Cu;
    // 0x2c726c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c726cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c7270: 0x24429e70  addiu       $v0, $v0, -0x6190
    ctx->pc = 0x2c7270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942320));
    // 0x2c7274: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c7274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c7278: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c7278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c727c: 0x800008  jr          $a0
    ctx->pc = 0x2C727Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C7284u: goto label_2c7284;
            case 0x2C72BCu: goto label_2c72bc;
            case 0x2C7334u: goto label_2c7334;
            case 0x2C7364u: goto label_2c7364;
            case 0x2C7438u: goto label_2c7438;
            case 0x2C749Cu: goto label_2c749c;
            case 0x2C7578u: goto label_2c7578;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C727Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C7284u;
label_2c7284:
    // 0x2c7284: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c7284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7288: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C7288u;
    SET_GPR_U32(ctx, 31, 0x2C7290u);
    ctx->pc = 0x2C728Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7288u;
    // 0x2c728c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C7288u, 0x2C7290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7290u;
label_2c7290:
    // 0x2c7290: 0x26560030  addiu       $s6, $s2, 0x30
    ctx->pc = 0x2c7290u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x2c7294: 0xc6200b28  lwc1        $f0, 0xB28($s1)
    ctx->pc = 0x2c7294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7298: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c7298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c729c: 0xae220aa8  sw          $v0, 0xAA8($s1)
    ctx->pc = 0x2c729cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 2));
    // 0x2c72a0: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x2c72a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c72a4: 0xe6200b38  swc1        $f0, 0xB38($s1)
    ctx->pc = 0x2c72a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2872), bits); }
    // 0x2c72a8: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x2c72a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c72ac: 0xc62c0aec  lwc1        $f12, 0xAEC($s1)
    ctx->pc = 0x2c72acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c72b0: 0x26540070  addiu       $s4, $s2, 0x70
    ctx->pc = 0x2c72b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x2c72b4: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x2C72B4u;
    {
        const bool branch_taken_0x2c72b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C72B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C72B4u;
        // 0x2c72b8: 0xc6470030  lwc1        $f7, 0x30($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c72b4) {
            ctx->pc = 0x2C754Cu;
            goto label_2c754c;
        }
    }
    ctx->pc = 0x2C72BCu;
label_2c72bc:
    // 0x2c72bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c72bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c72c0: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C72C0u;
    SET_GPR_U32(ctx, 31, 0x2C72C8u);
    ctx->pc = 0x2C72C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C72C0u;
    // 0x2c72c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C72C0u, 0x2C72C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C72C8u;
label_2c72c8:
    // 0x2c72c8: 0x8f82b230  lw          $v0, -0x4DD0($gp)
    ctx->pc = 0x2c72c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2c72cc: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2c72ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2c72d0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2c72d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c72d4: 0xc44c008c  lwc1        $f12, 0x8C($v0)
    ctx->pc = 0x2c72d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c72d8: 0xe62c0aec  swc1        $f12, 0xAEC($s1)
    ctx->pc = 0x2c72d8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2796), bits); }
    // 0x2c72dc: 0xc4410090  lwc1        $f1, 0x90($v0)
    ctx->pc = 0x2c72dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c72e0: 0xe6210af0  swc1        $f1, 0xAF0($s1)
    ctx->pc = 0x2c72e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2800), bits); }
    // 0x2c72e4: 0xc4440094  lwc1        $f4, 0x94($v0)
    ctx->pc = 0x2c72e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c72e8: 0xe6240af4  swc1        $f4, 0xAF4($s1)
    ctx->pc = 0x2c72e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2804), bits); }
    // 0x2c72ec: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x2c72ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c72f0: 0xc6470030  lwc1        $f7, 0x30($s2)
    ctx->pc = 0x2c72f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c72f4: 0x46000941  sub.s       $f5, $f1, $f0
    ctx->pc = 0x2c72f4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c72f8: 0xc6460038  lwc1        $f6, 0x38($s2)
    ctx->pc = 0x2c72f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c72fc: 0x46076081  sub.s       $f2, $f12, $f7
    ctx->pc = 0x2c72fcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[7]);
    // 0x2c7300: 0x46062501  sub.s       $f20, $f4, $f6
    ctx->pc = 0x2c7300u;
    ctx->f[20] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    // 0x2c7304: 0x46052842  mul.s       $f1, $f5, $f5
    ctx->pc = 0x2c7304u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2c7308: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x2c7308u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c730c: 0x4614a082  mul.s       $f2, $f20, $f20
    ctx->pc = 0x2c730cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2c7310: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c7310u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c7314: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c7314u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c7318: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2c7318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c731c: 0x0  nop
    ctx->pc = 0x2c731cu;
    // NOP
    // 0x2c7320: 0x4500009d  bc1f        . + 4 + (0x9D << 2)
    ctx->pc = 0x2C7320u;
    {
        const bool branch_taken_0x2c7320 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C7324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7320u;
        // 0x2c7324: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7320) {
            ctx->pc = 0x2C7598u;
            goto label_2c7598;
        }
    }
    ctx->pc = 0x2C7328u;
    // 0x2c7328: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x2c7328u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c732c: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x2C732Cu;
    {
        const bool branch_taken_0x2c732c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C732Cu;
        // 0x2c7330: 0xae220aa8  sw          $v0, 0xAA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c732c) {
            ctx->pc = 0x2C75D4u;
            goto label_2c75d4;
        }
    }
    ctx->pc = 0x2C7334u;
label_2c7334:
    // 0x2c7334: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c7334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7338: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C7338u;
    SET_GPR_U32(ctx, 31, 0x2C7340u);
    ctx->pc = 0x2C733Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7338u;
    // 0x2c733c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C7338u, 0x2C7340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7340u;
label_2c7340:
    // 0x2c7340: 0x26560030  addiu       $s6, $s2, 0x30
    ctx->pc = 0x2c7340u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x2c7344: 0xc6470030  lwc1        $f7, 0x30($s2)
    ctx->pc = 0x2c7344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c7348: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x2c7348u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c734c: 0xc6460038  lwc1        $f6, 0x38($s2)
    ctx->pc = 0x2c734cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c7350: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x2c7350u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c7354: 0xc62c0aec  lwc1        $f12, 0xAEC($s1)
    ctx->pc = 0x2c7354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c7358: 0x26540070  addiu       $s4, $s2, 0x70
    ctx->pc = 0x2c7358u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x2c735c: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x2C735Cu;
    {
        const bool branch_taken_0x2c735c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C735Cu;
        // 0x2c7360: 0xc6240af4  lwc1        $f4, 0xAF4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c735c) {
            ctx->pc = 0x2C75E0u;
            goto label_2c75e0;
        }
    }
    ctx->pc = 0x2C7364u;
label_2c7364:
    // 0x2c7364: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c7364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7368: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C7368u;
    SET_GPR_U32(ctx, 31, 0x2C7370u);
    ctx->pc = 0x2C736Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7368u;
    // 0x2c736c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C7368u, 0x2C7370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7370u;
label_2c7370:
    // 0x2c7370: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x2c7370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c7374: 0x8e2402a8  lw          $a0, 0x2A8($s1)
    ctx->pc = 0x2c7374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
    // 0x2c7378: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c7378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c737c: 0xc099286  jal         func_264A18
    ctx->pc = 0x2C737Cu;
    SET_GPR_U32(ctx, 31, 0x2C7384u);
    ctx->pc = 0x2C7380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C737Cu;
    // 0x2c7380: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264A18u, 0x2C737Cu, 0x2C7384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7384u;
label_2c7384:
    // 0x2c7384: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2c7384u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7388: 0x18e00085  blez        $a3, . + 4 + (0x85 << 2)
    ctx->pc = 0x2C7388u;
    {
        const bool branch_taken_0x2c7388 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2C738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7388u;
        // 0x2c738c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7388) {
            ctx->pc = 0x2C75A0u;
            goto label_2c75a0;
        }
    }
    ctx->pc = 0x2C7390u;
    // 0x2c7390: 0x8f86a2ec  lw          $a2, -0x5D14($gp)
    ctx->pc = 0x2c7390u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2c7394: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x2c7394u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c7398: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x2c7398u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c739c: 0x26560030  addiu       $s6, $s2, 0x30
    ctx->pc = 0x2c739cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x2c73a0: 0x26540070  addiu       $s4, $s2, 0x70
    ctx->pc = 0x2c73a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x2c73a4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2c73a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2c73a8:
    // 0x2c73a8: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x2c73a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2c73ac: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2c73acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c73b0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2c73b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2c73b4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2c73b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2c73b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c73b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c73bc: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x2c73bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c73c0: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x2c73c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2c73c4: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x2c73c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c73c8: 0xe6220aec  swc1        $f2, 0xAEC($s1)
    ctx->pc = 0x2c73c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2796), bits); }
    // 0x2c73cc: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x2c73ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c73d0: 0xe6230af0  swc1        $f3, 0xAF0($s1)
    ctx->pc = 0x2c73d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2800), bits); }
    // 0x2c73d4: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x2c73d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c73d8: 0xe6210af4  swc1        $f1, 0xAF4($s1)
    ctx->pc = 0x2c73d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2804), bits); }
    // 0x2c73dc: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x2c73dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c73e0: 0xc6470030  lwc1        $f7, 0x30($s2)
    ctx->pc = 0x2c73e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c73e4: 0x46001941  sub.s       $f5, $f3, $f0
    ctx->pc = 0x2c73e4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2c73e8: 0xc6460038  lwc1        $f6, 0x38($s2)
    ctx->pc = 0x2c73e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c73ec: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x2c73ecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
    // 0x2c73f0: 0x46060d01  sub.s       $f20, $f1, $f6
    ctx->pc = 0x2c73f0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x2c73f4: 0x46052842  mul.s       $f1, $f5, $f5
    ctx->pc = 0x2c73f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2c73f8: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x2c73f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c73fc: 0x4614a082  mul.s       $f2, $f20, $f20
    ctx->pc = 0x2c73fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2c7400: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c7400u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c7404: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c7404u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c7408: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x2c7408u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c740c: 0x0  nop
    ctx->pc = 0x2c740cu;
    // NOP
    // 0x2c7410: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C7410u;
    {
        const bool branch_taken_0x2c7410 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C7414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7410u;
        // 0x2c7414: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7410) {
            ctx->pc = 0x2C741Cu;
            goto label_2c741c;
        }
    }
    ctx->pc = 0x2C7418u;
    // 0x2c7418: 0xae220aa8  sw          $v0, 0xAA8($s1)
    ctx->pc = 0x2c7418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 2));
label_2c741c:
    // 0x2c741c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2c741cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2c7420: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x2c7420u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2c7424: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2C7424u;
    {
        const bool branch_taken_0x2c7424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7424u;
        // 0x2c7428: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7424) {
            ctx->pc = 0x2C73A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c73a8;
        }
    }
    ctx->pc = 0x2C742Cu;
    // 0x2c742c: 0xc62c0aec  lwc1        $f12, 0xAEC($s1)
    ctx->pc = 0x2c742cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c7430: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x2C7430u;
    {
        const bool branch_taken_0x2c7430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7430u;
        // 0x2c7434: 0xc6240af4  lwc1        $f4, 0xAF4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7430) {
            ctx->pc = 0x2C75E0u;
            goto label_2c75e0;
        }
    }
    ctx->pc = 0x2C7438u;
label_2c7438:
    // 0x2c7438: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c7438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c743c: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C743Cu;
    SET_GPR_U32(ctx, 31, 0x2C7444u);
    ctx->pc = 0x2C7440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C743Cu;
    // 0x2c7440: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C743Cu, 0x2C7444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7444u;
label_2c7444:
    // 0x2c7444: 0xc6210af0  lwc1        $f1, 0xAF0($s1)
    ctx->pc = 0x2c7444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7448: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x2c7448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c744c: 0xc62c0aec  lwc1        $f12, 0xAEC($s1)
    ctx->pc = 0x2c744cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c7450: 0xc6470030  lwc1        $f7, 0x30($s2)
    ctx->pc = 0x2c7450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c7454: 0x46000941  sub.s       $f5, $f1, $f0
    ctx->pc = 0x2c7454u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c7458: 0xc6240af4  lwc1        $f4, 0xAF4($s1)
    ctx->pc = 0x2c7458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c745c: 0x46076081  sub.s       $f2, $f12, $f7
    ctx->pc = 0x2c745cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[7]);
    // 0x2c7460: 0xc6460038  lwc1        $f6, 0x38($s2)
    ctx->pc = 0x2c7460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c7464: 0x46052842  mul.s       $f1, $f5, $f5
    ctx->pc = 0x2c7464u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2c7468: 0xc78391a8  lwc1        $f3, -0x6E58($gp)
    ctx->pc = 0x2c7468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c746c: 0x46062501  sub.s       $f20, $f4, $f6
    ctx->pc = 0x2c746cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    // 0x2c7470: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x2c7470u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c7474: 0x4614a082  mul.s       $f2, $f20, $f20
    ctx->pc = 0x2c7474u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2c7478: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c7478u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c747c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c747cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c7480: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2c7480u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c7484: 0x0  nop
    ctx->pc = 0x2c7484u;
    // NOP
    // 0x2c7488: 0x4500004d  bc1f        . + 4 + (0x4D << 2)
    ctx->pc = 0x2C7488u;
    {
        const bool branch_taken_0x2c7488 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7488u;
        // 0x2c748c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7488) {
            ctx->pc = 0x2C75C0u;
            goto label_2c75c0;
        }
    }
    ctx->pc = 0x2C7490u;
    // 0x2c7490: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x2c7490u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c7494: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x2C7494u;
    {
        const bool branch_taken_0x2c7494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7494u;
        // 0x2c7498: 0xae220aa8  sw          $v0, 0xAA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7494) {
            ctx->pc = 0x2C75D4u;
            goto label_2c75d4;
        }
    }
    ctx->pc = 0x2C749Cu;
label_2c749c:
    // 0x2c749c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c749cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c74a0: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C74A0u;
    SET_GPR_U32(ctx, 31, 0x2C74A8u);
    ctx->pc = 0x2C74A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C74A0u;
    // 0x2c74a4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C74A0u, 0x2C74A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C74A8u;
label_2c74a8:
    // 0x2c74a8: 0x8f82b230  lw          $v0, -0x4DD0($gp)
    ctx->pc = 0x2c74a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2c74ac: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x2c74acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x2c74b0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2c74b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2c74b4: 0xc442008c  lwc1        $f2, 0x8C($v0)
    ctx->pc = 0x2c74b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c74b8: 0xe6220aec  swc1        $f2, 0xAEC($s1)
    ctx->pc = 0x2c74b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2796), bits); }
    // 0x2c74bc: 0xc4430090  lwc1        $f3, 0x90($v0)
    ctx->pc = 0x2c74bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c74c0: 0xe6230af0  swc1        $f3, 0xAF0($s1)
    ctx->pc = 0x2c74c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2800), bits); }
    // 0x2c74c4: 0xc4410094  lwc1        $f1, 0x94($v0)
    ctx->pc = 0x2c74c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c74c8: 0xe6210af4  swc1        $f1, 0xAF4($s1)
    ctx->pc = 0x2c74c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2804), bits); }
    // 0x2c74cc: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x2c74ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c74d0: 0xc6470030  lwc1        $f7, 0x30($s2)
    ctx->pc = 0x2c74d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c74d4: 0x46001941  sub.s       $f5, $f3, $f0
    ctx->pc = 0x2c74d4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2c74d8: 0xc6460038  lwc1        $f6, 0x38($s2)
    ctx->pc = 0x2c74d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c74dc: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x2c74dcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
    // 0x2c74e0: 0x46060d01  sub.s       $f20, $f1, $f6
    ctx->pc = 0x2c74e0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x2c74e4: 0x46052842  mul.s       $f1, $f5, $f5
    ctx->pc = 0x2c74e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2c74e8: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x2c74e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c74ec: 0x4614a082  mul.s       $f2, $f20, $f20
    ctx->pc = 0x2c74ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2c74f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c74f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c74f4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c74f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c74f8: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x2c74f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c74fc: 0x0  nop
    ctx->pc = 0x2c74fcu;
    // NOP
    // 0x2c7500: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C7500u;
    {
        const bool branch_taken_0x2c7500 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C7504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7500u;
        // 0x2c7504: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7500) {
            ctx->pc = 0x2C750Cu;
            goto label_2c750c;
        }
    }
    ctx->pc = 0x2C7508u;
    // 0x2c7508: 0xae220aa8  sw          $v0, 0xAA8($s1)
    ctx->pc = 0x2c7508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 2));
label_2c750c:
    // 0x2c750c: 0xc6210b50  lwc1        $f1, 0xB50($s1)
    ctx->pc = 0x2c750cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7510: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c7510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c7514: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c7514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7518: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c7518u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c751c: 0x0  nop
    ctx->pc = 0x2c751cu;
    // NOP
    // 0x2c7520: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x2C7520u;
    {
        const bool branch_taken_0x2c7520 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C7524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7520u;
        // 0x2c7524: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7520) {
            ctx->pc = 0x2C75C8u;
            goto label_2c75c8;
        }
    }
    ctx->pc = 0x2C7528u;
    // 0x2c7528: 0x8e220a90  lw          $v0, 0xA90($s1)
    ctx->pc = 0x2c7528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2c752c: 0xae200b50  sw          $zero, 0xB50($s1)
    ctx->pc = 0x2c752cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2896), GPR_U32(ctx, 0));
    // 0x2c7530: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x2c7530u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c7534: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2c7534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2c7538: 0xc62c0aec  lwc1        $f12, 0xAEC($s1)
    ctx->pc = 0x2c7538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c753c: 0xae220a90  sw          $v0, 0xA90($s1)
    ctx->pc = 0x2c753cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2704), GPR_U32(ctx, 2));
    // 0x2c7540: 0x26560030  addiu       $s6, $s2, 0x30
    ctx->pc = 0x2c7540u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x2c7544: 0xc6470030  lwc1        $f7, 0x30($s2)
    ctx->pc = 0x2c7544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c7548: 0x26540070  addiu       $s4, $s2, 0x70
    ctx->pc = 0x2c7548u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_2c754c:
    // 0x2c754c: 0xc6460038  lwc1        $f6, 0x38($s2)
    ctx->pc = 0x2c754cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c7550: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2C7550u;
    {
        const bool branch_taken_0x2c7550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7550u;
        // 0x2c7554: 0xc6240af4  lwc1        $f4, 0xAF4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7550) {
            ctx->pc = 0x2C75E0u;
            goto label_2c75e0;
        }
    }
    ctx->pc = 0x2C7558u;
label_2c7558:
    // 0x2c7558: 0xc6470030  lwc1        $f7, 0x30($s2)
    ctx->pc = 0x2c7558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c755c: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x2c755cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c7560: 0xc6460038  lwc1        $f6, 0x38($s2)
    ctx->pc = 0x2c7560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c7564: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x2c7564u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c7568: 0xc62c0aec  lwc1        $f12, 0xAEC($s1)
    ctx->pc = 0x2c7568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c756c: 0x26560030  addiu       $s6, $s2, 0x30
    ctx->pc = 0x2c756cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x2c7570: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2C7570u;
    {
        const bool branch_taken_0x2c7570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7570u;
        // 0x2c7574: 0xc6240af4  lwc1        $f4, 0xAF4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7570) {
            ctx->pc = 0x2C75DCu;
            goto label_2c75dc;
        }
    }
    ctx->pc = 0x2C7578u;
label_2c7578:
    // 0x2c7578: 0xc6470030  lwc1        $f7, 0x30($s2)
    ctx->pc = 0x2c7578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c757c: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x2c757cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c7580: 0xc6460038  lwc1        $f6, 0x38($s2)
    ctx->pc = 0x2c7580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c7584: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x2c7584u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c7588: 0xc62c0aec  lwc1        $f12, 0xAEC($s1)
    ctx->pc = 0x2c7588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c758c: 0x26560030  addiu       $s6, $s2, 0x30
    ctx->pc = 0x2c758cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x2c7590: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2C7590u;
    {
        const bool branch_taken_0x2c7590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7590u;
        // 0x2c7594: 0xc6240af4  lwc1        $f4, 0xAF4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7590) {
            ctx->pc = 0x2C75DCu;
            goto label_2c75dc;
        }
    }
    ctx->pc = 0x2C7598u;
label_2c7598:
    // 0x2c7598: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2C7598u;
    {
        const bool branch_taken_0x2c7598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7598u;
        // 0x2c759c: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7598) {
            ctx->pc = 0x2C75D4u;
            goto label_2c75d4;
        }
    }
    ctx->pc = 0x2C75A0u;
label_2c75a0:
    // 0x2c75a0: 0xc6470030  lwc1        $f7, 0x30($s2)
    ctx->pc = 0x2c75a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c75a4: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x2c75a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c75a8: 0xc6460038  lwc1        $f6, 0x38($s2)
    ctx->pc = 0x2c75a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c75ac: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x2c75acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c75b0: 0xc62c0aec  lwc1        $f12, 0xAEC($s1)
    ctx->pc = 0x2c75b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c75b4: 0x26560030  addiu       $s6, $s2, 0x30
    ctx->pc = 0x2c75b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x2c75b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C75B8u;
    {
        const bool branch_taken_0x2c75b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C75BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C75B8u;
        // 0x2c75bc: 0xc6240af4  lwc1        $f4, 0xAF4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c75b8) {
            ctx->pc = 0x2C75DCu;
            goto label_2c75dc;
        }
    }
    ctx->pc = 0x2C75C0u;
label_2c75c0:
    // 0x2c75c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C75C0u;
    {
        const bool branch_taken_0x2c75c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C75C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C75C0u;
        // 0x2c75c4: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c75c0) {
            ctx->pc = 0x2C75D4u;
            goto label_2c75d4;
        }
    }
    ctx->pc = 0x2C75C8u;
label_2c75c8:
    // 0x2c75c8: 0xc62c0aec  lwc1        $f12, 0xAEC($s1)
    ctx->pc = 0x2c75c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2c75cc:
    // 0x2c75cc: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x2c75ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c75d0: 0xc6240af4  lwc1        $f4, 0xAF4($s1)
    ctx->pc = 0x2c75d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2c75d4:
    // 0x2c75d4: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x2c75d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c75d8: 0x26560030  addiu       $s6, $s2, 0x30
    ctx->pc = 0x2c75d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_2c75dc:
    // 0x2c75dc: 0x26540070  addiu       $s4, $s2, 0x70
    ctx->pc = 0x2c75dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_2c75e0:
    // 0x2c75e0: 0x46076301  sub.s       $f12, $f12, $f7
    ctx->pc = 0x2c75e0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[7]);
    // 0x2c75e4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2c75e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c75e8: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2C75E8u;
    SET_GPR_U32(ctx, 31, 0x2C75F0u);
    ctx->pc = 0x2C75ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C75E8u;
    // 0x2c75ec: 0x46062501  sub.s       $f20, $f4, $f6 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2C75E8u, 0x2C75F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C75F0u;
label_2c75f0:
    // 0x2c75f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c75f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c75f4: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2C75F4u;
    SET_GPR_U32(ctx, 31, 0x2C75FCu);
    ctx->pc = 0x2C75F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C75F4u;
    // 0x2c75f8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2C75F4u, 0x2C75FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C75FCu;
label_2c75fc:
    // 0x2c75fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c75fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7600: 0xc0b5d44  jal         func_2D7510
    ctx->pc = 0x2C7600u;
    SET_GPR_U32(ctx, 31, 0x2C7608u);
    ctx->pc = 0x2C7604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7600u;
    // 0x2c7604: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7510u, 0x2C7600u, 0x2C7608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7608u;
label_2c7608:
    // 0x2c7608: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2c7608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2c760c: 0xdc259e90  ld          $a1, -0x6170($at)
    ctx->pc = 0x2c760cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9E90u));
    // 0x2c7610: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2C7610u;
    SET_GPR_U32(ctx, 31, 0x2C7618u);
    ctx->pc = 0x2C7614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7610u;
    // 0x2c7614: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2C7610u, 0x2C7618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7618u;
label_2c7618:
    // 0x2c7618: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2c7618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2c761c: 0xdc259e98  ld          $a1, -0x6168($at)
    ctx->pc = 0x2c761cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9E98u));
    // 0x2c7620: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x2C7620u;
    SET_GPR_U32(ctx, 31, 0x2C7628u);
    ctx->pc = 0x2C7624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7620u;
    // 0x2c7624: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x2C7620u, 0x2C7628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7628u;
label_2c7628:
    // 0x2c7628: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x2C7628u;
    SET_GPR_U32(ctx, 31, 0x2C7630u);
    ctx->pc = 0x2C762Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7628u;
    // 0x2c762c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x2C7628u, 0x2C7630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7630u;
label_2c7630:
    // 0x2c7630: 0xc64c004c  lwc1        $f12, 0x4C($s2)
    ctx->pc = 0x2c7630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c7634: 0xc0a138e  jal         func_284E38
    ctx->pc = 0x2C7634u;
    SET_GPR_U32(ctx, 31, 0x2C763Cu);
    ctx->pc = 0x2C7638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7634u;
    // 0x2c7638: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E38u, 0x2C7634u, 0x2C763Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C763Cu;
label_2c763c:
    // 0x2c763c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2c763cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2c7640: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2C7640u;
    SET_GPR_U32(ctx, 31, 0x2C7648u);
    ctx->pc = 0x2C7644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7640u;
    // 0x2c7644: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2C7640u, 0x2C7648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7648u;
label_2c7648:
    // 0x2c7648: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c7648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c764c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2c764cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7650: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2C7650u;
    SET_GPR_U32(ctx, 31, 0x2C7658u);
    ctx->pc = 0x2C7654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7650u;
    // 0x2c7654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2C7650u, 0x2C7658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7658u;
label_2c7658:
    // 0x2c7658: 0x4430006  bgezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C7658u;
    {
        const bool branch_taken_0x2c7658 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2c7658) {
            ctx->pc = 0x2C765Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7658u;
            // 0x2c765c: 0xc6210b40  lwc1        $f1, 0xB40($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7674u;
            goto label_2c7674;
        }
    }
    ctx->pc = 0x2C7660u;
    // 0x2c7660: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c7660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7664: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2C7664u;
    SET_GPR_U32(ctx, 31, 0x2C766Cu);
    ctx->pc = 0x2C7668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7664u;
    // 0x2c7668: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2C7664u, 0x2C766Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C766Cu;
label_2c766c:
    // 0x2c766c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c766cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7670: 0xc6210b40  lwc1        $f1, 0xB40($s1)
    ctx->pc = 0x2c7670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c7674:
    // 0x2c7674: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x2c7674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7678: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x2c7678u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c767c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2C767Cu;
    SET_GPR_U32(ctx, 31, 0x2C7684u);
    ctx->pc = 0x2C7680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C767Cu;
    // 0x2c7680: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2C767Cu, 0x2C7684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7684u;
label_2c7684:
    // 0x2c7684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7688: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2C7688u;
    SET_GPR_U32(ctx, 31, 0x2C7690u);
    ctx->pc = 0x2C768Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7688u;
    // 0x2c768c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2C7688u, 0x2C7690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7690u;
label_2c7690:
    // 0x2c7690: 0x5840000a  blezl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C7690u;
    {
        const bool branch_taken_0x2c7690 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c7690) {
            ctx->pc = 0x2C7694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7690u;
            // 0x2c7694: 0xc640004c  lwc1        $f0, 0x4C($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C76BCu;
            goto label_2c76bc;
        }
    }
    ctx->pc = 0x2C7698u;
    // 0x2c7698: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c7698u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c769c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2c769cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c76a0: 0x0  nop
    ctx->pc = 0x2c76a0u;
    // NOP
    // 0x2c76a4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C76A4u;
    {
        const bool branch_taken_0x2c76a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C76A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C76A4u;
        // 0x2c76a8: 0xc640004c  lwc1        $f0, 0x4C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c76a4) {
            ctx->pc = 0x2C76B4u;
            goto label_2c76b4;
        }
    }
    ctx->pc = 0x2C76ACu;
    // 0x2c76ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C76ACu;
    {
        const bool branch_taken_0x2c76ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C76B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C76ACu;
        // 0x2c76b0: 0x46140000  add.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c76ac) {
            ctx->pc = 0x2C76C0u;
            goto label_2c76c0;
        }
    }
    ctx->pc = 0x2C76B4u;
label_2c76b4:
    // 0x2c76b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C76B4u;
    {
        const bool branch_taken_0x2c76b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C76B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C76B4u;
        // 0x2c76b8: 0x46140001  sub.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c76b4) {
            ctx->pc = 0x2C76C0u;
            goto label_2c76c0;
        }
    }
    ctx->pc = 0x2C76BCu;
label_2c76bc:
    // 0x2c76bc: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x2c76bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_2c76c0:
    // 0x2c76c0: 0xe640004c  swc1        $f0, 0x4C($s2)
    ctx->pc = 0x2c76c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
    // 0x2c76c4: 0xc641004c  lwc1        $f1, 0x4C($s2)
    ctx->pc = 0x2c76c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c76c8: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2c76c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2c76cc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c76ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c76d0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2c76d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c76d4: 0x0  nop
    ctx->pc = 0x2c76d4u;
    // NOP
    // 0x2c76d8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2C76D8u;
    {
        const bool branch_taken_0x2c76d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C76DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C76D8u;
        // 0x2c76dc: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c76d8) {
            ctx->pc = 0x2C770Cu;
            goto label_2c770c;
        }
    }
    ctx->pc = 0x2C76E0u;
    // 0x2c76e0: 0x8e230a94  lw          $v1, 0xA94($s1)
    ctx->pc = 0x2c76e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2708)));
    // 0x2c76e4: 0x0  nop
    ctx->pc = 0x2c76e4u;
    // NOP
label_2c76e8:
    // 0x2c76e8: 0x46020041  sub.s       $f1, $f0, $f2
    ctx->pc = 0x2c76e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2c76ec: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x2c76ecu;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x2c76f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c76f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c76f4: 0xe641004c  swc1        $f1, 0x4C($s2)
    ctx->pc = 0x2c76f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
    // 0x2c76f8: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x2c76f8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x2c76fc: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C76FCu;
    {
        const bool branch_taken_0x2c76fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c76fc) {
            ctx->pc = 0x2C76E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c76e8;
        }
    }
    ctx->pc = 0x2C7704u;
    // 0x2c7704: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C7704u;
    {
        const bool branch_taken_0x2c7704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7704) {
            ctx->pc = 0x2C7710u;
            goto label_2c7710;
        }
    }
    ctx->pc = 0x2C770Cu;
label_2c770c:
    // 0x2c770c: 0x8e230a94  lw          $v1, 0xA94($s1)
    ctx->pc = 0x2c770cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2708)));
label_2c7710:
    // 0x2c7710: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2c7710u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c7714: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2c7714u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c7718: 0x0  nop
    ctx->pc = 0x2c7718u;
    // NOP
    // 0x2c771c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2C771Cu;
    {
        const bool branch_taken_0x2c771c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C7720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C771Cu;
        // 0x2c7720: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c771c) {
            ctx->pc = 0x2C7754u;
            goto label_2c7754;
        }
    }
    ctx->pc = 0x2C7724u;
    // 0x2c7724: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2c7724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2c7728: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2c7728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c772c: 0x0  nop
    ctx->pc = 0x2c772cu;
    // NOP
label_2c7730:
    // 0x2c7730: 0x46030800  add.s       $f0, $f1, $f3
    ctx->pc = 0x2c7730u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2c7734: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2c7734u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c7738: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2c7738u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2c773c: 0x0  nop
    ctx->pc = 0x2c773cu;
    // NOP
    // 0x2c7740: 0x0  nop
    ctx->pc = 0x2c7740u;
    // NOP
    // 0x2c7744: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C7744u;
    {
        const bool branch_taken_0x2c7744 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c7744) {
            ctx->pc = 0x2C7730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c7730;
        }
    }
    ctx->pc = 0x2C774Cu;
    // 0x2c774c: 0xe640004c  swc1        $f0, 0x4C($s2)
    ctx->pc = 0x2c774cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
    // 0x2c7750: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c7750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c7754:
    // 0x2c7754: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C7754u;
    {
        const bool branch_taken_0x2c7754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C7758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7754u;
        // 0x2c7758: 0xc6210b34  lwc1        $f1, 0xB34($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7754) {
            ctx->pc = 0x2C779Cu;
            goto label_2c779c;
        }
    }
    ctx->pc = 0x2C775Cu;
    // 0x2c775c: 0xc6200b3c  lwc1        $f0, 0xB3C($s1)
    ctx->pc = 0x2c775cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7760: 0xc6220b38  lwc1        $f2, 0xB38($s1)
    ctx->pc = 0x2c7760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7764: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c7764u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c7768: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2c7768u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c776c: 0x0  nop
    ctx->pc = 0x2c776cu;
    // NOP
    // 0x2c7770: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C7770u;
    {
        const bool branch_taken_0x2c7770 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C7774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7770u;
        // 0x2c7774: 0xe6200b3c  swc1        $f0, 0xB3C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2876), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7770) {
            ctx->pc = 0x2C777Cu;
            goto label_2c777c;
        }
    }
    ctx->pc = 0x2C7778u;
    // 0x2c7778: 0xe6220b3c  swc1        $f2, 0xB3C($s1)
    ctx->pc = 0x2c7778u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2876), bits); }
label_2c777c:
    // 0x2c777c: 0x46001047  neg.s       $f1, $f2
    ctx->pc = 0x2c777cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[2]);
    // 0x2c7780: 0xc6200b3c  lwc1        $f0, 0xB3C($s1)
    ctx->pc = 0x2c7780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7784: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c7784u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c7788: 0x0  nop
    ctx->pc = 0x2c7788u;
    // NOP
    // 0x2c778c: 0x45030011  bc1tl       . + 4 + (0x11 << 2)
    ctx->pc = 0x2C778Cu;
    {
        const bool branch_taken_0x2c778c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c778c) {
            ctx->pc = 0x2C7790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C778Cu;
            // 0x2c7790: 0xe6210b3c  swc1        $f1, 0xB3C($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2876), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C77D4u;
            goto label_2c77d4;
        }
    }
    ctx->pc = 0x2C7794u;
    // 0x2c7794: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2C7794u;
    {
        const bool branch_taken_0x2c7794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7794u;
        // 0x2c7798: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7794) {
            ctx->pc = 0x2C77D8u;
            goto label_2c77d8;
        }
    }
    ctx->pc = 0x2C779Cu;
label_2c779c:
    // 0x2c779c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2c779cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c77a0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2c77a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c77a4: 0x0  nop
    ctx->pc = 0x2c77a4u;
    // NOP
    // 0x2c77a8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C77A8u;
    {
        const bool branch_taken_0x2c77a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C77ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C77A8u;
        // 0x2c77ac: 0xc6200b3c  lwc1        $f0, 0xB3C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c77a8) {
            ctx->pc = 0x2C77C0u;
            goto label_2c77c0;
        }
    }
    ctx->pc = 0x2C77B0u;
    // 0x2c77b0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c77b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c77b4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2c77b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c77b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C77B8u;
    {
        const bool branch_taken_0x2c77b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C77BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C77B8u;
        // 0x2c77bc: 0xe6200b3c  swc1        $f0, 0xB3C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2876), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c77b8) {
            ctx->pc = 0x2C77CCu;
            goto label_2c77cc;
        }
    }
    ctx->pc = 0x2C77C0u;
label_2c77c0:
    // 0x2c77c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c77c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c77c4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2c77c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c77c8: 0xe6200b3c  swc1        $f0, 0xB3C($s1)
    ctx->pc = 0x2c77c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2876), bits); }
label_2c77cc:
    // 0x2c77cc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2C77CCu;
    {
        const bool branch_taken_0x2c77cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c77cc) {
            ctx->pc = 0x2C77D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C77CCu;
            // 0x2c77d0: 0xe6220b3c  swc1        $f2, 0xB3C($s1) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2876), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C77D4u;
            goto label_2c77d4;
        }
    }
    ctx->pc = 0x2C77D4u;
label_2c77d4:
    // 0x2c77d4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2c77d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_2c77d8:
    // 0x2c77d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c77d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c77dc: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2c77dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2c77e0: 0xc78191ac  lwc1        $f1, -0x6E54($gp)
    ctx->pc = 0x2c77e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c77e4: 0xc64c004c  lwc1        $f12, 0x4C($s2)
    ctx->pc = 0x2c77e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c77e8: 0xc6200b3c  lwc1        $f0, 0xB3C($s1)
    ctx->pc = 0x2c77e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c77ec: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x2c77ecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2c77f0: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2c77f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2c77f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c77f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c77f8: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2c77f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2c77fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c77fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c7800: 0x0  nop
    ctx->pc = 0x2c7800u;
    // NOP
    // 0x2c7804: 0x0  nop
    ctx->pc = 0x2c7804u;
    // NOP
    // 0x2c7808: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2c7808u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x2c780c: 0x0  nop
    ctx->pc = 0x2c780cu;
    // NOP
    // 0x2c7810: 0x0  nop
    ctx->pc = 0x2c7810u;
    // NOP
    // 0x2c7814: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x2c7814u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x2c7818: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x2C7818u;
    SET_GPR_U32(ctx, 31, 0x2C7820u);
    ctx->pc = 0x2C781Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7818u;
    // 0x2c781c: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x2C7818u, 0x2C7820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7820u;
label_2c7820:
    // 0x2c7820: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c7820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7824: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x2C7824u;
    SET_GPR_U32(ctx, 31, 0x2C782Cu);
    ctx->pc = 0x2C7828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7824u;
    // 0x2c7828: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x2C7824u, 0x2C782Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C782Cu;
label_2c782c:
    // 0x2c782c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2c782cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7830: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x2c7830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7834: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c7834u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c7838: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2c7838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c783c: 0xc62c0b4c  lwc1        $f12, 0xB4C($s1)
    ctx->pc = 0x2c783cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c7840: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x2C7840u;
    SET_GPR_U32(ctx, 31, 0x2C7848u);
    ctx->pc = 0x2C7844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7840u;
    // 0x2c7844: 0x460c6300  add.s       $f12, $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x2C7840u, 0x2C7848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7848u;
label_2c7848:
    // 0x2c7848: 0xc78191b0  lwc1        $f1, -0x6E50($gp)
    ctx->pc = 0x2c7848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c784c: 0xc6220b4c  lwc1        $f2, 0xB4C($s1)
    ctx->pc = 0x2c784cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7850: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2c7850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x2c7854: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c7854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c7858: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x2c7858u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c785c: 0xc78091b4  lwc1        $f0, -0x6E4C($gp)
    ctx->pc = 0x2c785cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7860: 0x460c1302  mul.s       $f12, $f2, $f12
    ctx->pc = 0x2c7860u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x2c7864: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2C7864u;
    SET_GPR_U32(ctx, 31, 0x2C786Cu);
    ctx->pc = 0x2C7868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7864u;
    // 0x2c7868: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2C7864u, 0x2C786Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C786Cu;
label_2c786c:
    // 0x2c786c: 0xc78191b8  lwc1        $f1, -0x6E48($gp)
    ctx->pc = 0x2c786cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7870: 0xc6220b4c  lwc1        $f2, 0xB4C($s1)
    ctx->pc = 0x2c7870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7874: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x2c7874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x2c7878: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c7878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c787c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c787cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c7880: 0x460c1302  mul.s       $f12, $f2, $f12
    ctx->pc = 0x2c7880u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x2c7884: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x2C7884u;
    SET_GPR_U32(ctx, 31, 0x2C788Cu);
    ctx->pc = 0x2C7888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7884u;
    // 0x2c7888: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x2C7884u, 0x2C788Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C788Cu;
label_2c788c:
    // 0x2c788c: 0xc78291bc  lwc1        $f2, -0x6E44($gp)
    ctx->pc = 0x2c788cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7890: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2c7890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7894: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x2c7894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7898: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2c7898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c789c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2c789cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2c78a0: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x2c78a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c78a4: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2c78a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2c78a8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2c78a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c78ac: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2c78acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2c78b0: 0xc78c91c0  lwc1        $f12, -0x6E40($gp)
    ctx->pc = 0x2c78b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c78b4: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2c78b4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2c78b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c78b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c78bc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c78bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c78c0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2c78c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c78c4: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x2c78c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c78c8: 0xc09f6c4  jal         func_27DB10
    ctx->pc = 0x2C78C8u;
    SET_GPR_U32(ctx, 31, 0x2C78D0u);
    ctx->pc = 0x2C78CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C78C8u;
    // 0x2c78cc: 0xc44d0084  lwc1        $f13, 0x84($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DB10u, 0x2C78C8u, 0x2C78D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C78D0u;
label_2c78d0:
    // 0x2c78d0: 0xc7a50018  lwc1        $f5, 0x18($sp)
    ctx->pc = 0x2c78d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c78d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c78d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c78d8: 0xc6400078  lwc1        $f0, 0x78($s2)
    ctx->pc = 0x2c78d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c78dc: 0xc7a60010  lwc1        $f6, 0x10($sp)
    ctx->pc = 0x2c78dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c78e0: 0xc6420070  lwc1        $f2, 0x70($s2)
    ctx->pc = 0x2c78e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c78e4: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x2c78e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2c78e8: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x2c78e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c78ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c78ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c78f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c78f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c78f4: 0x46023081  sub.s       $f2, $f6, $f2
    ctx->pc = 0x2c78f4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x2c78f8: 0xe6440034  swc1        $f4, 0x34($s2)
    ctx->pc = 0x2c78f8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x2c78fc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2c78fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c7900: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2c7900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c7904: 0xe6460030  swc1        $f6, 0x30($s2)
    ctx->pc = 0x2c7904u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x2c7908: 0xe6450038  swc1        $f5, 0x38($s2)
    ctx->pc = 0x2c7908u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x2c790c: 0xc09a6cc  jal         func_269B30
    ctx->pc = 0x2C790Cu;
    SET_GPR_U32(ctx, 31, 0x2C7914u);
    ctx->pc = 0x2C7910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C790Cu;
    // 0x2c7910: 0xe7a20000  swc1        $f2, 0x0($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x269B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269B30u, 0x2C790Cu, 0x2C7914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7914u;
label_2c7914:
    // 0x2c7914: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x2c7914u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2c7918: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c7918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c791c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c791cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7920: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c7920u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7924: 0xc09633c  jal         func_258CF0
    ctx->pc = 0x2C7924u;
    SET_GPR_U32(ctx, 31, 0x2C792Cu);
    ctx->pc = 0x2C7928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7924u;
    // 0x2c7928: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258CF0u, 0x2C7924u, 0x2C792Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C792Cu;
label_2c792c:
    // 0x2c792c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c792cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7930: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c7930u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7934: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C7934u;
    {
        const bool branch_taken_0x2c7934 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7934u;
        // 0x2c7938: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7934) {
            ctx->pc = 0x2C7960u;
            goto label_2c7960;
        }
    }
    ctx->pc = 0x2C793Cu;
    // 0x2c793c: 0x0  nop
    ctx->pc = 0x2c793cu;
    // NOP
label_2c7940:
    // 0x2c7940: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c7940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7944: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c7944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7948: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c7948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c794c: 0xc09633c  jal         func_258CF0
    ctx->pc = 0x2C794Cu;
    SET_GPR_U32(ctx, 31, 0x2C7954u);
    ctx->pc = 0x2C7950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C794Cu;
    // 0x2c7950: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258CF0u, 0x2C794Cu, 0x2C7954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7954u;
label_2c7954:
    // 0x2c7954: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2c7954u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7958: 0x1447fff9  bne         $v0, $a3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2C7958u;
    {
        const bool branch_taken_0x2c7958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x2C795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7958u;
        // 0x2c795c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7958) {
            ctx->pc = 0x2C7940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c7940;
        }
    }
    ctx->pc = 0x2C7960u;
label_2c7960:
    // 0x2c7960: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x2c7960u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x2c7964: 0xc0aff0a  jal         func_2BFC28
    ctx->pc = 0x2C7964u;
    SET_GPR_U32(ctx, 31, 0x2C796Cu);
    ctx->pc = 0x2C7968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7964u;
    // 0x2c7968: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BFC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFC28u, 0x2C7964u, 0x2C796Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C796Cu;
label_2c796c:
    // 0x2c796c: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x2c796cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_2c7970:
    // 0x2c7970: 0xdfbe0130  ld          $fp, 0x130($sp)
    ctx->pc = 0x2c7970u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2c7974: 0xdfb70120  ld          $s7, 0x120($sp)
    ctx->pc = 0x2c7974u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2c7978: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x2c7978u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2c797c: 0xdfb50100  ld          $s5, 0x100($sp)
    ctx->pc = 0x2c797cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2c7980: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x2c7980u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2c7984: 0xdfb300e0  ld          $s3, 0xE0($sp)
    ctx->pc = 0x2c7984u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2c7988: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x2c7988u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2c798c: 0xdfb100c0  ld          $s1, 0xC0($sp)
    ctx->pc = 0x2c798cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2c7990: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x2c7990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c7994: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x2c7994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c7998: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x2c7998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c799c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C799Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C79A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C799Cu;
        // 0x2c79a0: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C799Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C79A4u;
}
