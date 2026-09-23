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

// Function: bgPreload
// Address: 0x2561e8 - 0x2564a4
void bgPreload_0x2561e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgPreload_0x2561e8");
#endif

    switch (ctx->pc) {
        case 0x25623cu: goto label_25623c;
        case 0x256254u: goto label_256254;
        case 0x256288u: goto label_256288;
        case 0x2562d0u: goto label_2562d0;
        case 0x256350u: goto label_256350;
        case 0x256390u: goto label_256390;
        case 0x2563a0u: goto label_2563a0;
        case 0x2563acu: goto label_2563ac;
        case 0x2563bcu: goto label_2563bc;
        case 0x2563c8u: goto label_2563c8;
        case 0x2563e0u: goto label_2563e0;
        case 0x2563f4u: goto label_2563f4;
        case 0x256400u: goto label_256400;
        case 0x256440u: goto label_256440;
        default: break;
    }

    ctx->pc = 0x2561e8u;

    // 0x2561e8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2561e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2561ec: 0x8f869f70  lw          $a2, -0x6090($gp)
    ctx->pc = 0x2561ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2561f0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2561f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2561f4: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2561f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2561f8: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2561f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2561fc: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2561fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x256200: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x256200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x256204: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x256204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x256208: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x256208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x25620c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x25620cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x256210: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x256210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x256214: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x256214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x256218: 0x14c20082  bne         $a2, $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x256218u;
    {
        const bool branch_taken_0x256218 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x25621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256218u;
        // 0x25621c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256218) {
            ctx->pc = 0x256424u;
            goto label_256424;
        }
    }
    ctx->pc = 0x256220u;
    // 0x256220: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x256220u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x256224: 0x8f90a0d0  lw          $s0, -0x5F30($gp)
    ctx->pc = 0x256224u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
    // 0x256228: 0x248449b8  addiu       $a0, $a0, 0x49B8
    ctx->pc = 0x256228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18872));
    // 0x25622c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25622cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256230: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x256230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x256234: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x256234u;
    SET_GPR_U32(ctx, 31, 0x25623Cu);
    ctx->pc = 0x256238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256234u;
    // 0x256238: 0x26110008  addiu       $s1, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x256234u, 0x25623Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25623Cu;
label_25623c:
    // 0x25623c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x25623cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256240: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x256240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x256244: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x256244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256248: 0x24848ee0  addiu       $a0, $a0, -0x7120
    ctx->pc = 0x256248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938336));
    // 0x25624c: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x25624Cu;
    SET_GPR_U32(ctx, 31, 0x256254u);
    ctx->pc = 0x256250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25624Cu;
    // 0x256250: 0x24060054  addiu       $a2, $zero, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x25624Cu, 0x256254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256254u;
label_256254:
    // 0x256254: 0x8f88a0d0  lw          $t0, -0x5F30($gp)
    ctx->pc = 0x256254u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
    // 0x256258: 0x25021ffc  addiu       $v0, $t0, 0x1FFC
    ctx->pc = 0x256258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8188));
    // 0x25625c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x25625cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x256260: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x256260u;
    {
        const bool branch_taken_0x256260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256260u;
        // 0x256264: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256260) {
            ctx->pc = 0x256330u;
            goto label_256330;
        }
    }
    ctx->pc = 0x256268u;
    // 0x256268: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x256268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25626c: 0x3c020132  lui         $v0, 0x132
    ctx->pc = 0x25626cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)306 << 16));
    // 0x256270: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x256270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x256274: 0x34424629  ori         $v0, $v0, 0x4629
    ctx->pc = 0x256274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17961);
    // 0x256278: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x256278u;
    {
        const bool branch_taken_0x256278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256278u;
        // 0x25627c: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256278) {
            ctx->pc = 0x256330u;
            goto label_256330;
        }
    }
    ctx->pc = 0x256280u;
    // 0x256280: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x256280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256284: 0x0  nop
    ctx->pc = 0x256284u;
    // NOP
label_256288:
    // 0x256288: 0x3c020132  lui         $v0, 0x132
    ctx->pc = 0x256288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)306 << 16));
    // 0x25628c: 0x34424627  ori         $v0, $v0, 0x4627
    ctx->pc = 0x25628cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17959);
    // 0x256290: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x256290u;
    {
        const bool branch_taken_0x256290 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x256294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256290u;
        // 0x256294: 0x3c020132  lui         $v0, 0x132 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)306 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256290) {
            ctx->pc = 0x2562ACu;
            goto label_2562ac;
        }
    }
    ctx->pc = 0x256298u;
    // 0x256298: 0x34424628  ori         $v0, $v0, 0x4628
    ctx->pc = 0x256298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17960);
    // 0x25629c: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25629Cu;
    {
        const bool branch_taken_0x25629c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x25629c) {
            ctx->pc = 0x2562B8u;
            goto label_2562b8;
        }
    }
    ctx->pc = 0x2562A4u;
    // 0x2562a4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2562A4u;
    {
        const bool branch_taken_0x2562a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2562A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2562A4u;
        // 0x2562a8: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2562a4) {
            ctx->pc = 0x256304u;
            goto label_256304;
        }
    }
    ctx->pc = 0x2562ACu;
label_2562ac:
    // 0x2562ac: 0x96330008  lhu         $s3, 0x8($s1)
    ctx->pc = 0x2562acu;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2562b0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2562B0u;
    {
        const bool branch_taken_0x2562b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2562B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2562B0u;
        // 0x2562b4: 0x8e320004  lw          $s2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2562b0) {
            ctx->pc = 0x256300u;
            goto label_256300;
        }
    }
    ctx->pc = 0x2562B8u;
label_2562b8:
    // 0x2562b8: 0x1a400011  blez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2562B8u;
    {
        const bool branch_taken_0x2562b8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2562BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2562B8u;
        // 0x2562bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2562b8) {
            ctx->pc = 0x256300u;
            goto label_256300;
        }
    }
    ctx->pc = 0x2562C0u;
    // 0x2562c0: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x2562c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x2562c4: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2562c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2562c8: 0x244749b8  addiu       $a3, $v0, 0x49B8
    ctx->pc = 0x2562c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 18872));
    // 0x2562cc: 0x0  nop
    ctx->pc = 0x2562ccu;
    // NOP
label_2562d0:
    // 0x2562d0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2562d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2562d4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2562d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2562d8: 0x94a4000a  lhu         $a0, 0xA($a1)
    ctx->pc = 0x2562d8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x2562dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2562dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2562e0: 0x24a50024  addiu       $a1, $a1, 0x24
    ctx->pc = 0x2562e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
    // 0x2562e4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2562e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2562e8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2562e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2562ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2562ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2562f0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2562f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2562f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2562f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2562f8: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2562F8u;
    {
        const bool branch_taken_0x2562f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2562FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2562F8u;
        // 0x2562fc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2562f8) {
            ctx->pc = 0x2562D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2562d0;
        }
    }
    ctx->pc = 0x256300u;
label_256300:
    // 0x256300: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x256300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_256304:
    // 0x256304: 0x25021ffc  addiu       $v0, $t0, 0x1FFC
    ctx->pc = 0x256304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8188));
    // 0x256308: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x256308u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x25630c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x25630cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x256310: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x256310u;
    {
        const bool branch_taken_0x256310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256310u;
        // 0x256314: 0x3c020132  lui         $v0, 0x132 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)306 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256310) {
            ctx->pc = 0x256330u;
            goto label_256330;
        }
    }
    ctx->pc = 0x256318u;
    // 0x256318: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x256318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25631c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x25631cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x256320: 0x24d10008  addiu       $s1, $a2, 0x8
    ctx->pc = 0x256320u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x256324: 0x34424629  ori         $v0, $v0, 0x4629
    ctx->pc = 0x256324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17961);
    // 0x256328: 0x1462ffd7  bne         $v1, $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x256328u;
    {
        const bool branch_taken_0x256328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256328u;
        // 0x25632c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256328) {
            ctx->pc = 0x256288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256288;
        }
    }
    ctx->pc = 0x256330u;
label_256330:
    // 0x256330: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x256330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x256334: 0x26750001  addiu       $s5, $s3, 0x1
    ctx->pc = 0x256334u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x256338: 0x245e89a0  addiu       $fp, $v0, -0x7660
    ctx->pc = 0x256338u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936992));
    // 0x25633c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x25633cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256340: 0x3c17003a  lui         $s7, 0x3A
    ctx->pc = 0x256340u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)58 << 16));
    // 0x256344: 0x3c16003a  lui         $s6, 0x3A
    ctx->pc = 0x256344u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)58 << 16));
    // 0x256348: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x256348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x25634c: 0x0  nop
    ctx->pc = 0x25634cu;
    // NOP
label_256350:
    // 0x256350: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x256350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x256354: 0x246349b8  addiu       $v1, $v1, 0x49B8
    ctx->pc = 0x256354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18872));
    // 0x256358: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x256358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25635c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25635cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256360: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x256360u;
    {
        const bool branch_taken_0x256360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x256364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256360u;
        // 0x256364: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256360) {
            ctx->pc = 0x256408u;
            goto label_256408;
        }
    }
    ctx->pc = 0x256368u;
    // 0x256368: 0x26120001  addiu       $s2, $s0, 0x1
    ctx->pc = 0x256368u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x25636c: 0x24428460  addiu       $v0, $v0, -0x7BA0
    ctx->pc = 0x25636cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935648));
    // 0x256370: 0x109980  sll         $s3, $s0, 6
    ctx->pc = 0x256370u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x256374: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x256374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x256378: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x256378u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25637c: 0x26e425f8  addiu       $a0, $s7, 0x25F8
    ctx->pc = 0x25637cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 9720));
    // 0x256380: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x256380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256384: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x256384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256388: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x256388u;
    SET_GPR_U32(ctx, 31, 0x256390u);
    ctx->pc = 0x25638Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256388u;
    // 0x25638c: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x256388u, 0x256390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256390u;
label_256390:
    // 0x256390: 0x26d42620  addiu       $s4, $s6, 0x2620
    ctx->pc = 0x256390u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 9760));
    // 0x256394: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x256394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256398: 0xc0b97d7  jal         func_2E5F5C
    ctx->pc = 0x256398u;
    SET_GPR_U32(ctx, 31, 0x2563A0u);
    ctx->pc = 0x25639Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256398u;
    // 0x25639c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5F5Cu, 0x256398u, 0x2563A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2563A0u;
label_2563a0:
    // 0x2563a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2563a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2563a4: 0xc0870d4  jal         func_21C350
    ctx->pc = 0x2563A4u;
    SET_GPR_U32(ctx, 31, 0x2563ACu);
    ctx->pc = 0x2563A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2563A4u;
    // 0x2563a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C350u, 0x2563A4u, 0x2563ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2563ACu;
label_2563ac:
    // 0x2563ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2563acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2563b0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2563b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2563b4: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x2563B4u;
    SET_GPR_U32(ctx, 31, 0x2563BCu);
    ctx->pc = 0x2563B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2563B4u;
    // 0x2563b8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x2563B4u, 0x2563BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2563BCu;
label_2563bc:
    // 0x2563bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2563bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2563c0: 0xc0868ce  jal         func_21A338
    ctx->pc = 0x2563C0u;
    SET_GPR_U32(ctx, 31, 0x2563C8u);
    ctx->pc = 0x2563C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2563C0u;
    // 0x2563c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A338u, 0x2563C0u, 0x2563C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2563C8u;
label_2563c8:
    // 0x2563c8: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2563C8u;
    {
        const bool branch_taken_0x2563c8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2563CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2563C8u;
        // 0x2563cc: 0x27e8021  addu        $s0, $s3, $fp (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2563c8) {
            ctx->pc = 0x2563E8u;
            goto label_2563e8;
        }
    }
    ctx->pc = 0x2563D0u;
    // 0x2563d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2563d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2563d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2563d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2563d8: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x2563D8u;
    SET_GPR_U32(ctx, 31, 0x2563E0u);
    ctx->pc = 0x2563DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2563D8u;
    // 0x2563dc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x2563D8u, 0x2563E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2563E0u;
label_2563e0:
    // 0x2563e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2563e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2563e4: 0x27e8021  addu        $s0, $s3, $fp
    ctx->pc = 0x2563e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 30)));
label_2563e8:
    // 0x2563e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2563e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2563ec: 0xc0b97d7  jal         func_2E5F5C
    ctx->pc = 0x2563ECu;
    SET_GPR_U32(ctx, 31, 0x2563F4u);
    ctx->pc = 0x2563F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2563ECu;
    // 0x2563f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5F5Cu, 0x2563ECu, 0x2563F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2563F4u;
label_2563f4:
    // 0x2563f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2563f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2563f8: 0xc0870b6  jal         func_21C2D8
    ctx->pc = 0x2563F8u;
    SET_GPR_U32(ctx, 31, 0x256400u);
    ctx->pc = 0x2563FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2563F8u;
    // 0x2563fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C2D8u, 0x2563F8u, 0x256400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256400u;
label_256400:
    // 0x256400: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x256400u;
    {
        const bool branch_taken_0x256400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256400u;
        // 0x256404: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256400) {
            ctx->pc = 0x256410u;
            goto label_256410;
        }
    }
    ctx->pc = 0x256408u;
label_256408:
    // 0x256408: 0x26120001  addiu       $s2, $s0, 0x1
    ctx->pc = 0x256408u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x25640c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x25640cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_256410:
    // 0x256410: 0x2a020015  slti        $v0, $s0, 0x15
    ctx->pc = 0x256410u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x256414: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x256414u;
    {
        const bool branch_taken_0x256414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256414u;
        // 0x256418: 0x3c0301fc  lui         $v1, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256414) {
            ctx->pc = 0x256350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256350;
        }
    }
    ctx->pc = 0x25641Cu;
    // 0x25641c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x25641Cu;
    {
        const bool branch_taken_0x25641c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25641Cu;
        // 0x256420: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25641c) {
            ctx->pc = 0x256478u;
            goto label_256478;
        }
    }
    ctx->pc = 0x256424u;
label_256424:
    // 0x256424: 0x3c1001fc  lui         $s0, 0x1FC
    ctx->pc = 0x256424u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)508 << 16));
    // 0x256428: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x256428u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x25642c: 0x26104708  addiu       $s0, $s0, 0x4708
    ctx->pc = 0x25642cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18184));
    // 0x256430: 0x24a52640  addiu       $a1, $a1, 0x2640
    ctx->pc = 0x256430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9792));
    // 0x256434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256438: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x256438u;
    SET_GPR_U32(ctx, 31, 0x256440u);
    ctx->pc = 0x25643Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256438u;
    // 0x25643c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x256438u, 0x256440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256440u;
label_256440:
    // 0x256440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256444: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x256444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x256448: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x256448u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25644c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25644cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256450: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x256450u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x256454: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x256454u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x256458: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x256458u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25645c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x25645cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x256460: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x256460u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x256464: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x256464u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x256468: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x256468u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25646c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25646cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256470: 0x80870b6  j           func_21C2D8
    ctx->pc = 0x256470u;
    ctx->pc = 0x256474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256470u;
    // 0x256474: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C2D8u;
    preloadAddFile_0x21c2d8(rdram, ctx, runtime); return;
    ctx->pc = 0x256478u;
label_256478:
    // 0x256478: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x256478u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25647c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x25647cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x256480: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x256480u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x256484: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x256484u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x256488: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x256488u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25648c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x25648cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x256490: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x256490u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x256494: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x256494u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256498: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x256498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25649c: 0x3e00008  jr          $ra
    ctx->pc = 0x25649Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2564A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25649Cu;
        // 0x2564a0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25649Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2564A4u;
}
