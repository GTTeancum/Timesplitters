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

// Function: lvCreateTileSetSetup
// Address: 0x227158 - 0x227568
void lvCreateTileSetSetup_0x227158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvCreateTileSetSetup_0x227158");
#endif

    switch (ctx->pc) {
        case 0x2271c0u: goto label_2271c0;
        case 0x227200u: goto label_227200;
        case 0x227240u: goto label_227240;
        case 0x227268u: goto label_227268;
        case 0x2272b0u: goto label_2272b0;
        case 0x2272dcu: goto label_2272dc;
        case 0x22741cu: goto label_22741c;
        case 0x227498u: goto label_227498;
        default: break;
    }

    ctx->pc = 0x227158u;

    // 0x227158: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x227158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x22715c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x22715cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x227160: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x227160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x227164: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x227164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x227168: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x227168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22716c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x22716cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x227170: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x227170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x227174: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x227174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x227178: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x227178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x22717c: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x22717cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x227180: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x227180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x227184: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x227184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x227188: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x227188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x22718c: 0x2446e770  addiu       $a2, $v0, -0x1890
    ctx->pc = 0x22718cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961008));
    // 0x227190: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x227190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x227194: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x227194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x227198: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x227198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22719c: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x22719cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2271a0: 0x2446e770  addiu       $a2, $v0, -0x1890
    ctx->pc = 0x2271a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961008));
    // 0x2271a4: 0x68c70007  ldl         $a3, 0x7($a2)
    ctx->pc = 0x2271a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2271a8: 0x6cc70000  ldr         $a3, 0x0($a2)
    ctx->pc = 0x2271a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2271ac: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x2271acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2271b0: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x2271b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2271b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2271b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2271b8: 0xc089bf4  jal         func_226FD0
    ctx->pc = 0x2271B8u;
    SET_GPR_U32(ctx, 31, 0x2271C0u);
    ctx->pc = 0x2271BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2271B8u;
    // 0x2271bc: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FD0u, 0x2271B8u, 0x2271C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2271C0u;
label_2271c0:
    // 0x2271c0: 0x240703e9  addiu       $a3, $zero, 0x3E9
    ctx->pc = 0x2271c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    // 0x2271c4: 0x8f85a0d0  lw          $a1, -0x5F30($gp)
    ctx->pc = 0x2271c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
    // 0x2271c8: 0xafa70024  sw          $a3, 0x24($sp)
    ctx->pc = 0x2271c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 7));
    // 0x2271cc: 0x24b50008  addiu       $s5, $a1, 0x8
    ctx->pc = 0x2271ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2271d0: 0x24a21ffc  addiu       $v0, $a1, 0x1FFC
    ctx->pc = 0x2271d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8188));
    // 0x2271d4: 0x8e120020  lw          $s2, 0x20($s0)
    ctx->pc = 0x2271d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2271d8: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x2271d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2271dc: 0x104000d6  beqz        $v0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x2271DCu;
    {
        const bool branch_taken_0x2271dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2271E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2271DCu;
        // 0x2271e0: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2271dc) {
            ctx->pc = 0x227538u;
            goto label_227538;
        }
    }
    ctx->pc = 0x2271E4u;
    // 0x2271e4: 0xafb50028  sw          $s5, 0x28($sp)
    ctx->pc = 0x2271e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 21));
    // 0x2271e8: 0x3c020132  lui         $v0, 0x132
    ctx->pc = 0x2271e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)306 << 16));
    // 0x2271ec: 0x34424629  ori         $v0, $v0, 0x4629
    ctx->pc = 0x2271ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17961);
    // 0x2271f0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2271f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2271f4: 0x106200d0  beq         $v1, $v0, . + 4 + (0xD0 << 2)
    ctx->pc = 0x2271F4u;
    {
        const bool branch_taken_0x2271f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2271F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2271F4u;
        // 0x2271f8: 0x24b50010  addiu       $s5, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2271f4) {
            ctx->pc = 0x227538u;
            goto label_227538;
        }
    }
    ctx->pc = 0x2271FCu;
    // 0x2271fc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2271fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_227200:
    // 0x227200: 0x3c020132  lui         $v0, 0x132
    ctx->pc = 0x227200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)306 << 16));
    // 0x227204: 0x34424627  ori         $v0, $v0, 0x4627
    ctx->pc = 0x227204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17959);
    // 0x227208: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x227208u;
    {
        const bool branch_taken_0x227208 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x22720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227208u;
        // 0x22720c: 0x3c020132  lui         $v0, 0x132 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)306 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227208) {
            ctx->pc = 0x22721Cu;
            goto label_22721c;
        }
    }
    ctx->pc = 0x227210u;
    // 0x227210: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x227210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x227214: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x227214u;
    {
        const bool branch_taken_0x227214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227214u;
        // 0x227218: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227214) {
            ctx->pc = 0x227504u;
            goto label_227504;
        }
    }
    ctx->pc = 0x22721Cu;
label_22721c:
    // 0x22721c: 0x34424628  ori         $v0, $v0, 0x4628
    ctx->pc = 0x22721cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17960);
    // 0x227220: 0x148200b9  bne         $a0, $v0, . + 4 + (0xB9 << 2)
    ctx->pc = 0x227220u;
    {
        const bool branch_taken_0x227220 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x227224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227220u;
        // 0x227224: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227220) {
            ctx->pc = 0x227508u;
            goto label_227508;
        }
    }
    ctx->pc = 0x227228u;
    // 0x227228: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x227228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22722c: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x22722cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227230: 0x186000b5  blez        $v1, . + 4 + (0xB5 << 2)
    ctx->pc = 0x227230u;
    {
        const bool branch_taken_0x227230 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x227234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227230u;
        // 0x227234: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227230) {
            ctx->pc = 0x227508u;
            goto label_227508;
        }
    }
    ctx->pc = 0x227238u;
    // 0x227238: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x227238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22723c: 0x0  nop
    ctx->pc = 0x22723cu;
    // NOP
label_227240:
    // 0x227240: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x227240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x227244: 0x24838ee0  addiu       $v1, $a0, -0x7120
    ctx->pc = 0x227244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938336));
    // 0x227248: 0x963e000a  lhu         $fp, 0xA($s1)
    ctx->pc = 0x227248u;
    SET_GPR_ZE32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x22724c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22724cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x227250: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x227250u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227254: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x227254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x227258: 0x26310024  addiu       $s1, $s1, 0x24
    ctx->pc = 0x227258u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x22725c: 0x13c0009f  beqz        $fp, . + 4 + (0x9F << 2)
    ctx->pc = 0x22725Cu;
    {
        const bool branch_taken_0x22725c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x227260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22725Cu;
        // 0x227260: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22725c) {
            ctx->pc = 0x2274DCu;
            goto label_2274dc;
        }
    }
    ctx->pc = 0x227264u;
    // 0x227264: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x227264u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_227268:
    // 0x227268: 0x96280000  lhu         $t0, 0x0($s1)
    ctx->pc = 0x227268u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22726c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x22726cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x227270: 0x24a38320  addiu       $v1, $a1, -0x7CE0
    ctx->pc = 0x227270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935328));
    // 0x227274: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x227274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227278: 0x81400  sll         $v0, $t0, 16
    ctx->pc = 0x227278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x22727c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x22727cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227280: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x227280u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x227284: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x227284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227288: 0x18e00012  blez        $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x227288u;
    {
        const bool branch_taken_0x227288 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x22728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227288u;
        // 0x22728c: 0x8c6a000c  lw          $t2, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227288) {
            ctx->pc = 0x2272D4u;
            goto label_2272d4;
        }
    }
    ctx->pc = 0x227290u;
    // 0x227290: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x227290u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x227294: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x227294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x227298: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x227298u;
    {
        const bool branch_taken_0x227298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x22729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227298u;
        // 0x22729c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227298) {
            ctx->pc = 0x2272C8u;
            goto label_2272c8;
        }
    }
    ctx->pc = 0x2272A0u;
    // 0x2272a0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2272a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2272a4: 0x2663000c  addiu       $v1, $s3, 0xC
    ctx->pc = 0x2272a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x2272a8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2272a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2272ac: 0x0  nop
    ctx->pc = 0x2272acu;
    // NOP
label_2272b0:
    // 0x2272b0: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x2272b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2272b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2272B4u;
    {
        const bool branch_taken_0x2272b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2272B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2272B4u;
        // 0x2272b8: 0x2463001c  addiu       $v1, $v1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2272b4) {
            ctx->pc = 0x2272D4u;
            goto label_2272d4;
        }
    }
    ctx->pc = 0x2272BCu;
    // 0x2272bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2272bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2272c0: 0x5446fffb  bnel        $v0, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2272C0u;
    {
        const bool branch_taken_0x2272c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x2272c0) {
            ctx->pc = 0x2272C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2272C0u;
            // 0x2272c4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2272B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2272b0;
        }
    }
    ctx->pc = 0x2272C8u;
label_2272c8:
    // 0x2272c8: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x2272c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2272cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2272CCu;
    {
        const bool branch_taken_0x2272cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2272D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2272CCu;
        // 0x2272d0: 0x8fa60024  lw          $a2, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2272cc) {
            ctx->pc = 0x2272DCu;
            goto label_2272dc;
        }
    }
    ctx->pc = 0x2272D4u;
label_2272d4:
    // 0x2272d4: 0xc0b8690  jal         func_2E1A40
    ctx->pc = 0x2272D4u;
    SET_GPR_U32(ctx, 31, 0x2272DCu);
    ctx->pc = 0x2272D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2272D4u;
    // 0x2272d8: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A40u, 0x2272D4u, 0x2272DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2272DCu;
label_2272dc:
    // 0x2272dc: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x2272dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2272e0: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x2272e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2272e4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2272E4u;
    {
        const bool branch_taken_0x2272e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2272E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2272E4u;
        // 0x2272e8: 0xc4a021  addu        $s4, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2272e4) {
            ctx->pc = 0x227354u;
            goto label_227354;
        }
    }
    ctx->pc = 0x2272ECu;
    // 0x2272ec: 0x91400  sll         $v0, $t1, 16
    ctx->pc = 0x2272ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x2272f0: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x2272f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2272f4: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x2272f4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2272f8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2272f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x2272fc: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x2272fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x227300: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x227300u;
    {
        const bool branch_taken_0x227300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227300u;
        // 0x227304: 0xae540004  sw          $s4, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227300) {
            ctx->pc = 0x22734Cu;
            goto label_22734c;
        }
    }
    ctx->pc = 0x227308u;
    // 0x227308: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x227308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x22730c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x22730cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x227310: 0x24420f20  addiu       $v0, $v0, 0xF20
    ctx->pc = 0x227310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
    // 0x227314: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x227314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x227318: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x227318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22731c: 0x600008  jr          $v1
    ctx->pc = 0x22731Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x227324u: goto label_227324;
            case 0x22732Cu: goto label_22732c;
            case 0x227334u: goto label_227334;
            case 0x22733Cu: goto label_22733c;
            case 0x227344u: goto label_227344;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22731Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x227324u;
label_227324:
    // 0x227324: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x227324u;
    {
        const bool branch_taken_0x227324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227324u;
        // 0x227328: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227324) {
            ctx->pc = 0x227348u;
            goto label_227348;
        }
    }
    ctx->pc = 0x22732Cu;
label_22732c:
    // 0x22732c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22732Cu;
    {
        const bool branch_taken_0x22732c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22732Cu;
        // 0x227330: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22732c) {
            ctx->pc = 0x227348u;
            goto label_227348;
        }
    }
    ctx->pc = 0x227334u;
label_227334:
    // 0x227334: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x227334u;
    {
        const bool branch_taken_0x227334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227334u;
        // 0x227338: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227334) {
            ctx->pc = 0x227348u;
            goto label_227348;
        }
    }
    ctx->pc = 0x22733Cu;
label_22733c:
    // 0x22733c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22733Cu;
    {
        const bool branch_taken_0x22733c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22733Cu;
        // 0x227340: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22733c) {
            ctx->pc = 0x227348u;
            goto label_227348;
        }
    }
    ctx->pc = 0x227344u;
label_227344:
    // 0x227344: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x227344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_227348:
    // 0x227348: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x227348u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_22734c:
    // 0x22734c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x22734Cu;
    {
        const bool branch_taken_0x22734c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22734Cu;
        // 0x227350: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22734c) {
            ctx->pc = 0x2274C0u;
            goto label_2274c0;
        }
    }
    ctx->pc = 0x227354u;
label_227354:
    // 0x227354: 0x2523fffb  addiu       $v1, $t1, -0x5
    ctx->pc = 0x227354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967291));
    // 0x227358: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x227358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x22735c: 0x2c42000f  sltiu       $v0, $v0, 0xF
    ctx->pc = 0x22735cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x227360: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x227360u;
    {
        const bool branch_taken_0x227360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227360u;
        // 0x227364: 0x31c00  sll         $v1, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227360) {
            ctx->pc = 0x2274C4u;
            goto label_2274c4;
        }
    }
    ctx->pc = 0x227368u;
    // 0x227368: 0xc78080d4  lwc1        $f0, -0x7F2C($gp)
    ctx->pc = 0x227368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22736c: 0x32403  sra         $a0, $v1, 16
    ctx->pc = 0x22736cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 16));
    // 0x227370: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x227370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x227374: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x227374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x227378: 0x2c83000f  sltiu       $v1, $a0, 0xF
    ctx->pc = 0x227378u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x22737c: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x22737cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x227380: 0xae0a0004  sw          $t2, 0x4($s0)
    ctx->pc = 0x227380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 10));
    // 0x227384: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x227384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x227388: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x227388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x22738c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x22738cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x227390: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x227390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x227394: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x227394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x227398: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x227398u;
    {
        const bool branch_taken_0x227398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227398u;
        // 0x22739c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227398) {
            ctx->pc = 0x22746Cu;
            goto label_22746c;
        }
    }
    ctx->pc = 0x2273A0u;
    // 0x2273a0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2273a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2273a4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2273a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2273a8: 0x24420f40  addiu       $v0, $v0, 0xF40
    ctx->pc = 0x2273a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3904));
    // 0x2273ac: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2273acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2273b0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2273b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2273b4: 0x600008  jr          $v1
    ctx->pc = 0x2273B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2273BCu: goto label_2273bc;
            case 0x2273E0u: goto label_2273e0;
            case 0x2273ECu: goto label_2273ec;
            case 0x227400u: goto label_227400;
            case 0x227424u: goto label_227424;
            case 0x227448u: goto label_227448;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2273B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2273BCu;
label_2273bc:
    // 0x2273bc: 0x81400  sll         $v0, $t0, 16
    ctx->pc = 0x2273bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x2273c0: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x2273c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2273c4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2273c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2273c8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2273c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2273cc: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2273ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2273d0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2273d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2273d4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2273d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2273d8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2273D8u;
    {
        const bool branch_taken_0x2273d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2273DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2273D8u;
        // 0x2273dc: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2273d8) {
            ctx->pc = 0x22746Cu;
            goto label_22746c;
        }
    }
    ctx->pc = 0x2273E0u;
label_2273e0:
    // 0x2273e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2273e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2273e4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2273E4u;
    {
        const bool branch_taken_0x2273e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2273E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2273E4u;
        // 0x2273e8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2273e4) {
            ctx->pc = 0x22746Cu;
            goto label_22746c;
        }
    }
    ctx->pc = 0x2273ECu;
label_2273ec:
    // 0x2273ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2273ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2273f0: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x2273f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2273f4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2273f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2273f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2273F8u;
    {
        const bool branch_taken_0x2273f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2273FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2273F8u;
        // 0x2273fc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2273f8) {
            ctx->pc = 0x227414u;
            goto label_227414;
        }
    }
    ctx->pc = 0x227400u;
label_227400:
    // 0x227400: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x227400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x227404: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x227404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227408: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x227408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x22740c: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x22740cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227410: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x227410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_227414:
    // 0x227414: 0xc089f08  jal         func_227C20
    ctx->pc = 0x227414u;
    SET_GPR_U32(ctx, 31, 0x22741Cu);
    ctx->pc = 0x227C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C20u, 0x227414u, 0x22741Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22741Cu;
label_22741c:
    // 0x22741c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x22741Cu;
    {
        const bool branch_taken_0x22741c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22741Cu;
        // 0x227420: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22741c) {
            ctx->pc = 0x22746Cu;
            goto label_22746c;
        }
    }
    ctx->pc = 0x227424u;
label_227424:
    // 0x227424: 0x81400  sll         $v0, $t0, 16
    ctx->pc = 0x227424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x227428: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x227428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22742c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x22742cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x227430: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x227430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x227434: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x227434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x227438: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x227438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22743c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x22743cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x227440: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x227440u;
    {
        const bool branch_taken_0x227440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227440u;
        // 0x227444: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x227440) {
            ctx->pc = 0x227468u;
            goto label_227468;
        }
    }
    ctx->pc = 0x227448u;
label_227448:
    // 0x227448: 0x81400  sll         $v0, $t0, 16
    ctx->pc = 0x227448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x22744c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x22744cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x227450: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x227450u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x227454: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x227454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x227458: 0x2442ffee  addiu       $v0, $v0, -0x12
    ctx->pc = 0x227458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967278));
    // 0x22745c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22745cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x227460: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x227460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x227464: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x227464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_227468:
    // 0x227468: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x227468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_22746c:
    // 0x22746c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x22746cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x227470: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x227470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227474: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x227474u;
    {
        const bool branch_taken_0x227474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x227474) {
            ctx->pc = 0x227478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227474u;
            // 0x227478: 0xae140018  sw          $s4, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2274BCu;
            goto label_2274bc;
        }
    }
    ctx->pc = 0x22747Cu;
    // 0x22747c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x22747cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x227480: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x227480u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x227484: 0x24e38320  addiu       $v1, $a3, -0x7CE0
    ctx->pc = 0x227484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294935328));
    // 0x227488: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x227488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x22748c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22748cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227490: 0xc089f08  jal         func_227C20
    ctx->pc = 0x227490u;
    SET_GPR_U32(ctx, 31, 0x227498u);
    ctx->pc = 0x227494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227490u;
    // 0x227494: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C20u, 0x227490u, 0x227498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227498u;
label_227498:
    // 0x227498: 0x24030145  addiu       $v1, $zero, 0x145
    ctx->pc = 0x227498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
    // 0x22749c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22749Cu;
    {
        const bool branch_taken_0x22749c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22749c) {
            ctx->pc = 0x2274B0u;
            goto label_2274b0;
        }
    }
    ctx->pc = 0x2274A4u;
    // 0x2274a4: 0xc78080d8  lwc1        $f0, -0x7F28($gp)
    ctx->pc = 0x2274a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2274a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2274A8u;
    {
        const bool branch_taken_0x2274a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2274ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2274A8u;
        // 0x2274ac: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2274a8) {
            ctx->pc = 0x2274B8u;
            goto label_2274b8;
        }
    }
    ctx->pc = 0x2274B0u;
label_2274b0:
    // 0x2274b0: 0xc78080dc  lwc1        $f0, -0x7F24($gp)
    ctx->pc = 0x2274b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2274b4: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x2274b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_2274b8:
    // 0x2274b8: 0xae140018  sw          $s4, 0x18($s0)
    ctx->pc = 0x2274b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 20));
label_2274bc:
    // 0x2274bc: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2274bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_2274c0:
    // 0x2274c0: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x2274c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2274c4:
    // 0x2274c4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2274c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2274c8: 0x2de102a  slt         $v0, $s6, $fp
    ctx->pc = 0x2274c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x2274cc: 0x1440ff66  bnez        $v0, . + 4 + (-0x9A << 2)
    ctx->pc = 0x2274CCu;
    {
        const bool branch_taken_0x2274cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2274D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2274CCu;
        // 0x2274d0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2274cc) {
            ctx->pc = 0x227268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227268;
        }
    }
    ctx->pc = 0x2274D4u;
    // 0x2274d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2274D4u;
    {
        const bool branch_taken_0x2274d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2274D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2274D4u;
        // 0x2274d8: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2274d4) {
            ctx->pc = 0x2274E4u;
            goto label_2274e4;
        }
    }
    ctx->pc = 0x2274DCu;
label_2274dc:
    // 0x2274dc: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x2274dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2274e0: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x2274e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2274e4:
    // 0x2274e4: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2274e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x2274e8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2274e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2274ec: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2274ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2274f0: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x2274f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x2274f4: 0x2e3102a  slt         $v0, $s7, $v1
    ctx->pc = 0x2274f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2274f8: 0x5440ff51  bnel        $v0, $zero, . + 4 + (-0xAF << 2)
    ctx->pc = 0x2274F8u;
    {
        const bool branch_taken_0x2274f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2274f8) {
            ctx->pc = 0x2274FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2274F8u;
            // 0x2274fc: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227240;
        }
    }
    ctx->pc = 0x227500u;
    // 0x227500: 0x8f85a0d0  lw          $a1, -0x5F30($gp)
    ctx->pc = 0x227500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
label_227504:
    // 0x227504: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x227504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_227508:
    // 0x227508: 0x24a21ffc  addiu       $v0, $a1, 0x1FFC
    ctx->pc = 0x227508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8188));
    // 0x22750c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x22750cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x227510: 0x2a3a821  addu        $s5, $s5, $v1
    ctx->pc = 0x227510u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x227514: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x227514u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x227518: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x227518u;
    {
        const bool branch_taken_0x227518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227518u;
        // 0x22751c: 0x3c020132  lui         $v0, 0x132 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)306 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227518) {
            ctx->pc = 0x227538u;
            goto label_227538;
        }
    }
    ctx->pc = 0x227520u;
    // 0x227520: 0xafb50028  sw          $s5, 0x28($sp)
    ctx->pc = 0x227520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 21));
    // 0x227524: 0x34424629  ori         $v0, $v0, 0x4629
    ctx->pc = 0x227524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17961);
    // 0x227528: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x227528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x22752c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x22752cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x227530: 0x1462ff33  bne         $v1, $v0, . + 4 + (-0xCD << 2)
    ctx->pc = 0x227530u;
    {
        const bool branch_taken_0x227530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x227534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227530u;
        // 0x227534: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227530) {
            ctx->pc = 0x227200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227200;
        }
    }
    ctx->pc = 0x227538u;
label_227538:
    // 0x227538: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x227538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22753c: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x22753cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x227540: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x227540u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x227544: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x227544u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x227548: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x227548u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22754c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x22754cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x227550: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x227550u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x227554: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x227554u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x227558: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x227558u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22755c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x22755cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x227560: 0x3e00008  jr          $ra
    ctx->pc = 0x227560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227560u;
        // 0x227564: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227568u;
}
