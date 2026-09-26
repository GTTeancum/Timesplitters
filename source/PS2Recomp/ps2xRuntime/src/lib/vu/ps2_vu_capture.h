#pragma once

#include "runtime/ps2_vu1.h"
#include <algorithm>
#include <chrono>
#include <cstdlib>
#include <fstream>
#include <iostream>

// Local diagnostic format, versioned and tied to this host's VU1State layout.
// Records inputs only. Replay must execute the real interpreter and compare
// resulting registers, VU data and emitted GIF packets between implementations.
struct VuCaptureHeader
{
    uint32_t magic = 0x31554356u;
    uint32_t stateBytes = sizeof(VU1State);
    uint32_t codeSize, dataSize, startPC, top, itop, maxCycles;
};

class VuProfileScope
{
public:
    VuProfileScope(const VU1State &state, uint64_t cycle, bool vu1, bool resume)
        : m_state(state), m_cycle(cycle), m_resume(resume)
    {
        static const bool requested = std::getenv("TS_PROFILE_VU") != nullptr;
        m_enabled = requested && vu1;
        if (m_enabled) m_start = std::chrono::steady_clock::now();
    }
    ~VuProfileScope()
    {
        if (!m_enabled) return;
        const auto now = std::chrono::steady_clock::now();
        struct Counters {
            std::chrono::steady_clock::time_point start = std::chrono::steady_clock::now();
            uint64_t calls[2]{}, cycles[2]{};
            double ms[2]{};
        };
        static thread_local Counters counters;
        const unsigned kind = m_resume ? 1u : 0u;
        ++counters.calls[kind];
        counters.cycles[kind] += m_state.cycles - m_cycle;
        counters.ms[kind] += std::chrono::duration<double, std::milli>(now - m_start).count();
        const double window = std::chrono::duration<double>(now - counters.start).count();
        if (window >= 1.0)
        {
            std::cerr << "[TS:vu-work] window_s=" << window
                      << " execute_calls=" << counters.calls[0] << " execute_cycles=" << counters.cycles[0]
                      << " execute_inclusive_ms=" << counters.ms[0]
                      << " resume_calls=" << counters.calls[1] << " resume_cycles=" << counters.cycles[1]
                      << " resume_inclusive_ms=" << counters.ms[1] << '\n';
            counters = {};
        }
    }
private:
    const VU1State &m_state;
    uint64_t m_cycle;
    bool m_resume, m_enabled;
    std::chrono::steady_clock::time_point m_start{};
};

inline void captureVuInput(const VU1State &state, const uint8_t *code, uint32_t codeSize,
                           const uint8_t *data, uint32_t dataSize, uint32_t startPC,
                           uint32_t top, uint32_t itop, uint32_t maxCycles)
{
    static const char *path = std::getenv("TS_VU_CAPTURE_FILE");
    if (!path || !*path) return;
    static const auto start = std::chrono::steady_clock::now();
    static const double after = [] {
        const char *value = std::getenv("TS_VU_CAPTURE_AFTER");
        return value ? std::max(0.0, std::atof(value)) : 130.0;
    }();
    static const unsigned limit = [] {
        const char *value = std::getenv("TS_VU_CAPTURE_LIMIT");
        return value ? std::clamp(static_cast<unsigned>(std::atoi(value)), 1u, 8192u) : 128u;
    }();
    static unsigned captured = 0;
    if (captured >= limit || codeSize > 16384 || dataSize > 16384 || !code || !data) return;
    if (std::chrono::duration<double>(std::chrono::steady_clock::now() - start).count() < after) return;
    static std::ofstream out(path, std::ios::binary | std::ios::trunc);
    if (!out) { captured = limit; std::cerr << "[TS:vu-capture] open failed\n"; return; }
    const VuCaptureHeader header{0x31554356u, sizeof(VU1State), codeSize, dataSize, startPC, top, itop, maxCycles};
    out.write(reinterpret_cast<const char *>(&header), sizeof(header));
    out.write(reinterpret_cast<const char *>(&state), sizeof(state));
    out.write(reinterpret_cast<const char *>(code), codeSize);
    out.write(reinterpret_cast<const char *>(data), dataSize);
    ++captured;
    if (captured == limit) { out.flush(); std::cerr << "[TS:vu-capture] inputs=" << limit << " complete=" << bool(out) << '\n'; }
}
