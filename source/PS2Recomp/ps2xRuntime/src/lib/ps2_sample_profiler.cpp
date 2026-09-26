#include "runtime/ps2_sample_profiler.h"

#if defined(_WIN32)
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <dbghelp.h>
#include <timeapi.h>
#include <algorithm>
#include <atomic>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

namespace ps2_sample_profiler
{
    namespace
    {
        constexpr int kMaxDepth = 48;

        struct Sample
        {
            DWORD64 frames[kMaxDepth];
            int depth;
        };

        HANDLE s_target = nullptr;
        std::thread s_sampler;
        std::atomic<bool> s_running{false};
        std::vector<Sample> s_samples;

        int walk(CONTEXT context, DWORD64 *frames)
        {
            int depth = 0;
            while (depth < kMaxDepth && context.Rip != 0)
            {
                frames[depth++] = context.Rip;
                DWORD64 imageBase = 0;
                PRUNTIME_FUNCTION function = RtlLookupFunctionEntry(context.Rip, &imageBase, nullptr);
                if (!function)
                {
                    // Leaf function: the return address is on top of the stack.
                    context.Rip = *reinterpret_cast<DWORD64 *>(context.Rsp);
                    context.Rsp += 8;
                    continue;
                }
                PVOID handlerData = nullptr;
                DWORD64 establisherFrame = 0;
                RtlVirtualUnwind(UNW_FLAG_NHANDLER, imageBase, context.Rip, function, &context,
                                 &handlerData, &establisherFrame, nullptr);
            }
            return depth;
        }

        void sampleLoop(unsigned rate, unsigned delaySeconds)
        {
            timeBeginPeriod(1);
            const ULONGLONG begin = GetTickCount64() + delaySeconds * 1000ull;
            while (s_running.load(std::memory_order_relaxed) && GetTickCount64() < begin)
                Sleep(50);
            const DWORD intervalMs = std::max<DWORD>(1u, 1000u / rate);
            while (s_running.load(std::memory_order_relaxed))
            {
                Sleep(intervalMs);
                if (SuspendThread(s_target) == static_cast<DWORD>(-1))
                    break;
                CONTEXT context{};
                context.ContextFlags = CONTEXT_FULL;
                if (GetThreadContext(s_target, &context))
                {
                    Sample sample{};
                    sample.depth = walk(context, sample.frames);
                    s_samples.push_back(sample);
                }
                ResumeThread(s_target);
            }
            timeEndPeriod(1);
        }

        std::string symbolName(HANDLE process, DWORD64 address)
        {
            alignas(SYMBOL_INFO) char buffer[sizeof(SYMBOL_INFO) + 512]{};
            auto *symbol = reinterpret_cast<SYMBOL_INFO *>(buffer);
            symbol->SizeOfStruct = sizeof(SYMBOL_INFO);
            symbol->MaxNameLen = 511;
            DWORD64 displacement = 0;
            if (SymFromAddr(process, address, &displacement, symbol))
                return symbol->Name;
            std::ostringstream unknown;
            unknown << "?0x" << std::hex << address;
            return unknown.str();
        }

        void report()
        {
            if (s_samples.empty())
                return;
            HANDLE process = GetCurrentProcess();
            SymSetOptions(SYMOPT_UNDNAME | SYMOPT_DEFERRED_LOADS);
            SymInitialize(process, nullptr, TRUE);

            std::unordered_map<DWORD64, std::string> names;
            auto nameOf = [&](DWORD64 address) -> const std::string &
            {
                auto it = names.find(address);
                if (it != names.end())
                    return it->second;
                return names.emplace(address, symbolName(process, address)).first->second;
            };

            std::unordered_map<std::string, size_t> self, inclusive;
            std::unordered_set<std::string> seen;
            for (const Sample &sample : s_samples)
            {
                if (sample.depth == 0)
                    continue;
                ++self[nameOf(sample.frames[0])];
                seen.clear();
                for (int i = 0; i < sample.depth; ++i)
                {
                    const std::string &name = nameOf(sample.frames[i]);
                    if (seen.insert(name).second)
                        ++inclusive[name];
                }
            }

            auto print = [&](const char *title, const std::unordered_map<std::string, size_t> &table, size_t limit)
            {
                std::vector<std::pair<std::string, size_t>> rows(table.begin(), table.end());
                std::sort(rows.begin(), rows.end(), [](const auto &a, const auto &b)
                          { return a.second > b.second; });
                std::ostringstream out;
                out << "[TS:sample-profile] " << title << " samples=" << s_samples.size() << '\n';
                for (size_t i = 0; i < rows.size() && i < limit; ++i)
                {
                    char pct[16];
                    std::snprintf(pct, sizeof(pct), "%6.2f%%", 100.0 * rows[i].second / s_samples.size());
                    out << "  " << pct << "  " << rows[i].first << '\n';
                }
                std::cerr << out.str();
            };
            print("self", self, 60);
            print("inclusive", inclusive, 80);
            // TS_SAMPLE_PROFILE_CALLERS=<function>: who calls it (by frame).
            if (const char *target = std::getenv("TS_SAMPLE_PROFILE_CALLERS"); target && *target)
            {
                std::unordered_map<std::string, size_t> callers;
                for (const Sample &sample : s_samples)
                {
                    for (int i = 0; i + 1 < sample.depth; ++i)
                    {
                        if (nameOf(sample.frames[i]) == target)
                        {
                            ++callers[nameOf(sample.frames[i + 1])];
                            break;
                        }
                    }
                }
                print("callers", callers, 20);
            }
            // TS_SAMPLE_PROFILE_LINES=1: hottest source lines of sampled code.
            if (const char *lines = std::getenv("TS_SAMPLE_PROFILE_LINES"); lines && *lines == '1')
            {
                std::unordered_map<std::string, size_t> hits;
                for (const Sample &sample : s_samples)
                {
                    if (sample.depth == 0)
                        continue;
                    IMAGEHLP_LINE64 line{};
                    line.SizeOfStruct = sizeof(line);
                    DWORD displacement = 0;
                    std::string key;
                    if (SymGetLineFromAddr64(process, sample.frames[0], &displacement, &line))
                    {
                        std::string file = line.FileName;
                        const size_t slash = file.find_last_of("\\/");
                        key = file.substr(slash == std::string::npos ? 0 : slash + 1) + ":" + std::to_string(line.LineNumber);
                    }
                    else
                        key = nameOf(sample.frames[0]);
                    ++hits[key];
                }
                print("lines", hits, 60);
            }
            SymCleanup(process);
        }
    }

    void start(std::thread &target)
    {
        const char *text = std::getenv("TS_SAMPLE_PROFILE");
        if (!text || !*text)
            return;
        if (s_running.load())
            return; // already following another thread
        const unsigned rate = std::clamp<unsigned>(static_cast<unsigned>(std::atoi(text)), 1u, 1000u);
        if (!DuplicateHandle(GetCurrentProcess(), target.native_handle(), GetCurrentProcess(), &s_target,
                             THREAD_SUSPEND_RESUME | THREAD_GET_CONTEXT | THREAD_QUERY_INFORMATION, FALSE, 0))
            return;
        s_samples.reserve(static_cast<size_t>(rate) * 600u);
        s_running.store(true);
        // TS_SAMPLE_PROFILE_DELAY skips menus/loading before sampling starts.
        const char *delayText = std::getenv("TS_SAMPLE_PROFILE_DELAY");
        const unsigned delay = delayText ? static_cast<unsigned>(std::atoi(delayText)) : 0u;
        s_sampler = std::thread(sampleLoop, rate, delay);
    }

    void stop()
    {
        if (!s_running.exchange(false))
            return;
        s_sampler.join();
        CloseHandle(s_target);
        s_target = nullptr;
        report();
    }
}

#else

namespace ps2_sample_profiler
{
    void start(std::thread &) {}
    void stop() {}
}

#endif
