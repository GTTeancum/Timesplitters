#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sceCdSeek_0x2df288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceCdSeek_0x2df288");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::sceCdSeek(rdram, ctx, runtime); 
}
