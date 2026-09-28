// Unrecoverable errors on the Xbox (a C++ throw in the shared runtime, which
// has no exception support here; see ps2x/exceptions.h).
#include "ps2x/exceptions.h"
#include "xbox_log.h"

#include <cstring>
#include <hal/debug.h>
#include <hal/xbox.h>
#include <windows.h>

namespace ps2x
{
    [[noreturn]] void fatalError(const char *what)
    {
        static const char kPrefix[] = "[TS:fatal] ";
        xboxLogWrite(kPrefix, sizeof(kPrefix) - 1);
        xboxLogWrite(what, static_cast<unsigned>(std::strlen(what)));
        xboxLogWrite("\n", 1);
        debugPrint("\nFATAL: %s\n", what);
        for (;;)
            Sleep(1000);
    }
}
