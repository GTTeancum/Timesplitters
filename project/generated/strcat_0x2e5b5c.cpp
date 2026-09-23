#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void strcat_0x2e5b5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("strcat_0x2e5b5c");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::strcat(rdram, ctx, runtime); 
}
