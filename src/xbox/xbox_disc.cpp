// Disc reads on the Xbox: the runtime's CD stubs (Kernel/Stubs/Helpers/
// Support.h, readHostRange) read the disc image and other host files here.
//
// The game reads its disc one 2 KB sector at a time: about 3,000 reads per
// level load, 13 a second in the title's attract demo. Each read used to
// open the disc image (D:\ps2disc.iso) afresh through a std::ifstream: a
// 4 KB stream buffer, 1 KB of FILE and its buffer, copies of the path and a
// kernel file object, allocated and freed per sector. With nxdk's fclose,
// which left each stream's lock behind (xbox_stdio.cpp), that used up the
// kernel's pool in 74 minutes; the next open then failed and the game
// retried the same read for ever on its loading screen.
//
// Now a file is opened once (CreateFileA, FILE_FLAG_RANDOM_ACCESS, like the
// texture pack and the IOP's CD image) and stays open: a read is a seek and
// a ReadFile straight into guest memory and allocates nothing. A few files
// stay open (the image, and any loose files the game registered), the least
// recently used one closed for a new one.
//
// A read that fails is not silent: the first failure in a row is logged at
// once with the file, the step, the error and the memory left; memory is
// given back (xbox_memory.h), the file reopened and the read tried once
// more. A run of failures is logged every 1,000th with its count, and the
// first read that works again says so.
#include "xbox_log.h"
#include "xbox_memory.h"

#include <windows.h>

#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <mutex>
#include <string>

namespace
{
    constexpr int kOpenFiles = 4;
    constexpr size_t kMaxPath = 260;

    struct OpenFile
    {
        std::string path; // as the runtime names it ('/' or '\')
        HANDLE handle = INVALID_HANDLE_VALUE;
        uint32_t lastUse = 0;
    };
    OpenFile g_files[kOpenFiles];
    uint32_t g_useTick = 0;
    std::mutex g_mutex;    // an SRW lock: no kernel object
    uint32_t g_failures = 0; // in a row

    void logLine(const char *text)
    {
        xboxLogWrite(text, static_cast<unsigned>(std::strlen(text)));
    }

    // Why an attempt failed.
    struct Failure
    {
        const char *step = "";
        DWORD error = 0;
    };

    OpenFile *findOpen(const char *path)
    {
        for (OpenFile &file : g_files)
            if (file.handle != INVALID_HANDLE_VALUE && file.path == path)
                return &file;
        return nullptr;
    }

    void closeFile(OpenFile &file)
    {
        CloseHandle(file.handle);
        file.handle = INVALID_HANDLE_VALUE;
        file.path.clear();
    }

    OpenFile *openFile(const char *path, Failure &failure)
    {
        // The kernel only takes '\' (paths built with std::filesystem use '/').
        char native[kMaxPath];
        const size_t length = std::strlen(path);
        if (length >= sizeof(native))
        {
            failure = {"open (path too long)", 0};
            return nullptr;
        }
        for (size_t i = 0; i <= length; ++i)
            native[i] = path[i] == '/' ? char(0x5C) : path[i]; // '/' -> backslash
        const HANDLE handle = CreateFileA(native, GENERIC_READ, FILE_SHARE_READ, nullptr, OPEN_EXISTING,
                                          FILE_FLAG_RANDOM_ACCESS, nullptr);
        if (handle == INVALID_HANDLE_VALUE)
        {
            failure = {"open", GetLastError()};
            return nullptr;
        }
        OpenFile *slot = &g_files[0];
        for (OpenFile &file : g_files)
        {
            if (file.handle == INVALID_HANDLE_VALUE)
            {
                slot = &file;
                break;
            }
            if (file.lastUse < slot->lastUse)
                slot = &file;
        }
        if (slot->handle != INVALID_HANDLE_VALUE)
            closeFile(*slot);
        slot->path = path;
        slot->handle = handle;
        return slot;
    }

    // A seek and reads into dst. Past the end of the file the rest is zero,
    // as the stream read left it.
    bool readAt(HANDLE handle, uint64_t offset, uint8_t *dst, size_t bytes, Failure &failure)
    {
        LARGE_INTEGER position;
        position.QuadPart = static_cast<LONGLONG>(offset);
        if (!SetFilePointerEx(handle, position, nullptr, FILE_BEGIN))
        {
            failure = {"seek", GetLastError()};
            return false;
        }
        while (bytes != 0u)
        {
            const DWORD chunk = bytes > 0x01000000u ? 0x01000000u : static_cast<DWORD>(bytes);
            DWORD got = 0;
            if (!ReadFile(handle, dst, chunk, &got, nullptr))
            {
                failure = {"read", GetLastError()};
                return false;
            }
            if (got == 0u)
            {
                std::memset(dst, 0, bytes);
                break;
            }
            dst += got;
            bytes -= got;
        }
        return true;
    }

    bool attempt(const char *path, uint64_t offset, uint8_t *dst, size_t bytes, Failure &failure)
    {
        OpenFile *file = findOpen(path);
        if (!file && !(file = openFile(path, failure)))
            return false;
        file->lastUse = ++g_useTick;
        if (readAt(file->handle, offset, dst, bytes, failure))
            return true;
        closeFile(*file); // reopened by the next attempt
        return false;
    }
}

namespace ps2x
{
    bool xboxReadHostFile(const char *path, uint64_t offsetBytes, uint8_t *dst, size_t byteCount)
    {
        if (!path || !dst)
            return false;
        std::lock_guard<std::mutex> lock(g_mutex);
        Failure failure;
        bool done = attempt(path, offsetBytes, dst, byteCount, failure);
        if (!done)
        {
            ++g_failures;
            const XboxMemoryState before = xboxMemoryState();
            xboxReleaseMemory();
            Failure again;
            done = attempt(path, offsetBytes, dst, byteCount, again);
            if (g_failures == 1u || g_failures % 1000u == 0u)
            {
                const XboxMemoryState after = xboxMemoryState();
                char line[512];
                std::snprintf(line, sizeof(line),
                              "[TS:cd] disc read failed (%u in a row): %s of %s failed (offset %llu, %u bytes, "
                              "error %lu); %u KB free, kernel pool %u KB; memory given back (%u KB free), %s\n",
                              unsigned(g_failures), failure.step, path, static_cast<unsigned long long>(offsetBytes),
                              unsigned(byteCount), static_cast<unsigned long>(failure.error), before.freeKB,
                              before.poolKB, after.freeKB,
                              done ? "the second try worked" : "the second try failed too; the game retries the read");
                logLine(line);
            }
            if (!done)
            {
                std::memset(dst, 0, byteCount);
                return false;
            }
            if (g_failures == 1u)
            {
                g_failures = 0; // the line above said so
                return true;
            }
        }
        if (g_failures != 0u)
        {
            char line[160];
            std::snprintf(line, sizeof(line), "[TS:cd] disc reads work again after %u failures (%u KB free)\n",
                          unsigned(g_failures), xboxMemoryState().freeKB);
            logLine(line);
            g_failures = 0;
        }
        return true;
    }
}
