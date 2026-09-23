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

// Function: drawWarning
// Address: 0x2361c0 - 0x236264
void drawWarning_0x2361c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("drawWarning_0x2361c0");
#endif

    switch (ctx->pc) {
        case 0x236204u: goto label_236204;
        case 0x236228u: goto label_236228;
        case 0x236240u: goto label_236240;
        default: break;
    }

    ctx->pc = 0x2361c0u;

    // 0x2361c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2361c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2361c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2361c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2361c8: 0x9390a02c  lbu         $s0, -0x5FD4($gp)
    ctx->pc = 0x2361c8u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
    // 0x2361cc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2361ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2361d0: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x2361d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x2361d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2361d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2361d8: 0x108600  sll         $s0, $s0, 24
    ctx->pc = 0x2361d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
    // 0x2361dc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2361dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2361e0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2361e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2361e4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2361e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x2361e8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2361e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2361ec: 0x36100080  ori         $s0, $s0, 0x80
    ctx->pc = 0x2361ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)128);
    // 0x2361f0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2361f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2361f4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2361f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2361f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2361f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2361fc: 0xc08089c  jal         func_202270
    ctx->pc = 0x2361FCu;
    SET_GPR_U32(ctx, 31, 0x236204u);
    ctx->pc = 0x236200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2361FCu;
    // 0x236200: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x2361FCu, 0x236204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236204u;
label_236204:
    // 0x236204: 0x26630002  addiu       $v1, $s3, 0x2
    ctx->pc = 0x236204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x236208: 0x44926000  mtc1        $s2, $f12
    ctx->pc = 0x236208u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23620c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x23620cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x236210: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x236210u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x236214: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x236214u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x236218: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x236218u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23621c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23621cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236220: 0xc08b952  jal         func_22E548
    ctx->pc = 0x236220u;
    SET_GPR_U32(ctx, 31, 0x236228u);
    ctx->pc = 0x236224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236220u;
    // 0x236224: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x236220u, 0x236228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236228u;
label_236228:
    // 0x236228: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x236228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23622c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x23622cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236230: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x236230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x236234: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x236234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236238: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x236238u;
    SET_GPR_U32(ctx, 31, 0x236240u);
    ctx->pc = 0x23623Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236238u;
    // 0x23623c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x236238u, 0x236240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236240u;
label_236240:
    // 0x236240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x236240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236244: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x236244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x236248: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x236248u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23624c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23624cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x236250: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x236250u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x236254: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x236254u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23625c: 0x808089c  j           func_202270
    ctx->pc = 0x23625Cu;
    ctx->pc = 0x236260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23625Cu;
    // 0x236260: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    textSelect_0x202270(rdram, ctx, runtime); return;
    ctx->pc = 0x236264u;
}
