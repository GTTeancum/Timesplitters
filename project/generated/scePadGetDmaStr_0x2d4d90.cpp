#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void scePadGetDmaStr_0x2d4d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("scePadGetDmaStr_0x2d4d90");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::scePadGetDmaStr(rdram, ctx, runtime); 
}
