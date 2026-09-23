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

// Function: setAnimation
// Address: 0x2bd008 - 0x2be338
void setAnimation_0x2bd008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setAnimation_0x2bd008");
#endif

    switch (ctx->pc) {
        case 0x2bd04cu: goto label_2bd04c;
        case 0x2bd09cu: goto label_2bd09c;
        case 0x2bd0c0u: goto label_2bd0c0;
        case 0x2bd0d8u: goto label_2bd0d8;
        case 0x2bd100u: goto label_2bd100;
        case 0x2bd114u: goto label_2bd114;
        case 0x2bd128u: goto label_2bd128;
        case 0x2bd13cu: goto label_2bd13c;
        case 0x2bd158u: goto label_2bd158;
        case 0x2bd1bcu: goto label_2bd1bc;
        case 0x2bd1dcu: goto label_2bd1dc;
        case 0x2bd1fcu: goto label_2bd1fc;
        case 0x2bd234u: goto label_2bd234;
        case 0x2bd258u: goto label_2bd258;
        case 0x2bd268u: goto label_2bd268;
        case 0x2bd278u: goto label_2bd278;
        case 0x2bd288u: goto label_2bd288;
        case 0x2bd2a8u: goto label_2bd2a8;
        case 0x2bd2b8u: goto label_2bd2b8;
        case 0x2bd2d8u: goto label_2bd2d8;
        case 0x2bd330u: goto label_2bd330;
        case 0x2bd340u: goto label_2bd340;
        case 0x2bd350u: goto label_2bd350;
        case 0x2bd360u: goto label_2bd360;
        case 0x2bd380u: goto label_2bd380;
        case 0x2bd390u: goto label_2bd390;
        case 0x2bd3b0u: goto label_2bd3b0;
        case 0x2bd3f0u: goto label_2bd3f0;
        case 0x2bd400u: goto label_2bd400;
        case 0x2bd410u: goto label_2bd410;
        case 0x2bd420u: goto label_2bd420;
        case 0x2bd488u: goto label_2bd488;
        case 0x2bd4a4u: goto label_2bd4a4;
        case 0x2bd4b4u: goto label_2bd4b4;
        case 0x2bd4d4u: goto label_2bd4d4;
        case 0x2bd4e4u: goto label_2bd4e4;
        case 0x2bd4f4u: goto label_2bd4f4;
        case 0x2bd504u: goto label_2bd504;
        case 0x2bd514u: goto label_2bd514;
        case 0x2bd524u: goto label_2bd524;
        case 0x2bd5f0u: goto label_2bd5f0;
        case 0x2bd600u: goto label_2bd600;
        case 0x2bd610u: goto label_2bd610;
        case 0x2bd620u: goto label_2bd620;
        case 0x2bd630u: goto label_2bd630;
        case 0x2bd640u: goto label_2bd640;
        case 0x2bd65cu: goto label_2bd65c;
        case 0x2bd668u: goto label_2bd668;
        case 0x2bd688u: goto label_2bd688;
        case 0x2bd6a8u: goto label_2bd6a8;
        case 0x2bd6c8u: goto label_2bd6c8;
        case 0x2bd6e8u: goto label_2bd6e8;
        case 0x2bd6fcu: goto label_2bd6fc;
        case 0x2bd710u: goto label_2bd710;
        case 0x2bd724u: goto label_2bd724;
        case 0x2bd78cu: goto label_2bd78c;
        case 0x2bd7a8u: goto label_2bd7a8;
        case 0x2bd7b8u: goto label_2bd7b8;
        case 0x2bd7d0u: goto label_2bd7d0;
        case 0x2bd7d8u: goto label_2bd7d8;
        case 0x2bd7e8u: goto label_2bd7e8;
        case 0x2bd7f8u: goto label_2bd7f8;
        case 0x2bd808u: goto label_2bd808;
        case 0x2bd818u: goto label_2bd818;
        case 0x2bd828u: goto label_2bd828;
        case 0x2bd838u: goto label_2bd838;
        case 0x2bd908u: goto label_2bd908;
        case 0x2bd91cu: goto label_2bd91c;
        case 0x2bd930u: goto label_2bd930;
        case 0x2bd944u: goto label_2bd944;
        case 0x2bd958u: goto label_2bd958;
        case 0x2bd978u: goto label_2bd978;
        case 0x2bd994u: goto label_2bd994;
        case 0x2bd9c0u: goto label_2bd9c0;
        case 0x2bd9e4u: goto label_2bd9e4;
        case 0x2bda04u: goto label_2bda04;
        case 0x2bda18u: goto label_2bda18;
        case 0x2bda38u: goto label_2bda38;
        case 0x2bda94u: goto label_2bda94;
        case 0x2bdab4u: goto label_2bdab4;
        case 0x2bdac4u: goto label_2bdac4;
        case 0x2bdae4u: goto label_2bdae4;
        case 0x2bdafcu: goto label_2bdafc;
        case 0x2bdb1cu: goto label_2bdb1c;
        case 0x2bdb2cu: goto label_2bdb2c;
        case 0x2bdb4cu: goto label_2bdb4c;
        case 0x2bdb78u: goto label_2bdb78;
        case 0x2bdb98u: goto label_2bdb98;
        case 0x2bdba8u: goto label_2bdba8;
        case 0x2bdbc8u: goto label_2bdbc8;
        case 0x2bdbe0u: goto label_2bdbe0;
        case 0x2bdc00u: goto label_2bdc00;
        case 0x2bdc10u: goto label_2bdc10;
        case 0x2bdc30u: goto label_2bdc30;
        case 0x2bdc84u: goto label_2bdc84;
        case 0x2bdca4u: goto label_2bdca4;
        case 0x2bdcb4u: goto label_2bdcb4;
        case 0x2bdd04u: goto label_2bdd04;
        case 0x2bdd60u: goto label_2bdd60;
        case 0x2bdd90u: goto label_2bdd90;
        case 0x2bddd4u: goto label_2bddd4;
        case 0x2bde34u: goto label_2bde34;
        case 0x2bde68u: goto label_2bde68;
        case 0x2bde80u: goto label_2bde80;
        case 0x2bdea0u: goto label_2bdea0;
        case 0x2bdeb0u: goto label_2bdeb0;
        case 0x2bdec0u: goto label_2bdec0;
        case 0x2bded0u: goto label_2bded0;
        case 0x2bdee0u: goto label_2bdee0;
        case 0x2bdef0u: goto label_2bdef0;
        case 0x2bdf5cu: goto label_2bdf5c;
        case 0x2bdf78u: goto label_2bdf78;
        case 0x2bdf88u: goto label_2bdf88;
        case 0x2bdf98u: goto label_2bdf98;
        case 0x2bdfa8u: goto label_2bdfa8;
        case 0x2bdfb8u: goto label_2bdfb8;
        case 0x2bdfc8u: goto label_2bdfc8;
        case 0x2bdfe8u: goto label_2bdfe8;
        case 0x2be014u: goto label_2be014;
        case 0x2be034u: goto label_2be034;
        case 0x2be044u: goto label_2be044;
        case 0x2be064u: goto label_2be064;
        case 0x2be07cu: goto label_2be07c;
        case 0x2be09cu: goto label_2be09c;
        case 0x2be0acu: goto label_2be0ac;
        case 0x2be0ccu: goto label_2be0cc;
        case 0x2be0f0u: goto label_2be0f0;
        case 0x2be10cu: goto label_2be10c;
        case 0x2be128u: goto label_2be128;
        case 0x2be138u: goto label_2be138;
        case 0x2be148u: goto label_2be148;
        case 0x2be15cu: goto label_2be15c;
        case 0x2be16cu: goto label_2be16c;
        case 0x2be17cu: goto label_2be17c;
        case 0x2be184u: goto label_2be184;
        case 0x2be1a8u: goto label_2be1a8;
        case 0x2be1b8u: goto label_2be1b8;
        case 0x2be1c8u: goto label_2be1c8;
        case 0x2be1d4u: goto label_2be1d4;
        case 0x2be1e4u: goto label_2be1e4;
        case 0x2be1f4u: goto label_2be1f4;
        case 0x2be204u: goto label_2be204;
        case 0x2be214u: goto label_2be214;
        case 0x2be22cu: goto label_2be22c;
        case 0x2be25cu: goto label_2be25c;
        case 0x2be268u: goto label_2be268;
        case 0x2be278u: goto label_2be278;
        case 0x2be288u: goto label_2be288;
        case 0x2be294u: goto label_2be294;
        case 0x2be2a0u: goto label_2be2a0;
        case 0x2be2b4u: goto label_2be2b4;
        case 0x2be2c0u: goto label_2be2c0;
        case 0x2be2ccu: goto label_2be2cc;
        case 0x2be2dcu: goto label_2be2dc;
        case 0x2be2e4u: goto label_2be2e4;
        case 0x2be2f0u: goto label_2be2f0;
        case 0x2be308u: goto label_2be308;
        default: break;
    }

    ctx->pc = 0x2bd008u;

    // 0x2bd008: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2bd008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2bd00c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2bd00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2bd010: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2bd010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2bd014: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bd014u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd018: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2bd018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2bd01c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2bd01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2bd020: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2bd020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2bd024: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x2bd024u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2bd028: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2bd028u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2bd02c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2bd02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2bd030: 0x8e320160  lw          $s2, 0x160($s1)
    ctx->pc = 0x2bd030u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x2bd034: 0x8e430a94  lw          $v1, 0xA94($s2)
    ctx->pc = 0x2bd034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
    // 0x2bd038: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x2bd038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x2bd03c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BD03Cu;
    {
        const bool branch_taken_0x2bd03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd03c) {
            ctx->pc = 0x2BD040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD03Cu;
            // 0x2bd040: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD088u;
            goto label_2bd088;
        }
    }
    ctx->pc = 0x2BD044u;
    // 0x2bd044: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2BD044u;
    SET_GPR_U32(ctx, 31, 0x2BD04Cu);
    ctx->pc = 0x2BD048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD044u;
    // 0x2bd048: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2BD044u, 0x2BD04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD04Cu;
label_2bd04c:
    // 0x2bd04c: 0x104004b0  beqz        $v0, . + 4 + (0x4B0 << 2)
    ctx->pc = 0x2BD04Cu;
    {
        const bool branch_taken_0x2bd04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD04Cu;
        // 0x2bd050: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd04c) {
            ctx->pc = 0x2BE310u;
            goto label_2be310;
        }
    }
    ctx->pc = 0x2BD054u;
    // 0x2bd054: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x2bd054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2bd058: 0x2463ab60  addiu       $v1, $v1, -0x54A0
    ctx->pc = 0x2bd058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945632));
    // 0x2bd05c: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x2bd05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2bd060: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2bd060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2bd064: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bd064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bd068: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2bd068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bd06c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2bd06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2bd070: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2bd070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2bd074: 0x106004a7  beqz        $v1, . + 4 + (0x4A7 << 2)
    ctx->pc = 0x2BD074u;
    {
        const bool branch_taken_0x2bd074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD074u;
        // 0x2bd078: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd074) {
            ctx->pc = 0x2BE314u;
            goto label_2be314;
        }
    }
    ctx->pc = 0x2BD07Cu;
    // 0x2bd07c: 0x8e420a98  lw          $v0, 0xA98($s2)
    ctx->pc = 0x2bd07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2712)));
    // 0x2bd080: 0x100004a4  b           . + 4 + (0x4A4 << 2)
    ctx->pc = 0x2BD080u;
    {
        const bool branch_taken_0x2bd080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD080u;
        // 0x2bd084: 0xae420a94  sw          $v0, 0xA94($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2708), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd080) {
            ctx->pc = 0x2BE314u;
            goto label_2be314;
        }
    }
    ctx->pc = 0x2BD088u;
label_2bd088:
    // 0x2bd088: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bd088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bd08c: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD08Cu;
    {
        const bool branch_taken_0x2bd08c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BD090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD08Cu;
        // 0x2bd090: 0x30621020  andi        $v0, $v1, 0x1020 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd08c) {
            ctx->pc = 0x2BD0A4u;
            goto label_2bd0a4;
        }
    }
    ctx->pc = 0x2BD094u;
    // 0x2bd094: 0xc0af8ce  jal         func_2BE338
    ctx->pc = 0x2BD094u;
    SET_GPR_U32(ctx, 31, 0x2BD09Cu);
    ctx->pc = 0x2BD098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD094u;
    // 0x2bd098: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE338u, 0x2BD094u, 0x2BD09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD09Cu;
label_2bd09c:
    // 0x2bd09c: 0x1000049d  b           . + 4 + (0x49D << 2)
    ctx->pc = 0x2BD09Cu;
    {
        const bool branch_taken_0x2bd09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD09Cu;
        // 0x2bd0a0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd09c) {
            ctx->pc = 0x2BE314u;
            goto label_2be314;
        }
    }
    ctx->pc = 0x2BD0A4u;
label_2bd0a4:
    // 0x2bd0a4: 0x1440049b  bnez        $v0, . + 4 + (0x49B << 2)
    ctx->pc = 0x2BD0A4u;
    {
        const bool branch_taken_0x2bd0a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD0A4u;
        // 0x2bd0a8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd0a4) {
            ctx->pc = 0x2BE314u;
            goto label_2be314;
        }
    }
    ctx->pc = 0x2BD0ACu;
    // 0x2bd0ac: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x2bd0acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bd0b0: 0x14900005  bne         $a0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD0B0u;
    {
        const bool branch_taken_0x2bd0b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        ctx->pc = 0x2BD0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD0B0u;
        // 0x2bd0b4: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd0b0) {
            ctx->pc = 0x2BD0C8u;
            goto label_2bd0c8;
        }
    }
    ctx->pc = 0x2BD0B8u;
    // 0x2bd0b8: 0xc0afb38  jal         func_2BECE0
    ctx->pc = 0x2BD0B8u;
    SET_GPR_U32(ctx, 31, 0x2BD0C0u);
    ctx->pc = 0x2BD0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD0B8u;
    // 0x2bd0bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BECE0u, 0x2BD0B8u, 0x2BD0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD0C0u;
label_2bd0c0:
    // 0x2bd0c0: 0x10000494  b           . + 4 + (0x494 << 2)
    ctx->pc = 0x2BD0C0u;
    {
        const bool branch_taken_0x2bd0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD0C0u;
        // 0x2bd0c4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd0c0) {
            ctx->pc = 0x2BE314u;
            goto label_2be314;
        }
    }
    ctx->pc = 0x2BD0C8u;
label_2bd0c8:
    // 0x2bd0c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BD0C8u;
    {
        const bool branch_taken_0x2bd0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD0C8u;
        // 0x2bd0cc: 0x30620400  andi        $v0, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd0c8) {
            ctx->pc = 0x2BD0F0u;
            goto label_2bd0f0;
        }
    }
    ctx->pc = 0x2BD0D0u;
    // 0x2bd0d0: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2BD0D0u;
    SET_GPR_U32(ctx, 31, 0x2BD0D8u);
    ctx->pc = 0x2BD0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD0D0u;
    // 0x2bd0d4: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2BD0D0u, 0x2BD0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD0D8u;
label_2bd0d8:
    // 0x2bd0d8: 0x1040048d  beqz        $v0, . + 4 + (0x48D << 2)
    ctx->pc = 0x2BD0D8u;
    {
        const bool branch_taken_0x2bd0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD0D8u;
        // 0x2bd0dc: 0x2403feff  addiu       $v1, $zero, -0x101 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd0d8) {
            ctx->pc = 0x2BE310u;
            goto label_2be310;
        }
    }
    ctx->pc = 0x2BD0E0u;
    // 0x2bd0e0: 0x8e420a94  lw          $v0, 0xA94($s2)
    ctx->pc = 0x2bd0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
    // 0x2bd0e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2bd0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2bd0e8: 0x10000489  b           . + 4 + (0x489 << 2)
    ctx->pc = 0x2BD0E8u;
    {
        const bool branch_taken_0x2bd0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD0E8u;
        // 0x2bd0ec: 0xae420a94  sw          $v0, 0xA94($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2708), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd0e8) {
            ctx->pc = 0x2BE310u;
            goto label_2be310;
        }
    }
    ctx->pc = 0x2BD0F0u;
label_2bd0f0:
    // 0x2bd0f0: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2BD0F0u;
    {
        const bool branch_taken_0x2bd0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD0F0u;
        // 0x2bd0f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd0f0) {
            ctx->pc = 0x2BD204u;
            goto label_2bd204;
        }
    }
    ctx->pc = 0x2BD0F8u;
    // 0x2bd0f8: 0xc085608  jal         func_215820
    ctx->pc = 0x2BD0F8u;
    SET_GPR_U32(ctx, 31, 0x2BD100u);
    ctx->pc = 0x2BD0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD0F8u;
    // 0x2bd0fc: 0x240501c2  addiu       $a1, $zero, 0x1C2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BD0F8u, 0x2BD100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD100u;
label_2bd100:
    // 0x2bd100: 0x544003f3  bnel        $v0, $zero, . + 4 + (0x3F3 << 2)
    ctx->pc = 0x2BD100u;
    {
        const bool branch_taken_0x2bd100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd100) {
            ctx->pc = 0x2BD104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD100u;
            // 0x2bd104: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BD108u;
    // 0x2bd108: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bd108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd10c: 0xc085608  jal         func_215820
    ctx->pc = 0x2BD10Cu;
    SET_GPR_U32(ctx, 31, 0x2BD114u);
    ctx->pc = 0x2BD110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD10Cu;
    // 0x2bd110: 0x240501c4  addiu       $a1, $zero, 0x1C4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BD10Cu, 0x2BD114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD114u;
label_2bd114:
    // 0x2bd114: 0x544003ee  bnel        $v0, $zero, . + 4 + (0x3EE << 2)
    ctx->pc = 0x2BD114u;
    {
        const bool branch_taken_0x2bd114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd114) {
            ctx->pc = 0x2BD118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD114u;
            // 0x2bd118: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BD11Cu;
    // 0x2bd11c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bd11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd120: 0xc085608  jal         func_215820
    ctx->pc = 0x2BD120u;
    SET_GPR_U32(ctx, 31, 0x2BD128u);
    ctx->pc = 0x2BD124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD120u;
    // 0x2bd124: 0x240501c5  addiu       $a1, $zero, 0x1C5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 453));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BD120u, 0x2BD128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD128u;
label_2bd128:
    // 0x2bd128: 0x544003e9  bnel        $v0, $zero, . + 4 + (0x3E9 << 2)
    ctx->pc = 0x2BD128u;
    {
        const bool branch_taken_0x2bd128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd128) {
            ctx->pc = 0x2BD12Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD128u;
            // 0x2bd12c: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BD130u;
    // 0x2bd130: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bd130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd134: 0xc085608  jal         func_215820
    ctx->pc = 0x2BD134u;
    SET_GPR_U32(ctx, 31, 0x2BD13Cu);
    ctx->pc = 0x2BD138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD134u;
    // 0x2bd138: 0x240501c6  addiu       $a1, $zero, 0x1C6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 454));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BD134u, 0x2BD13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD13Cu;
label_2bd13c:
    // 0x2bd13c: 0x544003e4  bnel        $v0, $zero, . + 4 + (0x3E4 << 2)
    ctx->pc = 0x2BD13Cu;
    {
        const bool branch_taken_0x2bd13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd13c) {
            ctx->pc = 0x2BD140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD13Cu;
            // 0x2bd140: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BD144u;
    // 0x2bd144: 0x8e4201b8  lw          $v0, 0x1B8($s2)
    ctx->pc = 0x2bd144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
    // 0x2bd148: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2BD148u;
    {
        const bool branch_taken_0x2bd148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD148u;
        // 0x2bd14c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd148) {
            ctx->pc = 0x2BD1E4u;
            goto label_2bd1e4;
        }
    }
    ctx->pc = 0x2BD150u;
    // 0x2bd150: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2BD150u;
    SET_GPR_U32(ctx, 31, 0x2BD158u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2BD150u, 0x2BD158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD158u;
label_2bd158:
    // 0x2bd158: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BD158u;
    {
        const bool branch_taken_0x2bd158 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BD15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD158u;
        // 0x2bd15c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd158) {
            ctx->pc = 0x2BD16Cu;
            goto label_2bd16c;
        }
    }
    ctx->pc = 0x2BD160u;
    // 0x2bd160: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bd160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bd164: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BD164u;
    {
        const bool branch_taken_0x2bd164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD164u;
        // 0x2bd168: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd164) {
            ctx->pc = 0x2BD180u;
            goto label_2bd180;
        }
    }
    ctx->pc = 0x2BD16Cu;
label_2bd16c:
    // 0x2bd16c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bd16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bd170: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bd170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2bd174: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bd174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bd178: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2bd178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2bd17c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2bd17cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2bd180:
    // 0x2bd180: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2bd180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2bd184: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bd184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd188: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2bd188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2bd18c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bd18cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd190: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2bd190u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2bd194: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bd194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd198: 0x0  nop
    ctx->pc = 0x2bd198u;
    // NOP
    // 0x2bd19c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2BD19Cu;
    {
        const bool branch_taken_0x2bd19c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BD1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD19Cu;
        // 0x2bd1a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd19c) {
            ctx->pc = 0x2BD1C4u;
            goto label_2bd1c4;
        }
    }
    ctx->pc = 0x2BD1A4u;
    // 0x2bd1a4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2bd1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2bd1a8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bd1a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bd1ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd1acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd1b0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bd1b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bd1b4: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BD1B4u;
    SET_GPR_U32(ctx, 31, 0x2BD1BCu);
    ctx->pc = 0x2BD1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD1B4u;
    // 0x2bd1b8: 0x240501c5  addiu       $a1, $zero, 0x1C5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 453));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BD1B4u, 0x2BD1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD1BCu;
label_2bd1bc:
    // 0x2bd1bc: 0x100003c4  b           . + 4 + (0x3C4 << 2)
    ctx->pc = 0x2BD1BCu;
    {
        const bool branch_taken_0x2bd1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD1BCu;
        // 0x2bd1c0: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd1bc) {
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BD1C4u;
label_2bd1c4:
    // 0x2bd1c4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2bd1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2bd1c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bd1c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bd1cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd1d0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bd1d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bd1d4: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BD1D4u;
    SET_GPR_U32(ctx, 31, 0x2BD1DCu);
    ctx->pc = 0x2BD1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD1D4u;
    // 0x2bd1d8: 0x240501c6  addiu       $a1, $zero, 0x1C6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 454));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BD1D4u, 0x2BD1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD1DCu;
label_2bd1dc:
    // 0x2bd1dc: 0x100003bc  b           . + 4 + (0x3BC << 2)
    ctx->pc = 0x2BD1DCu;
    {
        const bool branch_taken_0x2bd1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD1DCu;
        // 0x2bd1e0: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd1dc) {
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BD1E4u;
label_2bd1e4:
    // 0x2bd1e4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2bd1e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2bd1e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bd1e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bd1ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd1ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd1f0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bd1f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bd1f4: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BD1F4u;
    SET_GPR_U32(ctx, 31, 0x2BD1FCu);
    ctx->pc = 0x2BD1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD1F4u;
    // 0x2bd1f8: 0x240501c4  addiu       $a1, $zero, 0x1C4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BD1F4u, 0x2BD1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD1FCu;
label_2bd1fc:
    // 0x2bd1fc: 0x100003b4  b           . + 4 + (0x3B4 << 2)
    ctx->pc = 0x2BD1FCu;
    {
        const bool branch_taken_0x2bd1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD1FCu;
        // 0x2bd200: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd1fc) {
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BD204u;
label_2bd204:
    // 0x2bd204: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2bd204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2bd208: 0x1040020d  beqz        $v0, . + 4 + (0x20D << 2)
    ctx->pc = 0x2BD208u;
    {
        const bool branch_taken_0x2bd208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD208u;
        // 0x2bd20c: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd208) {
            ctx->pc = 0x2BDA40u;
            goto label_2bda40;
        }
    }
    ctx->pc = 0x2BD210u;
    // 0x2bd210: 0x8e420a98  lw          $v0, 0xA98($s2)
    ctx->pc = 0x2bd210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2712)));
    // 0x2bd214: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2bd214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2bd218: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2bd218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2bd21c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2bd21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2bd220: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BD220u;
    {
        const bool branch_taken_0x2bd220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD220u;
        // 0x2bd224: 0xc62c0050  lwc1        $f12, 0x50($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd220) {
            ctx->pc = 0x2BD22Cu;
            goto label_2bd22c;
        }
    }
    ctx->pc = 0x2BD228u;
    // 0x2bd228: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2bd228u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2bd22c:
    // 0x2bd22c: 0xc0a138e  jal         func_284E38
    ctx->pc = 0x2BD22Cu;
    SET_GPR_U32(ctx, 31, 0x2BD234u);
    ctx->pc = 0x2BD230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD22Cu;
    // 0x2bd230: 0xc62d004c  lwc1        $f13, 0x4C($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E38u, 0x2BD22Cu, 0x2BD234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD234u;
label_2bd234:
    // 0x2bd234: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2bd234u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2bd238: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x2bd238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x2bd23c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bd23cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd240: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bd240u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd244: 0x0  nop
    ctx->pc = 0x2bd244u;
    // NOP
    // 0x2bd248: 0x45000031  bc1f        . + 4 + (0x31 << 2)
    ctx->pc = 0x2BD248u;
    {
        const bool branch_taken_0x2bd248 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BD24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD248u;
        // 0x2bd24c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd248) {
            ctx->pc = 0x2BD310u;
            goto label_2bd310;
        }
    }
    ctx->pc = 0x2BD250u;
    // 0x2bd250: 0xc085608  jal         func_215820
    ctx->pc = 0x2BD250u;
    SET_GPR_U32(ctx, 31, 0x2BD258u);
    ctx->pc = 0x2BD254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD250u;
    // 0x2bd254: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BD250u, 0x2BD258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD258u;
label_2bd258:
    // 0x2bd258: 0x14400101  bnez        $v0, . + 4 + (0x101 << 2)
    ctx->pc = 0x2BD258u;
    {
        const bool branch_taken_0x2bd258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD258u;
        // 0x2bd25c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd258) {
            ctx->pc = 0x2BD660u;
            goto label_2bd660;
        }
    }
    ctx->pc = 0x2BD260u;
    // 0x2bd260: 0xc085608  jal         func_215820
    ctx->pc = 0x2BD260u;
    SET_GPR_U32(ctx, 31, 0x2BD268u);
    ctx->pc = 0x2BD264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD260u;
    // 0x2bd264: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BD260u, 0x2BD268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD268u;
label_2bd268:
    // 0x2bd268: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD268u;
    {
        const bool branch_taken_0x2bd268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD268u;
        // 0x2bd26c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd268) {
            ctx->pc = 0x2BD280u;
            goto label_2bd280;
        }
    }
    ctx->pc = 0x2BD270u;
    // 0x2bd270: 0xc085608  jal         func_215820
    ctx->pc = 0x2BD270u;
    SET_GPR_U32(ctx, 31, 0x2BD278u);
    ctx->pc = 0x2BD274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD270u;
    // 0x2bd274: 0x2405007b  addiu       $a1, $zero, 0x7B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BD270u, 0x2BD278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD278u;
label_2bd278:
    // 0x2bd278: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2BD278u;
    {
        const bool branch_taken_0x2bd278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD278u;
        // 0x2bd27c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd278) {
            ctx->pc = 0x2BD2E0u;
            goto label_2bd2e0;
        }
    }
    ctx->pc = 0x2BD280u;
label_2bd280:
    // 0x2bd280: 0xc085684  jal         func_215A10
    ctx->pc = 0x2BD280u;
    SET_GPR_U32(ctx, 31, 0x2BD288u);
    ctx->pc = 0x2BD284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD280u;
    // 0x2bd284: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A10u, 0x2BD280u, 0x2BD288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD288u;
label_2bd288:
    // 0x2bd288: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BD288u;
    {
        const bool branch_taken_0x2bd288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD288u;
        // 0x2bd28c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd288) {
            ctx->pc = 0x2BD2B0u;
            goto label_2bd2b0;
        }
    }
    ctx->pc = 0x2BD290u;
    // 0x2bd290: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2bd290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2bd294: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x2bd294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x2bd298: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD298u;
    {
        const bool branch_taken_0x2bd298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd298) {
            ctx->pc = 0x2BD2B0u;
            goto label_2bd2b0;
        }
    }
    ctx->pc = 0x2BD2A0u;
    // 0x2bd2a0: 0xc0856a2  jal         func_215A88
    ctx->pc = 0x2BD2A0u;
    SET_GPR_U32(ctx, 31, 0x2BD2A8u);
    ctx->pc = 0x2BD2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD2A0u;
    // 0x2bd2a4: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A88u, 0x2BD2A0u, 0x2BD2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD2A8u;
label_2bd2a8:
    // 0x2bd2a8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BD2A8u;
    {
        const bool branch_taken_0x2bd2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD2A8u;
        // 0x2bd2ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd2a8) {
            ctx->pc = 0x2BD2E0u;
            goto label_2bd2e0;
        }
    }
    ctx->pc = 0x2BD2B0u;
label_2bd2b0:
    // 0x2bd2b0: 0xc085684  jal         func_215A10
    ctx->pc = 0x2BD2B0u;
    SET_GPR_U32(ctx, 31, 0x2BD2B8u);
    ctx->pc = 0x2BD2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD2B0u;
    // 0x2bd2b4: 0x2405007b  addiu       $a1, $zero, 0x7B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A10u, 0x2BD2B0u, 0x2BD2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD2B8u;
label_2bd2b8:
    // 0x2bd2b8: 0x104000e9  beqz        $v0, . + 4 + (0xE9 << 2)
    ctx->pc = 0x2BD2B8u;
    {
        const bool branch_taken_0x2bd2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD2B8u;
        // 0x2bd2bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd2b8) {
            ctx->pc = 0x2BD660u;
            goto label_2bd660;
        }
    }
    ctx->pc = 0x2BD2C0u;
    // 0x2bd2c0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2bd2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2bd2c4: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x2bd2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x2bd2c8: 0x106000e5  beqz        $v1, . + 4 + (0xE5 << 2)
    ctx->pc = 0x2BD2C8u;
    {
        const bool branch_taken_0x2bd2c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd2c8) {
            ctx->pc = 0x2BD660u;
            goto label_2bd660;
        }
    }
    ctx->pc = 0x2BD2D0u;
    // 0x2bd2d0: 0xc0856a2  jal         func_215A88
    ctx->pc = 0x2BD2D0u;
    SET_GPR_U32(ctx, 31, 0x2BD2D8u);
    ctx->pc = 0x2BD2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD2D0u;
    // 0x2bd2d4: 0x2405007b  addiu       $a1, $zero, 0x7B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A88u, 0x2BD2D0u, 0x2BD2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD2D8u;
label_2bd2d8:
    // 0x2bd2d8: 0x144000e1  bnez        $v0, . + 4 + (0xE1 << 2)
    ctx->pc = 0x2BD2D8u;
    {
        const bool branch_taken_0x2bd2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD2D8u;
        // 0x2bd2dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd2d8) {
            ctx->pc = 0x2BD660u;
            goto label_2bd660;
        }
    }
    ctx->pc = 0x2BD2E0u;
label_2bd2e0:
    // 0x2bd2e0: 0x8e420a94  lw          $v0, 0xA94($s2)
    ctx->pc = 0x2bd2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
    // 0x2bd2e4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2bd2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2bd2e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD2E8u;
    {
        const bool branch_taken_0x2bd2e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD2E8u;
        // 0x2bd2ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd2e8) {
            ctx->pc = 0x2BD300u;
            goto label_2bd300;
        }
    }
    ctx->pc = 0x2BD2F0u;
    // 0x2bd2f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd2f4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bd2f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bd2f8: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x2BD2F8u;
    {
        const bool branch_taken_0x2bd2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD2F8u;
        // 0x2bd2fc: 0x2405007b  addiu       $a1, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd2f8) {
            ctx->pc = 0x2BD5E8u;
            goto label_2bd5e8;
        }
    }
    ctx->pc = 0x2BD300u;
label_2bd300:
    // 0x2bd300: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd304: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bd304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bd308: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x2BD308u;
    {
        const bool branch_taken_0x2bd308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD308u;
        // 0x2bd30c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd308) {
            ctx->pc = 0x2BD5E8u;
            goto label_2bd5e8;
        }
    }
    ctx->pc = 0x2BD310u;
label_2bd310:
    // 0x2bd310: 0x3c01c234  lui         $at, 0xC234
    ctx->pc = 0x2bd310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49716 << 16));
    // 0x2bd314: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bd314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd318: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bd318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd31c: 0x0  nop
    ctx->pc = 0x2bd31cu;
    // NOP
    // 0x2bd320: 0x45020031  bc1fl       . + 4 + (0x31 << 2)
    ctx->pc = 0x2BD320u;
    {
        const bool branch_taken_0x2bd320 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bd320) {
            ctx->pc = 0x2BD324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD320u;
            // 0x2bd324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD3E8u;
            goto label_2bd3e8;
        }
    }
    ctx->pc = 0x2BD328u;
    // 0x2bd328: 0xc085608  jal         func_215820
    ctx->pc = 0x2BD328u;
    SET_GPR_U32(ctx, 31, 0x2BD330u);
    ctx->pc = 0x2BD32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD328u;
    // 0x2bd32c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BD328u, 0x2BD330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD330u;
label_2bd330:
    // 0x2bd330: 0x144000cb  bnez        $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x2BD330u;
    {
        const bool branch_taken_0x2bd330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD330u;
        // 0x2bd334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd330) {
            ctx->pc = 0x2BD660u;
            goto label_2bd660;
        }
    }
    ctx->pc = 0x2BD338u;
    // 0x2bd338: 0xc085608  jal         func_215820
    ctx->pc = 0x2BD338u;
    SET_GPR_U32(ctx, 31, 0x2BD340u);
    ctx->pc = 0x2BD33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD338u;
    // 0x2bd33c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BD338u, 0x2BD340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD340u;
label_2bd340:
    // 0x2bd340: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD340u;
    {
        const bool branch_taken_0x2bd340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD340u;
        // 0x2bd344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd340) {
            ctx->pc = 0x2BD358u;
            goto label_2bd358;
        }
    }
    ctx->pc = 0x2BD348u;
    // 0x2bd348: 0xc085608  jal         func_215820
    ctx->pc = 0x2BD348u;
    SET_GPR_U32(ctx, 31, 0x2BD350u);
    ctx->pc = 0x2BD34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD348u;
    // 0x2bd34c: 0x2405007a  addiu       $a1, $zero, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BD348u, 0x2BD350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD350u;
label_2bd350:
    // 0x2bd350: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2BD350u;
    {
        const bool branch_taken_0x2bd350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD350u;
        // 0x2bd354: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd350) {
            ctx->pc = 0x2BD3B8u;
            goto label_2bd3b8;
        }
    }
    ctx->pc = 0x2BD358u;
label_2bd358:
    // 0x2bd358: 0xc085684  jal         func_215A10
    ctx->pc = 0x2BD358u;
    SET_GPR_U32(ctx, 31, 0x2BD360u);
    ctx->pc = 0x2BD35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD358u;
    // 0x2bd35c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A10u, 0x2BD358u, 0x2BD360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD360u;
label_2bd360:
    // 0x2bd360: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BD360u;
    {
        const bool branch_taken_0x2bd360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD360u;
        // 0x2bd364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd360) {
            ctx->pc = 0x2BD388u;
            goto label_2bd388;
        }
    }
    ctx->pc = 0x2BD368u;
    // 0x2bd368: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2bd368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2bd36c: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x2bd36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x2bd370: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD370u;
    {
        const bool branch_taken_0x2bd370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd370) {
            ctx->pc = 0x2BD388u;
            goto label_2bd388;
        }
    }
    ctx->pc = 0x2BD378u;
    // 0x2bd378: 0xc0856a2  jal         func_215A88
    ctx->pc = 0x2BD378u;
    SET_GPR_U32(ctx, 31, 0x2BD380u);
    ctx->pc = 0x2BD37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD378u;
    // 0x2bd37c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A88u, 0x2BD378u, 0x2BD380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD380u;
label_2bd380:
    // 0x2bd380: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BD380u;
    {
        const bool branch_taken_0x2bd380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD380u;
        // 0x2bd384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd380) {
            ctx->pc = 0x2BD3B8u;
            goto label_2bd3b8;
        }
    }
    ctx->pc = 0x2BD388u;
label_2bd388:
    // 0x2bd388: 0xc085684  jal         func_215A10
    ctx->pc = 0x2BD388u;
    SET_GPR_U32(ctx, 31, 0x2BD390u);
    ctx->pc = 0x2BD38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD388u;
    // 0x2bd38c: 0x2405007a  addiu       $a1, $zero, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A10u, 0x2BD388u, 0x2BD390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD390u;
label_2bd390:
    // 0x2bd390: 0x104000b3  beqz        $v0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x2BD390u;
    {
        const bool branch_taken_0x2bd390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD390u;
        // 0x2bd394: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd390) {
            ctx->pc = 0x2BD660u;
            goto label_2bd660;
        }
    }
    ctx->pc = 0x2BD398u;
    // 0x2bd398: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2bd398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2bd39c: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x2bd39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x2bd3a0: 0x106000af  beqz        $v1, . + 4 + (0xAF << 2)
    ctx->pc = 0x2BD3A0u;
    {
        const bool branch_taken_0x2bd3a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd3a0) {
            ctx->pc = 0x2BD660u;
            goto label_2bd660;
        }
    }
    ctx->pc = 0x2BD3A8u;
    // 0x2bd3a8: 0xc0856a2  jal         func_215A88
    ctx->pc = 0x2BD3A8u;
    SET_GPR_U32(ctx, 31, 0x2BD3B0u);
    ctx->pc = 0x2BD3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD3A8u;
    // 0x2bd3ac: 0x2405007a  addiu       $a1, $zero, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A88u, 0x2BD3A8u, 0x2BD3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD3B0u;
label_2bd3b0:
    // 0x2bd3b0: 0x144000ab  bnez        $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x2BD3B0u;
    {
        const bool branch_taken_0x2bd3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD3B0u;
        // 0x2bd3b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd3b0) {
            ctx->pc = 0x2BD660u;
            goto label_2bd660;
        }
    }
    ctx->pc = 0x2BD3B8u;
label_2bd3b8:
    // 0x2bd3b8: 0x8e420a94  lw          $v0, 0xA94($s2)
    ctx->pc = 0x2bd3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
    // 0x2bd3bc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2bd3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2bd3c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD3C0u;
    {
        const bool branch_taken_0x2bd3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD3C0u;
        // 0x2bd3c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd3c0) {
            ctx->pc = 0x2BD3D8u;
            goto label_2bd3d8;
        }
    }
    ctx->pc = 0x2BD3C8u;
    // 0x2bd3c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd3c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd3cc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bd3ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bd3d0: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x2BD3D0u;
    {
        const bool branch_taken_0x2bd3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD3D0u;
        // 0x2bd3d4: 0x2405007a  addiu       $a1, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd3d0) {
            ctx->pc = 0x2BD5E8u;
            goto label_2bd5e8;
        }
    }
    ctx->pc = 0x2BD3D8u;
label_2bd3d8:
    // 0x2bd3d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd3d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd3dc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bd3dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bd3e0: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x2BD3E0u;
    {
        const bool branch_taken_0x2bd3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD3E0u;
        // 0x2bd3e4: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd3e0) {
            ctx->pc = 0x2BD5E8u;
            goto label_2bd5e8;
        }
    }
    ctx->pc = 0x2BD3E8u;
label_2bd3e8:
    // 0x2bd3e8: 0xc085608  jal         func_215820
    ctx->pc = 0x2BD3E8u;
    SET_GPR_U32(ctx, 31, 0x2BD3F0u);
    ctx->pc = 0x2BD3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD3E8u;
    // 0x2bd3ec: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BD3E8u, 0x2BD3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD3F0u;
label_2bd3f0:
    // 0x2bd3f0: 0x1440009b  bnez        $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x2BD3F0u;
    {
        const bool branch_taken_0x2bd3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD3F0u;
        // 0x2bd3f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd3f0) {
            ctx->pc = 0x2BD660u;
            goto label_2bd660;
        }
    }
    ctx->pc = 0x2BD3F8u;
    // 0x2bd3f8: 0xc085608  jal         func_215820
    ctx->pc = 0x2BD3F8u;
    SET_GPR_U32(ctx, 31, 0x2BD400u);
    ctx->pc = 0x2BD3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD3F8u;
    // 0x2bd3fc: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BD3F8u, 0x2BD400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD400u;
label_2bd400:
    // 0x2bd400: 0x14400097  bnez        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x2BD400u;
    {
        const bool branch_taken_0x2bd400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD400u;
        // 0x2bd404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd400) {
            ctx->pc = 0x2BD660u;
            goto label_2bd660;
        }
    }
    ctx->pc = 0x2BD408u;
    // 0x2bd408: 0xc085608  jal         func_215820
    ctx->pc = 0x2BD408u;
    SET_GPR_U32(ctx, 31, 0x2BD410u);
    ctx->pc = 0x2BD40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD408u;
    // 0x2bd40c: 0x2405007a  addiu       $a1, $zero, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BD408u, 0x2BD410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD410u;
label_2bd410:
    // 0x2bd410: 0x14400093  bnez        $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x2BD410u;
    {
        const bool branch_taken_0x2bd410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD410u;
        // 0x2bd414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd410) {
            ctx->pc = 0x2BD660u;
            goto label_2bd660;
        }
    }
    ctx->pc = 0x2BD418u;
    // 0x2bd418: 0xc085608  jal         func_215820
    ctx->pc = 0x2BD418u;
    SET_GPR_U32(ctx, 31, 0x2BD420u);
    ctx->pc = 0x2BD41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD418u;
    // 0x2bd41c: 0x2405007b  addiu       $a1, $zero, 0x7B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BD418u, 0x2BD420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD420u;
label_2bd420:
    // 0x2bd420: 0x1440008f  bnez        $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x2BD420u;
    {
        const bool branch_taken_0x2bd420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD420u;
        // 0x2bd424: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd420) {
            ctx->pc = 0x2BD660u;
            goto label_2bd660;
        }
    }
    ctx->pc = 0x2BD428u;
    // 0x2bd428: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2bd428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2bd42c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2bd42cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2bd430: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bd430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd434: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x2bd434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd438: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2bd438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2bd43c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2bd43cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2bd440: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bd440u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bd444: 0xc6420b34  lwc1        $f2, 0xB34($s2)
    ctx->pc = 0x2bd444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bd448: 0xc6410b3c  lwc1        $f1, 0xB3C($s2)
    ctx->pc = 0x2bd448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd44c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2bd44cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2bd450: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2bd450u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2bd454: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2bd454u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd458: 0x45000081  bc1f        . + 4 + (0x81 << 2)
    ctx->pc = 0x2BD458u;
    {
        const bool branch_taken_0x2bd458 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bd458) {
            ctx->pc = 0x2BD660u;
            goto label_2bd660;
        }
    }
    ctx->pc = 0x2BD460u;
    // 0x2bd460: 0x8e420a94  lw          $v0, 0xA94($s2)
    ctx->pc = 0x2bd460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
    // 0x2bd464: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2bd464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2bd468: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2BD468u;
    {
        const bool branch_taken_0x2bd468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD468u;
        // 0x2bd46c: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd468) {
            ctx->pc = 0x2BD4CCu;
            goto label_2bd4cc;
        }
    }
    ctx->pc = 0x2BD470u;
    // 0x2bd470: 0x8e420a9c  lw          $v0, 0xA9C($s2)
    ctx->pc = 0x2bd470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2716)));
    // 0x2bd474: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2bd474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2bd478: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2BD478u;
    {
        const bool branch_taken_0x2bd478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd478) {
            ctx->pc = 0x2BD4ACu;
            goto label_2bd4ac;
        }
    }
    ctx->pc = 0x2BD480u;
    // 0x2bd480: 0xc08562e  jal         func_2158B8
    ctx->pc = 0x2BD480u;
    SET_GPR_U32(ctx, 31, 0x2BD488u);
    ctx->pc = 0x2BD484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD480u;
    // 0x2bd484: 0x24050071  addiu       $a1, $zero, 0x71 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2158B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2158B8u, 0x2BD480u, 0x2BD488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD488u;
label_2bd488:
    // 0x2bd488: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BD488u;
    {
        const bool branch_taken_0x2bd488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD488u;
        // 0x2bd48c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd488) {
            ctx->pc = 0x2BD4ACu;
            goto label_2bd4ac;
        }
    }
    ctx->pc = 0x2BD490u;
    // 0x2bd490: 0xc78c903c  lwc1        $f12, -0x6FC4($gp)
    ctx->pc = 0x2bd490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bd494: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd498: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bd498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bd49c: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BD49Cu;
    SET_GPR_U32(ctx, 31, 0x2BD4A4u);
    ctx->pc = 0x2BD4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD49Cu;
    // 0x2bd4a0: 0x24050071  addiu       $a1, $zero, 0x71 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BD49Cu, 0x2BD4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD4A4u;
label_2bd4a4:
    // 0x2bd4a4: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x2BD4A4u;
    {
        const bool branch_taken_0x2bd4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD4A4u;
        // 0x2bd4a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd4a4) {
            ctx->pc = 0x2BD660u;
            goto label_2bd660;
        }
    }
    ctx->pc = 0x2BD4ACu;
label_2bd4ac:
    // 0x2bd4ac: 0xc085608  jal         func_215820
    ctx->pc = 0x2BD4ACu;
    SET_GPR_U32(ctx, 31, 0x2BD4B4u);
    ctx->pc = 0x2BD4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD4ACu;
    // 0x2bd4b0: 0x24050071  addiu       $a1, $zero, 0x71 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BD4ACu, 0x2BD4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD4B4u;
label_2bd4b4:
    // 0x2bd4b4: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x2BD4B4u;
    {
        const bool branch_taken_0x2bd4b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD4B4u;
        // 0x2bd4b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd4b4) {
            ctx->pc = 0x2BD660u;
            goto label_2bd660;
        }
    }
    ctx->pc = 0x2BD4BCu;
    // 0x2bd4bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd4bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd4c0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bd4c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bd4c4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2BD4C4u;
    {
        const bool branch_taken_0x2bd4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD4C4u;
        // 0x2bd4c8: 0x24050071  addiu       $a1, $zero, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd4c4) {
            ctx->pc = 0x2BD5E8u;
            goto label_2bd5e8;
        }
    }
    ctx->pc = 0x2BD4CCu;
label_2bd4cc:
    // 0x2bd4cc: 0xc0b30e8  jal         func_2CC3A0
    ctx->pc = 0x2BD4CCu;
    SET_GPR_U32(ctx, 31, 0x2BD4D4u);
    ctx->pc = 0x2BD4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD4CCu;
    // 0x2bd4d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC3A0u, 0x2BD4CCu, 0x2BD4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD4D4u;
label_2bd4d4:
    // 0x2bd4d4: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x2BD4D4u;
    {
        const bool branch_taken_0x2bd4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD4D4u;
        // 0x2bd4d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd4d4) {
            ctx->pc = 0x2BD5F8u;
            goto label_2bd5f8;
        }
    }
    ctx->pc = 0x2BD4DCu;
    // 0x2bd4dc: 0xc085608  jal         func_215820
    ctx->pc = 0x2BD4DCu;
    SET_GPR_U32(ctx, 31, 0x2BD4E4u);
    ctx->pc = 0x2BD4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD4DCu;
    // 0x2bd4e0: 0x240501cc  addiu       $a1, $zero, 0x1CC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BD4DCu, 0x2BD4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD4E4u;
label_2bd4e4:
    // 0x2bd4e4: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2BD4E4u;
    {
        const bool branch_taken_0x2bd4e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD4E4u;
        // 0x2bd4e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd4e4) {
            ctx->pc = 0x2BD5F8u;
            goto label_2bd5f8;
        }
    }
    ctx->pc = 0x2BD4ECu;
    // 0x2bd4ec: 0xc085608  jal         func_215820
    ctx->pc = 0x2BD4ECu;
    SET_GPR_U32(ctx, 31, 0x2BD4F4u);
    ctx->pc = 0x2BD4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD4ECu;
    // 0x2bd4f0: 0x240501ce  addiu       $a1, $zero, 0x1CE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 462));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BD4ECu, 0x2BD4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD4F4u;
label_2bd4f4:
    // 0x2bd4f4: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2BD4F4u;
    {
        const bool branch_taken_0x2bd4f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD4F4u;
        // 0x2bd4f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd4f4) {
            ctx->pc = 0x2BD5F8u;
            goto label_2bd5f8;
        }
    }
    ctx->pc = 0x2BD4FCu;
    // 0x2bd4fc: 0xc085608  jal         func_215820
    ctx->pc = 0x2BD4FCu;
    SET_GPR_U32(ctx, 31, 0x2BD504u);
    ctx->pc = 0x2BD500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD4FCu;
    // 0x2bd500: 0x240501cf  addiu       $a1, $zero, 0x1CF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 463));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BD4FCu, 0x2BD504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD504u;
label_2bd504:
    // 0x2bd504: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2BD504u;
    {
        const bool branch_taken_0x2bd504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD504u;
        // 0x2bd508: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd504) {
            ctx->pc = 0x2BD5F8u;
            goto label_2bd5f8;
        }
    }
    ctx->pc = 0x2BD50Cu;
    // 0x2bd50c: 0xc085608  jal         func_215820
    ctx->pc = 0x2BD50Cu;
    SET_GPR_U32(ctx, 31, 0x2BD514u);
    ctx->pc = 0x2BD510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD50Cu;
    // 0x2bd510: 0x240501d0  addiu       $a1, $zero, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BD50Cu, 0x2BD514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD514u;
label_2bd514:
    // 0x2bd514: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2BD514u;
    {
        const bool branch_taken_0x2bd514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD514u;
        // 0x2bd518: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd514) {
            ctx->pc = 0x2BD5F8u;
            goto label_2bd5f8;
        }
    }
    ctx->pc = 0x2BD51Cu;
    // 0x2bd51c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2BD51Cu;
    SET_GPR_U32(ctx, 31, 0x2BD524u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2BD51Cu, 0x2BD524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD524u;
label_2bd524:
    // 0x2bd524: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BD524u;
    {
        const bool branch_taken_0x2bd524 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BD528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD524u;
        // 0x2bd528: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd524) {
            ctx->pc = 0x2BD538u;
            goto label_2bd538;
        }
    }
    ctx->pc = 0x2BD52Cu;
    // 0x2bd52c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bd52cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bd530: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BD530u;
    {
        const bool branch_taken_0x2bd530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD530u;
        // 0x2bd534: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd530) {
            ctx->pc = 0x2BD54Cu;
            goto label_2bd54c;
        }
    }
    ctx->pc = 0x2BD538u;
label_2bd538:
    // 0x2bd538: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bd538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bd53c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bd53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2bd540: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bd540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bd544: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2bd544u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2bd548: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2bd548u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2bd54c:
    // 0x2bd54c: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2bd54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2bd550: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bd550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd554: 0xc7819040  lwc1        $f1, -0x6FC0($gp)
    ctx->pc = 0x2bd554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd558: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2bd558u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2bd55c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bd55cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd560: 0x0  nop
    ctx->pc = 0x2bd560u;
    // NOP
    // 0x2bd564: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x2BD564u;
    {
        const bool branch_taken_0x2bd564 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BD568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD564u;
        // 0x2bd568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd564) {
            ctx->pc = 0x2BD5F8u;
            goto label_2bd5f8;
        }
    }
    ctx->pc = 0x2BD56Cu;
    // 0x2bd56c: 0x8e4201e4  lw          $v0, 0x1E4($s2)
    ctx->pc = 0x2bd56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 484)));
    // 0x2bd570: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD570u;
    {
        const bool branch_taken_0x2bd570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD570u;
        // 0x2bd574: 0x240501cf  addiu       $a1, $zero, 0x1CF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 463));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd570) {
            ctx->pc = 0x2BD588u;
            goto label_2bd588;
        }
    }
    ctx->pc = 0x2BD578u;
    // 0x2bd578: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd57c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bd57cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bd580: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2BD580u;
    {
        const bool branch_taken_0x2bd580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd580) {
            ctx->pc = 0x2BD5E8u;
            goto label_2bd5e8;
        }
    }
    ctx->pc = 0x2BD588u;
label_2bd588:
    // 0x2bd588: 0x8e4201b8  lw          $v0, 0x1B8($s2)
    ctx->pc = 0x2bd588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
    // 0x2bd58c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BD58Cu;
    {
        const bool branch_taken_0x2bd58c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd58c) {
            ctx->pc = 0x2BD590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD58Cu;
            // 0x2bd590: 0x8e440178  lw          $a0, 0x178($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD5A8u;
            goto label_2bd5a8;
        }
    }
    ctx->pc = 0x2BD594u;
    // 0x2bd594: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd598: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bd598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bd59c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bd59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd5a0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2BD5A0u;
    {
        const bool branch_taken_0x2bd5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD5A0u;
        // 0x2bd5a4: 0x240501cc  addiu       $a1, $zero, 0x1CC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd5a0) {
            ctx->pc = 0x2BD5E8u;
            goto label_2bd5e8;
        }
    }
    ctx->pc = 0x2BD5A8u;
label_2bd5a8:
    // 0x2bd5a8: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x2bd5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x2bd5ac: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2bd5acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x2bd5b0: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2bd5b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2bd5b4: 0x24636218  addiu       $v1, $v1, 0x6218
    ctx->pc = 0x2bd5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25112));
    // 0x2bd5b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bd5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bd5bc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2bd5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2bd5c0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2bd5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2bd5c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD5C4u;
    {
        const bool branch_taken_0x2bd5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD5C4u;
        // 0x2bd5c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd5c4) {
            ctx->pc = 0x2BD5DCu;
            goto label_2bd5dc;
        }
    }
    ctx->pc = 0x2BD5CCu;
    // 0x2bd5cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd5d0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bd5d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bd5d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BD5D4u;
    {
        const bool branch_taken_0x2bd5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD5D4u;
        // 0x2bd5d8: 0x240501d0  addiu       $a1, $zero, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd5d4) {
            ctx->pc = 0x2BD5E8u;
            goto label_2bd5e8;
        }
    }
    ctx->pc = 0x2BD5DCu;
label_2bd5dc:
    // 0x2bd5dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd5e0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bd5e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bd5e4: 0x240501ce  addiu       $a1, $zero, 0x1CE
    ctx->pc = 0x2bd5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 462));
label_2bd5e8:
    // 0x2bd5e8: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BD5E8u;
    SET_GPR_U32(ctx, 31, 0x2BD5F0u);
    ctx->pc = 0x2BD5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD5E8u;
    // 0x2bd5ec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BD5E8u, 0x2BD5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD5F0u;
label_2bd5f0:
    // 0x2bd5f0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2BD5F0u;
    {
        const bool branch_taken_0x2bd5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD5F0u;
        // 0x2bd5f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd5f0) {
            ctx->pc = 0x2BD660u;
            goto label_2bd660;
        }
    }
    ctx->pc = 0x2BD5F8u;
label_2bd5f8:
    // 0x2bd5f8: 0xc085608  jal         func_215820
    ctx->pc = 0x2BD5F8u;
    SET_GPR_U32(ctx, 31, 0x2BD600u);
    ctx->pc = 0x2BD5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD5F8u;
    // 0x2bd5fc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BD5F8u, 0x2BD600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD600u;
label_2bd600:
    // 0x2bd600: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2BD600u;
    {
        const bool branch_taken_0x2bd600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD600u;
        // 0x2bd604: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd600) {
            ctx->pc = 0x2BD660u;
            goto label_2bd660;
        }
    }
    ctx->pc = 0x2BD608u;
    // 0x2bd608: 0xc085608  jal         func_215820
    ctx->pc = 0x2BD608u;
    SET_GPR_U32(ctx, 31, 0x2BD610u);
    ctx->pc = 0x2BD60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD608u;
    // 0x2bd60c: 0x240501cc  addiu       $a1, $zero, 0x1CC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BD608u, 0x2BD610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD610u;
label_2bd610:
    // 0x2bd610: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2BD610u;
    {
        const bool branch_taken_0x2bd610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD610u;
        // 0x2bd614: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd610) {
            ctx->pc = 0x2BD660u;
            goto label_2bd660;
        }
    }
    ctx->pc = 0x2BD618u;
    // 0x2bd618: 0xc085608  jal         func_215820
    ctx->pc = 0x2BD618u;
    SET_GPR_U32(ctx, 31, 0x2BD620u);
    ctx->pc = 0x2BD61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD618u;
    // 0x2bd61c: 0x240501ce  addiu       $a1, $zero, 0x1CE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 462));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BD618u, 0x2BD620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD620u;
label_2bd620:
    // 0x2bd620: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2BD620u;
    {
        const bool branch_taken_0x2bd620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD620u;
        // 0x2bd624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd620) {
            ctx->pc = 0x2BD660u;
            goto label_2bd660;
        }
    }
    ctx->pc = 0x2BD628u;
    // 0x2bd628: 0xc085608  jal         func_215820
    ctx->pc = 0x2BD628u;
    SET_GPR_U32(ctx, 31, 0x2BD630u);
    ctx->pc = 0x2BD62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD628u;
    // 0x2bd62c: 0x240501cf  addiu       $a1, $zero, 0x1CF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 463));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BD628u, 0x2BD630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD630u;
label_2bd630:
    // 0x2bd630: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2BD630u;
    {
        const bool branch_taken_0x2bd630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD630u;
        // 0x2bd634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd630) {
            ctx->pc = 0x2BD660u;
            goto label_2bd660;
        }
    }
    ctx->pc = 0x2BD638u;
    // 0x2bd638: 0xc085608  jal         func_215820
    ctx->pc = 0x2BD638u;
    SET_GPR_U32(ctx, 31, 0x2BD640u);
    ctx->pc = 0x2BD63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD638u;
    // 0x2bd63c: 0x240501d0  addiu       $a1, $zero, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BD638u, 0x2BD640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD640u;
label_2bd640:
    // 0x2bd640: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BD640u;
    {
        const bool branch_taken_0x2bd640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD640u;
        // 0x2bd644: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd640) {
            ctx->pc = 0x2BD660u;
            goto label_2bd660;
        }
    }
    ctx->pc = 0x2BD648u;
    // 0x2bd648: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd64c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bd64cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bd650: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2bd650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bd654: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BD654u;
    SET_GPR_U32(ctx, 31, 0x2BD65Cu);
    ctx->pc = 0x2BD658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD654u;
    // 0x2bd658: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BD654u, 0x2BD65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD65Cu;
label_2bd65c:
    // 0x2bd65c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bd65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bd660:
    // 0x2bd660: 0xc085684  jal         func_215A10
    ctx->pc = 0x2BD660u;
    SET_GPR_U32(ctx, 31, 0x2BD668u);
    ctx->pc = 0x2BD664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD660u;
    // 0x2bd664: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A10u, 0x2BD660u, 0x2BD668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD668u;
label_2bd668:
    // 0x2bd668: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD668u;
    {
        const bool branch_taken_0x2bd668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD668u;
        // 0x2bd66c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd668) {
            ctx->pc = 0x2BD680u;
            goto label_2bd680;
        }
    }
    ctx->pc = 0x2BD670u;
    // 0x2bd670: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2bd670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2bd674: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x2bd674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x2bd678: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2BD678u;
    {
        const bool branch_taken_0x2bd678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd678) {
            ctx->pc = 0x2BD6E0u;
            goto label_2bd6e0;
        }
    }
    ctx->pc = 0x2BD680u;
label_2bd680:
    // 0x2bd680: 0xc085684  jal         func_215A10
    ctx->pc = 0x2BD680u;
    SET_GPR_U32(ctx, 31, 0x2BD688u);
    ctx->pc = 0x2BD684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD680u;
    // 0x2bd684: 0x2405007a  addiu       $a1, $zero, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A10u, 0x2BD680u, 0x2BD688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD688u;
label_2bd688:
    // 0x2bd688: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD688u;
    {
        const bool branch_taken_0x2bd688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD688u;
        // 0x2bd68c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd688) {
            ctx->pc = 0x2BD6A0u;
            goto label_2bd6a0;
        }
    }
    ctx->pc = 0x2BD690u;
    // 0x2bd690: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2bd690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2bd694: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x2bd694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x2bd698: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2BD698u;
    {
        const bool branch_taken_0x2bd698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd698) {
            ctx->pc = 0x2BD6E0u;
            goto label_2bd6e0;
        }
    }
    ctx->pc = 0x2BD6A0u;
label_2bd6a0:
    // 0x2bd6a0: 0xc085684  jal         func_215A10
    ctx->pc = 0x2BD6A0u;
    SET_GPR_U32(ctx, 31, 0x2BD6A8u);
    ctx->pc = 0x2BD6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD6A0u;
    // 0x2bd6a4: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A10u, 0x2BD6A0u, 0x2BD6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD6A8u;
label_2bd6a8:
    // 0x2bd6a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD6A8u;
    {
        const bool branch_taken_0x2bd6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6A8u;
        // 0x2bd6ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd6a8) {
            ctx->pc = 0x2BD6C0u;
            goto label_2bd6c0;
        }
    }
    ctx->pc = 0x2BD6B0u;
    // 0x2bd6b0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2bd6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2bd6b4: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x2bd6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x2bd6b8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BD6B8u;
    {
        const bool branch_taken_0x2bd6b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd6b8) {
            ctx->pc = 0x2BD6E0u;
            goto label_2bd6e0;
        }
    }
    ctx->pc = 0x2BD6C0u;
label_2bd6c0:
    // 0x2bd6c0: 0xc085684  jal         func_215A10
    ctx->pc = 0x2BD6C0u;
    SET_GPR_U32(ctx, 31, 0x2BD6C8u);
    ctx->pc = 0x2BD6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD6C0u;
    // 0x2bd6c4: 0x2405007b  addiu       $a1, $zero, 0x7B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A10u, 0x2BD6C0u, 0x2BD6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD6C8u;
label_2bd6c8:
    // 0x2bd6c8: 0x104000ac  beqz        $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x2BD6C8u;
    {
        const bool branch_taken_0x2bd6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6C8u;
        // 0x2bd6cc: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd6c8) {
            ctx->pc = 0x2BD97Cu;
            goto label_2bd97c;
        }
    }
    ctx->pc = 0x2BD6D0u;
    // 0x2bd6d0: 0x8c820098  lw          $v0, 0x98($a0)
    ctx->pc = 0x2bd6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x2bd6d4: 0x504000aa  beql        $v0, $zero, . + 4 + (0xAA << 2)
    ctx->pc = 0x2BD6D4u;
    {
        const bool branch_taken_0x2bd6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd6d4) {
            ctx->pc = 0x2BD6D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD6D4u;
            // 0x2bd6d8: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD980u;
            goto label_2bd980;
        }
    }
    ctx->pc = 0x2BD6DCu;
    // 0x2bd6dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bd6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bd6e0:
    // 0x2bd6e0: 0xc0856a2  jal         func_215A88
    ctx->pc = 0x2BD6E0u;
    SET_GPR_U32(ctx, 31, 0x2BD6E8u);
    ctx->pc = 0x2BD6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD6E0u;
    // 0x2bd6e4: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A88u, 0x2BD6E0u, 0x2BD6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD6E8u;
label_2bd6e8:
    // 0x2bd6e8: 0x544000a4  bnel        $v0, $zero, . + 4 + (0xA4 << 2)
    ctx->pc = 0x2BD6E8u;
    {
        const bool branch_taken_0x2bd6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd6e8) {
            ctx->pc = 0x2BD6ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD6E8u;
            // 0x2bd6ec: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD97Cu;
            goto label_2bd97c;
        }
    }
    ctx->pc = 0x2BD6F0u;
    // 0x2bd6f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bd6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd6f4: 0xc0856a2  jal         func_215A88
    ctx->pc = 0x2BD6F4u;
    SET_GPR_U32(ctx, 31, 0x2BD6FCu);
    ctx->pc = 0x2BD6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD6F4u;
    // 0x2bd6f8: 0x2405007a  addiu       $a1, $zero, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A88u, 0x2BD6F4u, 0x2BD6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD6FCu;
label_2bd6fc:
    // 0x2bd6fc: 0x5440009f  bnel        $v0, $zero, . + 4 + (0x9F << 2)
    ctx->pc = 0x2BD6FCu;
    {
        const bool branch_taken_0x2bd6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd6fc) {
            ctx->pc = 0x2BD700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD6FCu;
            // 0x2bd700: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD97Cu;
            goto label_2bd97c;
        }
    }
    ctx->pc = 0x2BD704u;
    // 0x2bd704: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bd704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd708: 0xc0856a2  jal         func_215A88
    ctx->pc = 0x2BD708u;
    SET_GPR_U32(ctx, 31, 0x2BD710u);
    ctx->pc = 0x2BD70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD708u;
    // 0x2bd70c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A88u, 0x2BD708u, 0x2BD710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD710u;
label_2bd710:
    // 0x2bd710: 0x5440009a  bnel        $v0, $zero, . + 4 + (0x9A << 2)
    ctx->pc = 0x2BD710u;
    {
        const bool branch_taken_0x2bd710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd710) {
            ctx->pc = 0x2BD714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD710u;
            // 0x2bd714: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD97Cu;
            goto label_2bd97c;
        }
    }
    ctx->pc = 0x2BD718u;
    // 0x2bd718: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bd718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd71c: 0xc0856a2  jal         func_215A88
    ctx->pc = 0x2BD71Cu;
    SET_GPR_U32(ctx, 31, 0x2BD724u);
    ctx->pc = 0x2BD720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD71Cu;
    // 0x2bd720: 0x2405007b  addiu       $a1, $zero, 0x7B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215A88u, 0x2BD71Cu, 0x2BD724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD724u;
label_2bd724:
    // 0x2bd724: 0x14400095  bnez        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x2BD724u;
    {
        const bool branch_taken_0x2bd724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD724u;
        // 0x2bd728: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd724) {
            ctx->pc = 0x2BD97Cu;
            goto label_2bd97c;
        }
    }
    ctx->pc = 0x2BD72Cu;
    // 0x2bd72c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2bd72cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2bd730: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bd730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd734: 0xc480008c  lwc1        $f0, 0x8C($a0)
    ctx->pc = 0x2bd734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd738: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2bd738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2bd73c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2bd73cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2bd740: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bd740u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bd744: 0xc6420b34  lwc1        $f2, 0xB34($s2)
    ctx->pc = 0x2bd744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bd748: 0xc6410b3c  lwc1        $f1, 0xB3C($s2)
    ctx->pc = 0x2bd748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd74c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2bd74cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2bd750: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2bd750u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2bd754: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2bd754u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd758: 0x0  nop
    ctx->pc = 0x2bd758u;
    // NOP
    // 0x2bd75c: 0x45020088  bc1fl       . + 4 + (0x88 << 2)
    ctx->pc = 0x2BD75Cu;
    {
        const bool branch_taken_0x2bd75c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bd75c) {
            ctx->pc = 0x2BD760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD75Cu;
            // 0x2bd760: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD980u;
            goto label_2bd980;
        }
    }
    ctx->pc = 0x2BD764u;
    // 0x2bd764: 0x8e420a94  lw          $v0, 0xA94($s2)
    ctx->pc = 0x2bd764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
    // 0x2bd768: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2bd768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2bd76c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2BD76Cu;
    {
        const bool branch_taken_0x2bd76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD76Cu;
        // 0x2bd770: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd76c) {
            ctx->pc = 0x2BD7E0u;
            goto label_2bd7e0;
        }
    }
    ctx->pc = 0x2BD774u;
    // 0x2bd774: 0x8e420a9c  lw          $v0, 0xA9C($s2)
    ctx->pc = 0x2bd774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2716)));
    // 0x2bd778: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2bd778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2bd77c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2BD77Cu;
    {
        const bool branch_taken_0x2bd77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD77Cu;
        // 0x2bd780: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd77c) {
            ctx->pc = 0x2BD7B0u;
            goto label_2bd7b0;
        }
    }
    ctx->pc = 0x2BD784u;
    // 0x2bd784: 0xc08562e  jal         func_2158B8
    ctx->pc = 0x2BD784u;
    SET_GPR_U32(ctx, 31, 0x2BD78Cu);
    ctx->pc = 0x2BD788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD784u;
    // 0x2bd788: 0x24050071  addiu       $a1, $zero, 0x71 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2158B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2158B8u, 0x2BD784u, 0x2BD78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD78Cu;
label_2bd78c:
    // 0x2bd78c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BD78Cu;
    {
        const bool branch_taken_0x2bd78c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD78Cu;
        // 0x2bd790: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd78c) {
            ctx->pc = 0x2BD7B0u;
            goto label_2bd7b0;
        }
    }
    ctx->pc = 0x2BD794u;
    // 0x2bd794: 0xc78c9044  lwc1        $f12, -0x6FBC($gp)
    ctx->pc = 0x2bd794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bd798: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd79c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bd79cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bd7a0: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BD7A0u;
    SET_GPR_U32(ctx, 31, 0x2BD7A8u);
    ctx->pc = 0x2BD7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD7A0u;
    // 0x2bd7a4: 0x24050071  addiu       $a1, $zero, 0x71 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BD7A0u, 0x2BD7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD7A8u;
label_2bd7a8:
    // 0x2bd7a8: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x2BD7A8u;
    {
        const bool branch_taken_0x2bd7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD7A8u;
        // 0x2bd7ac: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd7a8) {
            ctx->pc = 0x2BD97Cu;
            goto label_2bd97c;
        }
    }
    ctx->pc = 0x2BD7B0u;
label_2bd7b0:
    // 0x2bd7b0: 0xc085608  jal         func_215820
    ctx->pc = 0x2BD7B0u;
    SET_GPR_U32(ctx, 31, 0x2BD7B8u);
    ctx->pc = 0x2BD7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD7B0u;
    // 0x2bd7b4: 0x24050071  addiu       $a1, $zero, 0x71 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BD7B0u, 0x2BD7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD7B8u;
label_2bd7b8:
    // 0x2bd7b8: 0x54400070  bnel        $v0, $zero, . + 4 + (0x70 << 2)
    ctx->pc = 0x2BD7B8u;
    {
        const bool branch_taken_0x2bd7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd7b8) {
            ctx->pc = 0x2BD7BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD7B8u;
            // 0x2bd7bc: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD97Cu;
            goto label_2bd97c;
        }
    }
    ctx->pc = 0x2BD7C0u;
    // 0x2bd7c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd7c4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bd7c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bd7c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bd7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd7cc: 0x24050071  addiu       $a1, $zero, 0x71
    ctx->pc = 0x2bd7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
label_2bd7d0:
    // 0x2bd7d0: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BD7D0u;
    SET_GPR_U32(ctx, 31, 0x2BD7D8u);
    ctx->pc = 0x2BD7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD7D0u;
    // 0x2bd7d4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BD7D0u, 0x2BD7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD7D8u;
label_2bd7d8:
    // 0x2bd7d8: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2BD7D8u;
    {
        const bool branch_taken_0x2bd7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD7D8u;
        // 0x2bd7dc: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd7d8) {
            ctx->pc = 0x2BD97Cu;
            goto label_2bd97c;
        }
    }
    ctx->pc = 0x2BD7E0u;
label_2bd7e0:
    // 0x2bd7e0: 0xc0b30e8  jal         func_2CC3A0
    ctx->pc = 0x2BD7E0u;
    SET_GPR_U32(ctx, 31, 0x2BD7E8u);
    ctx->pc = 0x2BD7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD7E0u;
    // 0x2bd7e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC3A0u, 0x2BD7E0u, 0x2BD7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD7E8u;
label_2bd7e8:
    // 0x2bd7e8: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2BD7E8u;
    {
        const bool branch_taken_0x2bd7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD7E8u;
        // 0x2bd7ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd7e8) {
            ctx->pc = 0x2BD900u;
            goto label_2bd900;
        }
    }
    ctx->pc = 0x2BD7F0u;
    // 0x2bd7f0: 0xc085608  jal         func_215820
    ctx->pc = 0x2BD7F0u;
    SET_GPR_U32(ctx, 31, 0x2BD7F8u);
    ctx->pc = 0x2BD7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD7F0u;
    // 0x2bd7f4: 0x240501cc  addiu       $a1, $zero, 0x1CC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BD7F0u, 0x2BD7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD7F8u;
label_2bd7f8:
    // 0x2bd7f8: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2BD7F8u;
    {
        const bool branch_taken_0x2bd7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD7F8u;
        // 0x2bd7fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd7f8) {
            ctx->pc = 0x2BD900u;
            goto label_2bd900;
        }
    }
    ctx->pc = 0x2BD800u;
    // 0x2bd800: 0xc085608  jal         func_215820
    ctx->pc = 0x2BD800u;
    SET_GPR_U32(ctx, 31, 0x2BD808u);
    ctx->pc = 0x2BD804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD800u;
    // 0x2bd804: 0x240501ce  addiu       $a1, $zero, 0x1CE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 462));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BD800u, 0x2BD808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD808u;
label_2bd808:
    // 0x2bd808: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2BD808u;
    {
        const bool branch_taken_0x2bd808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD808u;
        // 0x2bd80c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd808) {
            ctx->pc = 0x2BD900u;
            goto label_2bd900;
        }
    }
    ctx->pc = 0x2BD810u;
    // 0x2bd810: 0xc085608  jal         func_215820
    ctx->pc = 0x2BD810u;
    SET_GPR_U32(ctx, 31, 0x2BD818u);
    ctx->pc = 0x2BD814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD810u;
    // 0x2bd814: 0x240501cf  addiu       $a1, $zero, 0x1CF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 463));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BD810u, 0x2BD818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD818u;
label_2bd818:
    // 0x2bd818: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2BD818u;
    {
        const bool branch_taken_0x2bd818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD818u;
        // 0x2bd81c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd818) {
            ctx->pc = 0x2BD900u;
            goto label_2bd900;
        }
    }
    ctx->pc = 0x2BD820u;
    // 0x2bd820: 0xc085608  jal         func_215820
    ctx->pc = 0x2BD820u;
    SET_GPR_U32(ctx, 31, 0x2BD828u);
    ctx->pc = 0x2BD824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD820u;
    // 0x2bd824: 0x240501d0  addiu       $a1, $zero, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BD820u, 0x2BD828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD828u;
label_2bd828:
    // 0x2bd828: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2BD828u;
    {
        const bool branch_taken_0x2bd828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD828u;
        // 0x2bd82c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd828) {
            ctx->pc = 0x2BD900u;
            goto label_2bd900;
        }
    }
    ctx->pc = 0x2BD830u;
    // 0x2bd830: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2BD830u;
    SET_GPR_U32(ctx, 31, 0x2BD838u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2BD830u, 0x2BD838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD838u;
label_2bd838:
    // 0x2bd838: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BD838u;
    {
        const bool branch_taken_0x2bd838 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BD83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD838u;
        // 0x2bd83c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd838) {
            ctx->pc = 0x2BD84Cu;
            goto label_2bd84c;
        }
    }
    ctx->pc = 0x2BD840u;
    // 0x2bd840: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bd840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bd844: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BD844u;
    {
        const bool branch_taken_0x2bd844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD844u;
        // 0x2bd848: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd844) {
            ctx->pc = 0x2BD860u;
            goto label_2bd860;
        }
    }
    ctx->pc = 0x2BD84Cu;
label_2bd84c:
    // 0x2bd84c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bd84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bd850: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bd850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2bd854: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bd854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bd858: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2bd858u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2bd85c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2bd85cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2bd860:
    // 0x2bd860: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2bd860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2bd864: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bd864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd868: 0xc7819048  lwc1        $f1, -0x6FB8($gp)
    ctx->pc = 0x2bd868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd86c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2bd86cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2bd870: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bd870u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd874: 0x0  nop
    ctx->pc = 0x2bd874u;
    // NOP
    // 0x2bd878: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x2BD878u;
    {
        const bool branch_taken_0x2bd878 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BD87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD878u;
        // 0x2bd87c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd878) {
            ctx->pc = 0x2BD900u;
            goto label_2bd900;
        }
    }
    ctx->pc = 0x2BD880u;
    // 0x2bd880: 0x8e4201e4  lw          $v0, 0x1E4($s2)
    ctx->pc = 0x2bd880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 484)));
    // 0x2bd884: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD884u;
    {
        const bool branch_taken_0x2bd884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD884u;
        // 0x2bd888: 0x240501cf  addiu       $a1, $zero, 0x1CF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 463));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd884) {
            ctx->pc = 0x2BD89Cu;
            goto label_2bd89c;
        }
    }
    ctx->pc = 0x2BD88Cu;
    // 0x2bd88c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd88cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd890: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bd890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bd894: 0x1000ffce  b           . + 4 + (-0x32 << 2)
    ctx->pc = 0x2BD894u;
    {
        const bool branch_taken_0x2bd894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd894) {
            ctx->pc = 0x2BD7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bd7d0;
        }
    }
    ctx->pc = 0x2BD89Cu;
label_2bd89c:
    // 0x2bd89c: 0x8e4201b8  lw          $v0, 0x1B8($s2)
    ctx->pc = 0x2bd89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
    // 0x2bd8a0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BD8A0u;
    {
        const bool branch_taken_0x2bd8a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd8a0) {
            ctx->pc = 0x2BD8A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD8A0u;
            // 0x2bd8a4: 0x8e440178  lw          $a0, 0x178($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD8BCu;
            goto label_2bd8bc;
        }
    }
    ctx->pc = 0x2BD8A8u;
    // 0x2bd8a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd8a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd8ac: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bd8acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bd8b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bd8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd8b4: 0x1000ffc6  b           . + 4 + (-0x3A << 2)
    ctx->pc = 0x2BD8B4u;
    {
        const bool branch_taken_0x2bd8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8B4u;
        // 0x2bd8b8: 0x240501cc  addiu       $a1, $zero, 0x1CC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd8b4) {
            ctx->pc = 0x2BD7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bd7d0;
        }
    }
    ctx->pc = 0x2BD8BCu;
label_2bd8bc:
    // 0x2bd8bc: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x2bd8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x2bd8c0: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2bd8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x2bd8c4: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2bd8c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2bd8c8: 0x24636218  addiu       $v1, $v1, 0x6218
    ctx->pc = 0x2bd8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25112));
    // 0x2bd8cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bd8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bd8d0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2bd8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2bd8d4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2bd8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2bd8d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD8D8u;
    {
        const bool branch_taken_0x2bd8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8D8u;
        // 0x2bd8dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd8d8) {
            ctx->pc = 0x2BD8F0u;
            goto label_2bd8f0;
        }
    }
    ctx->pc = 0x2BD8E0u;
    // 0x2bd8e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd8e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd8e4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bd8e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bd8e8: 0x1000ffb9  b           . + 4 + (-0x47 << 2)
    ctx->pc = 0x2BD8E8u;
    {
        const bool branch_taken_0x2bd8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8E8u;
        // 0x2bd8ec: 0x240501d0  addiu       $a1, $zero, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd8e8) {
            ctx->pc = 0x2BD7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bd7d0;
        }
    }
    ctx->pc = 0x2BD8F0u;
label_2bd8f0:
    // 0x2bd8f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd8f4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bd8f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bd8f8: 0x1000ffb5  b           . + 4 + (-0x4B << 2)
    ctx->pc = 0x2BD8F8u;
    {
        const bool branch_taken_0x2bd8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8F8u;
        // 0x2bd8fc: 0x240501ce  addiu       $a1, $zero, 0x1CE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 462));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd8f8) {
            ctx->pc = 0x2BD7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bd7d0;
        }
    }
    ctx->pc = 0x2BD900u;
label_2bd900:
    // 0x2bd900: 0xc085608  jal         func_215820
    ctx->pc = 0x2BD900u;
    SET_GPR_U32(ctx, 31, 0x2BD908u);
    ctx->pc = 0x2BD904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD900u;
    // 0x2bd904: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BD900u, 0x2BD908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD908u;
label_2bd908:
    // 0x2bd908: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2BD908u;
    {
        const bool branch_taken_0x2bd908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd908) {
            ctx->pc = 0x2BD90Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD908u;
            // 0x2bd90c: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD97Cu;
            goto label_2bd97c;
        }
    }
    ctx->pc = 0x2BD910u;
    // 0x2bd910: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bd910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd914: 0xc085608  jal         func_215820
    ctx->pc = 0x2BD914u;
    SET_GPR_U32(ctx, 31, 0x2BD91Cu);
    ctx->pc = 0x2BD918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD914u;
    // 0x2bd918: 0x240501cc  addiu       $a1, $zero, 0x1CC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BD914u, 0x2BD91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD91Cu;
label_2bd91c:
    // 0x2bd91c: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2BD91Cu;
    {
        const bool branch_taken_0x2bd91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd91c) {
            ctx->pc = 0x2BD920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD91Cu;
            // 0x2bd920: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD97Cu;
            goto label_2bd97c;
        }
    }
    ctx->pc = 0x2BD924u;
    // 0x2bd924: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bd924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd928: 0xc085608  jal         func_215820
    ctx->pc = 0x2BD928u;
    SET_GPR_U32(ctx, 31, 0x2BD930u);
    ctx->pc = 0x2BD92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD928u;
    // 0x2bd92c: 0x240501ce  addiu       $a1, $zero, 0x1CE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 462));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BD928u, 0x2BD930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD930u;
label_2bd930:
    // 0x2bd930: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BD930u;
    {
        const bool branch_taken_0x2bd930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd930) {
            ctx->pc = 0x2BD934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD930u;
            // 0x2bd934: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD97Cu;
            goto label_2bd97c;
        }
    }
    ctx->pc = 0x2BD938u;
    // 0x2bd938: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bd938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd93c: 0xc085608  jal         func_215820
    ctx->pc = 0x2BD93Cu;
    SET_GPR_U32(ctx, 31, 0x2BD944u);
    ctx->pc = 0x2BD940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD93Cu;
    // 0x2bd940: 0x240501cf  addiu       $a1, $zero, 0x1CF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 463));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BD93Cu, 0x2BD944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD944u;
label_2bd944:
    // 0x2bd944: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2BD944u;
    {
        const bool branch_taken_0x2bd944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd944) {
            ctx->pc = 0x2BD948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD944u;
            // 0x2bd948: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD97Cu;
            goto label_2bd97c;
        }
    }
    ctx->pc = 0x2BD94Cu;
    // 0x2bd94c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bd94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd950: 0xc085608  jal         func_215820
    ctx->pc = 0x2BD950u;
    SET_GPR_U32(ctx, 31, 0x2BD958u);
    ctx->pc = 0x2BD954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD950u;
    // 0x2bd954: 0x240501d0  addiu       $a1, $zero, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BD950u, 0x2BD958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD958u;
label_2bd958:
    // 0x2bd958: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BD958u;
    {
        const bool branch_taken_0x2bd958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd958) {
            ctx->pc = 0x2BD95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD958u;
            // 0x2bd95c: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD97Cu;
            goto label_2bd97c;
        }
    }
    ctx->pc = 0x2BD960u;
    // 0x2bd960: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd964: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bd964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bd968: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bd968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd96c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2bd96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bd970: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BD970u;
    SET_GPR_U32(ctx, 31, 0x2BD978u);
    ctx->pc = 0x2BD974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD970u;
    // 0x2bd974: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BD970u, 0x2BD978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD978u;
label_2bd978:
    // 0x2bd978: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x2bd978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2bd97c:
    // 0x2bd97c: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x2bd97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_2bd980:
    // 0x2bd980: 0x284201bb  slti        $v0, $v0, 0x1BB
    ctx->pc = 0x2bd980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)443) ? 1 : 0);
    // 0x2bd984: 0x544001d2  bnel        $v0, $zero, . + 4 + (0x1D2 << 2)
    ctx->pc = 0x2BD984u;
    {
        const bool branch_taken_0x2bd984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd984) {
            ctx->pc = 0x2BD988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD984u;
            // 0x2bd988: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BD98Cu;
    // 0x2bd98c: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2BD98Cu;
    SET_GPR_U32(ctx, 31, 0x2BD994u);
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2BD98Cu, 0x2BD994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD994u;
label_2bd994:
    // 0x2bd994: 0x104001ce  beqz        $v0, . + 4 + (0x1CE << 2)
    ctx->pc = 0x2BD994u;
    {
        const bool branch_taken_0x2bd994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD994u;
        // 0x2bd998: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd994) {
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BD99Cu;
    // 0x2bd99c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2bd99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2bd9a0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2BD9A0u;
    {
        const bool branch_taken_0x2bd9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD9A0u;
        // 0x2bd9a4: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd9a0) {
            ctx->pc = 0x2BDA0Cu;
            goto label_2bda0c;
        }
    }
    ctx->pc = 0x2BD9A8u;
    // 0x2bd9a8: 0x8e420a9c  lw          $v0, 0xA9C($s2)
    ctx->pc = 0x2bd9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2716)));
    // 0x2bd9ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2bd9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2bd9b0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BD9B0u;
    {
        const bool branch_taken_0x2bd9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD9B0u;
        // 0x2bd9b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd9b0) {
            ctx->pc = 0x2BD9DCu;
            goto label_2bd9dc;
        }
    }
    ctx->pc = 0x2BD9B8u;
    // 0x2bd9b8: 0xc08562e  jal         func_2158B8
    ctx->pc = 0x2BD9B8u;
    SET_GPR_U32(ctx, 31, 0x2BD9C0u);
    ctx->pc = 0x2BD9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD9B8u;
    // 0x2bd9bc: 0x24050071  addiu       $a1, $zero, 0x71 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2158B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2158B8u, 0x2BD9B8u, 0x2BD9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD9C0u;
label_2bd9c0:
    // 0x2bd9c0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BD9C0u;
    {
        const bool branch_taken_0x2bd9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD9C0u;
        // 0x2bd9c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd9c0) {
            ctx->pc = 0x2BD9DCu;
            goto label_2bd9dc;
        }
    }
    ctx->pc = 0x2BD9C8u;
    // 0x2bd9c8: 0xc78c904c  lwc1        $f12, -0x6FB4($gp)
    ctx->pc = 0x2bd9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bd9cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd9ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd9d0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bd9d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bd9d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2BD9D4u;
    {
        const bool branch_taken_0x2bd9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd9d4) {
            ctx->pc = 0x2BD9FCu;
            goto label_2bd9fc;
        }
    }
    ctx->pc = 0x2BD9DCu;
label_2bd9dc:
    // 0x2bd9dc: 0xc085608  jal         func_215820
    ctx->pc = 0x2BD9DCu;
    SET_GPR_U32(ctx, 31, 0x2BD9E4u);
    ctx->pc = 0x2BD9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD9DCu;
    // 0x2bd9e0: 0x24050071  addiu       $a1, $zero, 0x71 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BD9DCu, 0x2BD9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD9E4u;
label_2bd9e4:
    // 0x2bd9e4: 0x544001ba  bnel        $v0, $zero, . + 4 + (0x1BA << 2)
    ctx->pc = 0x2BD9E4u;
    {
        const bool branch_taken_0x2bd9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd9e4) {
            ctx->pc = 0x2BD9E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD9E4u;
            // 0x2bd9e8: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BD9ECu;
    // 0x2bd9ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd9ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd9f0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bd9f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bd9f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bd9f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bd9f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bd9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bd9fc:
    // 0x2bd9fc: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BD9FCu;
    SET_GPR_U32(ctx, 31, 0x2BDA04u);
    ctx->pc = 0x2BDA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD9FCu;
    // 0x2bda00: 0x24050071  addiu       $a1, $zero, 0x71 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BD9FCu, 0x2BDA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDA04u;
label_2bda04:
    // 0x2bda04: 0x100001b2  b           . + 4 + (0x1B2 << 2)
    ctx->pc = 0x2BDA04u;
    {
        const bool branch_taken_0x2bda04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDA04u;
        // 0x2bda08: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bda04) {
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BDA0Cu;
label_2bda0c:
    // 0x2bda0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bda0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bda10: 0xc085608  jal         func_215820
    ctx->pc = 0x2BDA10u;
    SET_GPR_U32(ctx, 31, 0x2BDA18u);
    ctx->pc = 0x2BDA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDA10u;
    // 0x2bda14: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BDA10u, 0x2BDA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDA18u;
label_2bda18:
    // 0x2bda18: 0x544001ad  bnel        $v0, $zero, . + 4 + (0x1AD << 2)
    ctx->pc = 0x2BDA18u;
    {
        const bool branch_taken_0x2bda18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bda18) {
            ctx->pc = 0x2BDA1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDA18u;
            // 0x2bda1c: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BDA20u;
    // 0x2bda20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bda20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bda24: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bda24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bda28: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bda28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bda2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bda2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bda30: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BDA30u;
    SET_GPR_U32(ctx, 31, 0x2BDA38u);
    ctx->pc = 0x2BDA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDA30u;
    // 0x2bda34: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BDA30u, 0x2BDA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDA38u;
label_2bda38:
    // 0x2bda38: 0x100001a5  b           . + 4 + (0x1A5 << 2)
    ctx->pc = 0x2BDA38u;
    {
        const bool branch_taken_0x2bda38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDA38u;
        // 0x2bda3c: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bda38) {
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BDA40u;
label_2bda40:
    // 0x2bda40: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x2BDA40u;
    {
        const bool branch_taken_0x2bda40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDA40u;
        // 0x2bda44: 0x8e420a98  lw          $v0, 0xA98($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bda40) {
            ctx->pc = 0x2BDC38u;
            goto label_2bdc38;
        }
    }
    ctx->pc = 0x2BDA48u;
    // 0x2bda48: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2bda48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2bda4c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2bda4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2bda50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bda50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bda54: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BDA54u;
    {
        const bool branch_taken_0x2bda54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDA54u;
        // 0x2bda58: 0xc6410b3c  lwc1        $f1, 0xB3C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bda54) {
            ctx->pc = 0x2BDA60u;
            goto label_2bda60;
        }
    }
    ctx->pc = 0x2BDA5Cu;
    // 0x2bda5c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2bda5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2bda60:
    // 0x2bda60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bda60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bda64: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bda64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bda68: 0x0  nop
    ctx->pc = 0x2bda68u;
    // NOP
    // 0x2bda6c: 0x45000039  bc1f        . + 4 + (0x39 << 2)
    ctx->pc = 0x2BDA6Cu;
    {
        const bool branch_taken_0x2bda6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BDA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDA6Cu;
        // 0x2bda70: 0xc6400b2c  lwc1        $f0, 0xB2C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bda6c) {
            ctx->pc = 0x2BDB54u;
            goto label_2bdb54;
        }
    }
    ctx->pc = 0x2BDA74u;
    // 0x2bda74: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bda74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bda78: 0x0  nop
    ctx->pc = 0x2bda78u;
    // NOP
    // 0x2bda7c: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x2BDA7Cu;
    {
        const bool branch_taken_0x2bda7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BDA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDA7Cu;
        // 0x2bda80: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bda7c) {
            ctx->pc = 0x2BDAECu;
            goto label_2bdaec;
        }
    }
    ctx->pc = 0x2BDA84u;
    // 0x2bda84: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BDA84u;
    {
        const bool branch_taken_0x2bda84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDA84u;
        // 0x2bda88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bda84) {
            ctx->pc = 0x2BDABCu;
            goto label_2bdabc;
        }
    }
    ctx->pc = 0x2BDA8Cu;
    // 0x2bda8c: 0xc085608  jal         func_215820
    ctx->pc = 0x2BDA8Cu;
    SET_GPR_U32(ctx, 31, 0x2BDA94u);
    ctx->pc = 0x2BDA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDA8Cu;
    // 0x2bda90: 0x24050077  addiu       $a1, $zero, 0x77 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BDA8Cu, 0x2BDA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDA94u;
label_2bda94:
    // 0x2bda94: 0x5440018e  bnel        $v0, $zero, . + 4 + (0x18E << 2)
    ctx->pc = 0x2BDA94u;
    {
        const bool branch_taken_0x2bda94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bda94) {
            ctx->pc = 0x2BDA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDA94u;
            // 0x2bda98: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BDA9Cu;
    // 0x2bda9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bda9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bdaa0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bdaa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bdaa4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bdaa4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bdaa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bdaa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdaac: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BDAACu;
    SET_GPR_U32(ctx, 31, 0x2BDAB4u);
    ctx->pc = 0x2BDAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDAACu;
    // 0x2bdab0: 0x24050077  addiu       $a1, $zero, 0x77 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BDAACu, 0x2BDAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDAB4u;
label_2bdab4:
    // 0x2bdab4: 0x10000186  b           . + 4 + (0x186 << 2)
    ctx->pc = 0x2BDAB4u;
    {
        const bool branch_taken_0x2bdab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDAB4u;
        // 0x2bdab8: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdab4) {
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BDABCu;
label_2bdabc:
    // 0x2bdabc: 0xc085608  jal         func_215820
    ctx->pc = 0x2BDABCu;
    SET_GPR_U32(ctx, 31, 0x2BDAC4u);
    ctx->pc = 0x2BDAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDABCu;
    // 0x2bdac0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BDABCu, 0x2BDAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDAC4u;
label_2bdac4:
    // 0x2bdac4: 0x54400182  bnel        $v0, $zero, . + 4 + (0x182 << 2)
    ctx->pc = 0x2BDAC4u;
    {
        const bool branch_taken_0x2bdac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bdac4) {
            ctx->pc = 0x2BDAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDAC4u;
            // 0x2bdac8: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BDACCu;
    // 0x2bdacc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bdaccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bdad0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bdad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bdad4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bdad4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bdad8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bdad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdadc: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BDADCu;
    SET_GPR_U32(ctx, 31, 0x2BDAE4u);
    ctx->pc = 0x2BDAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDADCu;
    // 0x2bdae0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BDADCu, 0x2BDAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDAE4u;
label_2bdae4:
    // 0x2bdae4: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x2BDAE4u;
    {
        const bool branch_taken_0x2bdae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDAE4u;
        // 0x2bdae8: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdae4) {
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BDAECu;
label_2bdaec:
    // 0x2bdaec: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BDAECu;
    {
        const bool branch_taken_0x2bdaec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDAECu;
        // 0x2bdaf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdaec) {
            ctx->pc = 0x2BDB24u;
            goto label_2bdb24;
        }
    }
    ctx->pc = 0x2BDAF4u;
    // 0x2bdaf4: 0xc085608  jal         func_215820
    ctx->pc = 0x2BDAF4u;
    SET_GPR_U32(ctx, 31, 0x2BDAFCu);
    ctx->pc = 0x2BDAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDAF4u;
    // 0x2bdaf8: 0x24050075  addiu       $a1, $zero, 0x75 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BDAF4u, 0x2BDAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDAFCu;
label_2bdafc:
    // 0x2bdafc: 0x54400174  bnel        $v0, $zero, . + 4 + (0x174 << 2)
    ctx->pc = 0x2BDAFCu;
    {
        const bool branch_taken_0x2bdafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bdafc) {
            ctx->pc = 0x2BDB00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDAFCu;
            // 0x2bdb00: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BDB04u;
    // 0x2bdb04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bdb04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bdb08: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bdb08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bdb0c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bdb0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bdb10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bdb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdb14: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BDB14u;
    SET_GPR_U32(ctx, 31, 0x2BDB1Cu);
    ctx->pc = 0x2BDB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDB14u;
    // 0x2bdb18: 0x24050075  addiu       $a1, $zero, 0x75 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BDB14u, 0x2BDB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDB1Cu;
label_2bdb1c:
    // 0x2bdb1c: 0x1000016c  b           . + 4 + (0x16C << 2)
    ctx->pc = 0x2BDB1Cu;
    {
        const bool branch_taken_0x2bdb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB1Cu;
        // 0x2bdb20: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdb1c) {
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BDB24u;
label_2bdb24:
    // 0x2bdb24: 0xc085608  jal         func_215820
    ctx->pc = 0x2BDB24u;
    SET_GPR_U32(ctx, 31, 0x2BDB2Cu);
    ctx->pc = 0x2BDB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDB24u;
    // 0x2bdb28: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BDB24u, 0x2BDB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDB2Cu;
label_2bdb2c:
    // 0x2bdb2c: 0x54400168  bnel        $v0, $zero, . + 4 + (0x168 << 2)
    ctx->pc = 0x2BDB2Cu;
    {
        const bool branch_taken_0x2bdb2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bdb2c) {
            ctx->pc = 0x2BDB30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDB2Cu;
            // 0x2bdb30: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BDB34u;
    // 0x2bdb34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bdb34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bdb38: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bdb38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bdb3c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bdb3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bdb40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bdb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdb44: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BDB44u;
    SET_GPR_U32(ctx, 31, 0x2BDB4Cu);
    ctx->pc = 0x2BDB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDB44u;
    // 0x2bdb48: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BDB44u, 0x2BDB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDB4Cu;
label_2bdb4c:
    // 0x2bdb4c: 0x10000160  b           . + 4 + (0x160 << 2)
    ctx->pc = 0x2BDB4Cu;
    {
        const bool branch_taken_0x2bdb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB4Cu;
        // 0x2bdb50: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdb4c) {
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BDB54u;
label_2bdb54:
    // 0x2bdb54: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bdb54u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bdb58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bdb58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bdb5c: 0x0  nop
    ctx->pc = 0x2bdb5cu;
    // NOP
    // 0x2bdb60: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x2BDB60u;
    {
        const bool branch_taken_0x2bdb60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BDB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB60u;
        // 0x2bdb64: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdb60) {
            ctx->pc = 0x2BDBD0u;
            goto label_2bdbd0;
        }
    }
    ctx->pc = 0x2BDB68u;
    // 0x2bdb68: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BDB68u;
    {
        const bool branch_taken_0x2bdb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB68u;
        // 0x2bdb6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdb68) {
            ctx->pc = 0x2BDBA0u;
            goto label_2bdba0;
        }
    }
    ctx->pc = 0x2BDB70u;
    // 0x2bdb70: 0xc085608  jal         func_215820
    ctx->pc = 0x2BDB70u;
    SET_GPR_U32(ctx, 31, 0x2BDB78u);
    ctx->pc = 0x2BDB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDB70u;
    // 0x2bdb74: 0x24050076  addiu       $a1, $zero, 0x76 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BDB70u, 0x2BDB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDB78u;
label_2bdb78:
    // 0x2bdb78: 0x54400155  bnel        $v0, $zero, . + 4 + (0x155 << 2)
    ctx->pc = 0x2BDB78u;
    {
        const bool branch_taken_0x2bdb78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bdb78) {
            ctx->pc = 0x2BDB7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDB78u;
            // 0x2bdb7c: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BDB80u;
    // 0x2bdb80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bdb80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bdb84: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bdb84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bdb88: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bdb88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bdb8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bdb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdb90: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BDB90u;
    SET_GPR_U32(ctx, 31, 0x2BDB98u);
    ctx->pc = 0x2BDB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDB90u;
    // 0x2bdb94: 0x24050076  addiu       $a1, $zero, 0x76 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BDB90u, 0x2BDB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDB98u;
label_2bdb98:
    // 0x2bdb98: 0x1000014d  b           . + 4 + (0x14D << 2)
    ctx->pc = 0x2BDB98u;
    {
        const bool branch_taken_0x2bdb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB98u;
        // 0x2bdb9c: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdb98) {
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BDBA0u;
label_2bdba0:
    // 0x2bdba0: 0xc085608  jal         func_215820
    ctx->pc = 0x2BDBA0u;
    SET_GPR_U32(ctx, 31, 0x2BDBA8u);
    ctx->pc = 0x2BDBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDBA0u;
    // 0x2bdba4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BDBA0u, 0x2BDBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDBA8u;
label_2bdba8:
    // 0x2bdba8: 0x54400149  bnel        $v0, $zero, . + 4 + (0x149 << 2)
    ctx->pc = 0x2BDBA8u;
    {
        const bool branch_taken_0x2bdba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bdba8) {
            ctx->pc = 0x2BDBACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDBA8u;
            // 0x2bdbac: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BDBB0u;
    // 0x2bdbb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bdbb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bdbb4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bdbb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bdbb8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bdbb8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bdbbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bdbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdbc0: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BDBC0u;
    SET_GPR_U32(ctx, 31, 0x2BDBC8u);
    ctx->pc = 0x2BDBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDBC0u;
    // 0x2bdbc4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BDBC0u, 0x2BDBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDBC8u;
label_2bdbc8:
    // 0x2bdbc8: 0x10000141  b           . + 4 + (0x141 << 2)
    ctx->pc = 0x2BDBC8u;
    {
        const bool branch_taken_0x2bdbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDBC8u;
        // 0x2bdbcc: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdbc8) {
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BDBD0u;
label_2bdbd0:
    // 0x2bdbd0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BDBD0u;
    {
        const bool branch_taken_0x2bdbd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDBD0u;
        // 0x2bdbd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdbd0) {
            ctx->pc = 0x2BDC08u;
            goto label_2bdc08;
        }
    }
    ctx->pc = 0x2BDBD8u;
    // 0x2bdbd8: 0xc085608  jal         func_215820
    ctx->pc = 0x2BDBD8u;
    SET_GPR_U32(ctx, 31, 0x2BDBE0u);
    ctx->pc = 0x2BDBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDBD8u;
    // 0x2bdbdc: 0x24050074  addiu       $a1, $zero, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BDBD8u, 0x2BDBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDBE0u;
label_2bdbe0:
    // 0x2bdbe0: 0x5440013b  bnel        $v0, $zero, . + 4 + (0x13B << 2)
    ctx->pc = 0x2BDBE0u;
    {
        const bool branch_taken_0x2bdbe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bdbe0) {
            ctx->pc = 0x2BDBE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDBE0u;
            // 0x2bdbe4: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BDBE8u;
    // 0x2bdbe8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bdbe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bdbec: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bdbecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bdbf0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bdbf0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bdbf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bdbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdbf8: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BDBF8u;
    SET_GPR_U32(ctx, 31, 0x2BDC00u);
    ctx->pc = 0x2BDBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDBF8u;
    // 0x2bdbfc: 0x24050074  addiu       $a1, $zero, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BDBF8u, 0x2BDC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDC00u;
label_2bdc00:
    // 0x2bdc00: 0x10000133  b           . + 4 + (0x133 << 2)
    ctx->pc = 0x2BDC00u;
    {
        const bool branch_taken_0x2bdc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDC00u;
        // 0x2bdc04: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdc00) {
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BDC08u;
label_2bdc08:
    // 0x2bdc08: 0xc085608  jal         func_215820
    ctx->pc = 0x2BDC08u;
    SET_GPR_U32(ctx, 31, 0x2BDC10u);
    ctx->pc = 0x2BDC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDC08u;
    // 0x2bdc0c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BDC08u, 0x2BDC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDC10u;
label_2bdc10:
    // 0x2bdc10: 0x5440012f  bnel        $v0, $zero, . + 4 + (0x12F << 2)
    ctx->pc = 0x2BDC10u;
    {
        const bool branch_taken_0x2bdc10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bdc10) {
            ctx->pc = 0x2BDC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDC10u;
            // 0x2bdc14: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BDC18u;
    // 0x2bdc18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bdc18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bdc1c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bdc1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bdc20: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bdc20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bdc24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bdc24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdc28: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BDC28u;
    SET_GPR_U32(ctx, 31, 0x2BDC30u);
    ctx->pc = 0x2BDC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDC28u;
    // 0x2bdc2c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BDC28u, 0x2BDC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDC30u;
label_2bdc30:
    // 0x2bdc30: 0x10000127  b           . + 4 + (0x127 << 2)
    ctx->pc = 0x2BDC30u;
    {
        const bool branch_taken_0x2bdc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDC30u;
        // 0x2bdc34: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdc30) {
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BDC38u;
label_2bdc38:
    // 0x2bdc38: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2bdc38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2bdc3c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2bdc3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2bdc40: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2bdc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2bdc44: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BDC44u;
    {
        const bool branch_taken_0x2bdc44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDC44u;
        // 0x2bdc48: 0xc6410b3c  lwc1        $f1, 0xB3C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdc44) {
            ctx->pc = 0x2BDC50u;
            goto label_2bdc50;
        }
    }
    ctx->pc = 0x2BDC4Cu;
    // 0x2bdc4c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2bdc4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2bdc50:
    // 0x2bdc50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bdc50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdc54: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2bdc54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bdc58: 0x0  nop
    ctx->pc = 0x2bdc58u;
    // NOP
    // 0x2bdc5c: 0x450000e4  bc1f        . + 4 + (0xE4 << 2)
    ctx->pc = 0x2BDC5Cu;
    {
        const bool branch_taken_0x2bdc5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BDC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDC5Cu;
        // 0x2bdc60: 0xc6400b2c  lwc1        $f0, 0xB2C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdc5c) {
            ctx->pc = 0x2BDFF0u;
            goto label_2bdff0;
        }
    }
    ctx->pc = 0x2BDC64u;
    // 0x2bdc64: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bdc64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bdc68: 0x0  nop
    ctx->pc = 0x2bdc68u;
    // NOP
    // 0x2bdc6c: 0x45000080  bc1f        . + 4 + (0x80 << 2)
    ctx->pc = 0x2BDC6Cu;
    {
        const bool branch_taken_0x2bdc6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BDC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDC6Cu;
        // 0x2bdc70: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdc6c) {
            ctx->pc = 0x2BDE70u;
            goto label_2bde70;
        }
    }
    ctx->pc = 0x2BDC74u;
    // 0x2bdc74: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BDC74u;
    {
        const bool branch_taken_0x2bdc74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDC74u;
        // 0x2bdc78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdc74) {
            ctx->pc = 0x2BDCACu;
            goto label_2bdcac;
        }
    }
    ctx->pc = 0x2BDC7Cu;
    // 0x2bdc7c: 0xc085608  jal         func_215820
    ctx->pc = 0x2BDC7Cu;
    SET_GPR_U32(ctx, 31, 0x2BDC84u);
    ctx->pc = 0x2BDC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDC7Cu;
    // 0x2bdc80: 0x24050072  addiu       $a1, $zero, 0x72 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BDC7Cu, 0x2BDC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDC84u;
label_2bdc84:
    // 0x2bdc84: 0x54400112  bnel        $v0, $zero, . + 4 + (0x112 << 2)
    ctx->pc = 0x2BDC84u;
    {
        const bool branch_taken_0x2bdc84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bdc84) {
            ctx->pc = 0x2BDC88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDC84u;
            // 0x2bdc88: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BDC8Cu;
    // 0x2bdc8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bdc8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bdc90: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bdc90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bdc94: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bdc94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bdc98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bdc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdc9c: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BDC9Cu;
    SET_GPR_U32(ctx, 31, 0x2BDCA4u);
    ctx->pc = 0x2BDCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDC9Cu;
    // 0x2bdca0: 0x24050072  addiu       $a1, $zero, 0x72 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BDC9Cu, 0x2BDCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDCA4u;
label_2bdca4:
    // 0x2bdca4: 0x1000010a  b           . + 4 + (0x10A << 2)
    ctx->pc = 0x2BDCA4u;
    {
        const bool branch_taken_0x2bdca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDCA4u;
        // 0x2bdca8: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdca4) {
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BDCACu;
label_2bdcac:
    // 0x2bdcac: 0xc085608  jal         func_215820
    ctx->pc = 0x2BDCACu;
    SET_GPR_U32(ctx, 31, 0x2BDCB4u);
    ctx->pc = 0x2BDCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDCACu;
    // 0x2bdcb0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BDCACu, 0x2BDCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDCB4u;
label_2bdcb4:
    // 0x2bdcb4: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2BDCB4u;
    {
        const bool branch_taken_0x2bdcb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bdcb4) {
            ctx->pc = 0x2BDD88u;
            goto label_2bdd88;
        }
    }
    ctx->pc = 0x2BDCBCu;
    // 0x2bdcbc: 0x8e420ad8  lw          $v0, 0xAD8($s2)
    ctx->pc = 0x2bdcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2776)));
    // 0x2bdcc0: 0x440002c  bltz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2BDCC0u;
    {
        const bool branch_taken_0x2bdcc0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2bdcc0) {
            ctx->pc = 0x2BDD74u;
            goto label_2bdd74;
        }
    }
    ctx->pc = 0x2BDCC8u;
    // 0x2bdcc8: 0x8e420a90  lw          $v0, 0xA90($s2)
    ctx->pc = 0x2bdcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2704)));
    // 0x2bdccc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2bdcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2bdcd0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2BDCD0u;
    {
        const bool branch_taken_0x2bdcd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdcd0) {
            ctx->pc = 0x2BDD74u;
            goto label_2bdd74;
        }
    }
    ctx->pc = 0x2BDCD8u;
    // 0x2bdcd8: 0x8e420a9c  lw          $v0, 0xA9C($s2)
    ctx->pc = 0x2bdcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2716)));
    // 0x2bdcdc: 0x10500025  beq         $v0, $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2BDCDCu;
    {
        const bool branch_taken_0x2bdcdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2bdcdc) {
            ctx->pc = 0x2BDD74u;
            goto label_2bdd74;
        }
    }
    ctx->pc = 0x2BDCE4u;
    // 0x2bdce4: 0xc6410b84  lwc1        $f1, 0xB84($s2)
    ctx->pc = 0x2bdce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bdce8: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2bdce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x2bdcec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bdcecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdcf0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bdcf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bdcf4: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x2BDCF4u;
    {
        const bool branch_taken_0x2bdcf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bdcf4) {
            ctx->pc = 0x2BDD74u;
            goto label_2bdd74;
        }
    }
    ctx->pc = 0x2BDCFCu;
    // 0x2bdcfc: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2BDCFCu;
    SET_GPR_U32(ctx, 31, 0x2BDD04u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2BDCFCu, 0x2BDD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDD04u;
label_2bdd04:
    // 0x2bdd04: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BDD04u;
    {
        const bool branch_taken_0x2bdd04 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BDD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDD04u;
        // 0x2bdd08: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdd04) {
            ctx->pc = 0x2BDD18u;
            goto label_2bdd18;
        }
    }
    ctx->pc = 0x2BDD0Cu;
    // 0x2bdd0c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bdd0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bdd10: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BDD10u;
    {
        const bool branch_taken_0x2bdd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDD10u;
        // 0x2bdd14: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdd10) {
            ctx->pc = 0x2BDD2Cu;
            goto label_2bdd2c;
        }
    }
    ctx->pc = 0x2BDD18u;
label_2bdd18:
    // 0x2bdd18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bdd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bdd1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bdd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2bdd20: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bdd20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bdd24: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2bdd24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2bdd28: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2bdd28u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2bdd2c:
    // 0x2bdd2c: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2bdd2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2bdd30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bdd30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdd34: 0xc7819050  lwc1        $f1, -0x6FB0($gp)
    ctx->pc = 0x2bdd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bdd38: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2bdd38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2bdd3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bdd3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bdd40: 0x0  nop
    ctx->pc = 0x2bdd40u;
    // NOP
    // 0x2bdd44: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2BDD44u;
    {
        const bool branch_taken_0x2bdd44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BDD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDD44u;
        // 0x2bdd48: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdd44) {
            ctx->pc = 0x2BDD74u;
            goto label_2bdd74;
        }
    }
    ctx->pc = 0x2BDD4Cu;
    // 0x2bdd4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bdd4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bdd50: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bdd50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bdd54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bdd54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdd58: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BDD58u;
    SET_GPR_U32(ctx, 31, 0x2BDD60u);
    ctx->pc = 0x2BDD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDD58u;
    // 0x2bdd5c: 0x240501bb  addiu       $a1, $zero, 0x1BB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 443));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BDD58u, 0x2BDD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDD60u;
label_2bdd60:
    // 0x2bdd60: 0x8e430a90  lw          $v1, 0xA90($s2)
    ctx->pc = 0x2bdd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2704)));
    // 0x2bdd64: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2bdd64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2bdd68: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x2bdd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x2bdd6c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2BDD6Cu;
    {
        const bool branch_taken_0x2bdd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDD6Cu;
        // 0x2bdd70: 0xae400b84  sw          $zero, 0xB84($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2948), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdd6c) {
            ctx->pc = 0x2BDE44u;
            goto label_2bde44;
        }
    }
    ctx->pc = 0x2BDD74u;
label_2bdd74:
    // 0x2bdd74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bdd74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bdd78: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bdd78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bdd7c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bdd7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bdd80: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2BDD80u;
    {
        const bool branch_taken_0x2bdd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDD80u;
        // 0x2bdd84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdd80) {
            ctx->pc = 0x2BDE60u;
            goto label_2bde60;
        }
    }
    ctx->pc = 0x2BDD88u;
label_2bdd88:
    // 0x2bdd88: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2BDD88u;
    SET_GPR_U32(ctx, 31, 0x2BDD90u);
    ctx->pc = 0x2BDD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDD88u;
    // 0x2bdd8c: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2BDD88u, 0x2BDD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDD90u;
label_2bdd90:
    // 0x2bdd90: 0x504000cf  beql        $v0, $zero, . + 4 + (0xCF << 2)
    ctx->pc = 0x2BDD90u;
    {
        const bool branch_taken_0x2bdd90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdd90) {
            ctx->pc = 0x2BDD94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDD90u;
            // 0x2bdd94: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BDD98u;
    // 0x2bdd98: 0x8e420ad8  lw          $v0, 0xAD8($s2)
    ctx->pc = 0x2bdd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2776)));
    // 0x2bdd9c: 0x440002c  bltz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2BDD9Cu;
    {
        const bool branch_taken_0x2bdd9c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2bdd9c) {
            ctx->pc = 0x2BDE50u;
            goto label_2bde50;
        }
    }
    ctx->pc = 0x2BDDA4u;
    // 0x2bdda4: 0x8e420a90  lw          $v0, 0xA90($s2)
    ctx->pc = 0x2bdda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2704)));
    // 0x2bdda8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2bdda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2bddac: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2BDDACu;
    {
        const bool branch_taken_0x2bddac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bddac) {
            ctx->pc = 0x2BDE50u;
            goto label_2bde50;
        }
    }
    ctx->pc = 0x2BDDB4u;
    // 0x2bddb4: 0xc6410b84  lwc1        $f1, 0xB84($s2)
    ctx->pc = 0x2bddb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bddb8: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2bddb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x2bddbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bddbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bddc0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bddc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bddc4: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x2BDDC4u;
    {
        const bool branch_taken_0x2bddc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bddc4) {
            ctx->pc = 0x2BDE50u;
            goto label_2bde50;
        }
    }
    ctx->pc = 0x2BDDCCu;
    // 0x2bddcc: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2BDDCCu;
    SET_GPR_U32(ctx, 31, 0x2BDDD4u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2BDDCCu, 0x2BDDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDDD4u;
label_2bddd4:
    // 0x2bddd4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BDDD4u;
    {
        const bool branch_taken_0x2bddd4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BDDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDDD4u;
        // 0x2bddd8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bddd4) {
            ctx->pc = 0x2BDDE8u;
            goto label_2bdde8;
        }
    }
    ctx->pc = 0x2BDDDCu;
    // 0x2bdddc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bdddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bdde0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BDDE0u;
    {
        const bool branch_taken_0x2bdde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDDE0u;
        // 0x2bdde4: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdde0) {
            ctx->pc = 0x2BDDFCu;
            goto label_2bddfc;
        }
    }
    ctx->pc = 0x2BDDE8u;
label_2bdde8:
    // 0x2bdde8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bdde8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bddec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bddecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2bddf0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bddf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bddf4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2bddf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2bddf8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2bddf8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2bddfc:
    // 0x2bddfc: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2bddfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2bde00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bde00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bde04: 0xc7819054  lwc1        $f1, -0x6FAC($gp)
    ctx->pc = 0x2bde04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bde08: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2bde08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2bde0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bde0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bde10: 0x0  nop
    ctx->pc = 0x2bde10u;
    // NOP
    // 0x2bde14: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x2BDE14u;
    {
        const bool branch_taken_0x2bde14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BDE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDE14u;
        // 0x2bde18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bde14) {
            ctx->pc = 0x2BDE50u;
            goto label_2bde50;
        }
    }
    ctx->pc = 0x2BDE1Cu;
    // 0x2bde1c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2bde1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2bde20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bde20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bde24: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bde24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bde28: 0x240501bb  addiu       $a1, $zero, 0x1BB
    ctx->pc = 0x2bde28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 443));
    // 0x2bde2c: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BDE2Cu;
    SET_GPR_U32(ctx, 31, 0x2BDE34u);
    ctx->pc = 0x2BDE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDE2Cu;
    // 0x2bde30: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BDE2Cu, 0x2BDE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDE34u;
label_2bde34:
    // 0x2bde34: 0x8e430a90  lw          $v1, 0xA90($s2)
    ctx->pc = 0x2bde34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2704)));
    // 0x2bde38: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2bde38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2bde3c: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x2bde3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x2bde40: 0xe6540b84  swc1        $f20, 0xB84($s2)
    ctx->pc = 0x2bde40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2948), bits); }
label_2bde44:
    // 0x2bde44: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2bde44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2bde48: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x2BDE48u;
    {
        const bool branch_taken_0x2bde48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDE48u;
        // 0x2bde4c: 0xae430a90  sw          $v1, 0xA90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2704), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bde48) {
            ctx->pc = 0x2BE0CCu;
            goto label_2be0cc;
        }
    }
    ctx->pc = 0x2BDE50u;
label_2bde50:
    // 0x2bde50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2bde50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bde54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bde54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bde58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bde58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bde5c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bde5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2bde60:
    // 0x2bde60: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BDE60u;
    SET_GPR_U32(ctx, 31, 0x2BDE68u);
    ctx->pc = 0x2BDE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDE60u;
    // 0x2bde64: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BDE60u, 0x2BDE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDE68u;
label_2bde68:
    // 0x2bde68: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x2BDE68u;
    {
        const bool branch_taken_0x2bde68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDE68u;
        // 0x2bde6c: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bde68) {
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BDE70u;
label_2bde70:
    // 0x2bde70: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BDE70u;
    {
        const bool branch_taken_0x2bde70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDE70u;
        // 0x2bde74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bde70) {
            ctx->pc = 0x2BDEA8u;
            goto label_2bdea8;
        }
    }
    ctx->pc = 0x2BDE78u;
    // 0x2bde78: 0xc085608  jal         func_215820
    ctx->pc = 0x2BDE78u;
    SET_GPR_U32(ctx, 31, 0x2BDE80u);
    ctx->pc = 0x2BDE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDE78u;
    // 0x2bde7c: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BDE78u, 0x2BDE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDE80u;
label_2bde80:
    // 0x2bde80: 0x54400093  bnel        $v0, $zero, . + 4 + (0x93 << 2)
    ctx->pc = 0x2BDE80u;
    {
        const bool branch_taken_0x2bde80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bde80) {
            ctx->pc = 0x2BDE84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDE80u;
            // 0x2bde84: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BDE88u;
    // 0x2bde88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bde88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bde8c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bde8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bde90: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bde90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bde94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bde94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bde98: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BDE98u;
    SET_GPR_U32(ctx, 31, 0x2BDEA0u);
    ctx->pc = 0x2BDE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDE98u;
    // 0x2bde9c: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BDE98u, 0x2BDEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDEA0u;
label_2bdea0:
    // 0x2bdea0: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x2BDEA0u;
    {
        const bool branch_taken_0x2bdea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDEA0u;
        // 0x2bdea4: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdea0) {
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BDEA8u;
label_2bdea8:
    // 0x2bdea8: 0xc0b30e8  jal         func_2CC3A0
    ctx->pc = 0x2BDEA8u;
    SET_GPR_U32(ctx, 31, 0x2BDEB0u);
    ctx->pc = 0x2BDEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDEA8u;
    // 0x2bdeac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC3A0u, 0x2BDEA8u, 0x2BDEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDEB0u;
label_2bdeb0:
    // 0x2bdeb0: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2BDEB0u;
    {
        const bool branch_taken_0x2bdeb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDEB0u;
        // 0x2bdeb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdeb0) {
            ctx->pc = 0x2BDF80u;
            goto label_2bdf80;
        }
    }
    ctx->pc = 0x2BDEB8u;
    // 0x2bdeb8: 0xc085608  jal         func_215820
    ctx->pc = 0x2BDEB8u;
    SET_GPR_U32(ctx, 31, 0x2BDEC0u);
    ctx->pc = 0x2BDEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDEB8u;
    // 0x2bdebc: 0x240501bc  addiu       $a1, $zero, 0x1BC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 444));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BDEB8u, 0x2BDEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDEC0u;
label_2bdec0:
    // 0x2bdec0: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2BDEC0u;
    {
        const bool branch_taken_0x2bdec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BDEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDEC0u;
        // 0x2bdec4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdec0) {
            ctx->pc = 0x2BDF80u;
            goto label_2bdf80;
        }
    }
    ctx->pc = 0x2BDEC8u;
    // 0x2bdec8: 0xc085608  jal         func_215820
    ctx->pc = 0x2BDEC8u;
    SET_GPR_U32(ctx, 31, 0x2BDED0u);
    ctx->pc = 0x2BDECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDEC8u;
    // 0x2bdecc: 0x240501bd  addiu       $a1, $zero, 0x1BD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 445));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BDEC8u, 0x2BDED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDED0u;
label_2bded0:
    // 0x2bded0: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2BDED0u;
    {
        const bool branch_taken_0x2bded0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BDED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDED0u;
        // 0x2bded4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bded0) {
            ctx->pc = 0x2BDF80u;
            goto label_2bdf80;
        }
    }
    ctx->pc = 0x2BDED8u;
    // 0x2bded8: 0xc085608  jal         func_215820
    ctx->pc = 0x2BDED8u;
    SET_GPR_U32(ctx, 31, 0x2BDEE0u);
    ctx->pc = 0x2BDEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDED8u;
    // 0x2bdedc: 0x240501be  addiu       $a1, $zero, 0x1BE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 446));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BDED8u, 0x2BDEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDEE0u;
label_2bdee0:
    // 0x2bdee0: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2BDEE0u;
    {
        const bool branch_taken_0x2bdee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BDEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDEE0u;
        // 0x2bdee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdee0) {
            ctx->pc = 0x2BDF80u;
            goto label_2bdf80;
        }
    }
    ctx->pc = 0x2BDEE8u;
    // 0x2bdee8: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2BDEE8u;
    SET_GPR_U32(ctx, 31, 0x2BDEF0u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2BDEE8u, 0x2BDEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDEF0u;
label_2bdef0:
    // 0x2bdef0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BDEF0u;
    {
        const bool branch_taken_0x2bdef0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BDEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDEF0u;
        // 0x2bdef4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdef0) {
            ctx->pc = 0x2BDF04u;
            goto label_2bdf04;
        }
    }
    ctx->pc = 0x2BDEF8u;
    // 0x2bdef8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bdef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bdefc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BDEFCu;
    {
        const bool branch_taken_0x2bdefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDEFCu;
        // 0x2bdf00: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdefc) {
            ctx->pc = 0x2BDF18u;
            goto label_2bdf18;
        }
    }
    ctx->pc = 0x2BDF04u;
label_2bdf04:
    // 0x2bdf04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bdf04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bdf08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bdf08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2bdf0c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bdf0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bdf10: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2bdf10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2bdf14: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2bdf14u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2bdf18:
    // 0x2bdf18: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2bdf18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2bdf1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bdf1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdf20: 0xc7819058  lwc1        $f1, -0x6FA8($gp)
    ctx->pc = 0x2bdf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bdf24: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2bdf24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2bdf28: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bdf28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bdf2c: 0x0  nop
    ctx->pc = 0x2bdf2cu;
    // NOP
    // 0x2bdf30: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x2BDF30u;
    {
        const bool branch_taken_0x2bdf30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BDF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF30u;
        // 0x2bdf34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdf30) {
            ctx->pc = 0x2BDF80u;
            goto label_2bdf80;
        }
    }
    ctx->pc = 0x2BDF38u;
    // 0x2bdf38: 0xc6400b2c  lwc1        $f0, 0xB2C($s2)
    ctx->pc = 0x2bdf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdf3c: 0x8e4201b8  lw          $v0, 0x1B8($s2)
    ctx->pc = 0x2bdf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
    // 0x2bdf40: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BDF40u;
    {
        const bool branch_taken_0x2bdf40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF40u;
        // 0x2bdf44: 0xe6400b3c  swc1        $f0, 0xB3C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2876), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdf40) {
            ctx->pc = 0x2BDF64u;
            goto label_2bdf64;
        }
    }
    ctx->pc = 0x2BDF48u;
    // 0x2bdf48: 0xc78d905c  lwc1        $f13, -0x6FA4($gp)
    ctx->pc = 0x2bdf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2bdf4c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bdf4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bdf50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bdf50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf54: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BDF54u;
    SET_GPR_U32(ctx, 31, 0x2BDF5Cu);
    ctx->pc = 0x2BDF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDF54u;
    // 0x2bdf58: 0x240501be  addiu       $a1, $zero, 0x1BE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 446));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BDF54u, 0x2BDF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDF5Cu;
label_2bdf5c:
    // 0x2bdf5c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x2BDF5Cu;
    {
        const bool branch_taken_0x2bdf5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF5Cu;
        // 0x2bdf60: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdf5c) {
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BDF64u;
label_2bdf64:
    // 0x2bdf64: 0xc78d9060  lwc1        $f13, -0x6FA0($gp)
    ctx->pc = 0x2bdf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2bdf68: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bdf68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bdf6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bdf6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf70: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BDF70u;
    SET_GPR_U32(ctx, 31, 0x2BDF78u);
    ctx->pc = 0x2BDF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDF70u;
    // 0x2bdf74: 0x240501bc  addiu       $a1, $zero, 0x1BC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 444));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BDF70u, 0x2BDF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDF78u;
label_2bdf78:
    // 0x2bdf78: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2BDF78u;
    {
        const bool branch_taken_0x2bdf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF78u;
        // 0x2bdf7c: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdf78) {
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BDF80u;
label_2bdf80:
    // 0x2bdf80: 0xc085608  jal         func_215820
    ctx->pc = 0x2BDF80u;
    SET_GPR_U32(ctx, 31, 0x2BDF88u);
    ctx->pc = 0x2BDF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDF80u;
    // 0x2bdf84: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BDF80u, 0x2BDF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDF88u;
label_2bdf88:
    // 0x2bdf88: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BDF88u;
    {
        const bool branch_taken_0x2bdf88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BDF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF88u;
        // 0x2bdf8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdf88) {
            ctx->pc = 0x2BDFC0u;
            goto label_2bdfc0;
        }
    }
    ctx->pc = 0x2BDF90u;
    // 0x2bdf90: 0xc085608  jal         func_215820
    ctx->pc = 0x2BDF90u;
    SET_GPR_U32(ctx, 31, 0x2BDF98u);
    ctx->pc = 0x2BDF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDF90u;
    // 0x2bdf94: 0x240501bc  addiu       $a1, $zero, 0x1BC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 444));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BDF90u, 0x2BDF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDF98u;
label_2bdf98:
    // 0x2bdf98: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BDF98u;
    {
        const bool branch_taken_0x2bdf98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BDF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF98u;
        // 0x2bdf9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdf98) {
            ctx->pc = 0x2BDFC0u;
            goto label_2bdfc0;
        }
    }
    ctx->pc = 0x2BDFA0u;
    // 0x2bdfa0: 0xc085608  jal         func_215820
    ctx->pc = 0x2BDFA0u;
    SET_GPR_U32(ctx, 31, 0x2BDFA8u);
    ctx->pc = 0x2BDFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDFA0u;
    // 0x2bdfa4: 0x240501bd  addiu       $a1, $zero, 0x1BD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 445));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BDFA0u, 0x2BDFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDFA8u;
label_2bdfa8:
    // 0x2bdfa8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BDFA8u;
    {
        const bool branch_taken_0x2bdfa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BDFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDFA8u;
        // 0x2bdfac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdfa8) {
            ctx->pc = 0x2BDFC0u;
            goto label_2bdfc0;
        }
    }
    ctx->pc = 0x2BDFB0u;
    // 0x2bdfb0: 0xc085608  jal         func_215820
    ctx->pc = 0x2BDFB0u;
    SET_GPR_U32(ctx, 31, 0x2BDFB8u);
    ctx->pc = 0x2BDFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDFB0u;
    // 0x2bdfb4: 0x240501be  addiu       $a1, $zero, 0x1BE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 446));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BDFB0u, 0x2BDFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDFB8u;
label_2bdfb8:
    // 0x2bdfb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BDFB8u;
    {
        const bool branch_taken_0x2bdfb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdfb8) {
            ctx->pc = 0x2BDFD0u;
            goto label_2bdfd0;
        }
    }
    ctx->pc = 0x2BDFC0u;
label_2bdfc0:
    // 0x2bdfc0: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2BDFC0u;
    SET_GPR_U32(ctx, 31, 0x2BDFC8u);
    ctx->pc = 0x2BDFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDFC0u;
    // 0x2bdfc4: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2BDFC0u, 0x2BDFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDFC8u;
label_2bdfc8:
    // 0x2bdfc8: 0x50400041  beql        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x2BDFC8u;
    {
        const bool branch_taken_0x2bdfc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdfc8) {
            ctx->pc = 0x2BDFCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDFC8u;
            // 0x2bdfcc: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BDFD0u;
label_2bdfd0:
    // 0x2bdfd0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bdfd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bdfd4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bdfd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bdfd8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bdfd8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bdfdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bdfdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdfe0: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BDFE0u;
    SET_GPR_U32(ctx, 31, 0x2BDFE8u);
    ctx->pc = 0x2BDFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDFE0u;
    // 0x2bdfe4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BDFE0u, 0x2BDFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDFE8u;
label_2bdfe8:
    // 0x2bdfe8: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2BDFE8u;
    {
        const bool branch_taken_0x2bdfe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDFE8u;
        // 0x2bdfec: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdfe8) {
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BDFF0u;
label_2bdff0:
    // 0x2bdff0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bdff0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bdff4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bdff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bdff8: 0x0  nop
    ctx->pc = 0x2bdff8u;
    // NOP
    // 0x2bdffc: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x2BDFFCu;
    {
        const bool branch_taken_0x2bdffc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BE000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDFFCu;
        // 0x2be000: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdffc) {
            ctx->pc = 0x2BE06Cu;
            goto label_2be06c;
        }
    }
    ctx->pc = 0x2BE004u;
    // 0x2be004: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BE004u;
    {
        const bool branch_taken_0x2be004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE004u;
        // 0x2be008: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be004) {
            ctx->pc = 0x2BE03Cu;
            goto label_2be03c;
        }
    }
    ctx->pc = 0x2BE00Cu;
    // 0x2be00c: 0xc085608  jal         func_215820
    ctx->pc = 0x2BE00Cu;
    SET_GPR_U32(ctx, 31, 0x2BE014u);
    ctx->pc = 0x2BE010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE00Cu;
    // 0x2be010: 0x24050073  addiu       $a1, $zero, 0x73 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BE00Cu, 0x2BE014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE014u;
label_2be014:
    // 0x2be014: 0x5440002e  bnel        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x2BE014u;
    {
        const bool branch_taken_0x2be014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be014) {
            ctx->pc = 0x2BE018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE014u;
            // 0x2be018: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BE01Cu;
    // 0x2be01c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2be01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2be020: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2be020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2be024: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2be024u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2be028: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be02c: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BE02Cu;
    SET_GPR_U32(ctx, 31, 0x2BE034u);
    ctx->pc = 0x2BE030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE02Cu;
    // 0x2be030: 0x24050073  addiu       $a1, $zero, 0x73 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BE02Cu, 0x2BE034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE034u;
label_2be034:
    // 0x2be034: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2BE034u;
    {
        const bool branch_taken_0x2be034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE034u;
        // 0x2be038: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be034) {
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BE03Cu;
label_2be03c:
    // 0x2be03c: 0xc085608  jal         func_215820
    ctx->pc = 0x2BE03Cu;
    SET_GPR_U32(ctx, 31, 0x2BE044u);
    ctx->pc = 0x2BE040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE03Cu;
    // 0x2be040: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BE03Cu, 0x2BE044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE044u;
label_2be044:
    // 0x2be044: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x2BE044u;
    {
        const bool branch_taken_0x2be044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be044) {
            ctx->pc = 0x2BE048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE044u;
            // 0x2be048: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BE04Cu;
    // 0x2be04c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2be04cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2be050: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2be050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2be054: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2be054u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2be058: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be05c: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BE05Cu;
    SET_GPR_U32(ctx, 31, 0x2BE064u);
    ctx->pc = 0x2BE060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE05Cu;
    // 0x2be060: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BE05Cu, 0x2BE064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE064u;
label_2be064:
    // 0x2be064: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2BE064u;
    {
        const bool branch_taken_0x2be064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE064u;
        // 0x2be068: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be064) {
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BE06Cu;
label_2be06c:
    // 0x2be06c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BE06Cu;
    {
        const bool branch_taken_0x2be06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE06Cu;
        // 0x2be070: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be06c) {
            ctx->pc = 0x2BE0A4u;
            goto label_2be0a4;
        }
    }
    ctx->pc = 0x2BE074u;
    // 0x2be074: 0xc085608  jal         func_215820
    ctx->pc = 0x2BE074u;
    SET_GPR_U32(ctx, 31, 0x2BE07Cu);
    ctx->pc = 0x2BE078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE074u;
    // 0x2be078: 0x24050079  addiu       $a1, $zero, 0x79 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BE074u, 0x2BE07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE07Cu;
label_2be07c:
    // 0x2be07c: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2BE07Cu;
    {
        const bool branch_taken_0x2be07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be07c) {
            ctx->pc = 0x2BE080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE07Cu;
            // 0x2be080: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BE084u;
    // 0x2be084: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2be084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2be088: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2be088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2be08c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2be08cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2be090: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be094: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BE094u;
    SET_GPR_U32(ctx, 31, 0x2BE09Cu);
    ctx->pc = 0x2BE098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE094u;
    // 0x2be098: 0x24050079  addiu       $a1, $zero, 0x79 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BE094u, 0x2BE09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE09Cu;
label_2be09c:
    // 0x2be09c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2BE09Cu;
    {
        const bool branch_taken_0x2be09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE09Cu;
        // 0x2be0a0: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be09c) {
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BE0A4u;
label_2be0a4:
    // 0x2be0a4: 0xc085608  jal         func_215820
    ctx->pc = 0x2BE0A4u;
    SET_GPR_U32(ctx, 31, 0x2BE0ACu);
    ctx->pc = 0x2BE0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE0A4u;
    // 0x2be0a8: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BE0A4u, 0x2BE0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE0ACu;
label_2be0ac:
    // 0x2be0ac: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BE0ACu;
    {
        const bool branch_taken_0x2be0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be0ac) {
            ctx->pc = 0x2BE0B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE0ACu;
            // 0x2be0b0: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE0D0u;
            goto label_2be0d0;
        }
    }
    ctx->pc = 0x2BE0B4u;
    // 0x2be0b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2be0b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2be0b8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2be0b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2be0bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2be0bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2be0c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be0c4: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2BE0C4u;
    SET_GPR_U32(ctx, 31, 0x2BE0CCu);
    ctx->pc = 0x2BE0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE0C4u;
    // 0x2be0c8: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2BE0C4u, 0x2BE0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE0CCu;
label_2be0cc:
    // 0x2be0cc: 0x8e420a94  lw          $v0, 0xA94($s2)
    ctx->pc = 0x2be0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
label_2be0d0:
    // 0x2be0d0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2be0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2be0d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BE0D4u;
    {
        const bool branch_taken_0x2be0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE0D4u;
        // 0x2be0d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be0d4) {
            ctx->pc = 0x2BE0F8u;
            goto label_2be0f8;
        }
    }
    ctx->pc = 0x2BE0DCu;
    // 0x2be0dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2be0dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be0e0: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x2be0e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2be0e4: 0x37a70008  ori         $a3, $sp, 0x8
    ctx->pc = 0x2be0e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x2be0e8: 0xc085508  jal         func_215420
    ctx->pc = 0x2BE0E8u;
    SET_GPR_U32(ctx, 31, 0x2BE0F0u);
    ctx->pc = 0x2BE0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE0E8u;
    // 0x2be0ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215420u, 0x2BE0E8u, 0x2BE0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE0F0u;
label_2be0f0:
    // 0x2be0f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BE0F0u;
    {
        const bool branch_taken_0x2be0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE0F0u;
        // 0x2be0f4: 0xc64c0ae0  lwc1        $f12, 0xAE0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be0f0) {
            ctx->pc = 0x2BE110u;
            goto label_2be110;
        }
    }
    ctx->pc = 0x2BE0F8u;
label_2be0f8:
    // 0x2be0f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2be0f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be0fc: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x2be0fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2be100: 0x37a70008  ori         $a3, $sp, 0x8
    ctx->pc = 0x2be100u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x2be104: 0xc085508  jal         func_215420
    ctx->pc = 0x2BE104u;
    SET_GPR_U32(ctx, 31, 0x2BE10Cu);
    ctx->pc = 0x2BE108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE104u;
    // 0x2be108: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215420u, 0x2BE104u, 0x2BE10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE10Cu;
label_2be10c:
    // 0x2be10c: 0xc64c0ae0  lwc1        $f12, 0xAE0($s2)
    ctx->pc = 0x2be10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2be110:
    // 0x2be110: 0xc7809064  lwc1        $f0, -0x6F9C($gp)
    ctx->pc = 0x2be110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be114: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x2be114u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2be118: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x2BE118u;
    {
        const bool branch_taken_0x2be118 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2be118) {
            ctx->pc = 0x2BE18Cu;
            goto label_2be18c;
        }
    }
    ctx->pc = 0x2BE120u;
    // 0x2be120: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2BE120u;
    SET_GPR_U32(ctx, 31, 0x2BE128u);
    ctx->pc = 0x2BE124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE120u;
    // 0x2be124: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2BE120u, 0x2BE128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE128u;
label_2be128:
    // 0x2be128: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2be128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be12c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2be12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be130: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2BE130u;
    SET_GPR_U32(ctx, 31, 0x2BE138u);
    ctx->pc = 0x2BE134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE130u;
    // 0x2be134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2BE130u, 0x2BE138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE138u;
label_2be138:
    // 0x2be138: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BE138u;
    {
        const bool branch_taken_0x2be138 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2BE13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE138u;
        // 0x2be13c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be138) {
            ctx->pc = 0x2BE14Cu;
            goto label_2be14c;
        }
    }
    ctx->pc = 0x2BE140u;
    // 0x2be140: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2BE140u;
    SET_GPR_U32(ctx, 31, 0x2BE148u);
    ctx->pc = 0x2BE144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE140u;
    // 0x2be144: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2BE140u, 0x2BE148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE148u;
label_2be148:
    // 0x2be148: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2be148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2be14c:
    // 0x2be14c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2be14cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2be150: 0xdc259ce0  ld          $a1, -0x6320($at)
    ctx->pc = 0x2be150u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9CE0u));
    // 0x2be154: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x2BE154u;
    SET_GPR_U32(ctx, 31, 0x2BE15Cu);
    ctx->pc = 0x2BE158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE154u;
    // 0x2be158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x2BE154u, 0x2BE15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE15Cu;
label_2be15c:
    // 0x2be15c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2be15cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2be160: 0xdc259ce8  ld          $a1, -0x6318($at)
    ctx->pc = 0x2be160u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9CE8u));
    // 0x2be164: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2BE164u;
    SET_GPR_U32(ctx, 31, 0x2BE16Cu);
    ctx->pc = 0x2BE168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE164u;
    // 0x2be168: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2BE164u, 0x2BE16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE16Cu;
label_2be16c:
    // 0x2be16c: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x2be16cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2be170: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x2be170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x2be174: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2BE174u;
    SET_GPR_U32(ctx, 31, 0x2BE17Cu);
    ctx->pc = 0x2BE178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE174u;
    // 0x2be178: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2BE174u, 0x2BE17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE17Cu;
label_2be17c:
    // 0x2be17c: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x2BE17Cu;
    SET_GPR_U32(ctx, 31, 0x2BE184u);
    ctx->pc = 0x2BE180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE17Cu;
    // 0x2be180: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x2BE17Cu, 0x2BE184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE184u;
label_2be184:
    // 0x2be184: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BE184u;
    {
        const bool branch_taken_0x2be184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE184u;
        // 0x2be188: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be184) {
            ctx->pc = 0x2BE194u;
            goto label_2be194;
        }
    }
    ctx->pc = 0x2BE18Cu;
label_2be18c:
    // 0x2be18c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2be18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2be190: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2be190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2be194:
    // 0x2be194: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2be194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be198: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2be198u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be19c: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x2be19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2be1a0: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2BE1A0u;
    SET_GPR_U32(ctx, 31, 0x2BE1A8u);
    ctx->pc = 0x2BE1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE1A0u;
    // 0x2be1a4: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2BE1A0u, 0x2BE1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE1A8u;
label_2be1a8:
    // 0x2be1a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2be1a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be1ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2be1acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be1b0: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2BE1B0u;
    SET_GPR_U32(ctx, 31, 0x2BE1B8u);
    ctx->pc = 0x2BE1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE1B0u;
    // 0x2be1b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2BE1B0u, 0x2BE1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE1B8u;
label_2be1b8:
    // 0x2be1b8: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BE1B8u;
    {
        const bool branch_taken_0x2be1b8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2BE1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1B8u;
        // 0x2be1bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be1b8) {
            ctx->pc = 0x2BE1CCu;
            goto label_2be1cc;
        }
    }
    ctx->pc = 0x2BE1C0u;
    // 0x2be1c0: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2BE1C0u;
    SET_GPR_U32(ctx, 31, 0x2BE1C8u);
    ctx->pc = 0x2BE1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE1C0u;
    // 0x2be1c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2BE1C0u, 0x2BE1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE1C8u;
label_2be1c8:
    // 0x2be1c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2be1c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2be1cc:
    // 0x2be1cc: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x2BE1CCu;
    SET_GPR_U32(ctx, 31, 0x2BE1D4u);
    ctx->pc = 0x2BE1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE1CCu;
    // 0x2be1d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x2BE1CCu, 0x2BE1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE1D4u;
label_2be1d4:
    // 0x2be1d4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2be1d4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2be1d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be1dc: 0xc085608  jal         func_215820
    ctx->pc = 0x2BE1DCu;
    SET_GPR_U32(ctx, 31, 0x2BE1E4u);
    ctx->pc = 0x2BE1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE1DCu;
    // 0x2be1e0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BE1DCu, 0x2BE1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE1E4u;
label_2be1e4:
    // 0x2be1e4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BE1E4u;
    {
        const bool branch_taken_0x2be1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1E4u;
        // 0x2be1e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be1e4) {
            ctx->pc = 0x2BE21Cu;
            goto label_2be21c;
        }
    }
    ctx->pc = 0x2BE1ECu;
    // 0x2be1ec: 0xc085608  jal         func_215820
    ctx->pc = 0x2BE1ECu;
    SET_GPR_U32(ctx, 31, 0x2BE1F4u);
    ctx->pc = 0x2BE1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE1ECu;
    // 0x2be1f0: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BE1ECu, 0x2BE1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE1F4u;
label_2be1f4:
    // 0x2be1f4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BE1F4u;
    {
        const bool branch_taken_0x2be1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1F4u;
        // 0x2be1f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be1f4) {
            ctx->pc = 0x2BE21Cu;
            goto label_2be21c;
        }
    }
    ctx->pc = 0x2BE1FCu;
    // 0x2be1fc: 0xc085608  jal         func_215820
    ctx->pc = 0x2BE1FCu;
    SET_GPR_U32(ctx, 31, 0x2BE204u);
    ctx->pc = 0x2BE200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE1FCu;
    // 0x2be200: 0x2405007a  addiu       $a1, $zero, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BE1FCu, 0x2BE204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE204u;
label_2be204:
    // 0x2be204: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BE204u;
    {
        const bool branch_taken_0x2be204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE204u;
        // 0x2be208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be204) {
            ctx->pc = 0x2BE21Cu;
            goto label_2be21c;
        }
    }
    ctx->pc = 0x2BE20Cu;
    // 0x2be20c: 0xc085608  jal         func_215820
    ctx->pc = 0x2BE20Cu;
    SET_GPR_U32(ctx, 31, 0x2BE214u);
    ctx->pc = 0x2BE210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE20Cu;
    // 0x2be210: 0x2405007b  addiu       $a1, $zero, 0x7B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BE20Cu, 0x2BE214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE214u;
label_2be214:
    // 0x2be214: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BE214u;
    {
        const bool branch_taken_0x2be214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be214) {
            ctx->pc = 0x2BE234u;
            goto label_2be234;
        }
    }
    ctx->pc = 0x2BE21Cu;
label_2be21c:
    // 0x2be21c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2be21cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2be220: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2be220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2be224: 0xc0856c8  jal         func_215B20
    ctx->pc = 0x2BE224u;
    SET_GPR_U32(ctx, 31, 0x2BE22Cu);
    ctx->pc = 0x2BE228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE224u;
    // 0x2be228: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B20u, 0x2BE224u, 0x2BE22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE22Cu;
label_2be22c:
    // 0x2be22c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2BE22Cu;
    {
        const bool branch_taken_0x2be22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE22Cu;
        // 0x2be230: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be22c) {
            ctx->pc = 0x2BE30Cu;
            goto label_2be30c;
        }
    }
    ctx->pc = 0x2BE234u;
label_2be234:
    // 0x2be234: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2be234u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2be238: 0x4601a832  c.eq.s      $f21, $f1
    ctx->pc = 0x2be238u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2be23c: 0x4501002e  bc1t        . + 4 + (0x2E << 2)
    ctx->pc = 0x2BE23Cu;
    {
        const bool branch_taken_0x2be23c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2be23c) {
            ctx->pc = 0x2BE2F8u;
            goto label_2be2f8;
        }
    }
    ctx->pc = 0x2BE244u;
    // 0x2be244: 0xc6400b3c  lwc1        $f0, 0xB3C($s2)
    ctx->pc = 0x2be244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be248: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2be248u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2be24c: 0x4501002a  bc1t        . + 4 + (0x2A << 2)
    ctx->pc = 0x2BE24Cu;
    {
        const bool branch_taken_0x2be24c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2be24c) {
            ctx->pc = 0x2BE2F8u;
            goto label_2be2f8;
        }
    }
    ctx->pc = 0x2BE254u;
    // 0x2be254: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2BE254u;
    SET_GPR_U32(ctx, 31, 0x2BE25Cu);
    ctx->pc = 0x2BE258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE254u;
    // 0x2be258: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2BE254u, 0x2BE25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE25Cu;
label_2be25c:
    // 0x2be25c: 0xc64c0b3c  lwc1        $f12, 0xB3C($s2)
    ctx->pc = 0x2be25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2be260: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2BE260u;
    SET_GPR_U32(ctx, 31, 0x2BE268u);
    ctx->pc = 0x2BE264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE260u;
    // 0x2be264: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2BE260u, 0x2BE268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE268u;
label_2be268:
    // 0x2be268: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2be268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be26c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2be26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be270: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2BE270u;
    SET_GPR_U32(ctx, 31, 0x2BE278u);
    ctx->pc = 0x2BE274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE270u;
    // 0x2be274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2BE270u, 0x2BE278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE278u;
label_2be278:
    // 0x2be278: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BE278u;
    {
        const bool branch_taken_0x2be278 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2BE27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE278u;
        // 0x2be27c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be278) {
            ctx->pc = 0x2BE28Cu;
            goto label_2be28c;
        }
    }
    ctx->pc = 0x2BE280u;
    // 0x2be280: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2BE280u;
    SET_GPR_U32(ctx, 31, 0x2BE288u);
    ctx->pc = 0x2BE284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE280u;
    // 0x2be284: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2BE280u, 0x2BE288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE288u;
label_2be288:
    // 0x2be288: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2be288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2be28c:
    // 0x2be28c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2BE28Cu;
    SET_GPR_U32(ctx, 31, 0x2BE294u);
    ctx->pc = 0x2BE290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE28Cu;
    // 0x2be290: 0xc7ac0008  lwc1        $f12, 0x8($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2BE28Cu, 0x2BE294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE294u;
label_2be294:
    // 0x2be294: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2be294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be298: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2BE298u;
    SET_GPR_U32(ctx, 31, 0x2BE2A0u);
    ctx->pc = 0x2BE29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE298u;
    // 0x2be29c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2BE298u, 0x2BE2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE2A0u;
label_2be2a0:
    // 0x2be2a0: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2be2a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2be2a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2be2a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2be2a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2be2a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be2ac: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2BE2ACu;
    SET_GPR_U32(ctx, 31, 0x2BE2B4u);
    ctx->pc = 0x2BE2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE2ACu;
    // 0x2be2b0: 0x460cab02  mul.s       $f12, $f21, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2BE2ACu, 0x2BE2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE2B4u;
label_2be2b4:
    // 0x2be2b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2be2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be2b8: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x2BE2B8u;
    SET_GPR_U32(ctx, 31, 0x2BE2C0u);
    ctx->pc = 0x2BE2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE2B8u;
    // 0x2be2bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x2BE2B8u, 0x2BE2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE2C0u;
label_2be2c0:
    // 0x2be2c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2be2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be2c4: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2BE2C4u;
    SET_GPR_U32(ctx, 31, 0x2BE2CCu);
    ctx->pc = 0x2BE2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE2C4u;
    // 0x2be2c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2BE2C4u, 0x2BE2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE2CCu;
label_2be2cc:
    // 0x2be2cc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2be2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2be2d0: 0xdc259cf0  ld          $a1, -0x6310($at)
    ctx->pc = 0x2be2d0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9CF0u));
    // 0x2be2d4: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x2BE2D4u;
    SET_GPR_U32(ctx, 31, 0x2BE2DCu);
    ctx->pc = 0x2BE2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE2D4u;
    // 0x2be2d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x2BE2D4u, 0x2BE2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE2DCu;
label_2be2dc:
    // 0x2be2dc: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x2BE2DCu;
    SET_GPR_U32(ctx, 31, 0x2BE2E4u);
    ctx->pc = 0x2BE2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE2DCu;
    // 0x2be2e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x2BE2DCu, 0x2BE2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE2E4u;
label_2be2e4:
    // 0x2be2e4: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x2be2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2be2e8: 0xc0856c8  jal         func_215B20
    ctx->pc = 0x2BE2E8u;
    SET_GPR_U32(ctx, 31, 0x2BE2F0u);
    ctx->pc = 0x2BE2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE2E8u;
    // 0x2be2ec: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B20u, 0x2BE2E8u, 0x2BE2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE2F0u;
label_2be2f0:
    // 0x2be2f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BE2F0u;
    {
        const bool branch_taken_0x2be2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE2F0u;
        // 0x2be2f4: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be2f0) {
            ctx->pc = 0x2BE30Cu;
            goto label_2be30c;
        }
    }
    ctx->pc = 0x2BE2F8u;
label_2be2f8:
    // 0x2be2f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2be2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2be2fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2be2fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2be300: 0xc0856c8  jal         func_215B20
    ctx->pc = 0x2BE300u;
    SET_GPR_U32(ctx, 31, 0x2BE308u);
    ctx->pc = 0x2BE304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE300u;
    // 0x2be304: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B20u, 0x2BE300u, 0x2BE308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE308u;
label_2be308:
    // 0x2be308: 0x8e420a94  lw          $v0, 0xA94($s2)
    ctx->pc = 0x2be308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
label_2be30c:
    // 0x2be30c: 0xae420a98  sw          $v0, 0xA98($s2)
    ctx->pc = 0x2be30cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2712), GPR_U32(ctx, 2));
label_2be310:
    // 0x2be310: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2be310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2be314:
    // 0x2be314: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2be314u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2be318: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2be318u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2be31c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2be31cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2be320: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2be320u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2be324: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2be324u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2be328: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x2be328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2be32c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2be32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2be330: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE330u;
        // 0x2be334: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE338u;
}
