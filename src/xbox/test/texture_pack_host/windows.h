#pragma once
// Host-only Win32 surface used to compile the actual texture pack reader.
// This models file/semaphore/thread lifetime, not Xbox I/O or GPU visibility.
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <mutex>
#include <thread>

#ifndef __stdcall
#define __stdcall
#endif
using DWORD = uint32_t;
using LONG = int32_t;
using LONGLONG = int64_t;
using SIZE_T = size_t;
using HANDLE = void *;
struct LARGE_INTEGER { LONGLONG QuadPart = 0; };
#define INVALID_HANDLE_VALUE reinterpret_cast<HANDLE>(intptr_t(-1))
constexpr DWORD INVALID_SET_FILE_POINTER = UINT32_MAX;
constexpr DWORD GENERIC_READ = 1, FILE_SHARE_READ = 1, OPEN_EXISTING = 1;
constexpr DWORD FILE_FLAG_RANDOM_ACCESS = 1, FILE_BEGIN = 0;
constexpr DWORD INFINITE = UINT32_MAX, WAIT_OBJECT_0 = 0, WAIT_TIMEOUT = 258;
constexpr int THREAD_PRIORITY_ABOVE_NORMAL = 1;

namespace texture_pack_host
{
    enum Kind { File, Semaphore, Thread };
    inline std::atomic<int> handles{0}, reads{0}, blockedReads{0};
    inline std::atomic<bool> pauseReads{false}, failNextRead{false}, failNextThread{false};
    inline std::mutex readMutex;
    inline std::condition_variable readCv;
    struct Handle
    {
        Kind kind;
        explicit Handle(Kind k) : kind(k) { ++handles; }
        virtual ~Handle() { --handles; }
    };
    struct FileHandle : Handle
    {
        FILE *file;
        explicit FileHandle(FILE *f) : Handle(File), file(f) {}
        ~FileHandle() override { std::fclose(file); }
    };
    struct SemaphoreHandle : Handle
    {
        std::mutex mutex;
        std::condition_variable cv;
        LONG count, maximum;
        SemaphoreHandle(LONG n, LONG max) : Handle(Semaphore), count(n), maximum(max) {}
    };
    struct ThreadHandle : Handle
    {
        std::thread thread;
        ThreadHandle(unsigned long (*fn)(void *), void *arg) : Handle(Thread), thread([=] { fn(arg); }) {}
    };
    inline void resumeReads()
    {
        {
            std::lock_guard<std::mutex> lock(readMutex);
            pauseReads.store(false);
        }
        readCv.notify_all();
    }
}

inline HANDLE CreateFileA(const char *path, DWORD, DWORD, void *, DWORD, DWORD, void *)
{
    FILE *file = std::fopen(path, "rb");
    return file ? new texture_pack_host::FileHandle(file) : INVALID_HANDLE_VALUE;
}
inline bool GetFileSizeEx(HANDLE h, LARGE_INTEGER *size)
{
    FILE *file = static_cast<texture_pack_host::FileHandle *>(h)->file;
    const long at = std::ftell(file);
    if (at < 0 || std::fseek(file, 0, SEEK_END)) return false;
    const long end = std::ftell(file);
    if (end < 0 || std::fseek(file, at, SEEK_SET)) return false;
    size->QuadPart = end;
    return true;
}
inline DWORD SetFilePointer(HANDLE h, LONG offset, LONG *, DWORD)
{
    FILE *file = static_cast<texture_pack_host::FileHandle *>(h)->file;
    return offset < 0 || std::fseek(file, offset, SEEK_SET) ? INVALID_SET_FILE_POINTER : DWORD(offset);
}
inline bool ReadFile(HANDLE h, void *out, DWORD bytes, DWORD *got, void *)
{
    using namespace texture_pack_host;
    ++reads;
    if (pauseReads.load())
    {
        std::unique_lock<std::mutex> lock(readMutex);
        ++blockedReads;
        readCv.wait(lock, [] { return !pauseReads.load(); });
        --blockedReads;
    }
    if (failNextRead.exchange(false)) { *got = 0; return false; }
    FILE *file = static_cast<FileHandle *>(h)->file;
    *got = DWORD(std::fread(out, 1, bytes, file));
    return std::ferror(file) == 0;
}
inline HANDLE CreateSemaphore(void *, LONG count, LONG maximum, const char *)
{
    return new texture_pack_host::SemaphoreHandle(count, maximum);
}
inline bool ReleaseSemaphore(HANDLE h, LONG count, LONG *)
{
    auto *s = static_cast<texture_pack_host::SemaphoreHandle *>(h);
    {
        std::lock_guard<std::mutex> lock(s->mutex);
        if (count <= 0 || count > s->maximum - s->count) return false;
        s->count += count;
    }
    s->cv.notify_all();
    return true;
}
inline HANDLE CreateThread(void *, SIZE_T, unsigned long (*fn)(void *), void *arg, DWORD, DWORD *)
{
    if (texture_pack_host::failNextThread.exchange(false)) return nullptr;
    return new texture_pack_host::ThreadHandle(fn, arg);
}
inline DWORD WaitForSingleObject(HANDLE h, DWORD)
{
    using namespace texture_pack_host;
    if (static_cast<Handle *>(h)->kind == Thread)
        static_cast<ThreadHandle *>(h)->thread.join();
    else
    {
        auto *s = static_cast<SemaphoreHandle *>(h);
        std::unique_lock<std::mutex> lock(s->mutex);
        s->cv.wait(lock, [=] { return s->count > 0; });
        --s->count;
    }
    return WAIT_OBJECT_0;
}
inline bool CloseHandle(HANDLE h) { delete static_cast<texture_pack_host::Handle *>(h); return true; }
inline bool SetThreadPriority(HANDLE, int) { return true; }
inline void Sleep(DWORD ms) { std::this_thread::sleep_for(std::chrono::milliseconds(ms)); }
inline bool QueryPerformanceFrequency(LARGE_INTEGER *v) { v->QuadPart = 1000000; return true; }
inline bool QueryPerformanceCounter(LARGE_INTEGER *v)
{
    v->QuadPart = std::chrono::duration_cast<std::chrono::microseconds>(
        std::chrono::steady_clock::now().time_since_epoch()).count();
    return true;
}
