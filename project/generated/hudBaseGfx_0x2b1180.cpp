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

// Function: hudBaseGfx
// Address: 0x2b1180 - 0x2b1324
void hudBaseGfx_0x2b1180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hudBaseGfx_0x2b1180");
#endif

    switch (ctx->pc) {
        case 0x2b11f0u: goto label_2b11f0;
        case 0x2b11f8u: goto label_2b11f8;
        case 0x2b1280u: goto label_2b1280;
        case 0x2b12a8u: goto label_2b12a8;
        case 0x2b12e0u: goto label_2b12e0;
        case 0x2b12e8u: goto label_2b12e8;
        default: break;
    }

    ctx->pc = 0x2b1180u;

    // 0x2b1180: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2b1180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2b1184: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2b1184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x2b1188: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2b1188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2b118c: 0x246299f0  addiu       $v0, $v1, -0x6610
    ctx->pc = 0x2b118cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941168));
    // 0x2b1190: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2b1190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2b1194: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2b1194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b1198: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2b1198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2b119c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2b119cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b11a0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2b11a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2b11a4: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2b11a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2b11a8: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2b11a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2b11ac: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2b11acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2b11b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b11b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b11b4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b11b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b11b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b11b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b11bc: 0x8c6899f0  lw          $t0, -0x6610($v1)
    ctx->pc = 0x2b11bcu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x3299F0u));
    // 0x2b11c0: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x2b11c0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x329A04u));
    // 0x2b11c4: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x2b11c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x329A48u));
    // 0x2b11c8: 0x8c47005c  lw          $a3, 0x5C($v0)
    ctx->pc = 0x2b11c8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x329A4Cu));
    // 0x2b11cc: 0x24c50026  addiu       $a1, $a2, 0x26
    ctx->pc = 0x2b11ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 38));
    // 0x2b11d0: 0x642007  srav        $a0, $a0, $v1
    ctx->pc = 0x2b11d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x2b11d4: 0x24d40032  addiu       $s4, $a2, 0x32
    ctx->pc = 0x2b11d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), 50));
    // 0x2b11d8: 0x104a821  addu        $s5, $t0, $a0
    ctx->pc = 0x2b11d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2b11dc: 0xa7a00b  movn        $s4, $a1, $a3
    ctx->pc = 0x2b11dcu;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 5));
    // 0x2b11e0: 0x3c1e003b  lui         $fp, 0x3B
    ctx->pc = 0x2b11e0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)59 << 16));
    // 0x2b11e4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2B11E4u;
    {
        const bool branch_taken_0x2b11e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B11E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B11E4u;
        // 0x2b11e8: 0x3c17002f  lui         $s7, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b11e4) {
            ctx->pc = 0x2B12E0u;
            goto label_2b12e0;
        }
    }
    ctx->pc = 0x2B11ECu;
    // 0x2b11ec: 0x0  nop
    ctx->pc = 0x2b11ecu;
    // NOP
label_2b11f0:
    // 0x2b11f0: 0xc0b1fb6  jal         func_2C7ED8
    ctx->pc = 0x2B11F0u;
    SET_GPR_U32(ctx, 31, 0x2B11F8u);
    ctx->pc = 0x2B11F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B11F0u;
    // 0x2b11f4: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7ED8u, 0x2B11F0u, 0x2B11F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B11F8u;
label_2b11f8:
    // 0x2b11f8: 0xc4400214  lwc1        $f0, 0x214($v0)
    ctx->pc = 0x2b11f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b11fc: 0x24110080  addiu       $s1, $zero, 0x80
    ctx->pc = 0x2b11fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2b1200: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2b1200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2b1204: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b1204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b1208: 0x26e22c18  addiu       $v0, $s7, 0x2C18
    ctx->pc = 0x2b1208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 11288));
    // 0x2b120c: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x2b120cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2b1210: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b1210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1214: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b1214u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b1218: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2b1218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b121c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b121cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b1220: 0x27c4fba0  addiu       $a0, $fp, -0x460
    ctx->pc = 0x2b1220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294966176));
    // 0x2b1224: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b1224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b1228: 0x26930009  addiu       $s3, $s4, 0x9
    ctx->pc = 0x2b1228u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 9));
    // 0x2b122c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b122cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b1230: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x2b1230u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x2b1234: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b1234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b1238: 0x8c450ca4  lw          $a1, 0xCA4($v0)
    ctx->pc = 0x2b1238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3236)));
    // 0x2b123c: 0x2329023  subu        $s2, $s1, $s2
    ctx->pc = 0x2b123cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x2b1240: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x2b1240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2b1244: 0x2328823  subu        $s1, $s1, $s2
    ctx->pc = 0x2b1244u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x2b1248: 0x2421818  mult        $v1, $s2, $v0
    ctx->pc = 0x2b1248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2b124c: 0x118e00  sll         $s1, $s1, 24
    ctx->pc = 0x2b124cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 24));
    // 0x2b1250: 0x121043  sra         $v0, $s2, 1
    ctx->pc = 0x2b1250u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 1));
    // 0x2b1254: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2b1254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2b1258: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b1258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b125c: 0xe3382a  slt         $a3, $a3, $v1
    ctx->pc = 0x2b125cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b1260: 0x2470007f  addiu       $s0, $v1, 0x7F
    ctx->pc = 0x2b1260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x2b1264: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2b1264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2b1268: 0x67800b  movn        $s0, $v1, $a3
    ctx->pc = 0x2b1268u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x2b126c: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x2b126cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x2b1270: 0x1081c3  sra         $s0, $s0, 7
    ctx->pc = 0x2b1270u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 7));
    // 0x2b1274: 0x36310080  ori         $s1, $s1, 0x80
    ctx->pc = 0x2b1274u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)128);
    // 0x2b1278: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x2B1278u;
    SET_GPR_U32(ctx, 31, 0x2B1280u);
    ctx->pc = 0x2B127Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1278u;
    // 0x2b127c: 0x2b08021  addu        $s0, $s5, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x2B1278u, 0x2B1280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1280u;
label_2b1280:
    // 0x2b1280: 0x8f87b234  lw          $a3, -0x4DCC($gp)
    ctx->pc = 0x2b1280u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2b1284: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b1284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1288: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2b1288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b128c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2b128cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1290: 0x8ce30180  lw          $v1, 0x180($a3)
    ctx->pc = 0x2b1290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 384)));
    // 0x2b1294: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x2b1294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b1298: 0x24070032  addiu       $a3, $zero, 0x32
    ctx->pc = 0x2b1298u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2b129c: 0x8c620160  lw          $v0, 0x160($v1)
    ctx->pc = 0x2b129cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x2b12a0: 0xc0ac3f0  jal         func_2B0FC0
    ctx->pc = 0x2B12A0u;
    SET_GPR_U32(ctx, 31, 0x2B12A8u);
    ctx->pc = 0x2B12A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B12A0u;
    // 0x2b12a4: 0x8c490014  lw          $t1, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0FC0u, 0x2B12A0u, 0x2B12A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B12A8u;
label_2b12a8:
    // 0x2b12a8: 0x26870010  addiu       $a3, $s4, 0x10
    ctx->pc = 0x2b12a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2b12ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b12acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b12b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b12b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b12b4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2b12b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b12b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2b12b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b12bc: 0x2a520029  slti        $s2, $s2, 0x29
    ctx->pc = 0x2b12bcu;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x2b12c0: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B12C0u;
    {
        const bool branch_taken_0x2b12c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B12C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B12C0u;
        // 0x2b12c4: 0x26940011  addiu       $s4, $s4, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b12c0) {
            ctx->pc = 0x2B12D8u;
            goto label_2b12d8;
        }
    }
    ctx->pc = 0x2B12C8u;
    // 0x2b12c8: 0x8f82b45c  lw          $v0, -0x4BA4($gp)
    ctx->pc = 0x2b12c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947932)));
    // 0x2b12cc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2b12ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2b12d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B12D0u;
    {
        const bool branch_taken_0x2b12d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b12d0) {
            ctx->pc = 0x2B12E0u;
            goto label_2b12e0;
        }
    }
    ctx->pc = 0x2B12D8u;
label_2b12d8:
    // 0x2b12d8: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x2B12D8u;
    SET_GPR_U32(ctx, 31, 0x2B12E0u);
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x2B12D8u, 0x2B12E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B12E0u;
label_2b12e0:
    // 0x2b12e0: 0xc0b1fb4  jal         func_2C7ED0
    ctx->pc = 0x2B12E0u;
    SET_GPR_U32(ctx, 31, 0x2B12E8u);
    ctx->pc = 0x2B12E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B12E0u;
    // 0x2b12e4: 0x26d00001  addiu       $s0, $s6, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7ED0u, 0x2B12E0u, 0x2B12E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B12E8u;
label_2b12e8:
    // 0x2b12e8: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x2b12e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b12ec: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x2B12ECu;
    {
        const bool branch_taken_0x2b12ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B12F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B12ECu;
        // 0x2b12f0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b12ec) {
            ctx->pc = 0x2B11F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b11f0;
        }
    }
    ctx->pc = 0x2B12F4u;
    // 0x2b12f4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2b12f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b12f8: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2b12f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b12fc: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2b12fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b1300: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2b1300u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b1304: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2b1304u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b1308: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2b1308u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b130c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2b130cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b1310: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b1310u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b1314: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b1314u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1318: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b1318u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b131c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B131Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B131Cu;
        // 0x2b1320: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B131Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1324u;
}
