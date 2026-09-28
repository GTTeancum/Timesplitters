// stdout / stderr into the log (xbox_log.cpp).
//
// nxdk's C library writes a stream's buffer out through _PDCLIB_flushbuffer;
// stdout and stderr have no file behind them, so printf output was lost. This
// replaces that routine (the linker takes this definition before the
// library's): the two console streams go to the log, whole lines at a time,
// and every other stream is written with WriteFile as before.
#include <pdclib/_PDCLIB_int.h>

#include <cerrno>
#include <cstdio>
#include <cstring>
#include <string>

#include <windows.h>

#include "xbox_log.h"

extern "C" int _PDCLIB_w32errno(DWORD werror);

namespace
{
    std::string g_pending[2]; // stdout, stderr

    void logConsole(int which, const char *data, size_t length)
    {
        std::string &pending = g_pending[which];
        pending.append(data, length);
        size_t start = 0;
        for (size_t newline; (newline = pending.find('\n', start)) != std::string::npos; start = newline + 1)
            xboxLogWrite(pending.data() + start, static_cast<unsigned>(newline + 1 - start));
        pending.erase(0, start);
        // A prompt without a newline that grows too long is logged anyway.
        if (pending.size() > 512)
        {
            xboxLogWrite(pending.data(), static_cast<unsigned>(pending.size()));
            pending.clear();
        }
    }
}

extern "C" int _PDCLIB_flushbuffer(struct _PDCLIB_file_t *stream)
{
    if (stream == stdout || stream == stderr)
    {
        logConsole(stream == stdout ? 0 : 1, stream->buffer, stream->bufidx);
        stream->pos.offset += stream->bufidx;
        stream->bufidx = 0;
        return 0;
    }

    DWORD written = 0;
    if (!WriteFile(stream->handle, stream->buffer, stream->bufidx, &written, nullptr) || written != stream->bufidx)
    {
        errno = _PDCLIB_w32errno(GetLastError());
        stream->status |= _PDCLIB_ERRORFLAG;
        stream->bufidx -= written;
        std::memmove(stream->buffer, stream->buffer + written, stream->bufidx);
        stream->pos.offset += written;
        return EOF;
    }
    stream->pos.offset += written;
    stream->bufidx = 0;
    return 0;
}
