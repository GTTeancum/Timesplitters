// Runtime-library pieces nxdk lacks, and Windows calls the shared runtime
// makes that have no Xbox equivalent. Kept free of <windows.h> so these
// definitions don't collide with nxdk's declarations.
#include <cstdint>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <fenv.h>
#include <xmmintrin.h>

// fenv rounding (declared by pdclib without C linkage). The VU emulation
// switches to round-toward-zero around its float math; floats may be
// computed on the x87 or with SSE, so both control words are set.
// FE_* values are the x87 rounding-control bits (10-11).
int fegetround(void)
{
    unsigned short cw;
    __asm__ __volatile__("fnstcw %0" : "=m"(cw));
    return cw & 0x0C00;
}

int fesetround(int mode)
{
    if (mode & ~0x0C00)
        return 1;
    unsigned short cw;
    __asm__ __volatile__("fnstcw %0" : "=m"(cw));
    cw = static_cast<unsigned short>((cw & ~0x0C00) | mode);
    __asm__ __volatile__("fldcw %0" : : "m"(cw));
    // MXCSR rounding control is bits 13-14 in the same order.
    _mm_setcsr((_mm_getcsr() & ~0x6000u) | (static_cast<unsigned>(mode) << 3));
    return 0;
}

extern "C"
{
    double atof(const char *text) { return std::strtod(text, nullptr); }

    // thread_local destructor registration (MSVC ABI). Destructors of
    // thread-local objects don't run at thread exit on the Xbox; the runtime's
    // are plain counters.
    int __tlregdtor(void (*)(void)) { return 0; }

    // Looked up by the PC build for thread names and XInput; absent here.
    void *__stdcall GetCurrentThread(void) { return reinterpret_cast<void *>(static_cast<intptr_t>(-2)); }
    void *__stdcall GetModuleHandleW(const wchar_t *) { return nullptr; }
    void *__stdcall GetProcAddress(void *, const char *) { return nullptr; }

    // XInput: controllers come through SDL instead (xbox_raylib.cpp).
    unsigned long __stdcall XInputGetState(unsigned long, void *) { return 1167; /* ERROR_DEVICE_NOT_CONNECTED */ }
}

// nxdk's lround family asserts "not implemented"; round half away from zero.
// (All six are defined so the library's lround.obj is never linked.)
extern "C"
{
    long lround(double x) { return static_cast<long>(x < 0.0 ? std::ceil(x - 0.5) : std::floor(x + 0.5)); }
    long lroundf(float x) { return lround(x); }
    long lroundl(long double x) { return lround(static_cast<double>(x)); }
    long long llround(double x) { return static_cast<long long>(x < 0.0 ? std::ceil(x - 0.5) : std::floor(x + 0.5)); }
    long long llroundf(float x) { return llround(x); }
    long long llroundl(long double x) { return llround(static_cast<double>(x)); }
}

// operator new: nxdk's libc++ is built without exceptions, and its operator
// new then returns null when malloc fails. Callers (std::vector growth, say)
// write through that null and the Xbox crashes with no message. These
// variants stop with the size that could not be allocated instead, and
// list the last big requests and who made them (xbox_perf.cpp): in a match
// the console has almost no memory left, and one big request is enough.
#include <new>
#include "xbox_perf.h"
void xboxLogWrite(const char *text, unsigned length);
namespace ps2x
{
    [[noreturn]] void fatalError(const char *message);
}

namespace
{
    [[noreturn]] void outOfMemory(size_t bytes)
    {
        // Logging allocates a little: should that fail too, stop at once.
        static bool reported = false;
        if (reported)
            ps2x::fatalError("out of memory");
        reported = true;
        char line[96];
        const int n = std::snprintf(line, sizeof(line), "[TS:xbox] out of memory: %u bytes requested\n",
                                    static_cast<unsigned>(bytes));
        xboxLogWrite(line, n > 0 ? static_cast<unsigned>(n) : 0u);
        xboxPerfDumpAllocations();
        ps2x::fatalError("out of memory");
    }

    // caller: operator new's return address.
    void *allocate(size_t bytes, const void *caller)
    {
        void *p = std::malloc(bytes ? bytes : 1u);
        if (bytes >= kPerfBigAllocation)
            xboxPerfNoteAllocation(bytes, p, caller);
        if (!p)
            outOfMemory(bytes);
        return p;
    }

    void *allocateOrNull(size_t bytes, const void *caller) noexcept
    {
        void *p = std::malloc(bytes ? bytes : 1u);
        if (bytes >= kPerfBigAllocation)
            xboxPerfNoteAllocation(bytes, p, caller);
        return p;
    }
}

void *operator new(size_t bytes) { return allocate(bytes, __builtin_return_address(0)); }
void *operator new[](size_t bytes) { return allocate(bytes, __builtin_return_address(0)); }
void *operator new(size_t bytes, const std::nothrow_t &) noexcept { return allocateOrNull(bytes, __builtin_return_address(0)); }
void *operator new[](size_t bytes, const std::nothrow_t &) noexcept { return allocateOrNull(bytes, __builtin_return_address(0)); }
