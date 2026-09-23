#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void _malloc_trim_r_0x2eb598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_malloc_trim_r_0x2eb598");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::malloc_trim_r(rdram, ctx, runtime); 
}
