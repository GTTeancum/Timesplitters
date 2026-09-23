#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void free_0x2e4a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("free_0x2e4a78");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::free(rdram, ctx, runtime); 
}
