// Composes background binding with the existing optional native recorder.
#if defined(TS_BG_NATIVE) && TS_BG_NATIVE
#include "xbox_bg_runtime.h"
#include "xbox_vu_capture.h"
#include "runtime/ps2_vu1_jit.h"
#include "runtime/ps2_memory.h"

namespace
{
Vu1NativeEntry original=nullptr;
bool boundRun(uint32_t pc,uint8_t *data,uint32_t size,uint32_t top,PS2Memory *memory,GS &gs)
{
    xboxBgBeginNative(pc,data,size,top,PS2Memory::onVif1Worker());
    struct End { ~End() { xboxBgEndNative(); } } end;
    return original(pc,data,size,top,memory,gs);
}
void forward(const Vu1NativeProgram &program)
{
#if defined(TS_NATIVE_CAPTURE) && TS_NATIVE_CAPTURE
    xboxRegisterVu1NativeProgram(program);
#else
    registerVu1NativeProgram(program);
#endif
}
}
void xboxBgRegisterVu1NativeProgram(const Vu1NativeProgram &program)
{
    if (program.hash!=xbox_vu_capture::kProgramHash || !program.run || original || program.run==&boundRun)
    { forward(program); return; }
    original=program.run;
    Vu1NativeProgram bound=program; bound.run=&boundRun; forward(bound);
}
#endif
