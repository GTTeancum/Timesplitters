// Force-included into every Xbox translation unit (-include xbox_prelude.h).
// Fills gaps in nxdk's libc++ 10 that the shared runtime relies on.
#pragma once

#ifdef __cplusplus
#include <bit>
#include <cstring>
#include <ostream>
#include <type_traits>

namespace std
{
#if !defined(__cpp_lib_bit_cast)
    template <class To, class From>
    inline To bit_cast(const From &from) noexcept
    {
        static_assert(sizeof(To) == sizeof(From), "bit_cast size mismatch");
        To to;
        std::memcpy(&to, &from, sizeof(To));
        return to;
    }
#endif

}

// nxdk's libc++ is built without std::cout (std::cerr and std::clog exist but
// write to a stdout that goes nowhere); src/xbox/xbox_log.cpp defines cout
// and points all three at the Xbox log.
_LIBCPP_BEGIN_NAMESPACE_STD
extern _LIBCPP_FUNC_VIS ostream cout;
_LIBCPP_END_NAMESPACE_STD

// Also dropped from std:: with the standard streams.
#include <cstdio>
_LIBCPP_BEGIN_NAMESPACE_STD
using ::printf;
using ::puts;
using ::putchar;
using ::vprintf;
_LIBCPP_END_NAMESPACE_STD

// The Xbox kernel only accepts '\' in paths; paths the runtime builds with
// std::filesystem use '/'. Every fopen goes through a wrapper that converts
// them (src/xbox/xbox_filesystem.cpp).
extern "C" FILE *ps2xXboxFopen(const char *name, const char *mode);
#define fopen ps2xXboxFopen
_LIBCPP_BEGIN_NAMESPACE_STD
using ::ps2xXboxFopen;
_LIBCPP_END_NAMESPACE_STD

// MSVC's bounds-checked time conversions, used by the runtime under _WIN32.
// nxdk's localtime() fails (no time zone data), so both convert here, as UTC.
#include <ctime>
inline int gmtime_s(struct tm *out, const time_t *value)
{
    if (!out || !value)
        return 1;
    const long long t = static_cast<long long>(*value);
    long long days = t / 86400, secs = t % 86400;
    if (secs < 0)
    {
        secs += 86400;
        --days;
    }
    *out = tm{};
    out->tm_hour = static_cast<int>(secs / 3600);
    out->tm_min = static_cast<int>(secs / 60 % 60);
    out->tm_sec = static_cast<int>(secs % 60);
    out->tm_wday = static_cast<int>(((days % 7) + 11) % 7); // 1970-01-01 was a Thursday
    // Civil date from days since 1970-01-01 (Howard Hinnant's algorithm).
    const long long z = days + 719468;
    const long long era = (z >= 0 ? z : z - 146096) / 146097;
    const long long doe = z - era * 146097;
    const long long yoe = (doe - doe / 1460 + doe / 36524 - doe / 146096) / 365;
    const long long doy = doe - (365 * yoe + yoe / 4 - yoe / 100);
    const long long mp = (5 * doy + 2) / 153;
    const long long day = doy - (153 * mp + 2) / 5 + 1;
    const long long month = mp < 10 ? mp + 3 : mp - 9;
    const long long year = yoe + era * 400 + (month <= 2 ? 1 : 0);
    out->tm_year = static_cast<int>(year - 1900);
    out->tm_mon = static_cast<int>(month - 1);
    out->tm_mday = static_cast<int>(day);
    const bool leap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    static const int kDaysBefore[12] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
    out->tm_yday = kDaysBefore[month - 1] + static_cast<int>(day) - 1 + (leap && month > 2 ? 1 : 0);
    return 0;
}
inline int localtime_s(struct tm *out, const time_t *value) { return gmtime_s(out, value); }
#endif
