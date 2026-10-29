// Opt-in Xbox-local observer for raw native VU1 draw inputs. Default builds
// compile an empty translation unit and register the original callback.
#if defined(TS_NATIVE_CAPTURE) && TS_NATIVE_CAPTURE

#include "xbox_vu_capture.h"
#include "runtime/ps2_vu1_jit.h"
#include <atomic>
#include <cstdio>
#include <windows.h>

#ifndef TS_NATIVE_CAPTURE_DELAY_MS
#define TS_NATIVE_CAPTURE_DELAY_MS 5000u
#endif
#ifndef TS_NATIVE_CAPTURE_STRIDE
#define TS_NATIVE_CAPTURE_STRIDE 64u
#endif
#ifndef TS_NATIVE_CAPTURE_LIMIT
#define TS_NATIVE_CAPTURE_LIMIT 128u
#endif

static_assert(static_cast<uint64_t>(TS_NATIVE_CAPTURE_DELAY_MS) <= 0x7fffffffull,
              "TS_NATIVE_CAPTURE_DELAY_MS must be in 0..2147483647");
static_assert(static_cast<uint64_t>(TS_NATIVE_CAPTURE_STRIDE) > 0u &&
                  static_cast<uint64_t>(TS_NATIVE_CAPTURE_STRIDE) <= 0xffffffffull,
              "TS_NATIVE_CAPTURE_STRIDE must be in 1..4294967295");
static_assert(static_cast<uint64_t>(TS_NATIVE_CAPTURE_LIMIT) > 0u &&
                  static_cast<uint64_t>(TS_NATIVE_CAPTURE_LIMIT) <= 4096u,
              "TS_NATIVE_CAPTURE_LIMIT must be in 1..4096");

namespace
{
    Vu1NativeEntry g_original = nullptr;

    struct Capture
    {
        xbox_vu_capture::Recorder recorder{{TS_NATIVE_CAPTURE_DELAY_MS,
                                            TS_NATIVE_CAPTURE_STRIDE,
                                            TS_NATIVE_CAPTURE_LIMIT}};
        HANDLE file = INVALID_HANDLE_VALUE;
        char path[64]{};
        DWORD error = 0;
        std::atomic_flag busy = ATOMIC_FLAG_INIT;

        ~Capture() { close(this); } // early normal shutdown before the limit

        static bool open(void *context)
        {
            Capture &self = *static_cast<Capture *>(context);
            // xbox_main creates this directory on the writable E: partition.
            // CREATE_NEW preserves every previous capture and original asset.
            for (unsigned i = 0; i < 1000u; ++i)
            {
                std::snprintf(self.path, sizeof(self.path), "E:\\TimeSplitters\\vu1-%03u.tsvucap", i);
                self.file = CreateFileA(self.path, GENERIC_WRITE, 0, nullptr, CREATE_NEW,
                                        FILE_ATTRIBUTE_NORMAL, nullptr);
                if (self.file != INVALID_HANDLE_VALUE)
                {
                    self.error = 0;
                    std::fprintf(stderr, "[TS:vu-capture] output=%s limit=%u stride=%u\n", self.path,
                                 unsigned(TS_NATIVE_CAPTURE_LIMIT), unsigned(TS_NATIVE_CAPTURE_STRIDE));
                    return true;
                }
                self.error = GetLastError();
                if (self.error != ERROR_FILE_EXISTS && self.error != ERROR_ALREADY_EXISTS)
                    return false;
            }
            return false;
        }

        static bool write(void *context, const uint8_t *bytes, size_t length)
        {
            Capture &self = *static_cast<Capture *>(context);
            DWORD written = 0;
            if (!WriteFile(self.file, bytes, static_cast<DWORD>(length), &written, nullptr))
            {
                self.error = GetLastError();
                return false;
            }
            if (written != length)
            {
                self.error = ERROR_WRITE_FAULT;
                return false;
            }
            return true;
        }

        static void close(void *context)
        {
            Capture &self = *static_cast<Capture *>(context);
            if (self.file != INVALID_HANDLE_VALUE)
            {
                if (!CloseHandle(self.file))
                    self.error = GetLastError();
                self.file = INVALID_HANDLE_VALUE;
            }
        }
    };

    bool capturedRun(uint32_t pc, uint8_t *data, uint32_t dataSize,
                     uint32_t top, PS2Memory *memory, GS &gs)
    {
        static Capture capture;
        // Diagnostic calls can arrive from a VIF worker. Never block/re-enter
        // the recorder: skip observation when it is busy, still run the game.
        // Ordinals count recognised draws observed while this guard is held.
        if (!capture.busy.test_and_set(std::memory_order_acquire))
        {
            if (!capture.recorder.stopped())
            {
                const xbox_vu_capture::Sink sink{&capture, &Capture::open, &Capture::write, &Capture::close};
                const auto result = capture.recorder.observe(pc, data, dataSize, top, GetTickCount(), sink);
                if (result == xbox_vu_capture::Result::Failed ||
                    (result == xbox_vu_capture::Result::Complete && capture.error != 0u))
                    std::fprintf(stderr, "[TS:vu-capture] stopped error=%lu records=%u output=%s\n",
                                 static_cast<unsigned long>(capture.error), capture.recorder.records(), capture.path);
                else if (result == xbox_vu_capture::Result::Complete)
                    std::fprintf(stderr, "[TS:vu-capture] complete records=%u output=%s\n",
                                 capture.recorder.records(), capture.path);
            }
            capture.busy.clear(std::memory_order_release);
        }
        // Capture precedes every game-side mutation. Do not alter arguments,
        // swallow the original return value, or call the program twice.
        return g_original(pc, data, dataSize, top, memory, gs);
    }
}

void xboxRegisterVu1NativeProgram(const Vu1NativeProgram &program)
{
    if (program.hash != xbox_vu_capture::kProgramHash || !program.run || g_original ||
        program.run == &capturedRun)
    {
        registerVu1NativeProgram(program);
        return;
    }
    g_original = program.run;
    Vu1NativeProgram observed = program;
    observed.run = &capturedRun;
    registerVu1NativeProgram(observed);
}

#endif
