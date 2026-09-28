#pragma once

// Exception handling that also builds where C++ exceptions are unavailable
// (the original Xbox: nxdk has no exception runtime). With exceptions the
// macros are plain try / catch / throw. Without them (PS2X_NO_EXCEPTIONS) a
// try block always runs, catch blocks compile but are never entered, and a
// throw logs the error and stops the program.
//
//   PS2X_TRY { ... }
//   PS2X_CATCH(const std::exception &, e) { ... uses e ... }
//   PS2X_CATCH_TYPE(const std::exception &) { ... }
//   PS2X_CATCH_ALL { ... }
//   PS2X_THROW(std::runtime_error("..."));
//   PS2X_RETHROW;

#if defined(PS2X_NO_EXCEPTIONS)

#include <exception>
#include <type_traits>
#include <string>

namespace ps2x
{
    // Binds to any reference type; only named in catch blocks that never run.
    struct NoCatch
    {
        template <class T>
        operator T &() const { return *static_cast<T *>(nullptr); }
    };

    [[noreturn]] void fatalError(const char *what);

    template <class E>
    [[noreturn]] inline void fatalThrow(const E &error)
    {
        if constexpr (std::is_base_of_v<std::exception, E>)
            fatalError(error.what());
        else
            fatalError("unhandled exception");
    }
}

#define PS2X_TRY if (true)
#define PS2X_CATCH(type, name) else if (false) for (type name = ps2x::NoCatch{};;)
#define PS2X_CATCH_TYPE(type) else if (false)
#define PS2X_CATCH_ALL else if (false)
#define PS2X_THROW(...) ps2x::fatalThrow(__VA_ARGS__)
#define PS2X_RETHROW ps2x::fatalError("rethrow without exception support")

#else

#define PS2X_TRY try
#define PS2X_CATCH(type, name) catch (type name)
#define PS2X_CATCH_TYPE(type) catch (type)
#define PS2X_CATCH_ALL catch (...)
#define PS2X_THROW(...) throw __VA_ARGS__
#define PS2X_RETHROW throw

#endif
