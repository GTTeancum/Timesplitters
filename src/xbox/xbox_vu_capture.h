#pragma once
// Diagnostic inputs for the native TimeSplitters VU1 program. This format
// records data RAM before the program runs; it is not an interpreter replay
// (the native callback has neither VU1State nor a copy of microcode).
#include <cstddef>
#include <cstdint>

namespace xbox_vu_capture
{
    constexpr uint32_t kHeaderBytes = 48u;
    constexpr uint32_t kDataBytes = 16384u;
    constexpr uint32_t kRecordBytes = kHeaderBytes + kDataBytes;
    constexpr uint64_t kProgramHash = 0x38ae1e855cd83deeull;

    inline int drawIndex(uint32_t pc)
    {
        switch (pc & 0x3fffu) // the native runInner/layoutFor effective PC
        {
        case 0x0000: return 0; // Plain
        case 0x0d20: return 1; // EnvMap
        case 0x1ae0: return 2; // Lit
        case 0x3520: return 3; // Lit, near-plane variant
        case 0x2800: return 4; // Skinned
        default: return -1;   // constants, packet forwarding, unknown entry
        }
    }

    inline void put32(uint8_t *out, uint32_t value)
    {
        for (unsigned i = 0; i < 4; ++i)
            out[i] = static_cast<uint8_t>(value >> (i * 8u));
    }

    inline void put64(uint8_t *out, uint64_t value)
    {
        put32(out, static_cast<uint32_t>(value));
        put32(out + 4, static_cast<uint32_t>(value >> 32));
    }

    inline void header(uint8_t out[kHeaderBytes], uint32_t pc, uint32_t top, uint64_t ordinal)
    {
        const uint8_t magic[8] = {'T', 'S', 'V', 'U', 'C', 'A', 'P', 0};
        for (unsigned i = 0; i < 8; ++i)
            out[i] = magic[i];
        put32(out + 8, 1u);
        put32(out + 12, kRecordBytes);
        put32(out + 16, kDataBytes);
        put32(out + 20, pc);
        // runInner normalises TOP the same way. The callback itself still
        // receives the original, unmodified argument.
        put32(out + 24, top & 1023u);
        put32(out + 28, 0u);
        put64(out + 32, kProgramHash);
        put64(out + 40, ordinal);
    }

    struct Settings
    {
        uint32_t delayMs, stride, limit;
    };

    // A sink must not throw. A false write means the output may have an
    // incomplete tail; the recorder closes it and never retries that run.
    struct Sink
    {
        void *context;
        bool (*open)(void *);
        bool (*write)(void *, const uint8_t *, size_t);
        void (*close)(void *);
    };

    enum class Result { Skipped, Recorded, Complete, Failed };

    // Allocation-free recorder. The adapter serialises calls; no pointer to
    // borrowed VU RAM survives observe(). Per-PC sampling captures the first
    // eligible occurrence of each draw entry, then every `stride` occurrences
    // of that entry, rather than favouring one position in a periodic frame.
    class Recorder
    {
    public:
        explicit Recorder(Settings settings) : m_settings(settings)
        {
            m_stopped = settings.stride == 0u || settings.limit == 0u ||
                        settings.limit > 4096u || settings.delayMs > 0x7fffffffu;
        }

        bool stopped() const { return m_stopped; }
        uint32_t records() const { return m_records; }

        Result observe(uint32_t pc, const uint8_t *data, uint32_t dataSize,
                       uint32_t top, uint32_t nowMs, const Sink &sink)
        {
            if (m_stopped)
                return Result::Skipped;
            const int entry = drawIndex(pc);
            if (entry < 0)
                return Result::Skipped;
            ++m_ordinal;
            if (!m_started)
            {
                m_started = true;
                m_startMs = nowMs;
            }
            // Unsigned subtraction also handles GetTickCount wrapping.
            if (static_cast<uint32_t>(nowMs - m_startMs) < m_settings.delayMs ||
                !data || dataSize != kDataBytes)
                return Result::Skipped;
            uint32_t &remaining = m_remaining[entry];
            if (remaining != 0u)
            {
                --remaining;
                return Result::Skipped;
            }
            remaining = m_settings.stride - 1u;
            if (!m_open)
            {
                if (!sink.open || !sink.write || !sink.close || !sink.open(sink.context))
                {
                    m_stopped = true;
                    return Result::Failed;
                }
                m_open = true;
            }
            uint8_t bytes[kHeaderBytes];
            header(bytes, pc, top, m_ordinal);
            if (!sink.write(sink.context, bytes, sizeof(bytes)) ||
                !sink.write(sink.context, data, dataSize))
            {
                sink.close(sink.context);
                m_open = false;
                m_stopped = true;
                return Result::Failed;
            }
            ++m_records;
            if (m_records == m_settings.limit)
            {
                sink.close(sink.context);
                m_open = false;
                m_stopped = true;
                return Result::Complete;
            }
            return Result::Recorded;
        }

    private:
        Settings m_settings;
        uint64_t m_ordinal = 0;
        uint32_t m_startMs = 0, m_records = 0, m_remaining[5]{};
        bool m_started = false, m_open = false, m_stopped = false;
    };
}

struct Vu1NativeProgram;
// Only vu1_native_ts.obj sees the registration-name macro. This adapter
// includes the real declaration and forwards to the unrenamed registry.
void xboxRegisterVu1NativeProgram(const Vu1NativeProgram &program);
