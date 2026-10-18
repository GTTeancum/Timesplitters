// stdout / stderr into the log (xbox_log.cpp).
//
// nxdk's C library writes a stream's buffer out through _PDCLIB_flushbuffer;
// stdout and stderr have no file behind them, so printf output was lost. This
// replaces that routine (the linker takes this definition before the
// library's): the two console streams go to the log, whole lines at a time,
// and every other stream is written with WriteFile as before.
#include <pdclib/_PDCLIB_int.h>

#include <algorithm>
#include <cerrno>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <threads.h>

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

// fread, replacing nxdk's: that one refills a 1 KB buffer with one kernel
// read at a time and copies it a byte at a time, so loading the game's
// 27 MB of data took most of start-up. Buffered bytes are copied in one go
// and whole-buffer-sized remainders are read straight into the caller's
// memory. File position bookkeeping matches _PDCLIB_fillbuffer's: pos.offset
// is the OS file position, which ftell adjusts by the unread buffer.
extern "C" int _PDCLIB_prepread(struct _PDCLIB_file_t *stream);
extern "C" int _PDCLIB_fillbuffer(struct _PDCLIB_file_t *stream);

extern "C" size_t fread(void *__restrict ptr, size_t size, size_t nmemb, struct _PDCLIB_file_t *__restrict stream)
{
    const size_t total = size * nmemb;
    if (total == 0)
        return 0;
    mtx_lock(&stream->mtx);
    if (_PDCLIB_prepread(stream) == EOF)
    {
        mtx_unlock(&stream->mtx);
        return 0;
    }
    char *dest = static_cast<char *>(ptr);
    size_t done = 0;
    auto fromBuffer = [&] {
        const size_t n = std::min<size_t>(stream->bufend - stream->bufidx, total - done);
        std::memcpy(dest + done, stream->buffer + stream->bufidx, n);
        stream->bufidx += n;
        done += n;
    };
    fromBuffer();
    while (total - done >= stream->bufsize)
    {
        DWORD got = 0;
        if (!ReadFile(stream->handle, dest + done, static_cast<DWORD>(total - done), &got, nullptr))
        {
            errno = _PDCLIB_w32errno(GetLastError());
            stream->status |= _PDCLIB_ERRORFLAG;
            break;
        }
        if (got == 0)
        {
            stream->status |= _PDCLIB_EOFFLAG;
            break;
        }
        stream->pos.offset += got;
        done += got;
    }
    while (done < total && !(stream->status & (_PDCLIB_EOFFLAG | _PDCLIB_ERRORFLAG)))
    {
        if (stream->bufidx == stream->bufend && _PDCLIB_fillbuffer(stream) == EOF)
            break;
        fromBuffer();
    }
    mtx_unlock(&stream->mtx);
    return done / size;
}

// fclose, replacing nxdk's: that one never destroys the stream's lock, a
// kernel mutant fopen creates (mtx_init -> NtCreateMutant), so every
// fopen/fclose pair left a mutant and its handle behind: 64 bytes of kernel
// pool and a handle-table slot each. Every disc read opened the disc image
// afresh (std::ifstream, readHostRange in the runtime's CD stubs; now kept
// open, xbox_disc.cpp), 13 reads a second in the title's attract demo, and
// after 74 minutes 60,000 mutants held 4 MB of the 64 MB console: no memory
// left to open the next file, and the game sat on its loading screen. Every
// other fopen/fclose (std::ifstream and std::ofstream included: libc++'s
// filebuf closes with fclose) goes through here too: the VFS, the IOP's
// host files, the memory card, the music. The same steps as nxdk's fclose
// (pdclib functions/stdio/fclose.c), then mtx_destroy as fopen's own error
// path does. stdin/stdout/stderr (_PDCLIB_STATIC) keep theirs: the C
// library's exit destroys those.
extern "C" int _PDCLIB_getstream(struct _PDCLIB_file_t *stream);
extern "C" int _PDCLIB_close(_PDCLIB_fd_t fd);

extern "C" int fclose(struct _PDCLIB_file_t *stream)
{
    mtx_lock(&stream->mtx);
    // Off the list of open files.
    if (_PDCLIB_getstream(stream))
    {
        mtx_unlock(&stream->mtx);
        return EOF;
    }
    if ((stream->status & _PDCLIB_FWRITE) && _PDCLIB_flushbuffer(stream) == EOF)
    {
        // As nxdk's: the stream stays allocated (but off the list).
        mtx_unlock(&stream->mtx);
        return EOF;
    }
    _PDCLIB_close(stream->handle);
    if (stream->status & _PDCLIB_DELONCLOSE)
        remove(stream->filename);
    if (stream->status & _PDCLIB_FREEBUFFER)
        free(stream->buffer);
    if (stream->status & _PDCLIB_FREENAME)
        free(stream->filename);
    mtx_unlock(&stream->mtx);
    if (!(stream->status & _PDCLIB_STATIC))
    {
        mtx_destroy(&stream->mtx);
        free(stream);
    }
    return 0;
}
