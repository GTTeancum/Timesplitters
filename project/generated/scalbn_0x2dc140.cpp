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

// Function: scalbn
// Address: 0x2dc140 - 0x2dc2f4
void scalbn_0x2dc140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scalbn_0x2dc140");
#endif

    switch (ctx->pc) {
        case 0x2dc1a0u: goto label_2dc1a0;
        case 0x2dc1e4u: goto label_2dc1e4;
        case 0x2dc208u: goto label_2dc208;
        case 0x2dc278u: goto label_2dc278;
        case 0x2dc298u: goto label_2dc298;
        case 0x2dc2e0u: goto label_2dc2e0;
        default: break;
    }

    ctx->pc = 0x2dc140u;

    // 0x2dc140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dc140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dc144: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dc144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dc148: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2dc148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2dc14c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2dc14cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc150: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2dc150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2dc154: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2dc154u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc158: 0x2303f  dsra32      $a2, $v0, 0
    ctx->pc = 0x2dc158u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2dc15c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2dc15cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2dc160: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2dc160u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2dc164: 0x3c117ff0  lui         $s1, 0x7FF0
    ctx->pc = 0x2dc164u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32752 << 16));
    // 0x2dc168: 0xd11024  and         $v0, $a2, $s1
    ctx->pc = 0x2dc168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 17));
    // 0x2dc16c: 0x21d03  sra         $v1, $v0, 20
    ctx->pc = 0x2dc16cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 20));
    // 0x2dc170: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2DC170u;
    {
        const bool branch_taken_0x2dc170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC170u;
        // 0x2dc174: 0x240207ff  addiu       $v0, $zero, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc170) {
            ctx->pc = 0x2DC1D4u;
            goto label_2dc1d4;
        }
    }
    ctx->pc = 0x2DC178u;
    // 0x2dc178: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2dc178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2dc17c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2dc17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2dc180: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x2dc180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2dc184: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x2dc184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2dc188: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x2DC188u;
    {
        const bool branch_taken_0x2dc188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC188u;
        // 0x2dc18c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc188) {
            ctx->pc = 0x2DC2E0u;
            goto label_2dc2e0;
        }
    }
    ctx->pc = 0x2DC190u;
    // 0x2dc190: 0x340586a0  ori         $a1, $zero, 0x86A0
    ctx->pc = 0x2dc190u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34464);
    // 0x2dc194: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2dc194u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2dc198: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2DC198u;
    SET_GPR_U32(ctx, 31, 0x2DC1A0u);
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2DC198u, 0x2DC1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC1A0u;
label_2dc1a0:
    // 0x2dc1a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dc1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc1a4: 0x2303f  dsra32      $a2, $v0, 0
    ctx->pc = 0x2dc1a4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2dc1a8: 0xd11824  and         $v1, $a2, $s1
    ctx->pc = 0x2dc1a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 17));
    // 0x2dc1ac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2dc1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2dc1b0: 0x31d03  sra         $v1, $v1, 20
    ctx->pc = 0x2dc1b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 20));
    // 0x2dc1b4: 0x34423cb0  ori         $v0, $v0, 0x3CB0
    ctx->pc = 0x2dc1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15536);
    // 0x2dc1b8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2dc1b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2dc1bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DC1BCu;
    {
        const bool branch_taken_0x2dc1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC1BCu;
        // 0x2dc1c0: 0x2463ffca  addiu       $v1, $v1, -0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967242));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc1bc) {
            ctx->pc = 0x2DC1D0u;
            goto label_2dc1d0;
        }
    }
    ctx->pc = 0x2DC1C4u;
    // 0x2dc1c4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2dc1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2dc1c8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2DC1C8u;
    {
        const bool branch_taken_0x2dc1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC1C8u;
        // 0x2dc1cc: 0xdc45b150  ld          $a1, -0x4EB0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294947152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc1c8) {
            ctx->pc = 0x2DC2D8u;
            goto label_2dc2d8;
        }
    }
    ctx->pc = 0x2DC1D0u;
label_2dc1d0:
    // 0x2dc1d0: 0x240207ff  addiu       $v0, $zero, 0x7FF
    ctx->pc = 0x2dc1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
label_2dc1d4:
    // 0x2dc1d4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DC1D4u;
    {
        const bool branch_taken_0x2dc1d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DC1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC1D4u;
        // 0x2dc1d8: 0x701821  addu        $v1, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc1d4) {
            ctx->pc = 0x2DC1ECu;
            goto label_2dc1ec;
        }
    }
    ctx->pc = 0x2DC1DCu;
    // 0x2dc1dc: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2DC1DCu;
    SET_GPR_U32(ctx, 31, 0x2DC1E4u);
    ctx->pc = 0x2DC1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC1DCu;
    // 0x2dc1e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2DC1DCu, 0x2DC1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC1E4u;
label_2dc1e4:
    // 0x2dc1e4: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2DC1E4u;
    {
        const bool branch_taken_0x2dc1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC1E4u;
        // 0x2dc1e8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc1e4) {
            ctx->pc = 0x2DC2E4u;
            goto label_2dc2e4;
        }
    }
    ctx->pc = 0x2DC1ECu;
label_2dc1ec:
    // 0x2dc1ec: 0x286207ff  slti        $v0, $v1, 0x7FF
    ctx->pc = 0x2dc1ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x2dc1f0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DC1F0u;
    {
        const bool branch_taken_0x2dc1f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC1F0u;
        // 0x2dc1f4: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc1f0) {
            ctx->pc = 0x2DC214u;
            goto label_2dc214;
        }
    }
    ctx->pc = 0x2DC1F8u;
    // 0x2dc1f8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2dc1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc1fc: 0xdc50b158  ld          $s0, -0x4EA8($v0)
    ctx->pc = 0x2dc1fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 4294947160)));
    // 0x2dc200: 0xc0b71dc  jal         func_2DC770
    ctx->pc = 0x2DC200u;
    SET_GPR_U32(ctx, 31, 0x2DC208u);
    ctx->pc = 0x2DC204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC200u;
    // 0x2dc204: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC770u, 0x2DC200u, 0x2DC208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC208u;
label_2dc208:
    // 0x2dc208: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dc208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc20c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2DC20Cu;
    {
        const bool branch_taken_0x2dc20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC20Cu;
        // 0x2dc210: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc20c) {
            ctx->pc = 0x2DC2D8u;
            goto label_2dc2d8;
        }
    }
    ctx->pc = 0x2DC214u;
label_2dc214:
    // 0x2dc214: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2DC214u;
    {
        const bool branch_taken_0x2dc214 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2DC218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC214u;
        // 0x2dc218: 0x32d00  sll         $a1, $v1, 20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc214) {
            ctx->pc = 0x2DC250u;
            goto label_2dc250;
        }
    }
    ctx->pc = 0x2DC21Cu;
    // 0x2dc21c: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x2dc21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x2dc220: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2dc220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2dc224: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2dc224u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc228: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x2dc228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2dc22c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2dc22cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2dc230: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2dc230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2dc234: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2dc234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2dc238: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2dc238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2dc23c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2dc23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2dc240: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x2dc240u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2dc244: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2DC244u;
    {
        const bool branch_taken_0x2dc244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC244u;
        // 0x2dc248: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc244) {
            ctx->pc = 0x2DC2E0u;
            goto label_2dc2e0;
        }
    }
    ctx->pc = 0x2DC24Cu;
    // 0x2dc24c: 0x0  nop
    ctx->pc = 0x2dc24cu;
    // NOP
label_2dc250:
    // 0x2dc250: 0x2862ffcb  slti        $v0, $v1, -0x35
    ctx->pc = 0x2dc250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967243) ? 1 : 0);
    // 0x2dc254: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2DC254u;
    {
        const bool branch_taken_0x2dc254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC254u;
        // 0x2dc258: 0x3402c350  ori         $v0, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc254) {
            ctx->pc = 0x2DC2A4u;
            goto label_2dc2a4;
        }
    }
    ctx->pc = 0x2DC25Cu;
    // 0x2dc25c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2dc25cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2dc260: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DC260u;
    {
        const bool branch_taken_0x2dc260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC260u;
        // 0x2dc264: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc260) {
            ctx->pc = 0x2DC284u;
            goto label_2dc284;
        }
    }
    ctx->pc = 0x2DC268u;
    // 0x2dc268: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2dc268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc26c: 0xdc50b158  ld          $s0, -0x4EA8($v0)
    ctx->pc = 0x2dc26cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 4294947160)));
    // 0x2dc270: 0xc0b71dc  jal         func_2DC770
    ctx->pc = 0x2DC270u;
    SET_GPR_U32(ctx, 31, 0x2DC278u);
    ctx->pc = 0x2DC274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC270u;
    // 0x2dc274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC770u, 0x2DC270u, 0x2DC278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC278u;
label_2dc278:
    // 0x2dc278: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dc278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc27c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2DC27Cu;
    {
        const bool branch_taken_0x2dc27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC27Cu;
        // 0x2dc280: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc27c) {
            ctx->pc = 0x2DC2D8u;
            goto label_2dc2d8;
        }
    }
    ctx->pc = 0x2DC284u;
label_2dc284:
    // 0x2dc284: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2dc284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2dc288: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2dc288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc28c: 0xdc50b150  ld          $s0, -0x4EB0($v0)
    ctx->pc = 0x2dc28cu;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x3AB150u));
    // 0x2dc290: 0xc0b71dc  jal         func_2DC770
    ctx->pc = 0x2DC290u;
    SET_GPR_U32(ctx, 31, 0x2DC298u);
    ctx->pc = 0x2DC294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC290u;
    // 0x2dc294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC770u, 0x2DC290u, 0x2DC298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC298u;
label_2dc298:
    // 0x2dc298: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dc298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc29c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2DC29Cu;
    {
        const bool branch_taken_0x2dc29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC29Cu;
        // 0x2dc2a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc29c) {
            ctx->pc = 0x2DC2D8u;
            goto label_2dc2d8;
        }
    }
    ctx->pc = 0x2DC2A4u;
label_2dc2a4:
    // 0x2dc2a4: 0x24630036  addiu       $v1, $v1, 0x36
    ctx->pc = 0x2dc2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 54));
    // 0x2dc2a8: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x2dc2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x2dc2ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2dc2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2dc2b0: 0x32d00  sll         $a1, $v1, 20
    ctx->pc = 0x2dc2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
    // 0x2dc2b4: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x2dc2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2dc2b8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2dc2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2dc2bc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2dc2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2dc2c0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2dc2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2dc2c4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2dc2c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2dc2c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2dc2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2dc2cc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2dc2ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2dc2d0: 0x3405f240  ori         $a1, $zero, 0xF240
    ctx->pc = 0x2dc2d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62016);
    // 0x2dc2d4: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2dc2d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_2dc2d8:
    // 0x2dc2d8: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2DC2D8u;
    SET_GPR_U32(ctx, 31, 0x2DC2E0u);
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2DC2D8u, 0x2DC2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC2E0u;
label_2dc2e0:
    // 0x2dc2e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dc2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2dc2e4:
    // 0x2dc2e4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2dc2e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc2e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dc2e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC2ECu;
        // 0x2dc2f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC2ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC2F4u;
}
