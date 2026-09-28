// std::chrono clocks, replacing nxdk's libc++ versions (which are then never
// linked: this file defines every function of libc++'s chrono.cpp).
//
// nxdk's steady_clock::now() computes counter * 1e9 / frequency from the
// processor's 733 MHz time-stamp counter. counter * 1e9 overflows 64 bits
// once the Xbox has been on for about 12.6 seconds, after which the clock
// jumps back about 25 seconds every 25 seconds, and every timed wait lasts
// until the clock catches up again. Here the counter is split into whole
// seconds and a remainder first, which cannot overflow.
#include <chrono>
#include <ctime>

#include <windows.h>

_LIBCPP_BEGIN_NAMESPACE_STD
namespace chrono
{
    steady_clock::time_point steady_clock::now() _NOEXCEPT
    {
        static const long long frequency = [] {
            LARGE_INTEGER value;
            QueryPerformanceFrequency(&value);
            return value.QuadPart;
        }();
        LARGE_INTEGER counter;
        QueryPerformanceCounter(&counter);
        const long long seconds = counter.QuadPart / frequency;
        const long long remainder = counter.QuadPart % frequency;
        return time_point(duration(seconds * 1000000000LL + remainder * 1000000000LL / frequency));
    }

    system_clock::time_point system_clock::now() _NOEXCEPT
    {
        // FILETIME counts 100 ns units since 1601; the Unix epoch is 1970.
        constexpr long long kUnixEpochIn100ns = 116444736000000000LL;
        FILETIME ft;
        GetSystemTimeAsFileTime(&ft);
        const long long ticks = (static_cast<long long>(ft.dwHighDateTime) << 32) | ft.dwLowDateTime;
        return time_point(duration((ticks - kUnixEpochIn100ns) / 10));
    }

    time_t system_clock::to_time_t(const time_point &t) _NOEXCEPT
    {
        return static_cast<time_t>(duration_cast<seconds>(t.time_since_epoch()).count());
    }

    system_clock::time_point system_clock::from_time_t(time_t t) _NOEXCEPT
    {
        return system_clock::time_point(seconds(t));
    }
}
_LIBCPP_END_NAMESPACE_STD
